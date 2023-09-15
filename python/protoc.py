# This file is part of Astarte.
#
# Copyright 2023 SECO Mind Srl
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# SPDX-License-Identifier: Apache-2.0

"""
Utility script to be used for compilation of .proto files.
"""

from pathlib import Path
import subprocess
from termcolor import cprint


def build_protobuf(proto_root_fld: Path, out_fld: Path):
    """
    Run grpc_tools.protoc over the .proto files contained in this repo.
    """
    src_fld = proto_root_fld.joinpath("astarteplatform").joinpath("msghub")
    srcs = [src_fld.joinpath(f) for f in src_fld.glob("*.proto")]
    for src in srcs:
        cmd = [
            "python -m grpc_tools.protoc",
            f'-I="{proto_root_fld}"',
            f'--python_out="{out_fld}"',
            f'--pyi_out="{out_fld}"',
            f'--grpc_python_out="{out_fld}"',
            f"{src}",
        ]
        subprocess.run(" ".join(cmd), shell=True, check=True)


def run_protoc(proto_root_fld: Path, out_fld: Path):
    """
    Run system protoc over the .proto files contained in this repo.
    """
    result = subprocess.run("protoc --version", capture_output=True, shell=True, check=True)
    result.check_returncode()
    cprint(f"Installed protoc: {result.stdout.decode('utf-8')}", "green")

    src_fld = proto_root_fld.joinpath("astarteplatform").joinpath("msghub")
    srcs = [src_fld.joinpath(f) for f in src_fld.glob("*.proto")]
    for src in srcs:
        cmd = [
            "protoc --plugin=protoc-gen-grpc_python=`which protoc-gen-grpclib_python`",
            f'-I="{proto_root_fld}"',
            f'--python_out="{out_fld}"',
            f'--pyi_out="{out_fld}"',
            f'--grpc_python_out="{out_fld}"',
            f"{src}",
        ]
        cprint(" ".join(cmd), "cyan")
        subprocess.run(" ".join(cmd), shell=True, check=True)
        print()


if __name__ == "__main__":
    python_fld = Path(__file__).parent
    run_protoc(proto_root_fld=python_fld.parent.joinpath("proto"), out_fld=python_fld)
