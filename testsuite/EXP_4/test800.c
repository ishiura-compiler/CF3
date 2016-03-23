
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x19 = INT32_MIN;
static int32_t x20 = INT32_MAX;
uint64_t x22 = UINT64_MAX;
static uint64_t t2 = 521758086844679716LLU;
int64_t x27 = -1LL;
int32_t x32 = -1;
uint32_t x33 = 816195632U;
uint64_t x35 = UINT64_MAX;
int64_t x36 = 592139342573122221LL;
volatile uint8_t x38 = 0U;
int16_t x39 = INT16_MIN;
uint64_t x43 = UINT64_MAX;
uint64_t x49 = 65055932908LLU;
int32_t x50 = INT32_MIN;
static int64_t x52 = 1544LL;
static volatile int64_t t11 = 751930272964LL;
uint8_t x65 = UINT8_MAX;
uint64_t x68 = 64774372986821LLU;
volatile int32_t x71 = -1;
static int32_t x74 = -1361798;
uint32_t x95 = UINT32_MAX;
volatile uint64_t x98 = 88613504857852708LLU;
uint8_t x102 = 63U;
int16_t x110 = -11842;
volatile uint64_t t22 = 147244733501LLU;
uint8_t x114 = 0U;
volatile int8_t x117 = -1;
volatile int64_t t24 = -1321LL;
volatile int64_t t25 = 91148551842LL;
uint8_t x135 = 4U;
int32_t x139 = -7;
static int32_t t28 = -76;
int32_t x141 = -1882;
uint16_t x142 = 4059U;
uint64_t t31 = 4680LLU;
volatile uint64_t t34 = 631002337141610LLU;
int16_t x165 = -1;
uint64_t t36 = 373459590LLU;
int32_t x174 = -13041;
uint64_t t39 = 39LLU;
int8_t x187 = 0;
volatile int16_t x188 = 33;
uint64_t x191 = 5069950340LLU;
static int64_t x194 = INT64_MAX;
uint8_t x197 = 7U;
uint32_t x199 = 70U;
int64_t x201 = INT64_MIN;
int16_t x204 = 1;
volatile int64_t t44 = 100412LL;
int32_t x206 = 137903;
volatile int64_t x212 = INT64_MIN;
int32_t x214 = INT32_MIN;
int32_t t47 = -72;
int8_t x217 = INT8_MIN;
uint32_t x218 = UINT32_MAX;
volatile int16_t x219 = INT16_MIN;
volatile int64_t x226 = -9920716082633538LL;
static volatile uint64_t t51 = 2695706078769457247LLU;
int8_t x240 = -1;
int32_t x246 = -1875909;
int8_t x247 = -1;
int32_t x251 = INT32_MAX;
int64_t x252 = 978802813864LL;
uint64_t x253 = UINT64_MAX;
int8_t x256 = INT8_MAX;
int32_t x259 = 69;
static int16_t x260 = -1;
static volatile int64_t t57 = -349806147160341924LL;
volatile int64_t x267 = INT64_MIN;
volatile uint64_t t61 = 2818528873LLU;
int32_t x295 = INT32_MIN;
volatile int32_t t67 = -7015216;
static int8_t x310 = -1;
volatile int16_t x315 = -2;
int16_t x317 = -1;
uint16_t x325 = 27928U;
uint8_t x327 = 15U;
int16_t x328 = INT16_MIN;
volatile int8_t x330 = INT8_MIN;
int8_t x348 = -1;
volatile uint16_t x350 = 24U;
volatile int16_t x351 = 0;
volatile int8_t x358 = INT8_MIN;
uint16_t x360 = UINT16_MAX;
static uint64_t x361 = UINT64_MAX;
int8_t x366 = 1;
uint8_t x368 = 24U;
volatile int16_t x369 = -1;
static uint8_t x370 = 5U;
volatile int8_t x373 = INT8_MAX;
uint16_t x375 = 7U;
uint32_t t85 = 316U;
int32_t t86 = -13338187;
uint64_t t89 = 11473668867707LLU;
static volatile int8_t x401 = -1;
volatile int32_t x408 = INT32_MAX;
int32_t x414 = -304919;
volatile int8_t x419 = INT8_MIN;
volatile uint16_t x422 = UINT16_MAX;
int32_t x423 = INT32_MIN;
int32_t x446 = INT32_MIN;
volatile int64_t t97 = 33407619624056948LL;
int64_t x453 = INT64_MAX;
static int16_t x454 = -1;
uint64_t x455 = 354137132137446726LLU;
uint8_t x458 = 61U;
static volatile int8_t x461 = INT8_MAX;
int8_t x467 = -1;
int64_t t102 = 1LL;
int32_t x470 = -1;
uint64_t x471 = UINT64_MAX;
int16_t x476 = -1;
uint32_t t104 = 743U;
volatile uint16_t x478 = 1346U;
static int16_t x480 = INT16_MAX;
int32_t x494 = INT32_MIN;
static uint64_t x497 = 467656355606799LLU;
int64_t x519 = INT64_MAX;
volatile int64_t t112 = -17371008LL;
volatile int64_t t115 = 218336724LL;
volatile int32_t x541 = -8670;
int16_t x543 = INT16_MIN;
volatile int16_t x544 = INT16_MAX;
volatile int64_t t118 = -272689389LL;
int32_t x548 = INT32_MIN;
static int32_t x555 = INT32_MIN;
volatile int32_t x560 = INT32_MAX;
uint8_t x561 = UINT8_MAX;
uint8_t x562 = 0U;
uint64_t x565 = 41866878691LLU;
int16_t x570 = INT16_MIN;
uint32_t t124 = 8U;
static int32_t x573 = 1;
uint64_t x576 = 65471633982019456LLU;
int16_t x599 = 4;
uint32_t t130 = 120U;
int32_t x605 = INT32_MAX;
static uint8_t x607 = 1U;
static volatile int8_t x613 = INT8_MIN;
int64_t x630 = 1344LL;
int32_t x635 = INT32_MIN;
static int8_t x639 = INT8_MAX;
volatile int16_t x643 = -745;
int32_t t139 = 831;
int8_t x645 = INT8_MIN;
int8_t x650 = -1;
int32_t x653 = 27;
volatile int32_t x669 = INT32_MIN;
uint32_t x674 = UINT32_MAX;
int64_t x678 = -1LL;
int8_t x679 = -1;
int64_t x692 = INT64_MIN;
volatile int32_t t150 = -55577;
static uint64_t x700 = UINT64_MAX;
uint8_t x703 = 9U;
int8_t x710 = 11;
uint16_t x712 = 2118U;
volatile int32_t x718 = INT32_MAX;
int64_t t155 = 424737576LL;
int32_t x727 = INT32_MAX;
int16_t x728 = INT16_MIN;
int32_t x731 = INT32_MAX;
volatile int32_t x732 = INT32_MIN;
int32_t x734 = -337734;
int16_t x735 = INT16_MIN;
volatile int64_t t159 = 154337684LL;
int32_t t163 = -11977113;
volatile int8_t x761 = INT8_MAX;
int16_t x765 = INT16_MAX;
uint64_t x767 = 275454629059081805LLU;
int32_t t166 = -52;
int16_t x790 = -2798;
uint64_t x791 = 37152766755527787LLU;
int16_t x820 = INT16_MIN;
volatile uint64_t x822 = 59160777499LLU;
int16_t x823 = INT16_MIN;
int64_t t174 = 69856485209914LL;
uint64_t x838 = UINT64_MAX;
uint32_t x843 = UINT32_MAX;
int8_t x846 = INT8_MIN;
int16_t x854 = -405;
static volatile int64_t t179 = 2LL;
uint32_t x858 = 2926879U;
static volatile int16_t x860 = 3339;
static int8_t x862 = INT8_MAX;
uint16_t x866 = UINT16_MAX;
int32_t x870 = -12;
int16_t x871 = -11;
volatile int8_t x874 = INT8_MIN;
volatile int16_t x875 = INT16_MIN;
static int32_t t184 = 4999780;
static int32_t x883 = INT32_MAX;
int64_t x884 = INT64_MIN;
int64_t t186 = -188LL;
uint16_t x886 = 1809U;
int64_t t187 = -2003846LL;
uint32_t x891 = 2U;
int32_t x894 = INT32_MAX;
static int32_t x897 = INT32_MAX;
int64_t x898 = INT64_MAX;
volatile uint64_t t191 = 1006LLU;
int16_t x905 = 33;
static int32_t x909 = INT32_MIN;
static volatile int32_t x912 = 30;
static int32_t x914 = 8;
uint64_t x916 = 70171589640126906LLU;
uint32_t t198 = 44423830U;


