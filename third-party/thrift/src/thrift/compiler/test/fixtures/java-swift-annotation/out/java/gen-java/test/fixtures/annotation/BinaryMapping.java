/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.annotation;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="BinaryMapping", builder=BinaryMapping.Builder.class)
public final class BinaryMapping implements com.facebook.thrift.payload.ThriftSerializable {
    @ThriftConstructor
    public BinaryMapping(
        @com.facebook.swift.codec.ThriftField(value=3, name="binaryMap", requiredness=Requiredness.NONE) final Map<String, String> binaryMap,
        @com.facebook.swift.codec.ThriftField(value=4, name="regularBinary", requiredness=Requiredness.NONE) final Map<String, byte[]> regularBinary
    ) {
        this.binaryMap = binaryMap;
        this.regularBinary = regularBinary;
    }
    
    @ThriftConstructor
    protected BinaryMapping() {
      this.binaryMap = null;
      this.regularBinary = null;
    }
    
    public static class Builder {
        private Map<String, String> binaryMap = null;
        private Map<String, byte[]> regularBinary = null;
    
        @com.facebook.swift.codec.ThriftField(value=3, name="binaryMap", requiredness=Requiredness.NONE)
        public Builder setBinaryMap(Map<String, String> binaryMap) {
            this.binaryMap = binaryMap;
            return this;
        }
    
        public Map<String, String> getBinaryMap() { return binaryMap; }
    
            @com.facebook.swift.codec.ThriftField(value=4, name="regularBinary", requiredness=Requiredness.NONE)
        public Builder setRegularBinary(Map<String, byte[]> regularBinary) {
            this.regularBinary = regularBinary;
            return this;
        }
    
        public Map<String, byte[]> getRegularBinary() { return regularBinary; }
    
        public Builder() { }
        public Builder(BinaryMapping other) {
            this.binaryMap = other.binaryMap;
            this.regularBinary = other.regularBinary;
        }
    
        @ThriftConstructor
        public BinaryMapping build() {
            BinaryMapping result = new BinaryMapping (
                this.binaryMap,
                this.regularBinary
            );
            return result;
        }
    }
        
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("BinaryMapping");
    private final Map<String, String> binaryMap;
    public static final int _BINARYMAP = 3;
    private static final TField BINARY_MAP_FIELD_DESC = new TField("binaryMap", TType.MAP, (short)3);
        private final Map<String, byte[]> regularBinary;
    public static final int _REGULARBINARY = 4;
    private static final TField REGULAR_BINARY_FIELD_DESC = new TField("regularBinary", TType.MAP, (short)4);
    static {
      NAMES_TO_IDS.put("binaryMap", 3);
      THRIFT_NAMES_TO_IDS.put("binaryMap", 3);
      FIELD_METADATA.put(3, BINARY_MAP_FIELD_DESC);
      NAMES_TO_IDS.put("regularBinary", 4);
      THRIFT_NAMES_TO_IDS.put("regularBinary", 4);
      FIELD_METADATA.put(4, REGULAR_BINARY_FIELD_DESC);
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=3, name="binaryMap", requiredness=Requiredness.NONE)
    public Map<String, String> getBinaryMap() { return binaryMap; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=4, name="regularBinary", requiredness=Requiredness.NONE)
    public Map<String, byte[]> getRegularBinary() { return regularBinary; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("binaryMap", binaryMap);
        helper.add("regularBinary", regularBinary);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        BinaryMapping other = (BinaryMapping)o;
    
        return
            Objects.equals(binaryMap, other.binaryMap) &&
            Objects.equals(regularBinary, other.regularBinary) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            binaryMap,
            regularBinary
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<BinaryMapping> asReader() {
      return BinaryMapping::read0;
    }
    
    public static BinaryMapping read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(BinaryMapping.NAMES_TO_IDS, BinaryMapping.THRIFT_NAMES_TO_IDS, BinaryMapping.FIELD_METADATA);
      BinaryMapping.Builder builder = new BinaryMapping.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _BINARYMAP:
          if (__field.type == TType.MAP) {
            Map<String, String> binaryMap;
            {
            TMap _map = oprot.readMapBegin();
            binaryMap = new HashMap<String, String>(Math.max(0, _map.size));
            for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                
                String _key1 = oprot.readString();
                String _value1 = oprot.readString();
                binaryMap.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
            builder.setBinaryMap(binaryMap);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _REGULARBINARY:
          if (__field.type == TType.MAP) {
            Map<String, byte[]> regularBinary;
            {
            TMap _map = oprot.readMapBegin();
            regularBinary = new HashMap<String, byte[]>(Math.max(0, _map.size));
            for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                
                String _key1 = oprot.readString();
                byte[] _value1 = oprot.readBinary().array();
                regularBinary.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
            builder.setRegularBinary(regularBinary);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (binaryMap != null) {
        oprot.writeFieldBegin(BINARY_MAP_FIELD_DESC);
        Map<String, String> _iter0 = binaryMap;
        oprot.writeMapBegin(new TMap(TType.STRING, TType.STRING, _iter0.size()));
        for (Map.Entry<String, String> _iter1 : _iter0.entrySet()) {
          oprot.writeString(_iter1.getKey());
          oprot.writeString(_iter1.getValue());
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      if (regularBinary != null) {
        oprot.writeFieldBegin(REGULAR_BINARY_FIELD_DESC);
        Map<String, byte[]> _iter0 = regularBinary;
        oprot.writeMapBegin(new TMap(TType.STRING, TType.STRING, _iter0.size()));
        for (Map.Entry<String, byte[]> _iter1 : _iter0.entrySet()) {
          oprot.writeString(_iter1.getKey());
          oprot.writeBinary(java.nio.ByteBuffer.wrap(_iter1.getValue()));
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _BinaryMappingLazy {
        private static final BinaryMapping _DEFAULT = new BinaryMapping.Builder().build();
    }
    
    public static BinaryMapping defaultInstance() {
        return  _BinaryMappingLazy._DEFAULT;
    }
}