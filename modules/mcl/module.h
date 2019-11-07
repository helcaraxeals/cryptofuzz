#pragma once

#include <cryptofuzz/components.h>
#include <cryptofuzz/module.h>
#include <optional>

namespace cryptofuzz {
namespace module {

class mcl : public Module {
    public:
        mcl(void);
        /*
        std::optional<component::ECC_PublicKey> OpECC_PrivateToPublic(operation::ECC_PrivateToPublic& op);
        std::optional<component::ECDSA_Signature> OpECDSA_Sign(operation::ECDSA_Sign& op);
        std::optional<bool> OpECDSA_Verify(operation::ECDSA_Verify& op);
        */

        std::optional<component::BLS_PublicKey> OpBLS_PrivateToPublic(operation::BLS_PrivateToPublic& op);
        std::optional<component::BLS_Signature> OpBLS_Sign(operation::BLS_Sign& op);
        std::optional<bool> OpBLS_Verify(operation::BLS_Verify& op);
        std::optional<bool> OpBLS_Pairing(operation::BLS_Pairing& op);
        std::optional<component::G1> OpBLS_HashToG1(operation::BLS_HashToG1& op);
        std::optional<component::G2> OpBLS_HashToG2(operation::BLS_HashToG2& op);
};

} /* namespace module */
} /* namespace cryptofuzz */
