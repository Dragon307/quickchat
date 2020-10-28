/*eslint-disable*/
// source: history.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

var google_protobuf_timestamp_pb = require('google-protobuf/google/protobuf/timestamp_pb.js');
goog.object.extend(proto, google_protobuf_timestamp_pb);
goog.exportSymbol('proto.msg.History', null, global);
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.msg.History = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.msg.History, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.msg.History.displayName = 'proto.msg.History';
}



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.msg.History.prototype.toObject = function(opt_includeInstance) {
  return proto.msg.History.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.msg.History} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.msg.History.toObject = function(includeInstance, msg) {
  var f, obj = {
    transactionId: jspb.Message.getFieldWithDefault(msg, 1, "0"),
    userId: jspb.Message.getFieldWithDefault(msg, 2, "0"),
    requestId: jspb.Message.getFieldWithDefault(msg, 3, ""),
    type: jspb.Message.getFieldWithDefault(msg, 4, ""),
    toUser: jspb.Message.getFieldWithDefault(msg, 5, ""),
    amount: jspb.Message.getFieldWithDefault(msg, 6, "0"),
    status: jspb.Message.getFieldWithDefault(msg, 7, ""),
    message: jspb.Message.getFieldWithDefault(msg, 8, ""),
    createAt: (f = msg.getCreateAt()) && google_protobuf_timestamp_pb.Timestamp.toObject(includeInstance, f)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.msg.History}
 */
proto.msg.History.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.msg.History;
  return proto.msg.History.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.msg.History} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.msg.History}
 */
proto.msg.History.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readUint64String());
      msg.setTransactionId(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readUint64String());
      msg.setUserId(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setRequestId(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.setType(value);
      break;
    case 5:
      var value = /** @type {string} */ (reader.readString());
      msg.setToUser(value);
      break;
    case 6:
      var value = /** @type {string} */ (reader.readInt64String());
      msg.setAmount(value);
      break;
    case 7:
      var value = /** @type {string} */ (reader.readString());
      msg.setStatus(value);
      break;
    case 8:
      var value = /** @type {string} */ (reader.readString());
      msg.setMessage(value);
      break;
    case 9:
      var value = new google_protobuf_timestamp_pb.Timestamp;
      reader.readMessage(value,google_protobuf_timestamp_pb.Timestamp.deserializeBinaryFromReader);
      msg.setCreateAt(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.msg.History.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.msg.History.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.msg.History} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.msg.History.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getTransactionId();
  if (parseInt(f, 10) !== 0) {
    writer.writeUint64String(
      1,
      f
    );
  }
  f = message.getUserId();
  if (parseInt(f, 10) !== 0) {
    writer.writeUint64String(
      2,
      f
    );
  }
  f = message.getRequestId();
  if (f.length > 0) {
    writer.writeString(
      3,
      f
    );
  }
  f = message.getType();
  if (f.length > 0) {
    writer.writeString(
      4,
      f
    );
  }
  f = message.getToUser();
  if (f.length > 0) {
    writer.writeString(
      5,
      f
    );
  }
  f = message.getAmount();
  if (parseInt(f, 10) !== 0) {
    writer.writeInt64String(
      6,
      f
    );
  }
  f = message.getStatus();
  if (f.length > 0) {
    writer.writeString(
      7,
      f
    );
  }
  f = message.getMessage();
  if (f.length > 0) {
    writer.writeString(
      8,
      f
    );
  }
  f = message.getCreateAt();
  if (f != null) {
    writer.writeMessage(
      9,
      f,
      google_protobuf_timestamp_pb.Timestamp.serializeBinaryToWriter
    );
  }
};


/**
 * optional uint64 transaction_id = 1;
 * @return {string}
 */
proto.msg.History.prototype.getTransactionId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, "0"));
};


/**
 * @param {string} value
 * @return {!proto.msg.History} returns this
 */
proto.msg.History.prototype.setTransactionId = function(value) {
  return jspb.Message.setProto3StringIntField(this, 1, value);
};


/**
 * optional uint64 user_id = 2;
 * @return {string}
 */
proto.msg.History.prototype.getUserId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, "0"));
};


/**
 * @param {string} value
 * @return {!proto.msg.History} returns this
 */
proto.msg.History.prototype.setUserId = function(value) {
  return jspb.Message.setProto3StringIntField(this, 2, value);
};


/**
 * optional string request_id = 3;
 * @return {string}
 */
proto.msg.History.prototype.getRequestId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/**
 * @param {string} value
 * @return {!proto.msg.History} returns this
 */
proto.msg.History.prototype.setRequestId = function(value) {
  return jspb.Message.setProto3StringField(this, 3, value);
};


/**
 * optional string type = 4;
 * @return {string}
 */
proto.msg.History.prototype.getType = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/**
 * @param {string} value
 * @return {!proto.msg.History} returns this
 */
proto.msg.History.prototype.setType = function(value) {
  return jspb.Message.setProto3StringField(this, 4, value);
};


/**
 * optional string to_user = 5;
 * @return {string}
 */
proto.msg.History.prototype.getToUser = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 5, ""));
};


/**
 * @param {string} value
 * @return {!proto.msg.History} returns this
 */
proto.msg.History.prototype.setToUser = function(value) {
  return jspb.Message.setProto3StringField(this, 5, value);
};


/**
 * optional int64 amount = 6;
 * @return {string}
 */
proto.msg.History.prototype.getAmount = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 6, "0"));
};


/**
 * @param {string} value
 * @return {!proto.msg.History} returns this
 */
proto.msg.History.prototype.setAmount = function(value) {
  return jspb.Message.setProto3StringIntField(this, 6, value);
};


/**
 * optional string status = 7;
 * @return {string}
 */
proto.msg.History.prototype.getStatus = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 7, ""));
};


/**
 * @param {string} value
 * @return {!proto.msg.History} returns this
 */
proto.msg.History.prototype.setStatus = function(value) {
  return jspb.Message.setProto3StringField(this, 7, value);
};


/**
 * optional string message = 8;
 * @return {string}
 */
proto.msg.History.prototype.getMessage = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 8, ""));
};


/**
 * @param {string} value
 * @return {!proto.msg.History} returns this
 */
proto.msg.History.prototype.setMessage = function(value) {
  return jspb.Message.setProto3StringField(this, 8, value);
};


/**
 * optional google.protobuf.Timestamp create_at = 9;
 * @return {?proto.google.protobuf.Timestamp}
 */
proto.msg.History.prototype.getCreateAt = function() {
  return /** @type{?proto.google.protobuf.Timestamp} */ (
    jspb.Message.getWrapperField(this, google_protobuf_timestamp_pb.Timestamp, 9));
};


/**
 * @param {?proto.google.protobuf.Timestamp|undefined} value
 * @return {!proto.msg.History} returns this
*/
proto.msg.History.prototype.setCreateAt = function(value) {
  return jspb.Message.setWrapperField(this, 9, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.msg.History} returns this
 */
proto.msg.History.prototype.clearCreateAt = function() {
  return this.setCreateAt(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.msg.History.prototype.hasCreateAt = function() {
  return jspb.Message.getField(this, 9) != null;
};


goog.object.extend(exports, proto.msg);