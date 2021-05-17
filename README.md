![Optional Text](../main/img/Qbit.png)


<h3>BOUNTIES Payable:  Devs check it out email wordupseo@aol.com Quote BOUNTY Available.
Community help welcomed and always needed so let us know who you are and what you do please.</h3>
We believe in sharing and rewarding Community helpers so Dive in and claim a bounty its gona be worth your time and effort.

<h2>DEV HELP BOUNTY</h2><br>
<h3>Qbit  BOUNTY– We always need and welcome help from the community, Currently we are looking for someone to add a generic merchant plugin that allows merchants to accept Qbit Currency for goods and services if you can help jump in and claim the Bounty.
if you can help, Contact myhdisdead@  use Telegram (https://t.me/Qbitcurrency) [Qbitcurrency] or use contact form at bottom of page on (https://qbit.money/)</h3>

#### Qbit Currency is a Silver backed Private Global Crypto Currency Payment Network it's a fast, and easy way to send money to friends and businesses anywhere in the world.


### Installing QbitNetworkd

To use QbitNetwork, you'll need a way to connect to the network, and a wallet to hold your funds. This software includes the zodiac command line wallet for you, compile it yourself, or you can download the ones that we have compiled for you.

**Click here to download: https://github.com/QbitNetwork/Qbit**

### Getting Started 

Get started Syncing with the network so you can use your funds. Syncing from your own node is faster than syncing from a remote node. Here are some handy links to get you there as soon as possible.

Dont Forget when using wallet to:
**Backup your keys** - You can generate a zodiac cli wallet on the node, or use our Client Side Wallet Generator in the Block explorer to create a wallet address, or use [this generator](https://qbit.money/wallet/) that will make a [printable physical paper wallet](https://qbit.money/make-paper-wallet.html) to put in a safe place for later.

### A note for contributing developers

Hello friends and coders thank you for helping us with this project This Crypto Currency payment vehicle uses code from other communities who contributed their time and code which helped us and others to get started. We try to make sure we get the proper license header in every file we modify. By the terms of this project's license, any open source project may use our software, but the licenses may only be appended to, not altered. 

#### Qbit Private Global Crypto Payment Network is a fast, and easy way to send money to friends, family and merchants anywhere in the world.

### Installing QbitNetwork

To use QbitNetwork, you'll need a way to connect to the network, and a wallet to hold your funds. This software includes the zodiac wallet for the command line, we also have a GUI wallet available shortly, you can compile Qbit yourself, or you can download the builds that we compiled for you in due course.


### Getting Started 

If you're a new user to Qbit you'll probably want to get in sync with the network as quickly as you can so you can create a wallet and use your funds. Syncing from your own node is faster than syncing from a remote node.

DONT MISS THIS STEP OR YOU WILL LOSE YOUR MONEY:<br>

**Backup your keys** - You can generate a wallet right inside the software, or use [this generator](https://qbit.money/wallet/) that will make a [printable physical paper wallet](https://qbit.money/make-paper-wallet.html} to hold your funds.

                   

first install:
sudo apt-get install software-properties-common


<div id="readme" class="Box-body readme blob js-code-block-container p-5 p-xl-6">
    <article class="markdown-body entry-content container-lg" itemprop="text"><h3><a id="user-content-compiling-qbit" class="anchor" aria-hidden="true" href="#compiling-qbit"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Compiling QbitNetwork</h3>
<h5><a id="user-content-table-of-contents" class="anchor" aria-hidden="true" href="#table-of-contents"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Table of Contents</h5>
<ul>
<li><strong>Linux</strong>
<ul>
<li><a href="#linux-dependencies">Linux Dependencies</a></li>
<li><a href="#ubuntu-with-gcc">Ubuntu with GCC</a></li>
<li><a href="#ubuntu-with-clang">Ubuntu with CLANG</a></li>
<li><a href="#centos-with-gcc">CentOS with GCC</a></li>
<li><a href="#generic-linux">Generic Linux</a></li>
</ul>
</li>
<li><strong>MacOS</strong>
<ul>
<li><a href="#macos-dependencies">MacOS Dependencies</a></li>
<li><a href="#macos-with-clang">MacOS with CLANG</a></li>
</ul>
</li>
<li><strong>Windows</strong>
<ul>
<li><a href="#windows-dependencies">Windows Dependencies</a></li>
<li><a href="#windows-with-vs2019">Windows with VS2019</a></li>
</ul>
</li>
</ul>
<h5><a id="user-content-build-optimization" class="anchor" aria-hidden="true" href="#build-optimization"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Build Optimization</h5>
<p>The CMake build system will, by default, create optimized <em>native</em> builds for your particular system type when you build the software. Using this method, the binaries created provide a better experience and all-together faster performance.</p>
<h5><a id="user-content-making-portable-binaries" class="anchor" aria-hidden="true" href="#making-portable-binaries"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Making Portable Binaries</h5>
<p>However, if you wish to create <em>portable</em> binaries that can be shared between systems, specify <code>-DARCH=default</code> in your CMake arguments during the build process. Note that <em>portable</em> binaries will have a noticable difference in performance than <em>native</em> binaries. For this reason, it is always best to build for your particular system if possible.</p>
<h2><a id="user-content-linux" class="anchor" aria-hidden="true" href="#linux"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Linux</h2>
<h5><a id="user-content-linux-dependencies" class="anchor" aria-hidden="true" href="#linux-dependencies"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Linux Dependencies</h5>
<p><strong>Note:</strong> Individual names for these packages may differ depending on your Linux distribution.</p>
<ul>
<li><a href="https://www.boost.org/" rel="nofollow">Boost</a></li>
<li><a href="https://www.openssl.org/" rel="nofollow">OpenSSL</a></li>
<li><a href="https://cmake.org/download/" rel="nofollow">Cmake (3.8, higher)</a></li>
<li><a href="https://ftp.gnu.org/gnu/make/" rel="nofollow">GNU Make</a></li>
<li><a href="https://git-scm.com/" rel="nofollow">Git</a></li>
<li><a href="https://gcc.gnu.org/" rel="nofollow">GCC 7, higher</a> or <a href="https://clang.llvm.org/" rel="nofollow">CLANG 6, higher</a></li>
</ul>
<h5><a id="user-content-ubuntu-with-gcc" class="anchor" aria-hidden="true" href="#ubuntu-with-gcc"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Ubuntu with GCC</h5>
<ul>
<li><code>sudo apt-get install software-properties-common</code></li>
<li><code>sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y</code></li>
<li><code>sudo apt-get update</code></li>
<li><code>sudo apt-get install aptitude -y</code></li>
<li><code>sudo aptitude install -y build-essential g++-8 gcc-8 git libboost-all-dev python-pip libssl-dev</code></li>
<li><code>sudo pip install cmake</code></li>
<li><code>export CC=gcc-8</code></li>
<li><code>export CXX=g++-8</code></li>
<li><code>git clone https://github.com/QbitNetwork/Qbit.git</code></li>
<li><code>cd Qbit</code></li>
<li><code>mkdir build</code></li>
<li><code>cd build</code></li>
<li><code>cmake ..</code></li>
<li><code>make</code></li>
</ul>
<p>The binaries will be in the <code>src</code> folder when you are complete.</p>
<ul>
<li><code>cd src</code></li>
<li><code>./QbitNetworkd --version</code></li>
</ul>
<h5><a id="user-content-ubuntu-with-clang" class="anchor" aria-hidden="true" href="#ubuntu-with-clang"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Ubuntu with CLANG</h5>
<h6><a id="user-content-for-ubuntu-1604-xenial-users" class="anchor" aria-hidden="true" href="#for-ubuntu-1604-xenial-users"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>For Ubuntu 16.04 (Xenial) users:</h6>
<ul>
<li><code>sudo add-apt-repository "deb https://apt.llvm.org/xenial/ llvm-toolchain-xenial 6.0 main"</code></li>
</ul>
<h6><a id="user-content-for-ubuntu-1804-bionic-users" class="anchor" aria-hidden="true" href="#for-ubuntu-1804-bionic-users"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>For Ubuntu 18.04 (Bionic) users:</h6>
<ul>
<li><code>sudo add-apt-repository "deb https://apt.llvm.org/bionic/ llvm-toolchain-bionic 6.0 main"</code></li>
</ul>
<h6><a id="user-content-for-everyone" class="anchor" aria-hidden="true" href="#for-everyone"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>For Everyone:</h6>
<ul>
<li><code>sudo apt-get install software-properties-common</code></li>    
<li><code>sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y</code></li>
<li><code>wget -O - http://llvm.org/apt/llvm-snapshot.gpg.key | sudo apt-key add -</code></li>
</ul>
<ul>
<li><code>sudo apt-get update</code></li>
<li><code>sudo apt-get install aptitude -y</code></li>
<li><code>sudo aptitude install -y -o Aptitude::ProblemResolver::SolutionCost='100*canceled-actions,200*removals' build-essential clang-6.0 libstdc++-7-dev git libboost-all-dev python-pip libssl-dev</code></li>
<li><code>sudo pip install cmake</code></li>
<li><code>export CC=clang-6.0</code></li>
<li><code>export CXX=clang++-6.0</code></li>
<li><code>git clone https://github.com/QbitNetwork/Qbit.git </code></li>
<li><code>cd Qbit</code></li>
<li><code>mkdir build</code></li>
<li><code>cd build</code></li>
<li><code>cmake .. -DCMAKE_BUILD_TYPE=Release</code></li>
<li><code>make  -jxxxx  or just make</code></li>
</ul>
<p>The binaries will be in the <code>src</code> folder when you are complete.</p>
<ul>
<li><code>cd src</code></li>
<li><code>./QbitNetworkd --version</code></li>
</ul>
<h5><a id="user-content-centos-with-gcc" class="anchor" aria-hidden="true" href="#centos-with-gcc"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>CentOS with GCC</h5>
<p><em>CentOS compile instructions provided by @brandonlehmann</em></p>
<ul>
<li><code>sudo yum update -y</code></li>
<li><code>sudo yum install -y epel-release centos-release-scl</code></li>
<li><code>sudo yum install -y devtoolset-8 cmake cmake3 wget git openssl-devel</code></li>
<li><code>sudo scl enable devtoolset-8 bash</code></li>
<li><code>wget https://dl.bintray.com/boostorg/release/1.68.0/source/boost_1_68_0.tar.gz</code></li>
<li><code>tar xzvf boost_1_68_0.tar.gz &amp;&amp; cd boost_1_68_0</code></li>
<li><code>./bootstrap.sh --prefix=/usr/local/</code></li>
<li><code>./b2 -j$(nproc) -d0 install --with-system --with-filesystem --with-thread --with-date_time --with-chrono --with-regex --with-serialization --with-program_options</code></li>
<li><code>cd ..</code></li>
<li><code>git clone https://github.com/QbitNetwork/Qbit.git</code></li>
<li><code>mkdir -p qbit/build</code></li>
<li><code>cd Qbit/build</code></li>
<li><code>cmake3 ..</code></li>
<li><code>make</code></li>
</ul>
<p>The binaries will be in the <code>src</code> folder when you are complete.</p>
<ul>
<li><code>cd src</code></li>
<li><code>./QbitNetworkd --version</code></li>
</ul>
<h5><a id="user-content-generic-linux" class="anchor" aria-hidden="true" href="#generic-linux"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Generic Linux</h5>
<p><strong>Note:</strong> If you want to use clang, ensure you set the environment variables <code>CC</code> and <code>CXX</code>.
See the ubuntu instructions for an example.</p>
<ul>
<li><code>git clone https://github.com/QbitNetwork/Qbit.git</code></li>
<li><code>cd Qbit</code></li>
<li><code>mkdir build</code></li>
<li><code>cd build</code></li>
<li><code>cmake ..</code></li>
<li><code>make</code></li>
</ul>
<p>The binaries will be in the <code>src</code> folder when you are complete.</p>
<ul>
<li><code>cd src</code></li>
<li><code>./QbitNetworkd --version</code></li>
</ul>
<h2><a id="user-content-macos" class="anchor" aria-hidden="true" href="#macos"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>MacOS</h2>
<h5><a id="user-content-macos-dependencies" class="anchor" aria-hidden="true" href="#macos-dependencies"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>MacOS Dependencies</h5>
<ul>
<li><a href="https://developer.apple.com/xcode/" rel="nofollow">XCode</a></li>
<li><a href="https://clang.llvm.org/" rel="nofollow">CLANG</a></li>
<li><a href="https://brew.sh/" rel="nofollow">Brew</a></li>
<li><a href="https://cmake.org/download/" rel="nofollow">Cmake (3.8, higher)</a></li>
<li><a href="https://ftp.gnu.org/gnu/make/" rel="nofollow">GNU Make</a></li>
<li><a href="https://git-scm.com/" rel="nofollow">Git</a></li>
</ul>
<h5><a id="user-content-macos-with-clang" class="anchor" aria-hidden="true" href="#macos-with-clang"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>MacOS with CLANG</h5>
<ul>
<li><code>which brew || /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"</code></li>
<li><code>brew install --force cmake boost llvm@8 openssl</code></li>
<li><code>brew link --force llvm@8</code></li>
<li><code>ln -s /usr/local/opt/llvm@8 /usr/local/opt/llvm</code></li>
<li><code>export CC=/usr/local/opt/llvm@8/bin/clang</code></li>
<li><code>export CXX=/usr/local/opt/llvm@8/bin/clang++</code></li>
<li><code>git clone https://github.com/QbitNetwork/Qbit.git</code></li>
<li><code>cd Qbit</code></li>
<li><code>mkdir build</code></li>
<li><code>cd build</code></li>
<li><code>cmake ..</code></li>
<li><code>make</code></li>
</ul>
<p>The binaries will be in the <code>src</code> folder when you are complete.</p>
<ul>
<li><code>cd src</code></li>
<li><code>./QbitNetworkd --version</code></li>
</ul>
<h2><a id="user-content-windows" class="anchor" aria-hidden="true" href="#windows"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Windows</h2>
<h5><a id="user-content-windows-dependencies" class="anchor" aria-hidden="true" href="#windows-dependencies"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Windows Dependencies</h5>
<p>You can build for 32-bit or 64-bit Windows. <strong>If you're not sure, pick 64-bit.</strong></p>
<ul>
<li>Download the <a href="https://visualstudio.microsoft.com/thank-you-downloading-visual-studio/?sku=BuildTools&amp;rel=16" rel="nofollow">Build Tools for Visual Studio 2019</a> Installer</li>
<li>When it opens up select <strong>C++ build tools</strong>, it automatically selects the needed parts. Make sure <strong>MSVC v141 Build Tools</strong> is selected.</li>
<li>Install Boost. Select the appropriate version for your system:
<ul>
<li><a href="https://bintray.com/boostorg/release/download_file?file_path=1.69.0%2Fbinaries%2Fboost_1_69_0-msvc-14.1-64.exe" rel="nofollow">Boost 64-bit</a></li>
<li><a href="https://bintray.com/boostorg/release/download_file?file_path=1.69.0%2Fbinaries%2Fboost_1_69_0-msvc-14.1-32.exe" rel="nofollow">Boost 32-bit</a></li>
</ul>
</li>
<li>Install the latest full LTS version of OpenSSL (currently OpenSSL 1.1.1f). Select the appropriate version for your system:
<ul>
<li><a href="https://slproweb.com/download/Win64OpenSSL-1_1_1g.exe" rel="nofollow">OpenSSL 64-bit</a></li>
<li><a href="https://slproweb.com/download/Win32OpenSSL-1_1_1g.exe" rel="nofollow">OpenSSL 32-bit</a></li>
</ul>
</li>
</ul>
<h5><a id="user-content-windows-with-vs2019" class="anchor" aria-hidden="true" href="#windows-with-vs2019"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Windows with VS2019</h5>
<p>For 64-bit:</p>
<ul>
<li>From the start menu, open <strong>x64 Native Tools Command Prompt for VS 2019</strong>.</li>
<li><code>cd &lt;your_Qbit_directory&gt;</code></li>
<li><code>mkdir build</code></li>
<li><code>cd build</code></li>
<li><code>cmake -G "Visual Studio 16 2019" -A x64 .. -DBOOST_ROOT=C:/local/boost_1_69_0</code></li>
<li><code>MSBuild QbitNetwork.sln /p:Configuration=Release /p:PlatformToolset=v141 /m</code> or <code>MSBuild src\cli.vcxproj /p:Configuration=Release /p:PlatformToolset=v141 /m</code></li>
</ul>
<p>For 32-bit:</p>
<ul>
<li>From the start menu, open <strong>x86 Native Tools Command Prompt for VS 2019</strong>.</li>
<li><code>cd &lt;your_Qbit_directory&gt;</code></li>
<li><code>mkdir build</code></li>
<li><code>cd build</code></li>
<li><code>cmake -G "Visual Studio 16 2019" -A Win32 .. -DBOOST_ROOT=C:/local/boost_1_69_0</code></li>
<li><code>MSBuild QbitNetwork.sln /p:Configuration=Release /p:Platform=Win32 /p:PlatformToolset=v141 /m</code></li>
</ul>
<p>The binaries will be in the <code>src/Release</code> folder when you are complete.</p>
<ul>
<li><code>cd src</code></li>
<li><code>cd Release</code></li>
<li><code>QbitNetworkd.exe --version</code></li>
</ul>
<p><a href="#compiling-qbit">^ Return To Top</a></p>
</article>
  </div>

    </div>
   With Thanks to some Great Guys:
```
// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018-2020, The TurtleCoin Developers
// Copyright (c) 2020-2021, Dave Brennan, k7n2g, The team at Qbit Currency
//
// Please see the included LICENSE file for more information.
```