void f0(void) {
    	uint32_t x1 = 42U;
	uint8_t x2 = UINT8_MAX;
	volatile int8_t x3 = -1;
	static int16_t x4 = INT16_MIN;
	uint32_t t0 = 50078624U;

    t0 = (x1-(x2-(x3%x4)));

    if (t0 != 4294967082U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x17 = INT16_MAX;
	static uint16_t x18 = 24U;
	int32_t t1 = 5;

    t1 = (x17-(x18-(x19%x20)));

    if (t1 != 32742) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x21 = UINT16_MAX;
	int16_t x23 = INT16_MIN;
	volatile int16_t x24 = INT16_MAX;

    t2 = (x21-(x22-(x23%x24)));

    if (t2 != 65535LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x25 = 1;
	uint64_t x26 = 1957125020866187LLU;
	static int16_t x28 = 1267;
	volatile uint64_t t3 = 1LLU;

    t3 = (x25-(x26-(x27%x28)));

    if (t3 != 18444786948688685429LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x29 = INT8_MAX;
	int16_t x30 = INT16_MAX;
	static int32_t x31 = -1;
	volatile int32_t t4 = -2901;

    t4 = (x29-(x30-(x31%x32)));

    if (t4 != -32640) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x34 = INT16_MIN;
	static volatile uint64_t t5 = 58LLU;

    t5 = (x33-(x34-(x35%x36)));

    if (t5 != 90424454758991164LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x37 = 1602411U;
	int64_t x40 = INT64_MIN;
	volatile int64_t t6 = -77898451608LL;

    t6 = (x37-(x38-(x39%x40)));

    if (t6 != 1569643LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x41 = UINT8_MAX;
	int8_t x42 = 30;
	uint32_t x44 = 5U;
	static uint64_t t7 = 1242007838654969LLU;

    t7 = (x41-(x42-(x43%x44)));

    if (t7 != 225LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x51 = -23;
	volatile uint64_t t8 = 53LLU;

    t8 = (x49-(x50-(x51%x52)));

    if (t8 != 67203416533LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x53 = -2974134LL;
	static int16_t x54 = -6657;
	int16_t x55 = -1;
	int8_t x56 = 13;
	volatile int64_t t9 = -3LL;

    t9 = (x53-(x54-(x55%x56)));

    if (t9 != -2967478LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x57 = -1LL;
	int8_t x58 = INT8_MAX;
	int32_t x59 = -1;
	int32_t x60 = -1;
	int64_t t10 = -1231951LL;

    t10 = (x57-(x58-(x59%x60)));

    if (t10 != -128LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x61 = -1;
	int16_t x62 = INT16_MAX;
	int8_t x63 = INT8_MIN;
	volatile int64_t x64 = INT64_MAX;

    t11 = (x61-(x62-(x63%x64)));

    if (t11 != -32896LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x66 = -374;
	int32_t x67 = INT32_MIN;
	uint64_t t12 = 27373878LLU;

    t12 = (x65-(x66-(x67%x68)));

    if (t12 != 39034883236933LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x69 = 1U;
	uint32_t x70 = UINT32_MAX;
	uint8_t x72 = 4U;
	static uint32_t t13 = 427U;

    t13 = (x69-(x70-(x71%x72)));

    if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x73 = 9490162297608046LLU;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	uint64_t t14 = 39199954438LLU;

    t14 = (x73-(x74-(x75%x76)));

    if (t14 != 9490162298969844LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x77 = 0;
	int64_t x78 = INT64_MAX;
	int64_t x79 = 410454650291LL;
	uint8_t x80 = UINT8_MAX;
	int64_t t15 = -192341663LL;

    t15 = (x77-(x78-(x79%x80)));

    if (t15 != -9223372036854775661LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x81 = -15;
	static int16_t x82 = 195;
	volatile uint16_t x83 = UINT16_MAX;
	int16_t x84 = -1;
	static volatile int32_t t16 = 2031;

    t16 = (x81-(x82-(x83%x84)));

    if (t16 != -210) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x85 = UINT8_MAX;
	static volatile uint8_t x86 = UINT8_MAX;
	uint16_t x87 = UINT16_MAX;
	int16_t x88 = 1821;
	int32_t t17 = 0;

    t17 = (x85-(x86-(x87%x88)));

    if (t17 != 1800) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x93 = UINT32_MAX;
	uint8_t x94 = 2U;
	uint8_t x96 = 9U;
	uint32_t t18 = 2053967415U;

    t18 = (x93-(x94-(x95%x96)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x97 = INT32_MIN;
	uint32_t x99 = 1985961728U;
	uint16_t x100 = UINT16_MAX;
	uint64_t t19 = 50615726157679LLU;

    t19 = (x97-(x98-(x99%x100)));

    if (t19 != 18358130566704269883LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = 1183948;
	static int64_t x103 = -39754556069449878LL;
	int8_t x104 = INT8_MAX;
	volatile int64_t t20 = 143174406982737344LL;

    t20 = (x101-(x102-(x103%x104)));

    if (t20 != 1183830LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x105 = INT16_MAX;
	int16_t x106 = INT16_MIN;
	int8_t x107 = -3;
	static int8_t x108 = 7;
	static volatile int32_t t21 = 10127;

    t21 = (x105-(x106-(x107%x108)));

    if (t21 != 65532) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x109 = UINT64_MAX;
	volatile uint64_t x111 = UINT64_MAX;
	int16_t x112 = 39;

    t22 = (x109-(x110-(x111%x112)));

    if (t22 != 11856LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x113 = INT16_MAX;
	int64_t x115 = -49277114LL;
	int16_t x116 = 362;
	volatile int64_t t23 = -282LL;

    t23 = (x113-(x114-(x115%x116)));

    if (t23 != 32541LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x118 = 113492LL;
	int16_t x119 = -243;
	uint16_t x120 = UINT16_MAX;

    t24 = (x117-(x118-(x119%x120)));

    if (t24 != -113736LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = -1;
	int32_t x126 = INT32_MIN;
	int64_t x127 = INT64_MIN;
	volatile int64_t x128 = -1LL;

    t25 = (x125-(x126-(x127%x128)));

    if (t25 != 2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x129 = INT32_MIN;
	int32_t x130 = -1;
	int32_t x131 = 737842;
	int16_t x132 = INT16_MIN;
	volatile int32_t t26 = 3964;

    t26 = (x129-(x130-(x131%x132)));

    if (t26 != -2147466701) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x133 = UINT8_MAX;
	int32_t x134 = INT32_MAX;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t27 = 63724733;

    t27 = (x133-(x134-(x135%x136)));

    if (t27 != -2147483388) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x137 = 14U;
	int8_t x138 = 1;
	int32_t x140 = -1;

    t28 = (x137-(x138-(x139%x140)));

    if (t28 != 13) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x143 = -1;
	uint16_t x144 = 54U;
	volatile int32_t t29 = 143880629;

    t29 = (x141-(x142-(x143%x144)));

    if (t29 != -5942) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x145 = INT16_MIN;
	int32_t x146 = 592;
	volatile uint64_t x147 = 2261968LLU;
	static volatile int32_t x148 = -1;
	uint64_t t30 = 1272614604577813293LLU;

    t30 = (x145-(x146-(x147%x148)));

    if (t30 != 2228608LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x149 = -1;
	int32_t x150 = INT32_MIN;
	static uint16_t x151 = UINT16_MAX;
	uint64_t x152 = 693187109665406258LLU;

    t31 = (x149-(x150-(x151%x152)));

    if (t31 != 2147549182LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x153 = 14;
	int32_t x154 = INT32_MAX;
	int64_t x155 = INT64_MIN;
	int16_t x156 = -49;
	static int64_t t32 = 58992716844963762LL;

    t32 = (x153-(x154-(x155%x156)));

    if (t32 != -2147483634LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x157 = 1101;
	static int16_t x158 = -538;
	int64_t x159 = INT64_MIN;
	uint64_t x160 = 2140222170657LLU;
	uint64_t t33 = 6LLU;

    t33 = (x157-(x158-(x159%x160)));

    if (t33 != 1123743780324LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x161 = UINT8_MAX;
	uint32_t x162 = UINT32_MAX;
	uint64_t x163 = UINT64_MAX;
	uint8_t x164 = UINT8_MAX;

    t34 = (x161-(x162-(x163%x164)));

    if (t34 != 18446744069414584576LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x166 = 1100U;
	int32_t x167 = 853;
	int32_t x168 = -3;
	static uint32_t t35 = 7U;

    t35 = (x165-(x166-(x167%x168)));

    if (t35 != 4294966196U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x169 = 271973525989898905LLU;
	int64_t x170 = -1LL;
	int8_t x171 = INT8_MIN;
	volatile uint32_t x172 = 1862606361U;

    t36 = (x169-(x170-(x171%x172)));

    if (t36 != 271973526559653352LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x173 = UINT64_MAX;
	uint64_t x175 = 8325027321657LLU;
	static uint64_t x176 = UINT64_MAX;
	volatile uint64_t t37 = 37176041867217LLU;

    t37 = (x173-(x174-(x175%x176)));

    if (t37 != 8325027334697LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x177 = -1;
	uint16_t x178 = 13U;
	int16_t x179 = INT16_MAX;
	uint64_t x180 = UINT64_MAX;
	uint64_t t38 = 6LLU;

    t38 = (x177-(x178-(x179%x180)));

    if (t38 != 32753LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x181 = 914U;
	static uint8_t x182 = UINT8_MAX;
	int16_t x183 = 4;
	volatile uint64_t x184 = UINT64_MAX;

    t39 = (x181-(x182-(x183%x184)));

    if (t39 != 663LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x185 = 443U;
	static int64_t x186 = INT64_MAX;
	volatile int64_t t40 = 98346154338361181LL;

    t40 = (x185-(x186-(x187%x188)));

    if (t40 != -9223372036854775364LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x189 = -1;
	uint8_t x190 = 12U;
	static uint64_t x192 = UINT64_MAX;
	uint64_t t41 = 7479112062927280587LLU;

    t41 = (x189-(x190-(x191%x192)));

    if (t41 != 5069950327LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x193 = -1;
	volatile int32_t x195 = -1;
	uint64_t x196 = 202LLU;
	volatile uint64_t t42 = 52740903225100LLU;

    t42 = (x193-(x194-(x195%x196)));

    if (t42 != 9223372036854775987LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x198 = 1747;
	int32_t x200 = INT32_MAX;
	volatile uint32_t t43 = 271591949U;

    t43 = (x197-(x198-(x199%x200)));

    if (t43 != 4294965626U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x202 = -1;
	static int32_t x203 = INT32_MAX;

    t44 = (x201-(x202-(x203%x204)));

    if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x205 = INT32_MIN;
	uint8_t x207 = 41U;
	int64_t x208 = -2LL;
	int64_t t45 = -3238343554031219LL;

    t45 = (x205-(x206-(x207%x208)));

    if (t45 != -2147621550LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x209 = INT8_MIN;
	static uint16_t x210 = 0U;
	int64_t x211 = -68113654071423LL;
	volatile int64_t t46 = -426LL;

    t46 = (x209-(x210-(x211%x212)));

    if (t46 != -68113654071551LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x213 = 410;
	int16_t x215 = INT16_MIN;
	volatile uint16_t x216 = UINT16_MAX;

    t47 = (x213-(x214-(x215%x216)));

    if (t47 != 2147451290) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x220 = UINT8_MAX;
	static volatile uint32_t t48 = 63423U;

    t48 = (x217-(x218-(x219%x220)));

    if (t48 != 4294967041U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x221 = INT8_MIN;
	uint64_t x222 = 134107387LLU;
	static int32_t x223 = INT32_MAX;
	volatile uint32_t x224 = 126918U;
	uint64_t t49 = 4LLU;

    t49 = (x221-(x222-(x223%x224)));

    if (t49 != 18446744073575475188LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x225 = 121LLU;
	static int64_t x227 = INT64_MAX;
	volatile uint32_t x228 = UINT32_MAX;
	uint64_t t50 = 40LLU;

    t50 = (x225-(x226-(x227%x228)));

    if (t50 != 9920718230117306LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x230 = 0;
	volatile int8_t x231 = INT8_MIN;
	uint64_t x232 = UINT64_MAX;

    t51 = (x229-(x230-(x231%x232)));

    if (t51 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x237 = INT32_MIN;
	uint32_t x238 = 466151U;
	int64_t x239 = INT64_MAX;
	volatile int64_t t52 = -27487794408502LL;

    t52 = (x237-(x238-(x239%x240)));

    if (t52 != -2147949799LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x241 = -1;
	int64_t x242 = INT64_MIN;
	static int8_t x243 = INT8_MIN;
	static int64_t x244 = INT64_MIN;
	int64_t t53 = -160350748484752777LL;

    t53 = (x241-(x242-(x243%x244)));

    if (t53 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x245 = 0U;
	int32_t x248 = -1;
	int32_t t54 = -1422247;

    t54 = (x245-(x246-(x247%x248)));

    if (t54 != 1875909) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x249 = INT32_MIN;
	static int32_t x250 = 2;
	volatile int64_t t55 = 13694LL;

    t55 = (x249-(x250-(x251%x252)));

    if (t55 != -3LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x254 = 10128LL;
	int8_t x255 = INT8_MIN;
	static uint64_t t56 = 5408691473147716614LLU;

    t56 = (x253-(x254-(x255%x256)));

    if (t56 != 18446744073709541486LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x257 = INT16_MAX;
	volatile int64_t x258 = -507327032504LL;

    t57 = (x257-(x258-(x259%x260)));

    if (t57 != 507327065271LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x261 = UINT64_MAX;
	int16_t x262 = -15;
	uint32_t x263 = 8U;
	int64_t x264 = -2825LL;
	uint64_t t58 = 1144913273716LLU;

    t58 = (x261-(x262-(x263%x264)));

    if (t58 != 22LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x265 = 34345628U;
	int64_t x266 = -415LL;
	int8_t x268 = 18;
	int64_t t59 = -27379942797106LL;

    t59 = (x265-(x266-(x267%x268)));

    if (t59 != 34346035LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = INT64_MIN;
	int32_t x270 = -4188761;
	int16_t x271 = INT16_MIN;
	int64_t x272 = -15357481LL;
	int64_t t60 = 5022013LL;

    t60 = (x269-(x270-(x271%x272)));

    if (t60 != -9223372036850619815LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x273 = INT8_MIN;
	int64_t x274 = 94041784994LL;
	static int8_t x275 = INT8_MAX;
	static uint64_t x276 = 7106977LLU;

    t61 = (x273-(x274-(x275%x276)));

    if (t61 != 18446743979667766621LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x277 = -394287680873LL;
	uint32_t x278 = 849101299U;
	uint8_t x279 = UINT8_MAX;
	uint8_t x280 = UINT8_MAX;
	volatile int64_t t62 = 428199696225002322LL;

    t62 = (x277-(x278-(x279%x280)));

    if (t62 != -395136782172LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x281 = INT8_MIN;
	static uint32_t x282 = UINT32_MAX;
	static int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MAX;
	volatile int64_t t63 = 16266276620750LL;

    t63 = (x281-(x282-(x283%x284)));

    if (t63 != -4294967424LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x285 = 2915U;
	int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MAX;
	int16_t x288 = -1;
	int32_t t64 = -45927;

    t64 = (x285-(x286-(x287%x288)));

    if (t64 != 35683) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x289 = -1;
	volatile uint8_t x290 = UINT8_MAX;
	int32_t x291 = INT32_MIN;
	static int64_t x292 = INT64_MIN;
	volatile int64_t t65 = -58603337752038LL;

    t65 = (x289-(x290-(x291%x292)));

    if (t65 != -2147483904LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x293 = 44;
	uint16_t x294 = 6460U;
	int8_t x296 = INT8_MAX;
	volatile int32_t t66 = 56146777;

    t66 = (x293-(x294-(x295%x296)));

    if (t66 != -6424) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x305 = INT16_MAX;
	volatile int8_t x306 = INT8_MAX;
	uint8_t x307 = UINT8_MAX;
	volatile int8_t x308 = -60;

    t67 = (x305-(x306-(x307%x308)));

    if (t67 != 32655) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x309 = 2953U;
	int8_t x311 = 1;
	uint64_t x312 = 112179LLU;
	uint64_t t68 = 62490523715005LLU;

    t68 = (x309-(x310-(x311%x312)));

    if (t68 != 2955LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x313 = 219LLU;
	uint8_t x314 = 7U;
	volatile uint64_t x316 = UINT64_MAX;
	uint64_t t69 = 212908732865951LLU;

    t69 = (x313-(x314-(x315%x316)));

    if (t69 != 210LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x318 = INT16_MAX;
	uint32_t x319 = UINT32_MAX;
	static int32_t x320 = 58124;
	volatile uint32_t t70 = 229428U;

    t70 = (x317-(x318-(x319%x320)));

    if (t70 != 4294945091U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x326 = -1;
	volatile int32_t t71 = 185991;

    t71 = (x325-(x326-(x327%x328)));

    if (t71 != 27944) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x329 = 115205336;
	uint64_t x331 = 166LLU;
	uint16_t x332 = 8U;
	volatile uint64_t t72 = 101LLU;

    t72 = (x329-(x330-(x331%x332)));

    if (t72 != 115205470LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MIN;
	int64_t x335 = INT64_MIN;
	int32_t x336 = INT32_MIN;
	int64_t t73 = 33632LL;

    t73 = (x333-(x334-(x335%x336)));

    if (t73 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x337 = INT32_MIN;
	uint64_t x338 = 4180822350886LLU;
	uint8_t x339 = 12U;
	volatile int32_t x340 = -3361;
	uint64_t t74 = 715742LLU;

    t74 = (x337-(x338-(x339%x340)));

    if (t74 != 18446739890739717094LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x341 = 58;
	int8_t x342 = INT8_MIN;
	uint16_t x343 = 342U;
	uint32_t x344 = 109U;
	uint32_t t75 = 45U;

    t75 = (x341-(x342-(x343%x344)));

    if (t75 != 201U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x345 = 1923772456U;
	volatile int32_t x346 = INT32_MAX;
	int32_t x347 = -7533;
	uint32_t t76 = 21U;

    t76 = (x345-(x346-(x347%x348)));

    if (t76 != 4071256105U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x349 = INT16_MIN;
	int32_t x352 = -1;
	int32_t t77 = -15740002;

    t77 = (x349-(x350-(x351%x352)));

    if (t77 != -32792) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x353 = INT64_MIN;
	volatile int8_t x354 = 0;
	uint8_t x355 = 13U;
	uint8_t x356 = 52U;
	static volatile int64_t t78 = -1676605413093357686LL;

    t78 = (x353-(x354-(x355%x356)));

    if (t78 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x357 = 26;
	uint64_t x359 = UINT64_MAX;
	volatile uint64_t t79 = 479916616129LLU;

    t79 = (x357-(x358-(x359%x360)));

    if (t79 != 154LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x362 = 7U;
	int16_t x363 = INT16_MAX;
	static volatile int8_t x364 = 1;
	uint64_t t80 = 437566513LLU;

    t80 = (x361-(x362-(x363%x364)));

    if (t80 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x365 = -24410272;
	volatile int16_t x367 = INT16_MIN;
	int32_t t81 = 19519;

    t81 = (x365-(x366-(x367%x368)));

    if (t81 != -24410281) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x371 = -1LL;
	int64_t x372 = INT64_MAX;
	volatile int64_t t82 = -171093LL;

    t82 = (x369-(x370-(x371%x372)));

    if (t82 != -7LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x374 = INT16_MIN;
	static volatile int8_t x376 = INT8_MIN;
	volatile int32_t t83 = 49175969;

    t83 = (x373-(x374-(x375%x376)));

    if (t83 != 32902) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x377 = INT32_MIN;
	uint32_t x378 = 2U;
	static int64_t x379 = -1LL;
	int32_t x380 = INT32_MAX;
	static int64_t t84 = -1036759LL;

    t84 = (x377-(x378-(x379%x380)));

    if (t84 != -2147483651LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x381 = INT32_MIN;
	volatile int16_t x382 = -1;
	uint32_t x383 = 43436U;
	volatile int8_t x384 = INT8_MIN;

    t85 = (x381-(x382-(x383%x384)));

    if (t85 != 2147527085U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x385 = 2U;
	int16_t x386 = INT16_MIN;
	int16_t x387 = 19;
	static int8_t x388 = INT8_MIN;

    t86 = (x385-(x386-(x387%x388)));

    if (t86 != 32789) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x389 = INT32_MAX;
	static volatile int16_t x390 = INT16_MAX;
	int16_t x391 = INT16_MIN;
	static int32_t x392 = 57605;
	int32_t t87 = -60;

    t87 = (x389-(x390-(x391%x392)));

    if (t87 != 2147418112) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x393 = -1;
	int64_t x394 = INT64_MIN;
	uint8_t x395 = 0U;
	int16_t x396 = INT16_MIN;
	volatile int64_t t88 = INT64_MAX;

    t88 = (x393-(x394-(x395%x396)));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x397 = INT32_MIN;
	volatile int32_t x398 = INT32_MIN;
	int64_t x399 = -1LL;
	uint64_t x400 = UINT64_MAX;

    t89 = (x397-(x398-(x399%x400)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x402 = INT16_MIN;
	int16_t x403 = -1;
	volatile uint64_t x404 = 22LLU;
	static uint64_t t90 = 1682729LLU;

    t90 = (x401-(x402-(x403%x404)));

    if (t90 != 32782LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x405 = 0;
	uint64_t x406 = 86174440978196LLU;
	int8_t x407 = 7;
	volatile uint64_t t91 = 54817143039159LLU;

    t91 = (x405-(x406-(x407%x408)));

    if (t91 != 18446657899268573427LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x413 = INT64_MIN;
	static int16_t x415 = INT16_MIN;
	uint16_t x416 = 145U;
	int64_t t92 = 307282461LL;

    t92 = (x413-(x414-(x415%x416)));

    if (t92 != -9223372036854471032LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x417 = UINT32_MAX;
	int32_t x418 = -493;
	int16_t x420 = INT16_MIN;
	volatile uint32_t t93 = 874438U;

    t93 = (x417-(x418-(x419%x420)));

    if (t93 != 364U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x421 = -1;
	int64_t x424 = 6720764400664848LL;
	int64_t t94 = 468249510952334LL;

    t94 = (x421-(x422-(x423%x424)));

    if (t94 != -2147549184LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x437 = INT8_MIN;
	static uint32_t x438 = 23091542U;
	int64_t x439 = INT64_MAX;
	int8_t x440 = -56;
	static volatile int64_t t95 = 30176360578786606LL;

    t95 = (x437-(x438-(x439%x440)));

    if (t95 != -23091663LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x441 = INT32_MAX;
	int8_t x442 = INT8_MIN;
	int64_t x443 = INT64_MAX;
	uint16_t x444 = 5U;
	int64_t t96 = 1LL;

    t96 = (x441-(x442-(x443%x444)));

    if (t96 != 2147483777LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x445 = INT16_MAX;
	volatile int32_t x447 = 55997;
	int64_t x448 = INT64_MIN;

    t97 = (x445-(x446-(x447%x448)));

    if (t97 != 2147572412LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x449 = 2U;
	int16_t x450 = INT16_MIN;
	volatile uint8_t x451 = UINT8_MAX;
	int32_t x452 = -1;
	volatile int32_t t98 = 39701775;

    t98 = (x449-(x450-(x451%x452)));

    if (t98 != 32770) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x456 = INT16_MIN;
	uint64_t t99 = 6941922164285LLU;

    t99 = (x453-(x454-(x455%x456)));

    if (t99 != 9577509168992222534LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x457 = -1;
	uint8_t x459 = UINT8_MAX;
	int16_t x460 = 1;
	volatile int32_t t100 = 3;

    t100 = (x457-(x458-(x459%x460)));

    if (t100 != -62) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x462 = -1;
	int16_t x463 = INT16_MIN;
	int8_t x464 = -54;
	int32_t t101 = 12;

    t101 = (x461-(x462-(x463%x464)));

    if (t101 != 84) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x465 = INT16_MIN;
	static int64_t x466 = 41LL;
	static int64_t x468 = INT64_MIN;

    t102 = (x465-(x466-(x467%x468)));

    if (t102 != -32810LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x469 = INT32_MIN;
	int16_t x472 = INT16_MIN;
	uint64_t t103 = 305327LLU;

    t103 = (x469-(x470-(x471%x472)));

    if (t103 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x473 = 4176577U;
	uint8_t x474 = UINT8_MAX;
	volatile int8_t x475 = INT8_MAX;

    t104 = (x473-(x474-(x475%x476)));

    if (t104 != 4176322U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x477 = -1;
	uint16_t x479 = UINT16_MAX;
	volatile int32_t t105 = 1696;

    t105 = (x477-(x478-(x479%x480)));

    if (t105 != -1346) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x485 = 19279U;
	uint16_t x486 = 3U;
	static int64_t x487 = 8011517914LL;
	int32_t x488 = -1;
	static int64_t t106 = 2LL;

    t106 = (x485-(x486-(x487%x488)));

    if (t106 != 19276LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x489 = 342LL;
	int32_t x490 = INT32_MIN;
	int16_t x491 = INT16_MIN;
	static int16_t x492 = INT16_MAX;
	int64_t t107 = 222LL;

    t107 = (x489-(x490-(x491%x492)));

    if (t107 != 2147483989LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x493 = 2109977500487080003LLU;
	int8_t x495 = INT8_MIN;
	uint8_t x496 = 1U;
	volatile uint64_t t108 = 13388782499LLU;

    t108 = (x493-(x494-(x495%x496)));

    if (t108 != 2109977502634563651LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x498 = INT16_MIN;
	int32_t x499 = INT32_MIN;
	static int8_t x500 = INT8_MIN;
	uint64_t t109 = 16542680174LLU;

    t109 = (x497-(x498-(x499%x500)));

    if (t109 != 467656355639567LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x505 = 322606LL;
	uint32_t x506 = UINT32_MAX;
	uint32_t x507 = 89829557U;
	volatile int16_t x508 = -658;
	int64_t t110 = -7353368132347LL;

    t110 = (x505-(x506-(x507%x508)));

    if (t110 != -4204815132LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x513 = INT8_MIN;
	volatile int16_t x514 = INT16_MAX;
	volatile int64_t x515 = INT64_MIN;
	static volatile int64_t x516 = INT64_MAX;
	int64_t t111 = -88639499181671LL;

    t111 = (x513-(x514-(x515%x516)));

    if (t111 != -32896LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x517 = 571;
	uint16_t x518 = 8U;
	uint32_t x520 = 219615982U;

    t112 = (x517-(x518-(x519%x520)));

    if (t112 != 186532714LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x521 = 2U;
	int64_t x522 = -1LL;
	int64_t x523 = INT64_MIN;
	static int32_t x524 = -1;
	volatile int64_t t113 = -107097244LL;

    t113 = (x521-(x522-(x523%x524)));

    if (t113 != 3LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x525 = INT64_MIN;
	static int8_t x526 = -1;
	static int64_t x527 = 986841LL;
	static volatile int32_t x528 = INT32_MIN;
	volatile int64_t t114 = 31023309LL;

    t114 = (x525-(x526-(x527%x528)));

    if (t114 != -9223372036853788966LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x529 = -1LL;
	static int16_t x530 = -305;
	int16_t x531 = INT16_MIN;
	int32_t x532 = INT32_MIN;

    t115 = (x529-(x530-(x531%x532)));

    if (t115 != -32464LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x533 = -35;
	int64_t x534 = -1LL;
	int16_t x535 = INT16_MIN;
	int16_t x536 = 15;
	int64_t t116 = 112386888LL;

    t116 = (x533-(x534-(x535%x536)));

    if (t116 != -42LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x537 = -1;
	int64_t x538 = INT64_MIN;
	int32_t x539 = -509285960;
	int16_t x540 = INT16_MIN;
	volatile int64_t t117 = -168343369034613LL;

    t117 = (x537-(x538-(x539%x540)));

    if (t117 != 9223372036854770103LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x542 = INT64_MIN;

    t118 = (x541-(x542-(x543%x544)));

    if (t118 != 9223372036854767137LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x545 = 3069U;
	uint64_t x546 = UINT64_MAX;
	uint16_t x547 = 1618U;
	volatile uint64_t t119 = 23789LLU;

    t119 = (x545-(x546-(x547%x548)));

    if (t119 != 4688LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x553 = INT16_MIN;
	int64_t x554 = INT64_MAX;
	uint64_t x556 = UINT64_MAX;
	volatile uint64_t t120 = 6464160331700157LLU;

    t120 = (x553-(x554-(x555%x556)));

    if (t120 != 9223372034707259393LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x557 = INT64_MAX;
	uint16_t x558 = UINT16_MAX;
	int32_t x559 = -8963;
	int64_t t121 = -17447313159943374LL;

    t121 = (x557-(x558-(x559%x560)));

    if (t121 != 9223372036854701309LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x563 = 8;
	int8_t x564 = INT8_MAX;
	volatile int32_t t122 = 10;

    t122 = (x561-(x562-(x563%x564)));

    if (t122 != 263) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x566 = -445;
	int8_t x567 = 62;
	uint64_t x568 = 603098802LLU;
	static volatile uint64_t t123 = 4310755968LLU;

    t123 = (x565-(x566-(x567%x568)));

    if (t123 != 41866879198LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x569 = 1;
	static volatile uint8_t x571 = 59U;
	volatile uint32_t x572 = 484U;

    t124 = (x569-(x570-(x571%x572)));

    if (t124 != 32828U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x574 = 6405413333LL;
	int8_t x575 = INT8_MIN;
	uint64_t t125 = 7759495742LLU;

    t125 = (x573-(x574-(x575%x576)));

    if (t125 != 49214918356671020LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x577 = INT16_MIN;
	volatile int16_t x578 = INT16_MAX;
	volatile uint64_t x579 = 115862354LLU;
	static int8_t x580 = INT8_MIN;
	uint64_t t126 = 12749786563LLU;

    t126 = (x577-(x578-(x579%x580)));

    if (t126 != 115796819LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x589 = UINT16_MAX;
	static uint32_t x590 = UINT32_MAX;
	uint64_t x591 = 39492675659LLU;
	uint16_t x592 = 12U;
	static uint64_t t127 = 10587876906LLU;

    t127 = (x589-(x590-(x591%x592)));

    if (t127 != 18446744069414649867LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x593 = 60705;
	int64_t x594 = INT64_MAX;
	int32_t x595 = INT32_MIN;
	int32_t x596 = -1;
	int64_t t128 = 6387049412565LL;

    t128 = (x593-(x594-(x595%x596)));

    if (t128 != -9223372036854715102LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x597 = INT16_MIN;
	int32_t x598 = 202;
	uint32_t x600 = 4082646U;
	volatile uint32_t t129 = 8846138U;

    t129 = (x597-(x598-(x599%x600)));

    if (t129 != 4294934330U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x601 = INT8_MAX;
	uint8_t x602 = 1U;
	uint32_t x603 = 139934U;
	int32_t x604 = INT32_MIN;

    t130 = (x601-(x602-(x603%x604)));

    if (t130 != 140060U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x606 = INT8_MIN;
	uint64_t x608 = UINT64_MAX;
	uint64_t t131 = 1965009021LLU;

    t131 = (x605-(x606-(x607%x608)));

    if (t131 != 2147483776LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x609 = INT32_MAX;
	int32_t x610 = -1;
	int8_t x611 = -1;
	uint16_t x612 = 9370U;
	int32_t t132 = INT32_MAX;

    t132 = (x609-(x610-(x611%x612)));

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x614 = 7U;
	int64_t x615 = -27LL;
	int16_t x616 = 915;
	volatile int64_t t133 = 176144927376811LL;

    t133 = (x613-(x614-(x615%x616)));

    if (t133 != -162LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x617 = UINT32_MAX;
	int8_t x618 = INT8_MIN;
	int8_t x619 = INT8_MIN;
	volatile uint32_t x620 = 60U;
	uint32_t t134 = 64U;

    t134 = (x617-(x618-(x619%x620)));

    if (t134 != 135U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x621 = -1;
	static int64_t x622 = -1LL;
	static int32_t x623 = -2675134;
	int16_t x624 = INT16_MAX;
	int64_t t135 = -59651039LL;

    t135 = (x621-(x622-(x623%x624)));

    if (t135 != -21007LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x629 = -1;
	volatile uint64_t x631 = 38750914382509362LLU;
	int64_t x632 = -1LL;
	uint64_t t136 = 185546LLU;

    t136 = (x629-(x630-(x631%x632)));

    if (t136 != 38750914382508017LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x633 = INT16_MIN;
	static int64_t x634 = -1LL;
	int32_t x636 = -1;
	int64_t t137 = -489735LL;

    t137 = (x633-(x634-(x635%x636)));

    if (t137 != -32767LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x637 = INT16_MIN;
	static volatile int8_t x638 = -1;
	uint8_t x640 = UINT8_MAX;
	static volatile int32_t t138 = 872;

    t138 = (x637-(x638-(x639%x640)));

    if (t138 != -32640) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x641 = -14993;
	static uint8_t x642 = 43U;
	volatile int8_t x644 = INT8_MAX;

    t139 = (x641-(x642-(x643%x644)));

    if (t139 != -15146) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x646 = INT16_MIN;
	int64_t x647 = INT64_MAX;
	static int8_t x648 = INT8_MIN;
	int64_t t140 = -59562959LL;

    t140 = (x645-(x646-(x647%x648)));

    if (t140 != 32767LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x649 = UINT32_MAX;
	int32_t x651 = INT32_MIN;
	int64_t x652 = INT64_MIN;
	int64_t t141 = -60LL;

    t141 = (x649-(x650-(x651%x652)));

    if (t141 != 2147483648LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x654 = 17;
	uint32_t x655 = 59787407U;
	int16_t x656 = 2;
	uint32_t t142 = 337163U;

    t142 = (x653-(x654-(x655%x656)));

    if (t142 != 11U) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x657 = 52297984U;
	volatile uint8_t x658 = 1U;
	static uint8_t x659 = UINT8_MAX;
	int32_t x660 = INT32_MAX;
	static uint32_t t143 = 15U;

    t143 = (x657-(x658-(x659%x660)));

    if (t143 != 52298238U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x661 = -289016765;
	volatile int16_t x662 = -9289;
	int16_t x663 = 9995;
	static volatile int32_t x664 = INT32_MIN;
	volatile int32_t t144 = -43;

    t144 = (x661-(x662-(x663%x664)));

    if (t144 != -288997481) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x670 = 34U;
	int16_t x671 = 0;
	volatile uint32_t x672 = 75078153U;
	volatile uint32_t t145 = 31708715U;

    t145 = (x669-(x670-(x671%x672)));

    if (t145 != 2147483614U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x673 = -1LL;
	int64_t x675 = 433777421207LL;
	int64_t x676 = -1LL;
	volatile int64_t t146 = 4418147405741762LL;

    t146 = (x673-(x674-(x675%x676)));

    if (t146 != -4294967296LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x677 = INT32_MIN;
	int16_t x680 = -4;
	volatile int64_t t147 = 74715083LL;

    t147 = (x677-(x678-(x679%x680)));

    if (t147 != -2147483648LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x681 = UINT64_MAX;
	static int64_t x682 = -674008585598162463LL;
	int32_t x683 = -1;
	uint32_t x684 = 141956U;
	volatile uint64_t t148 = 1212LLU;

    t148 = (x681-(x682-(x683%x684)));

    if (t148 != 674008585598250977LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x689 = -1697173737LL;
	volatile int32_t x690 = INT32_MIN;
	static int64_t x691 = -1LL;
	volatile int64_t t149 = -4551358780693905331LL;

    t149 = (x689-(x690-(x691%x692)));

    if (t149 != 450309910LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x693 = -2648;
	uint8_t x694 = UINT8_MAX;
	static int16_t x695 = INT16_MIN;
	volatile int32_t x696 = 4126;

    t150 = (x693-(x694-(x695%x696)));

    if (t150 != -6789) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x697 = 239493982U;
	uint8_t x698 = 10U;
	int16_t x699 = -1;
	volatile uint64_t t151 = 4074LLU;

    t151 = (x697-(x698-(x699%x700)));

    if (t151 != 239493972LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x701 = 54075408336108759LL;
	int8_t x702 = -1;
	volatile int32_t x704 = 13374;
	int64_t t152 = 3984804113397791897LL;

    t152 = (x701-(x702-(x703%x704)));

    if (t152 != 54075408336108769LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x705 = 3056LLU;
	static uint32_t x706 = 446U;
	static int64_t x707 = -348705387LL;
	volatile uint8_t x708 = 2U;
	volatile uint64_t t153 = 23444789LLU;

    t153 = (x705-(x706-(x707%x708)));

    if (t153 != 2609LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x709 = 34891785634608LL;
	int16_t x711 = INT16_MIN;
	int64_t t154 = 447846LL;

    t154 = (x709-(x710-(x711%x712)));

    if (t154 != 34891785633599LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x717 = INT16_MIN;
	int64_t x719 = INT64_MIN;
	int64_t x720 = -659832317894883LL;

    t155 = (x717-(x718-(x719%x720)));

    if (t155 != -235899467617649LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x725 = 7918383;
	int8_t x726 = INT8_MAX;
	static volatile int32_t t156 = -71995039;

    t156 = (x725-(x726-(x727%x728)));

    if (t156 != 7951023) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x729 = 4243547LLU;
	static volatile uint16_t x730 = UINT16_MAX;
	volatile uint64_t t157 = 794098LLU;

    t157 = (x729-(x730-(x731%x732)));

    if (t157 != 2151661659LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x733 = INT16_MAX;
	int16_t x736 = 46;
	int32_t t158 = -124264261;

    t158 = (x733-(x734-(x735%x736)));

    if (t158 != 370485) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x741 = INT16_MIN;
	static volatile int64_t x742 = -1LL;
	static int64_t x743 = 193684LL;
	int8_t x744 = INT8_MIN;

    t159 = (x741-(x742-(x743%x744)));

    if (t159 != -32747LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x745 = 0;
	uint8_t x746 = 10U;
	int64_t x747 = INT64_MIN;
	int8_t x748 = INT8_MIN;
	volatile int64_t t160 = -40933685456074LL;

    t160 = (x745-(x746-(x747%x748)));

    if (t160 != -10LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x749 = INT16_MIN;
	volatile uint8_t x750 = UINT8_MAX;
	int16_t x751 = 8029;
	static uint16_t x752 = 5U;
	volatile int32_t t161 = 15895922;

    t161 = (x749-(x750-(x751%x752)));

    if (t161 != -33019) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x753 = INT8_MIN;
	uint16_t x754 = 3317U;
	int64_t x755 = INT64_MIN;
	uint32_t x756 = UINT32_MAX;
	static int64_t t162 = -207373780735082LL;

    t162 = (x753-(x754-(x755%x756)));

    if (t162 != -2147487093LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x757 = 13;
	int8_t x758 = -4;
	int8_t x759 = INT8_MAX;
	int16_t x760 = INT16_MAX;

    t163 = (x757-(x758-(x759%x760)));

    if (t163 != 144) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x762 = 6U;
	int64_t x763 = -16023LL;
	int16_t x764 = INT16_MIN;
	int64_t t164 = 5972537971155LL;

    t164 = (x761-(x762-(x763%x764)));

    if (t164 != -15902LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x766 = INT16_MIN;
	static uint8_t x768 = UINT8_MAX;
	uint64_t t165 = 3LLU;

    t165 = (x765-(x766-(x767%x768)));

    if (t165 != 65630LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x769 = -451305;
	volatile int8_t x770 = 61;
	uint16_t x771 = UINT16_MAX;
	static int16_t x772 = 635;

    t166 = (x769-(x770-(x771%x772)));

    if (t166 != -451236) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x777 = 1;
	int16_t x778 = -1;
	int32_t x779 = INT32_MAX;
	static int32_t x780 = -1;
	volatile int32_t t167 = -291;

    t167 = (x777-(x778-(x779%x780)));

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x789 = INT32_MAX;
	int16_t x792 = -1;
	volatile uint64_t t168 = 26LLU;

    t168 = (x789-(x790-(x791%x792)));

    if (t168 != 37152768903014232LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x793 = INT16_MIN;
	uint32_t x794 = UINT32_MAX;
	static uint8_t x795 = 0U;
	static int8_t x796 = -1;
	uint32_t t169 = 1857U;

    t169 = (x793-(x794-(x795%x796)));

    if (t169 != 4294934529U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x801 = 1763U;
	uint16_t x802 = 5U;
	volatile int8_t x803 = INT8_MIN;
	uint64_t x804 = UINT64_MAX;
	uint64_t t170 = 316079596924938LLU;

    t170 = (x801-(x802-(x803%x804)));

    if (t170 != 1630LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x805 = 29U;
	int16_t x806 = -1;
	static int8_t x807 = 0;
	static volatile uint16_t x808 = 2U;
	uint32_t t171 = 5678U;

    t171 = (x805-(x806-(x807%x808)));

    if (t171 != 30U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x817 = -3306;
	uint16_t x818 = UINT16_MAX;
	uint64_t x819 = UINT64_MAX;
	uint64_t t172 = 521369358782236186LLU;

    t172 = (x817-(x818-(x819%x820)));

    if (t172 != 18446744073709515542LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x821 = -63499029451118LL;
	int32_t x824 = INT32_MAX;
	uint64_t t173 = 126LLU;

    t173 = (x821-(x822-(x823%x824)));

    if (t173 != 18446680515519290231LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x825 = UINT16_MAX;
	static int16_t x826 = -656;
	volatile int64_t x827 = INT64_MAX;
	int32_t x828 = INT32_MIN;

    t174 = (x825-(x826-(x827%x828)));

    if (t174 != 2147549838LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x833 = UINT32_MAX;
	int64_t x834 = 7551719292258759LL;
	static uint64_t x835 = UINT64_MAX;
	int64_t x836 = -1LL;
	static uint64_t t175 = 295922883LLU;

    t175 = (x833-(x834-(x835%x836)));

    if (t175 != 18439192358712260152LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x837 = UINT64_MAX;
	static volatile uint8_t x839 = 107U;
	uint32_t x840 = 3765U;
	static uint64_t t176 = 398039112740503LLU;

    t176 = (x837-(x838-(x839%x840)));

    if (t176 != 107LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x841 = UINT32_MAX;
	static int8_t x842 = INT8_MIN;
	int32_t x844 = -148;
	volatile uint32_t t177 = 22U;

    t177 = (x841-(x842-(x843%x844)));

    if (t177 != 274U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x845 = -2;
	uint32_t x847 = UINT32_MAX;
	uint16_t x848 = 19U;
	volatile uint32_t t178 = 5512421U;

    t178 = (x845-(x846-(x847%x848)));

    if (t178 != 131U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x853 = INT64_MIN;
	volatile int32_t x855 = INT32_MAX;
	static uint8_t x856 = UINT8_MAX;

    t179 = (x853-(x854-(x855%x856)));

    if (t179 != -9223372036854775276LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x857 = UINT16_MAX;
	uint64_t x859 = 521749171168893334LLU;
	uint64_t t180 = 141LLU;

    t180 = (x857-(x858-(x859%x860)));

    if (t180 != 18446744073706691128LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x861 = UINT64_MAX;
	static uint64_t x863 = UINT64_MAX;
	static int32_t x864 = -1;
	volatile uint64_t t181 = 28LLU;

    t181 = (x861-(x862-(x863%x864)));

    if (t181 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x865 = 631762913304817296LL;
	static volatile int16_t x867 = -8;
	uint8_t x868 = UINT8_MAX;
	volatile int64_t t182 = -100LL;

    t182 = (x865-(x866-(x867%x868)));

    if (t182 != 631762913304751753LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x869 = UINT16_MAX;
	int16_t x872 = 2326;
	volatile int32_t t183 = -15;

    t183 = (x869-(x870-(x871%x872)));

    if (t183 != 65536) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x873 = INT8_MIN;
	uint8_t x876 = UINT8_MAX;

    t184 = (x873-(x874-(x875%x876)));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x877 = 14U;
	int16_t x878 = -7249;
	int16_t x879 = -1;
	static int8_t x880 = -1;
	static volatile int32_t t185 = -1078489;

    t185 = (x877-(x878-(x879%x880)));

    if (t185 != 7263) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x881 = 1;
	uint8_t x882 = 0U;

    t186 = (x881-(x882-(x883%x884)));

    if (t186 != 2147483648LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x885 = INT32_MIN;
	uint16_t x887 = 40U;
	int64_t x888 = 2LL;

    t187 = (x885-(x886-(x887%x888)));

    if (t187 != -2147485457LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x889 = INT16_MAX;
	uint64_t x890 = UINT64_MAX;
	uint16_t x892 = 9323U;
	volatile uint64_t t188 = 810733LLU;

    t188 = (x889-(x890-(x891%x892)));

    if (t188 != 32770LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x893 = 0U;
	volatile int32_t x895 = INT32_MIN;
	static int32_t x896 = INT32_MIN;
	static int32_t t189 = -800476;

    t189 = (x893-(x894-(x895%x896)));

    if (t189 != -2147483647) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x899 = 385U;
	static int8_t x900 = 8;
	int64_t t190 = 546475061215507238LL;

    t190 = (x897-(x898-(x899%x900)));

    if (t190 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x901 = UINT64_MAX;
	int32_t x902 = INT32_MIN;
	uint64_t x903 = 16364590471LLU;
	int8_t x904 = 52;

    t191 = (x901-(x902-(x903%x904)));

    if (t191 != 2147483694LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x906 = 851530418686692133LLU;
	int8_t x907 = INT8_MIN;
	static volatile uint16_t x908 = UINT16_MAX;
	volatile uint64_t t192 = 20828746625LLU;

    t192 = (x905-(x906-(x907%x908)));

    if (t192 != 17595213655022859388LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x910 = -1;
	volatile int64_t x911 = -1LL;
	volatile int64_t t193 = -994167541327429LL;

    t193 = (x909-(x910-(x911%x912)));

    if (t193 != -2147483648LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x913 = 368;
	static int32_t x915 = INT32_MIN;
	volatile uint64_t t194 = 670LLU;

    t194 = (x913-(x914-(x915%x916)));

    if (t194 != 61787585848818956LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x917 = INT32_MAX;
	int8_t x918 = -6;
	static uint32_t x919 = 169U;
	volatile int64_t x920 = -1LL;
	volatile int64_t t195 = 7920LL;

    t195 = (x917-(x918-(x919%x920)));

    if (t195 != 2147483653LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x921 = UINT16_MAX;
	int32_t x922 = 34204;
	int8_t x923 = 0;
	int8_t x924 = -1;
	volatile int32_t t196 = 38570859;

    t196 = (x921-(x922-(x923%x924)));

    if (t196 != 31331) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x925 = -1;
	uint64_t x926 = 5LLU;
	uint8_t x927 = 3U;
	volatile int64_t x928 = 3LL;
	static uint64_t t197 = 1LLU;

    t197 = (x925-(x926-(x927%x928)));

    if (t197 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x929 = -31;
	volatile int32_t x930 = INT32_MAX;
	uint8_t x931 = 7U;
	uint32_t x932 = 369476369U;

    t198 = (x929-(x930-(x931%x932)));

    if (t198 != 2147483625U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x933 = -1LL;
	static volatile int16_t x934 = -1;
	volatile int8_t x935 = INT8_MIN;
	int16_t x936 = INT16_MIN;
	int64_t t199 = -3LL;

    t199 = (x933-(x934-(x935%x936)));

    if (t199 != -128LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

