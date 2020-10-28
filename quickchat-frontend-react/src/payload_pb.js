/*eslint-disable*/
// source: payload.proto
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

var internal_message_pb = require('./internal_message_pb.js');
goog.object.extend(proto, internal_message_pb);
goog.exportSymbol('proto.msg.InMessage', null, global);
goog.exportSymbol('proto.msg.InMessage.TypeCase', null, global);
goog.exportSymbol('proto.msg.OutMessage', null, global);
goog.exportSymbol('proto.msg.OutMessage.TypeCase', null, global);
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
proto.msg.InMessage = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, proto.msg.InMessage.oneofGroups_);
};
goog.inherits(proto.msg.InMessage, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.msg.InMessage.displayName = 'proto.msg.InMessage';
}
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
proto.msg.OutMessage = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, proto.msg.OutMessage.oneofGroups_);
};
goog.inherits(proto.msg.OutMessage, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.msg.OutMessage.displayName = 'proto.msg.OutMessage';
}

/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.msg.InMessage.oneofGroups_ = [[1,2,3,4,6]];

/**
 * @enum {number}
 */
proto.msg.InMessage.TypeCase = {
  TYPE_NOT_SET: 0,
  CHAT: 1,
  SEEN: 2,
  STATUS: 3,
  TYPING: 4,
  NOTIFICATION: 6
};

/**
 * @return {proto.msg.InMessage.TypeCase}
 */
proto.msg.InMessage.prototype.getTypeCase = function() {
  return /** @type {proto.msg.InMessage.TypeCase} */(jspb.Message.computeOneofCase(this, proto.msg.InMessage.oneofGroups_[0]));
};



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
proto.msg.InMessage.prototype.toObject = function(opt_includeInstance) {
  return proto.msg.InMessage.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.msg.InMessage} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.msg.InMessage.toObject = function(includeInstance, msg) {
  var f, obj = {
    chat: (f = msg.getChat()) && internal_message_pb.Chat.toObject(includeInstance, f),
    seen: (f = msg.getSeen()) && internal_message_pb.Seen.toObject(includeInstance, f),
    status: (f = msg.getStatus()) && internal_message_pb.Status.toObject(includeInstance, f),
    typing: (f = msg.getTyping()) && internal_message_pb.Typing.toObject(includeInstance, f),
    notification: (f = msg.getNotification()) && internal_message_pb.Notification.toObject(includeInstance, f)
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
 * @return {!proto.msg.InMessage}
 */
proto.msg.InMessage.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.msg.InMessage;
  return proto.msg.InMessage.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.msg.InMessage} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.msg.InMessage}
 */
proto.msg.InMessage.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new internal_message_pb.Chat;
      reader.readMessage(value,internal_message_pb.Chat.deserializeBinaryFromReader);
      msg.setChat(value);
      break;
    case 2:
      var value = new internal_message_pb.Seen;
      reader.readMessage(value,internal_message_pb.Seen.deserializeBinaryFromReader);
      msg.setSeen(value);
      break;
    case 3:
      var value = new internal_message_pb.Status;
      reader.readMessage(value,internal_message_pb.Status.deserializeBinaryFromReader);
      msg.setStatus(value);
      break;
    case 4:
      var value = new internal_message_pb.Typing;
      reader.readMessage(value,internal_message_pb.Typing.deserializeBinaryFromReader);
      msg.setTyping(value);
      break;
    case 6:
      var value = new internal_message_pb.Notification;
      reader.readMessage(value,internal_message_pb.Notification.deserializeBinaryFromReader);
      msg.setNotification(value);
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
proto.msg.InMessage.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.msg.InMessage.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.msg.InMessage} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.msg.InMessage.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getChat();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      internal_message_pb.Chat.serializeBinaryToWriter
    );
  }
  f = message.getSeen();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      internal_message_pb.Seen.serializeBinaryToWriter
    );
  }
  f = message.getStatus();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      internal_message_pb.Status.serializeBinaryToWriter
    );
  }
  f = message.getTyping();
  if (f != null) {
    writer.writeMessage(
      4,
      f,
      internal_message_pb.Typing.serializeBinaryToWriter
    );
  }
  f = message.getNotification();
  if (f != null) {
    writer.writeMessage(
      6,
      f,
      internal_message_pb.Notification.serializeBinaryToWriter
    );
  }
};


/**
 * optional Chat chat = 1;
 * @return {?proto.msg.Chat}
 */
proto.msg.InMessage.prototype.getChat = function() {
  return /** @type{?proto.msg.Chat} */ (
    jspb.Message.getWrapperField(this, internal_message_pb.Chat, 1));
};


