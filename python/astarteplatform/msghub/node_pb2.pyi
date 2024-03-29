from astarteplatform.msghub import interface_pb2 as _interface_pb2
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from typing import ClassVar as _ClassVar, Mapping as _Mapping, Optional as _Optional, Union as _Union

DESCRIPTOR: _descriptor.FileDescriptor

class Node(_message.Message):
    __slots__ = ("uuid", "interface_jsons")
    UUID_FIELD_NUMBER: _ClassVar[int]
    INTERFACE_JSONS_FIELD_NUMBER: _ClassVar[int]
    uuid: str
    interface_jsons: _interface_pb2.InterfacesJson
    def __init__(self, uuid: _Optional[str] = ..., interface_jsons: _Optional[_Union[_interface_pb2.InterfacesJson, _Mapping]] = ...) -> None: ...
