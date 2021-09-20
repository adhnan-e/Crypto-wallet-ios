class GetTransactionByHashJsonRpc: JsonRpc<RpcTransaction?> {

    init(transactionHash: Data) {
        super.init(
                method: "eth_getTransactionByHash",
                params: [transactionHash.toHexString()]
        )
    }

    override func parse(result: Any?) throws -> RpcTransaction? {
        try result.map { try RpcTransaction(JSONObject: $0) }
    }

}
