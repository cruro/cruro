# To do list for Cruro 💸

- [x] Make a new fork into [github/cruro/cruro](https://github.com/cruro/cruro) repository
- [x] Create a [cruro website](https://cruro.github.io/) for presentation of the idea into [github/cruro/cruro.github.io](https://github.com/cruro/cruro.github.io)
- [x] Edit all the [cruro repository](https://github.com/cruro/cruro) with the modification in all files of the project the name associated to Cruro ('bitcoin' with 'cruro', 'BTC' with 'CRC', 'satoshi' with 'crury'); how? with the notepad++ app that make possible to find and replace a string in all files of a directory and subdirs
- [x] In chainparams.cpp :
    - For 3 times in the file:
    - ```
            pchMessageStart[0] = 0xbf;
            pchMessageStart[1] = 0xd9;
            pchMessageStart[2] = 0xa0;
            pchMessageStart[3] = 0x9c;
            nDefaultPort = 8383;
      ```      
    - ```
            pchMessageStart[0] = 0xac;
            pchMessageStart[1] = 0xc5;
            pchMessageStart[2] = 0xa6;
            pchMessageStart[3] = 0xf8;
            nDefaultPort = 18383;
      ```
    - ```
            pchMessageStart[0] = 0xcd;
            pchMessageStart[1] = 0xfe;
            pchMessageStart[2] = 0xaf;
            pchMessageStart[3] = 0x93;
            nDefaultPort = 18464;
      ```
    - For two times in the file:
    - ```
    ```
    - ```
    consensus.nMinimumChainWork = uint256S("0x0000000000000000000000000000000000000000000000000000000100010001");
    ```
    - ```
    consensus.nMinimumChainWork = uint256S("0x0000000000000000000000000000000000000000000000000000000100010001");
    ```
    - For 3 times:
    - ```      
            consensus.BIP34Height = 1;
            consensus.BIP34Hash = uint256S("0x000000000000024b89b42a942fe0d9fea3bb44ab7bd1b19115dd6a759c0808b8");
            consensus.BIP65Height = 1; // 000000000000000004c2b624ed5d7756c508d90fd0da2c7c679febfa6c4735f0
            consensus.BIP66Height = 1; // 00000000000000000379eaa19dce8c9b722d46ae6a57c2f1a988119488b50931
      ```      
    - ```
            consensus.BIP34Height = 1;
            consensus.BIP34Hash = uint256S("0x0000000023b3a96d3484e5abb3755c413e7d41500f8e2a5c3f0dd01299cd8ef8");
            consensus.BIP65Height = 1; // 00000000007f6655f22f98e72ed80d8b06dc761d5da09df0fa1dc4be4f861eb6
            consensus.BIP66Height = 1; // 000000002104c8c45e99a8853285a3b592602a3ccde2b832481da85e9e4ba182
      ```      
    - ```
            consensus.BIP34Height = 1; // BIP34 activated on regtest (Used in functional tests)
            consensus.BIP34Hash = uint256();
            consensus.BIP65Height = 1; // BIP65 activated on regtest (Used in functional tests)
            consensus.BIP66Height = 1; // BIP66 activated on regtest (Used in functional tests)
      ```      





# Cruro coin 💲 under dev 💻 documentation

This project is a new fork of [bitcoin core 0.18.0](https://bitcoincore.org/) to make a new cryptocurrency made to be a deflactive 💹 asset, for run in 🇪🇺 europe 🇪🇺 and gain some founds from states.

## Starting with Cruro 💰

On first for create a new fork of Cruro we will 📝 [follow this guide](https://bitcointalk.org/index.php?topic=5134256.0) 📝 to make a good and solid fork of Cruro core;

Other good resources found around the web for a good fork (but outdated) are:

- [Medium](https://medium.com/@jordan.baczuk/how-to-fork-bitcoin-c39139506443)
- [BitcoinTalk forum](https://bitcointalk.org/index.php?topic=3345808.80)
- [BitcoinTalk forum 2](https://bitcointalk.org/index.php?topic=225690.0)

# Tools used for create it
## (Thanks a lot! All open source resources) 😎

- [x] 💻 [Ubuntu 19.04](http://releases.ubuntu.com/19.04/) for the dev machine (amazing open source OS)
- [x] 🗂 [Snapcraft](https://snapcraft.io/) for the snaps that can be integrated with Ubuntu
- [x] 📊 [Github](https://github.com/) for the core and [Github Pages](https://pages.github.com/) for the free service of the website
- [x] 📰 [Jekyll](https://jekyllrb.com/) and [Jorigamy](https://jorigamy.githu.io) for the website
- [x] ⌨ [Atom editor](https://atom.io/) for writing and edit the code, the plugins, and the quick commit to github features
- [x] 📔 The [Notepad++ editor](https://snapcraft.io/notepad-plus-plus) compatible with linux thanks to Snapcraft
- [x] 💸 The [Bitcoin core](https://bitcoincore.org/)