/**
 * @param {?proto.msg.Chat|undefined} value
 * @return {!proto.msg.InMessage} returns this
*/
proto.msg.InMessage.prototype.setChat = function(value) {
  return jspb.Message.setOneofWrapperField(this, 1, proto.msg.InMessage.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.msg.InMessage} returns this
 */
proto.msg.InMessage.prototype.clearChat = function() {
  return this.setChat(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.msg.InMessage.prototype.hasChat = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional Seen seen = 2;
 * @return {?proto.msg.Seen}
 */
proto.msg.InMessage.prototype.getSeen = function() {
  return /** @type{?proto.msg.Seen} */ (
    jspb.Message.getWrapperField(this, internal_message_pb.Seen, 2));
};


/**
 * @param {?proto.msg.Seen|undefined} value
 * @return {!proto.msg.InMessage} returns this
*/
proto.msg.InMessage.prototype.setSeen = function(value) {
  return jspb.Message.setOneofWrapperField(this, 2, proto.msg.InMessage.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.msg.InMessage} returns this
 */
proto.msg.InMessage.prototype.clearSeen = function() {
  return this.setSeen(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.msg.InMessage.prototype.hasSeen = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional Status status = 3;
 * @return {?proto.msg.Status}
 */
proto.msg.InMessage.prototype.getStatus = function() {
  return /** @type{?proto.msg.Status} */ (
    jspb.Message.getWrapperField(this, internal_message_pb.Status, 3));
};


/**
 * @param {?proto.msg.Status|undefined} value
 * @return {!proto.msg.InMessage} returns this
*/
proto.msg.InMessage.prototype.setStatus = function(value) {
  return jspb.Message.setOneofWrapperField(this, 3, proto.msg.InMessage.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.msg.InMessage} returns this
 */
proto.msg.InMessage.prototype.clearStatus = function() {
  return this.setStatus(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.msg.InMessage.prototype.hasStatus = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * optional Typing typing = 4;
 * @return {?proto.msg.Typing}
 */
proto.msg.InMessage.prototype.getTyping = function() {
  return /** @type{?proto.msg.Typing} */ (
    jspb.Message.getWrapperField(this, internal_message_pb.Typing, 4));
};


/**
 * @param {?proto.msg.Typing|undefined} value
 * @return {!proto.msg.InMessage} returns this
*/
proto.msg.InMessage.prototype.setTyping = function(value) {
  return jspb.Message.setOneofWrapperField(this, 4, proto.msg.InMessage.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.msg.InMessage} returns this
 */
proto.msg.InMessage.prototype.clearTyping = function() {
  return this.setTyping(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.msg.InMessage.prototype.hasTyping = function() {
  return jspb.Message.getField(this, 4) != null;
};


/**
 * optional Notification notification = 6;
 * @return {?proto.msg.Notification}
 */
proto.msg.InMessage.prototype.getNotification = function() {
  return /** @type{?proto.msg.Notification} */ (
    jspb.Message.getWrapperField(this, internal_message_pb.Notification, 6));
};


/**
 * @param {?proto.msg.Notification|undefined} value
 * @return {!proto.msg.InMessage} returns this
*/
proto.msg.InMessage.prototype.setNotification = function(value) {
  return jspb.Message.setOneofWrapperField(this, 6, proto.msg.InMessage.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.msg.InMessage} returns this
 */
proto.msg.InMessage.prototype.clearNotification = function() {
  return this.setNotification(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.msg.InMessage.prototype.hasNotification = function() {
  return jspb.Message.getField(this, 6) != null;
};



/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.msg.OutMessage.oneofGroups_ = [[1,2,3,4]];

/**
 * @enum {number}
 */
proto.msg.OutMessage.TypeCase = {
  TYPE_NOT_SET: 0,
  CHAT: 1,
  SEEN: 2,
  STATUS: 3,
  TYPING: 4
};

/**
 * @return {proto.msg.OutMessage.TypeCase}
 */
proto.msg.OutMessage.prototype.getTypeCase = function() {
  return /** @type {proto.msg.OutMessage.TypeCase} */(jspb.Message.computeOneofCase(this, proto.msg.OutMessage.oneofGroups_[0]));
};



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
proto.msg.OutMessage.prototype.toObject = function(opt_includeInstance) {
  return proto.msg.OutMessage.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.msg.OutMessage} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.msg.OutMessage.toObject = function(includeInstance, msg) {
  var f, obj = {
    chat: (f = msg.getChat()) && internal_message_pb.Chat.toObject(includeInstance, f),
    seen: (f = msg.getSeen()) && internal_message_pb.Seen.toObject(includeInstance, f),
    status: (f = msg.getStatus()) && internal_message_pb.Status.toObject(includeInstance, f),
    typing: (f = msg.getTyping()) && internal_message_pb.Typing.toObject(includeInstance, f)
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
 * @return {!proto.msg.OutMessage}
 */
proto.msg.OutMessage.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.msg.OutMessage;
  return proto.msg.OutMessage.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.msg.OutMessage} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.msg.OutMessage}
 */
proto.msg.OutMessage.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new internal_message_pb.Chat;
      reader.readMessage(value,internal_message_pb.Chat.deserializeBinaryFromReader);
      msg.setChat(value);
      break;
    case 2:
      var value = new internal_message_pb.Seen;
      reader.readMessage(value,internal_message_pb.Seen.deserializeBinaryFromReader);
      msg.setSeen(value);
      break;
    case 3:
      var value = new internal_message_pb.Status;
      reader.readMessage(value,internal_message_pb.Status.deserializeBinaryFromReader);
      msg.setStatus(value);
      break;
    case 4:
      var value = new internal_message_pb.Typing;
      reader.readMessage(value,internal_message_pb.Typing.deserializeBinaryFromReader);
      msg.setTyping(value);
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
proto.msg.OutMessage.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.msg.OutMessage.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.msg.OutMessage} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.msg.OutMessage.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getChat();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      internal_message_pb.Chat.serializeBinaryToWriter
    );
  }
  f = message.getSeen();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      internal_message_pb.Seen.serializeBinaryToWriter
    );
  }
  f = message.getStatus();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      internal_message_pb.Status.serializeBinaryToWriter
    );
  }
  f = message.getTyping();
  if (f != null) {
    writer.writeMessage(
      4,
      f,
      internal_message_pb.Typing.serializeBinaryToWriter
    );
  }
};


/**
 * optional Chat chat = 1;
 * @return {?proto.msg.Chat}
 */
proto.msg.OutMessage.prototype.getChat = function() {
  return /** @type{?proto.msg.Chat} */ (
    jspb.Message.getWrapperField(this, internal_message_pb.Chat, 1));
};


/**
 * @param {?proto.msg.Chat|undefined} value
 * @return {!proto.msg.OutMessage} returns this
*/
proto.msg.OutMessage.prototype.setChat = function(value) {
  return jspb.Message.setOneofWrapperField(this, 1, proto.msg.OutMessage.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.msg.OutMessage} returns this
 */
proto.msg.OutMessage.prototype.clearChat = function() {
  return this.setChat(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.msg.OutMessage.prototype.hasChat = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional Seen seen = 2;
 * @return {?proto.msg.Seen}
 */
proto.msg.OutMessage.prototype.getSeen = function() {
  return /** @type{?proto.msg.Seen} */ (
    jspb.Message.getWrapperField(this, internal_message_pb.Seen, 2));
};


/**
 * @param {?proto.msg.Seen|undefined} value
 * @return {!proto.msg.OutMessage} returns this
*/
proto.msg.OutMessage.prototype.setSeen = function(value) {
  return jspb.Message.setOneofWrapperField(this, 2, proto.msg.OutMessage.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.msg.OutMessage} returns this
 */
proto.msg.OutMessage.prototype.clearSeen = function() {
  return this.setSeen(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.msg.OutMessage.prototype.hasSeen = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional Status status = 3;
 * @return {?proto.msg.Status}
 */
proto.msg.OutMessage.prototype.getStatus = function() {
  return /** @type{?proto.msg.Status} */ (
    jspb.Message.getWrapperField(this, internal_message_pb.Status, 3));
};


/**
 * @param {?proto.msg.Status|undefined} value
 * @return {!proto.msg.OutMessage} returns this
*/
proto.msg.OutMessage.prototype.setStatus = function(value) {
  return jspb.Message.setOneofWrapperField(this, 3, proto.msg.OutMessage.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.msg.OutMessage} returns this
 */
proto.msg.OutMessage.prototype.clearStatus = function() {
  return this.setStatus(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.msg.OutMessage.prototype.hasStatus = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * optional Typing typing = 4;
 * @return {?proto.msg.Typing}
 */
proto.msg.OutMessage.prototype.getTyping = function() {
  return /** @type{?proto.msg.Typing} */ (
    jspb.Message.getWrapperField(this, internal_message_pb.Typing, 4));
};


/**
 * @param {?proto.msg.Typing|undefined} value
 * @return {!proto.msg.OutMessage} returns this
*/
proto.msg.OutMessage.prototype.setTyping = function(value) {
  return jspb.Message.setOneofWrapperField(this, 4, proto.msg.OutMessage.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.msg.OutMessage} returns this
 */
proto.msg.OutMessage.prototype.clearTyping = function() {
  return this.setTyping(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.msg.OutMessage.prototype.hasTyping = function() {
  return jspb.Message.getField(this, 4) != null;
};


goog.object.extend(exports, proto.msg);
