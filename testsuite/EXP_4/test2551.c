
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

uint32_t x1 = UINT32_MAX;
int16_t x4 = -54;
static volatile uint8_t x10 = UINT8_MAX;
int32_t t3 = -43;
static int32_t x28 = INT32_MAX;
int64_t t5 = 732372913924828LL;
static int32_t x37 = 390514;
static volatile uint64_t x38 = 0LLU;
int32_t x43 = -1;
uint8_t x44 = UINT8_MAX;
static uint64_t x47 = 25LLU;
uint64_t x48 = UINT64_MAX;
uint64_t t9 = 2055251891793LLU;
volatile uint64_t t11 = 2899085LLU;
int8_t x82 = INT8_MIN;
uint64_t x127 = UINT64_MAX;
volatile uint64_t x130 = 3316684617LLU;
uint64_t x135 = 372395825111722LLU;
int8_t x138 = INT8_MIN;
volatile uint8_t x142 = 9U;
static int32_t x145 = 73979;
static uint16_t x154 = 22987U;
uint64_t x158 = 2LLU;
int32_t x163 = INT32_MIN;
int16_t x164 = INT16_MAX;
volatile int32_t t25 = 56820;
int64_t x166 = INT64_MIN;
uint64_t x167 = 13LLU;
uint64_t t26 = 4957171862911LLU;
static int8_t x175 = 1;
uint16_t x176 = UINT16_MAX;
static int32_t t28 = -8343957;
int8_t x178 = INT8_MAX;
static int8_t x182 = -4;
static uint32_t x183 = 194632U;
volatile uint8_t x184 = 2U;
static int8_t x188 = -1;
uint32_t x200 = UINT32_MAX;
int64_t t33 = -19058968640106LL;
int16_t x202 = -12526;
static int16_t x203 = INT16_MAX;
int64_t x204 = -30LL;
int64_t x207 = -1LL;
volatile int8_t x208 = 11;
volatile uint64_t t35 = 178LLU;
int8_t x209 = INT8_MAX;
int64_t t36 = -5671LL;
volatile int16_t x215 = -4369;
static uint32_t x218 = 12334048U;
volatile uint32_t t38 = 3U;
volatile int8_t x225 = -1;
static volatile int16_t x229 = INT16_MIN;
int64_t t41 = 1259085663791929807LL;
int32_t x237 = INT32_MIN;
static volatile uint64_t x239 = 36947490592517247LLU;
volatile uint64_t t42 = 15126LLU;
static uint8_t x244 = UINT8_MAX;
volatile int64_t t44 = -353739360LL;
int8_t x259 = 0;
int8_t x263 = INT8_MIN;
uint16_t x270 = UINT16_MAX;
static int32_t t48 = -19328;
int16_t x283 = 5;
int32_t x289 = INT32_MIN;
uint32_t x309 = UINT32_MAX;
uint64_t x311 = 10769386896552LLU;
volatile uint16_t x313 = 13073U;
int16_t x324 = -1;
int64_t x325 = -1LL;
int8_t x326 = INT8_MAX;
int16_t x327 = INT16_MIN;
static int16_t x328 = INT16_MIN;
volatile int32_t x341 = INT32_MIN;
int16_t x347 = INT16_MIN;
volatile int64_t t59 = -23LL;
static volatile int8_t x358 = INT8_MIN;
int64_t t62 = 26042LL;
static int8_t x362 = INT8_MIN;
static int8_t x363 = INT8_MIN;
volatile uint32_t t63 = 379745U;
uint32_t x368 = 7U;
uint64_t x378 = 6003070LLU;
static uint32_t x379 = UINT32_MAX;
uint16_t x381 = 1U;
uint16_t x383 = UINT16_MAX;
int8_t x384 = INT8_MIN;
int32_t x398 = INT32_MIN;
int64_t t71 = -32336556482876LL;
uint8_t x425 = 9U;
int16_t x437 = -1;
static uint32_t t75 = 21633750U;
uint32_t x446 = UINT32_MAX;
static int16_t x451 = INT16_MIN;
uint16_t x455 = UINT16_MAX;
uint64_t x465 = 3850812927420788991LLU;
int64_t x471 = -10925747LL;
uint32_t x472 = 449990U;
static volatile int8_t x475 = 23;
static volatile int32_t t85 = -1;
int32_t x497 = INT32_MIN;
volatile int64_t x499 = INT64_MIN;
int8_t x503 = 5;
static int64_t t89 = -3LL;
int8_t x505 = INT8_MIN;
uint32_t x507 = 26U;
int64_t x511 = INT64_MIN;
volatile uint64_t t91 = 254471838LLU;
int16_t x523 = -41;
int64_t t95 = 131830484633LL;
int64_t x542 = -4981952LL;
int16_t x553 = INT16_MAX;
uint32_t x556 = UINT32_MAX;
uint32_t x559 = UINT32_MAX;
static int32_t x560 = -1;
uint16_t x573 = 2U;
volatile int16_t x577 = 475;
uint32_t x580 = 2028656862U;
int64_t x582 = INT64_MIN;
uint32_t t105 = 3653384U;
uint64_t x594 = 71362644214525856LLU;
volatile int32_t x595 = INT32_MIN;
int16_t x600 = 0;
int32_t x604 = INT32_MIN;
static volatile uint64_t t108 = 95277789711201013LLU;
int8_t x607 = -1;
volatile int64_t t109 = -12LL;
int16_t x620 = 1353;
int32_t t111 = -368355;
int32_t x623 = -1;
volatile int64_t x625 = -8LL;
volatile int32_t x636 = INT32_MIN;
uint64_t t115 = 55069910LLU;
int64_t x657 = INT64_MIN;
static uint64_t t117 = 108503270223752LLU;
int8_t x664 = INT8_MIN;
int32_t t118 = 267968;
uint64_t x668 = 28375LLU;
volatile int32_t x674 = INT32_MAX;
static int16_t x685 = -1;
static uint8_t x686 = 52U;
static int32_t x702 = INT32_MIN;
volatile uint64_t t126 = 7409269944748224243LLU;
int8_t x723 = INT8_MAX;
int64_t x724 = -1121269LL;
int64_t x734 = 454437464LL;
int32_t x749 = INT32_MIN;
int8_t x753 = INT8_MIN;
uint8_t x755 = UINT8_MAX;
volatile int8_t x765 = 0;
uint8_t x770 = 1U;
static int32_t x771 = INT32_MAX;
int16_t x775 = -483;
int16_t x776 = -63;
int32_t x781 = -1;
static int8_t x782 = -1;
volatile int64_t x783 = -1LL;
int64_t t137 = 14492444LL;
uint8_t x785 = 1U;
int8_t x787 = -1;
int32_t x805 = INT32_MAX;
static uint8_t x807 = 2U;
int16_t x809 = INT16_MIN;
static uint16_t x811 = 95U;
uint16_t x816 = 1U;
static int8_t x829 = INT8_MAX;
volatile uint64_t x830 = UINT64_MAX;
static uint8_t x833 = 44U;
volatile uint32_t x835 = UINT32_MAX;
int8_t x842 = INT8_MIN;
volatile int32_t x848 = -2620894;
int16_t x852 = -1;
volatile uint64_t t150 = 30978263LLU;
int32_t x885 = 60;
static volatile int32_t x905 = INT32_MIN;
int64_t x906 = 35036129481LL;
int32_t x910 = 1;
volatile uint64_t t154 = 1284019LLU;
static int32_t x920 = INT32_MIN;
uint64_t x924 = 70376LLU;
uint32_t x926 = UINT32_MAX;
int64_t x931 = -1LL;
uint32_t x934 = UINT32_MAX;
int64_t x954 = 935169LL;
static int64_t x955 = 1848680909476210LL;
int32_t x971 = -1;
uint16_t x983 = 22U;
int64_t x987 = 63LL;
uint64_t x991 = 2771514483LLU;
int8_t x992 = INT8_MAX;
static volatile uint64_t t166 = 122LLU;
int32_t x994 = 28065;
uint64_t x995 = UINT64_MAX;
uint8_t x996 = UINT8_MAX;
int32_t x1005 = -23202362;
int32_t x1030 = -631796;
volatile int16_t x1036 = INT16_MAX;
volatile int16_t x1039 = -34;
int64_t x1056 = -1LL;
static volatile int16_t x1065 = 1;
volatile uint16_t x1066 = 859U;
static int16_t x1067 = -12;
uint64_t t177 = 1678193600721LLU;
int32_t x1073 = INT32_MIN;
volatile int64_t x1075 = -1LL;
volatile int16_t x1079 = 19;
int16_t x1083 = -1;
int32_t x1084 = -131397112;
int32_t x1086 = INT32_MIN;
int16_t x1088 = 14;
uint8_t x1090 = 0U;
volatile int64_t t183 = -140188228LL;
static int16_t x1098 = INT16_MAX;
uint64_t x1099 = 5207LLU;
uint32_t x1105 = UINT32_MAX;
uint32_t t186 = 1833U;
uint64_t x1115 = 2LLU;
static uint32_t x1117 = UINT32_MAX;
volatile int8_t x1129 = -1;
uint64_t x1145 = 22948142453LLU;
volatile int32_t x1147 = -1;
uint64_t t193 = 49652100721988LLU;
int8_t x1151 = INT8_MIN;
int8_t x1152 = 12;
int16_t x1156 = INT16_MIN;
int16_t x1165 = -1;
uint8_t x1168 = 99U;
int16_t x1172 = INT16_MIN;
uint8_t x1175 = UINT8_MAX;
uint8_t x1178 = 0U;
volatile uint32_t t199 = 158071123U;


void f0(void) {
    	volatile uint16_t x2 = UINT16_MAX;
	int8_t x3 = -1;
	static volatile uint32_t t0 = 3227130U;

    t0 = (x1*(x2+(x3^x4)));

    if (t0 != 4294901708U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 27661173197994387LLU;
	int64_t x11 = -1LL;
	int8_t x12 = INT8_MIN;
	static uint64_t t1 = 3108846773492LLU;

    t1 = (x9*(x10+(x11^x12)));

    if (t1 != 10566568161633855834LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = INT8_MAX;
	uint64_t x14 = 15644LLU;
	uint8_t x15 = 4U;
	int8_t x16 = INT8_MIN;
	uint64_t t2 = 3LLU;

    t2 = (x13*(x14+(x15^x16)));

    if (t2 != 1971040LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = -1;
	int16_t x18 = -1;
	int8_t x19 = -14;
	int16_t x20 = 0;

    t3 = (x17*(x18+(x19^x20)));

    if (t3 != 15) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = 508239U;
	int8_t x22 = INT8_MAX;
	uint32_t x23 = 3439U;
	uint64_t x24 = 33LLU;
	volatile uint64_t t4 = 3760385537LLU;

    t4 = (x21*(x22+(x23^x24)));

    if (t4 != 1795608387LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = -1;
	uint8_t x26 = UINT8_MAX;
	volatile int64_t x27 = INT64_MIN;

    t5 = (x25*(x26+(x27^x28)));

    if (t5 != 9223372034707291906LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x39 = -105;
	uint8_t x40 = 45U;
	volatile uint64_t t6 = 172074LLU;

    t6 = (x37*(x38+(x39^x40)));

    if (t6 != 18446744073682215636LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x41 = 3131856260294603LLU;
	static uint16_t x42 = 38U;
	uint64_t t7 = 1439713285435LLU;

    t7 = (x41*(x42+(x43^x44)));

    if (t7 != 17763999408965328162LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x45 = 1U;
	int16_t x46 = INT16_MAX;
	static uint64_t t8 = 2040884327521863899LLU;

    t8 = (x45*(x46+(x47^x48)));

    if (t8 != 32741LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x53 = 13588U;
	uint64_t x54 = 1021472LLU;
	int64_t x55 = INT64_MAX;
	static uint64_t x56 = UINT64_MAX;

    t9 = (x53*(x54+(x55^x56)));

    if (t9 != 13879761536LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x61 = INT8_MAX;
	uint64_t x62 = 67424677LLU;
	volatile uint64_t x63 = 8137755892585785912LLU;
	volatile int8_t x64 = -6;
	uint64_t t10 = 231421005436947LLU;

    t10 = (x61*(x62+(x63^x64)));

    if (t10 != 17969413851612564505LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x65 = UINT8_MAX;
	uint16_t x66 = 25U;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = -1;

    t11 = (x65*(x66+(x67^x68)));

    if (t11 != 6375LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x69 = 566;
	volatile uint32_t x70 = 14458U;
	uint32_t x71 = 971U;
	static int8_t x72 = INT8_MIN;
	uint32_t t12 = 9U;

    t12 = (x69*(x70+(x71^x72)));

    if (t12 != 7646094U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x81 = 3U;
	uint8_t x83 = 88U;
	volatile uint32_t x84 = 8782U;
	volatile uint32_t t13 = 12854U;

    t13 = (x81*(x82+(x83^x84)));

    if (t13 != 25794U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x101 = -1;
	volatile int32_t x102 = 14699;
	int64_t x103 = 28142691578819LL;
	int64_t x104 = INT64_MIN;
	int64_t t14 = 5923LL;

    t14 = (x101*(x102+(x103^x104)));

    if (t14 != 9223343894163182290LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x117 = 5168872U;
	uint16_t x118 = UINT16_MAX;
	volatile int32_t x119 = 5711;
	int8_t x120 = INT8_MAX;
	uint32_t t15 = 2477541U;

    t15 = (x117*(x118+(x119^x120)));

    if (t15 != 3028999320U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x125 = -2;
	uint16_t x126 = 200U;
	int64_t x128 = -1924148766836LL;
	uint64_t t16 = 260364097756701LLU;

    t16 = (x125*(x126+(x127^x128)));

    if (t16 != 18446740225412017546LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x129 = INT8_MIN;
	int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MAX;
	volatile uint64_t t17 = 0LLU;

    t17 = (x129*(x130+(x131^x132)));

    if (t17 != 18446743649173904384LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x133 = 36;
	int8_t x134 = INT8_MIN;
	uint8_t x136 = UINT8_MAX;
	static volatile uint64_t t18 = 7831LLU;

    t18 = (x133*(x134+(x135^x136)));

    if (t18 != 13406249704014324LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x137 = INT8_MAX;
	static int32_t x139 = -21875;
	uint32_t x140 = 57063767U;
	uint32_t t19 = 202606046U;

    t19 = (x137*(x138+(x139^x140)));

    if (t19 != 1341168038U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x141 = INT8_MIN;
	static int16_t x143 = -1;
	int8_t x144 = -26;
	int32_t t20 = -3784;

    t20 = (x141*(x142+(x143^x144)));

    if (t20 != -4352) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x146 = INT16_MAX;
	volatile int32_t x147 = INT32_MIN;
	uint64_t x148 = 73302306620LLU;
	volatile uint64_t t21 = 1210476183LLU;

    t21 = (x145*(x146+(x147^x148)));

    if (t21 != 18441204967672180441LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x149 = -1;
	int16_t x150 = -13;
	int8_t x151 = INT8_MIN;
	static int32_t x152 = -1;
	static int32_t t22 = -375;

    t22 = (x149*(x150+(x151^x152)));

    if (t22 != -114) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x153 = INT8_MIN;
	static volatile uint32_t x155 = 10U;
	volatile int64_t x156 = -29112LL;
	volatile int64_t t23 = 317033LL;

    t23 = (x153*(x154+(x155^x156)));

    if (t23 != 784768LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x157 = 0U;
	int8_t x159 = 37;
	volatile int64_t x160 = -1LL;
	static uint64_t t24 = 87LLU;

    t24 = (x157*(x158+(x159^x160)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x161 = -1;
	int8_t x162 = INT8_MAX;

    t25 = (x161*(x162+(x163^x164)));

    if (t25 != 2147450754) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x165 = 1806;
	uint16_t x168 = UINT16_MAX;

    t26 = (x165*(x166+(x167^x168)));

    if (t26 != 118332732LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x169 = -1;
	int16_t x170 = INT16_MIN;
	int64_t x171 = 0LL;
	volatile uint64_t x172 = UINT64_MAX;
	uint64_t t27 = 1653746082803LLU;

    t27 = (x169*(x170+(x171^x172)));

    if (t27 != 32769LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x173 = 2U;
	int8_t x174 = 2;

    t28 = (x173*(x174+(x175^x176)));

    if (t28 != 131072) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x177 = INT16_MAX;
	volatile int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MIN;
	volatile int32_t t29 = 1231732;

    t29 = (x177*(x178+(x179^x180)));

    if (t29 != 1073676289) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x181 = 37;
	uint32_t t30 = 1232U;

    t30 = (x181*(x182+(x183^x184)));

    if (t30 != 7201310U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x185 = -1;
	static int32_t x186 = -3976814;
	int32_t x187 = 10179847;
	int32_t t31 = -127068;

    t31 = (x185*(x186+(x187^x188)));

    if (t31 != 14156662) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x189 = 6940106875LL;
	static volatile int16_t x190 = 112;
	uint32_t x191 = 1U;
	uint16_t x192 = 25U;
	volatile int64_t t32 = -864726149320LL;

    t32 = (x189*(x190+(x191^x192)));

    if (t32 != 943854535000LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x197 = 7355U;
	int64_t x198 = 1819300480LL;
	volatile int32_t x199 = INT32_MIN;

    t33 = (x197*(x198+(x199^x200)));

    if (t33 != 29175697254085LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x201 = -1;
	static volatile int64_t t34 = -48LL;

    t34 = (x201*(x202+(x203^x204)));

    if (t34 != 45265LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x205 = 118750734566LLU;
	volatile int16_t x206 = INT16_MIN;

    t35 = (x205*(x206+(x207^x208)));

    if (t35 != 18442851424630478136LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x210 = INT8_MIN;
	volatile int64_t x211 = -1270LL;
	static uint32_t x212 = 48U;

    t36 = (x209*(x210+(x211^x212)));

    if (t36 != -171450LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MIN;
	volatile uint64_t x216 = 119LLU;
	uint64_t t37 = 1676310166912762899LLU;

    t37 = (x213*(x214+(x215^x216)));

    if (t37 != 150208512LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x217 = 0U;
	static volatile int16_t x219 = -1;
	int16_t x220 = 212;

    t38 = (x217*(x218+(x219^x220)));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x221 = -95;
	uint32_t x222 = UINT32_MAX;
	static volatile uint8_t x223 = UINT8_MAX;
	uint8_t x224 = 51U;
	volatile uint32_t t39 = 37038327U;

    t39 = (x221*(x222+(x223^x224)));

    if (t39 != 4294948011U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	volatile uint32_t x228 = 199802U;
	static volatile uint32_t t40 = 1U;

    t40 = (x225*(x226+(x227^x228)));

    if (t40 != 4294708348U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x230 = INT8_MIN;
	int32_t x231 = -1;
	volatile int64_t x232 = -1LL;

    t41 = (x229*(x230+(x231^x232)));

    if (t41 != 4194304LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x238 = INT8_MAX;
	static int8_t x240 = 7;

    t42 = (x237*(x238+(x239^x240)));

    if (t42 != 18298698700647563264LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x241 = -1LL;
	uint64_t x242 = 2972197683216LLU;
	static int16_t x243 = 1994;
	uint64_t t43 = 173284603774381LLU;

    t43 = (x241*(x242+(x243^x244)));

    if (t43 != 18446741101511866555LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x245 = 1LL;
	int64_t x246 = INT64_MIN;
	int64_t x247 = -109089590LL;
	int32_t x248 = INT32_MIN;

    t44 = (x245*(x246+(x247^x248)));

    if (t44 != -9223372034816381750LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x257 = INT16_MAX;
	int32_t x258 = 1;
	volatile int8_t x260 = 4;
	volatile int32_t t45 = -156;

    t45 = (x257*(x258+(x259^x260)));

    if (t45 != 163835) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x261 = 2;
	volatile int8_t x262 = 16;
	volatile int8_t x264 = -3;
	volatile int32_t t46 = -214615;

    t46 = (x261*(x262+(x263^x264)));

    if (t46 != 282) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x265 = INT8_MIN;
	volatile int16_t x266 = -1;
	uint8_t x267 = 78U;
	volatile int32_t x268 = 17466;
	int32_t t47 = -330480;

    t47 = (x265*(x266+(x267^x268)));

    if (t47 != -2242944) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x269 = 25U;
	static int16_t x271 = INT16_MAX;
	int16_t x272 = -769;

    t48 = (x269*(x270+(x271^x272)));

    if (t48 != 838375) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	uint16_t x284 = 1U;
	int32_t t49 = -7514181;

    t49 = (x281*(x282+(x283^x284)));

    if (t49 != 1073610752) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x290 = -1;
	uint64_t x291 = 174365764843456453LLU;
	static int64_t x292 = -480166920LL;
	volatile uint64_t t50 = 55164295LLU;

    t50 = (x289*(x290+(x291^x292)));

    if (t50 != 12642309911644995584LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x293 = UINT8_MAX;
	int32_t x294 = 137646911;
	uint8_t x295 = UINT8_MAX;
	uint32_t x296 = 464743U;
	uint32_t t51 = 2U;

    t51 = (x293*(x294+(x295^x296)));

    if (t51 != 858745897U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x305 = INT64_MIN;
	int64_t x306 = 1809507371LL;
	uint64_t x307 = 32910261LLU;
	int32_t x308 = -1;
	uint64_t t52 = 42861435157LLU;

    t52 = (x305*(x306+(x307^x308)));

    if (t52 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x310 = 7488;
	int64_t x312 = -1LL;
	uint64_t t53 = 12967872925882LLU;

    t53 = (x309*(x310+(x311^x312)));

    if (t53 != 10269661127587323753LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x314 = 34;
	volatile int8_t x315 = INT8_MAX;
	int32_t x316 = -1;
	static volatile int32_t t54 = -2283627;

    t54 = (x313*(x314+(x315^x316)));

    if (t54 != -1228862) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x321 = -98260002019541LL;
	int32_t x322 = INT32_MIN;
	static volatile int32_t x323 = INT32_MIN;
	int64_t t55 = 101LL;

    t55 = (x321*(x322+(x323^x324)));

    if (t55 != 98260002019541LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t t56 = 1066489700LL;

    t56 = (x325*(x326+(x327^x328)));

    if (t56 != -127LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x329 = INT32_MAX;
	int8_t x330 = INT8_MIN;
	uint64_t x331 = 12LLU;
	int16_t x332 = -1;
	uint64_t t57 = 294951415LLU;

    t57 = (x329*(x330+(x331^x332)));

    if (t57 != 18446743770914357389LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MAX;
	static int64_t x344 = INT64_MAX;
	int64_t t58 = 7419LL;

    t58 = (x341*(x342+(x343^x344)));

    if (t58 != 274877906944LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x345 = 15;
	int64_t x346 = -1LL;
	int16_t x348 = INT16_MAX;

    t59 = (x345*(x346+(x347^x348)));

    if (t59 != -30LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x349 = INT8_MAX;
	int32_t x350 = -282958;
	static volatile int64_t x351 = -10440793LL;
	int32_t x352 = INT32_MIN;
	volatile int64_t t60 = -22LL;

    t60 = (x349*(x350+(x351^x352)));

    if (t60 != 271368506919LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x353 = 464768134U;
	int32_t x354 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;
	uint32_t t61 = 2771618U;

    t61 = (x353*(x354+(x355^x356)));

    if (t61 != 639220992U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x357 = -1LL;
	uint16_t x359 = 1U;
	int16_t x360 = -22;

    t62 = (x357*(x358+(x359^x360)));

    if (t62 != 149LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x361 = -384902;
	uint32_t x364 = 4U;

    t63 = (x361*(x362+(x363^x364)));

    if (t63 != 96995304U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x365 = 1U;
	uint64_t x366 = 5308898256590LLU;
	int8_t x367 = 16;
	uint64_t t64 = 498LLU;

    t64 = (x365*(x366+(x367^x368)));

    if (t64 != 5308898256613LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x369 = -1;
	int64_t x370 = 1LL;
	uint64_t x371 = 5785024LLU;
	int8_t x372 = INT8_MIN;
	uint64_t t65 = 8213LLU;

    t65 = (x369*(x370+(x371^x372)));

    if (t65 != 5785023LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x377 = UINT8_MAX;
	int32_t x380 = INT32_MIN;
	uint64_t t66 = 8756LLU;

    t66 = (x377*(x378+(x379^x380)));

    if (t66 != 549139112835LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x382 = -1;
	int32_t t67 = 403415229;

    t67 = (x381*(x382+(x383^x384)));

    if (t67 != -65410) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x385 = INT16_MIN;
	static int32_t x386 = INT32_MAX;
	static uint16_t x387 = 3389U;
	int64_t x388 = 52987LL;
	volatile int64_t t68 = 1727310LL;

    t68 = (x385*(x386+(x387^x388)));

    if (t68 != -70370386411520LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x393 = -2499LL;
	int16_t x394 = 1;
	int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MAX;
	int64_t t69 = -1336404008427088LL;

    t69 = (x393*(x394+(x395^x396)));

    if (t69 != 81567360LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x397 = 1U;
	int32_t x399 = -27992;
	static volatile int32_t x400 = -142215;
	int32_t t70 = -45728;

    t70 = (x397*(x398+(x399^x400)));

    if (t70 != -2147334447) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x405 = 141U;
	int8_t x406 = INT8_MIN;
	static int64_t x407 = -1LL;
	int8_t x408 = -1;

    t71 = (x405*(x406+(x407^x408)));

    if (t71 != -18048LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x409 = INT8_MIN;
	volatile uint8_t x410 = 1U;
	uint8_t x411 = 64U;
	volatile int32_t x412 = -34498;
	int32_t t72 = 438;

    t72 = (x409*(x410+(x411^x412)));

    if (t72 != 4407424) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x426 = 11053LLU;
	int64_t x427 = INT64_MIN;
	int16_t x428 = 1;
	uint64_t t73 = 1519981436024994LLU;

    t73 = (x425*(x426+(x427^x428)));

    if (t73 != 9223372036854875294LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x429 = 1149894318U;
	int32_t x430 = INT32_MAX;
	int32_t x431 = INT32_MIN;
	int64_t x432 = -1LL;
	volatile int64_t t74 = -27577137945473232LL;

    t74 = (x429*(x430+(x431^x432)));

    if (t74 != 4938758487366435492LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x438 = 418U;
	int16_t x439 = 816;
	static uint32_t x440 = 1092968230U;

    t75 = (x437*(x438+(x439^x440)));

    if (t75 != 3201999432U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x441 = INT8_MIN;
	static int64_t x442 = INT64_MIN;
	int64_t x443 = INT64_MIN;
	int8_t x444 = INT8_MIN;
	int64_t t76 = -5657336344115LL;

    t76 = (x441*(x442+(x443^x444)));

    if (t76 != 16384LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x445 = 0U;
	volatile uint32_t x447 = UINT32_MAX;
	int32_t x448 = INT32_MAX;
	uint32_t t77 = 7688452U;

    t77 = (x445*(x446+(x447^x448)));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x449 = 520337355U;
	volatile int8_t x450 = INT8_MAX;
	volatile int32_t x452 = -1;
	volatile uint32_t t78 = 26U;

    t78 = (x449*(x450+(x451^x452)));

    if (t78 != 532280810U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x453 = 1732U;
	uint32_t x454 = 89950U;
	int8_t x456 = 0;
	volatile uint32_t t79 = 33510U;

    t79 = (x453*(x454+(x455^x456)));

    if (t79 != 269300020U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x461 = 11U;
	static int8_t x462 = INT8_MIN;
	uint32_t x463 = UINT32_MAX;
	static int16_t x464 = INT16_MIN;
	volatile uint32_t t80 = 36U;

    t80 = (x461*(x462+(x463^x464)));

    if (t80 != 359029U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x466 = INT8_MIN;
	static int64_t x467 = INT64_MAX;
	uint8_t x468 = 9U;
	uint64_t t81 = 15084273558LLU;

    t81 = (x465*(x466+(x467^x468)));

    if (t81 != 12766766190362891914LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x469 = INT8_MIN;
	int8_t x470 = INT8_MAX;
	int64_t t82 = 56550690847174769LL;

    t82 = (x469*(x470+(x471^x472)));

    if (t82 != 1345682176LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x473 = 105U;
	int8_t x474 = INT8_MIN;
	static uint8_t x476 = 9U;
	int32_t t83 = -21429;

    t83 = (x473*(x474+(x475^x476)));

    if (t83 != -10290) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x477 = UINT8_MAX;
	int8_t x478 = -1;
	static int64_t x479 = 3878180LL;
	uint32_t x480 = UINT32_MAX;
	volatile int64_t t84 = -205964LL;

    t84 = (x477*(x478+(x479^x480)));

    if (t84 != 1094227724070LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x481 = 3U;
	volatile uint8_t x482 = 2U;
	int8_t x483 = INT8_MAX;
	static volatile int16_t x484 = -1973;

    t85 = (x481*(x482+(x483^x484)));

    if (t85 != -5982) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x485 = 3871U;
	volatile int8_t x486 = -51;
	int16_t x487 = -3471;
	volatile uint16_t x488 = 1674U;
	volatile uint32_t t86 = 7U;

    t86 = (x485*(x486+(x487^x488)));

    if (t86 != 4283849784U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x493 = INT32_MIN;
	uint64_t x494 = UINT64_MAX;
	static int8_t x495 = -1;
	volatile int8_t x496 = 8;
	uint64_t t87 = 13318900979150232LLU;

    t87 = (x493*(x494+(x495^x496)));

    if (t87 != 21474836480LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x498 = INT64_MAX;
	int32_t x500 = 194;
	static volatile int64_t t88 = -99791285991LL;

    t88 = (x497*(x498+(x499^x500)));

    if (t88 != -414464344064LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x501 = -3;
	int16_t x502 = INT16_MIN;
	int64_t x504 = 92531574698553215LL;

    t89 = (x501*(x502+(x503^x504)));

    if (t89 != -277594724095561326LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x506 = -1;
	int8_t x508 = 14;
	uint32_t t90 = 1044527U;

    t90 = (x505*(x506+(x507^x508)));

    if (t90 != 4294964864U) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x509 = 1283481LLU;
	volatile int8_t x510 = -1;
	static int64_t x512 = INT64_MAX;

    t91 = (x509*(x510+(x511^x512)));

    if (t91 != 18446744073706984654LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x513 = 109U;
	uint16_t x514 = UINT16_MAX;
	uint64_t x515 = 58492617525LLU;
	static uint16_t x516 = 367U;
	uint64_t t92 = 13978951952714561LLU;

    t92 = (x513*(x514+(x515^x516)));

    if (t92 != 6375702429669LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x517 = INT16_MIN;
	uint8_t x518 = 43U;
	int32_t x519 = -1;
	int8_t x520 = INT8_MAX;
	int32_t t93 = -4091955;

    t93 = (x517*(x518+(x519^x520)));

    if (t93 != 2785280) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x521 = 659530682LLU;
	int32_t x522 = INT32_MIN;
	int64_t x524 = -47547243836695502LL;
	volatile uint64_t t94 = 550LLU;

    t94 = (x521*(x522+(x523^x524)));

    if (t94 != 8555752935948313442LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x525 = 969760239LL;
	uint16_t x526 = 484U;
	int32_t x527 = -1;
	static int8_t x528 = 0;

    t95 = (x525*(x526+(x527^x528)));

    if (t95 != 468394195437LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x537 = 14;
	uint8_t x538 = 1U;
	uint8_t x539 = 1U;
	static uint64_t x540 = UINT64_MAX;
	volatile uint64_t t96 = 4642707243LLU;

    t96 = (x537*(x538+(x539^x540)));

    if (t96 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x541 = INT16_MIN;
	static int8_t x543 = 2;
	static int16_t x544 = INT16_MAX;
	volatile int64_t t97 = -109643LL;

    t97 = (x541*(x542+(x543^x544)));

    if (t97 != 162174959616LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x554 = 2;
	uint32_t x555 = 11U;
	static uint32_t t98 = 45651338U;

    t98 = (x553*(x554+(x555^x556)));

    if (t98 != 4294639626U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x557 = INT32_MIN;
	static uint64_t x558 = UINT64_MAX;
	static volatile uint64_t t99 = 101159457632627LLU;

    t99 = (x557*(x558+(x559^x560)));

    if (t99 != 2147483648LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x561 = 2U;
	uint16_t x562 = 49U;
	uint8_t x563 = UINT8_MAX;
	uint16_t x564 = 10U;
	volatile int32_t t100 = -920695455;

    t100 = (x561*(x562+(x563^x564)));

    if (t100 != 588) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x569 = -1;
	static int8_t x570 = -1;
	static volatile uint32_t x571 = UINT32_MAX;
	static int8_t x572 = -1;
	volatile uint32_t t101 = 106583986U;

    t101 = (x569*(x570+(x571^x572)));

    if (t101 != 1U) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x574 = 1158LLU;
	uint8_t x575 = 17U;
	uint16_t x576 = UINT16_MAX;
	uint64_t t102 = 180421234479LLU;

    t102 = (x573*(x574+(x575^x576)));

    if (t102 != 133352LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x578 = INT16_MIN;
	uint64_t x579 = 131199LLU;
	static uint64_t t103 = 5934706027562720646LLU;

    t103 = (x577*(x578+(x579^x580)));

    if (t103 != 963534156475LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x581 = -1;
	int8_t x583 = INT8_MIN;
	volatile int16_t x584 = -686;
	int64_t t104 = -203426566239259324LL;

    t104 = (x581*(x582+(x583^x584)));

    if (t104 != 9223372036854775086LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x589 = 5141;
	volatile uint32_t x590 = 1083738246U;
	int8_t x591 = INT8_MAX;
	int8_t x592 = 7;

    t105 = (x589*(x590+(x591^x592)));

    if (t105 != 926356694U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x593 = -53;
	int8_t x596 = INT8_MAX;
	static uint64_t t106 = 1979401751222LLU;

    t106 = (x593*(x594+(x595^x596)));

    if (t106 != 14664524044156307861LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x597 = 426501921111110997LLU;
	int16_t x598 = INT16_MAX;
	int16_t x599 = INT16_MAX;
	uint64_t t107 = 36356073061908LLU;

    t107 = (x597*(x598+(x599^x600)));

    if (t107 != 3559626425577379158LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x601 = 342785U;
	volatile int8_t x602 = -13;
	uint64_t x603 = 360067526428LLU;

    t108 = (x601*(x602+(x603^x604)));

    if (t108 != 18323567884688024591LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x605 = -1LL;
	int32_t x606 = -3;
	uint16_t x608 = 3109U;

    t109 = (x605*(x606+(x607^x608)));

    if (t109 != 3113LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x609 = 71899U;
	uint16_t x610 = UINT16_MAX;
	uint64_t x611 = 8086LLU;
	int32_t x612 = INT32_MIN;
	uint64_t t110 = 164031191LLU;

    t110 = (x609*(x610+(x611^x612)));

    if (t110 != 18446589677076020343LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x617 = -1350;
	uint16_t x618 = 14050U;
	int8_t x619 = INT8_MIN;

    t111 = (x617*(x618+(x619^x620)));

    if (t111 != -17165250) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x621 = -1;
	int32_t x622 = -1;
	uint32_t x624 = UINT32_MAX;
	static volatile uint32_t t112 = 2U;

    t112 = (x621*(x622+(x623^x624)));

    if (t112 != 1U) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x626 = INT8_MAX;
	static volatile int16_t x627 = INT16_MIN;
	static uint8_t x628 = UINT8_MAX;
	static volatile int64_t t113 = 385275858740LL;

    t113 = (x625*(x626+(x627^x628)));

    if (t113 != 259088LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x633 = INT8_MAX;
	int64_t x634 = -1LL;
	static int64_t x635 = -1LL;
	int64_t t114 = 25643986191LL;

    t114 = (x633*(x634+(x635^x636)));

    if (t114 != 272730423042LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x645 = INT32_MIN;
	volatile uint64_t x646 = UINT64_MAX;
	uint64_t x647 = 1LLU;
	volatile int8_t x648 = INT8_MAX;

    t115 = (x645*(x646+(x647^x648)));

    if (t115 != 18446743805274095616LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x649 = 72U;
	static uint32_t x650 = 1559181U;
	static volatile int16_t x651 = -1;
	volatile int32_t x652 = INT32_MAX;
	volatile uint32_t t116 = 492U;

    t116 = (x649*(x650+(x651^x652)));

    if (t116 != 112261032U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x658 = -1;
	int8_t x659 = INT8_MIN;
	uint64_t x660 = UINT64_MAX;

    t117 = (x657*(x658+(x659^x660)));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x661 = -1;
	int8_t x662 = INT8_MIN;
	int32_t x663 = 168327806;

    t118 = (x661*(x662+(x663^x664)));

    if (t118 != 168327810) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x665 = 11651U;
	int32_t x666 = INT32_MAX;
	static int16_t x667 = INT16_MIN;
	volatile uint64_t t119 = 1498614348LLU;

    t119 = (x665*(x666+(x667^x668)));

    if (t119 != 25020280788354LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x669 = INT8_MIN;
	volatile int32_t x670 = 186;
	static int64_t x671 = -1LL;
	int32_t x672 = INT32_MIN;
	static volatile int64_t t120 = -28452003417097LL;

    t120 = (x669*(x670+(x671^x672)));

    if (t120 != -274877930624LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x673 = INT8_MIN;
	static uint8_t x675 = UINT8_MAX;
	uint64_t x676 = UINT64_MAX;
	volatile uint64_t t121 = 2627887LLU;

    t121 = (x673*(x674+(x675^x676)));

    if (t121 != 18446743798831677568LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x677 = UINT32_MAX;
	uint16_t x678 = 7875U;
	static volatile uint64_t x679 = 2941159479601LLU;
	static uint64_t x680 = UINT64_MAX;
	uint64_t t122 = 175694572353917LLU;

    t122 = (x677*(x678+(x679^x680)));

    if (t122 != 3835950044100688495LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x687 = INT8_MAX;
	volatile int64_t x688 = -1LL;
	int64_t t123 = -60LL;

    t123 = (x685*(x686+(x687^x688)));

    if (t123 != 76LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x697 = -961562588937032775LL;
	int8_t x698 = 1;
	uint16_t x699 = 219U;
	volatile uint64_t x700 = 1455565094102915LLU;
	static uint64_t t124 = 4372288303812359730LLU;

    t124 = (x697*(x698+(x699^x700)));

    if (t124 != 16947896573735346769LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x701 = 124069U;
	uint16_t x703 = 944U;
	int16_t x704 = INT16_MAX;
	static uint32_t t125 = 1496052050U;

    t125 = (x701*(x702+(x703^x704)));

    if (t125 != 1800764139U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x713 = 5;
	uint64_t x714 = 18656LLU;
	volatile uint32_t x715 = 1690U;
	int64_t x716 = -1LL;

    t126 = (x713*(x714+(x715^x716)));

    if (t126 != 84825LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x721 = INT32_MIN;
	int8_t x722 = INT8_MIN;
	int64_t t127 = 10LL;

    t127 = (x721*(x722+(x723^x724)));

    if (t127 != 2407956234633216LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x729 = INT8_MIN;
	static int32_t x730 = 48645;
	static uint16_t x731 = 3U;
	volatile int8_t x732 = INT8_MIN;
	int32_t t128 = 34002;

    t128 = (x729*(x730+(x731^x732)));

    if (t128 != -6210560) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x733 = 23U;
	int8_t x735 = 1;
	static uint16_t x736 = 2U;
	int64_t t129 = 3042570674174LL;

    t129 = (x733*(x734+(x735^x736)));

    if (t129 != 10452061741LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x741 = -8;
	int16_t x742 = INT16_MAX;
	static int8_t x743 = INT8_MAX;
	uint16_t x744 = UINT16_MAX;
	volatile int32_t t130 = -10013406;

    t130 = (x741*(x742+(x743^x744)));

    if (t130 != -785400) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x745 = 3U;
	static uint64_t x746 = 16255731LLU;
	int16_t x747 = 0;
	static int8_t x748 = INT8_MAX;
	static volatile uint64_t t131 = 432923618724LLU;

    t131 = (x745*(x746+(x747^x748)));

    if (t131 != 48767574LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x750 = -1;
	int64_t x751 = 3322260LL;
	int16_t x752 = INT16_MIN;
	static volatile int64_t t132 = -20240LL;

    t132 = (x749*(x750+(x751^x752)));

    if (t132 != 7150358191144960LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x754 = INT16_MIN;
	volatile int8_t x756 = INT8_MIN;
	volatile int32_t t133 = 1745;

    t133 = (x753*(x754+(x755^x756)));

    if (t133 != 4210816) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x766 = 153916412LL;
	int64_t x767 = INT64_MAX;
	volatile int8_t x768 = INT8_MIN;
	int64_t t134 = -28437631418686LL;

    t134 = (x765*(x766+(x767^x768)));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x769 = INT16_MAX;
	uint64_t x772 = UINT64_MAX;
	uint64_t t135 = 278675022105774LLU;

    t135 = (x769*(x770+(x771^x772)));

    if (t135 != 18446673707112890367LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x773 = 17914U;
	uint64_t x774 = UINT64_MAX;
	uint64_t t136 = 8027286834416LLU;

    t136 = (x773*(x774+(x775^x776)));

    if (t136 != 8509150LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x784 = 1;

    t137 = (x781*(x782+(x783^x784)));

    if (t137 != 3LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x786 = 120358701U;
	uint64_t x788 = UINT64_MAX;
	static uint64_t t138 = 992079LLU;

    t138 = (x785*(x786+(x787^x788)));

    if (t138 != 120358701LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x793 = -1LL;
	int16_t x794 = 255;
	int32_t x795 = -1;
	uint64_t x796 = 1LLU;
	static volatile uint64_t t139 = 674LLU;

    t139 = (x793*(x794+(x795^x796)));

    if (t139 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x797 = INT16_MIN;
	static int8_t x798 = -27;
	uint8_t x799 = UINT8_MAX;
	int16_t x800 = INT16_MIN;
	int32_t t140 = 75;

    t140 = (x797*(x798+(x799^x800)));

    if (t140 != 1066270720) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x806 = -1;
	int64_t x808 = 2706098247LL;
	volatile int64_t t141 = -217LL;

    t141 = (x805*(x806+(x807^x808)));

    if (t141 != 5811301726165415868LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x810 = 118740457195LL;
	uint64_t x812 = UINT64_MAX;
	uint64_t t142 = 153076643LLU;

    t142 = (x809*(x810+(x811^x812)));

    if (t142 != 18442853186411331584LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x813 = -1LL;
	volatile uint64_t x814 = 114326173LLU;
	int64_t x815 = INT64_MIN;
	volatile uint64_t t143 = 3877LLU;

    t143 = (x813*(x814+(x815^x816)));

    if (t143 != 9223372036740449634LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x831 = 38779907;
	int32_t x832 = 788960421;
	uint64_t t144 = 167529083231260686LLU;

    t144 = (x829*(x830+(x831^x832)));

    if (t144 != 96490695131LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x834 = 5074U;
	uint8_t x836 = 0U;
	volatile uint32_t t145 = 10523U;

    t145 = (x833*(x834+(x835^x836)));

    if (t145 != 223212U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x841 = -1;
	volatile uint8_t x843 = 1U;
	int32_t x844 = INT32_MAX;
	volatile int32_t t146 = 0;

    t146 = (x841*(x842+(x843^x844)));

    if (t146 != -2147483518) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x845 = -1;
	int32_t x846 = INT32_MIN;
	int32_t x847 = -1328;
	volatile int32_t t147 = -12342;

    t147 = (x845*(x846+(x847^x848)));

    if (t147 != 2144864014) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x849 = INT32_MIN;
	int8_t x850 = INT8_MAX;
	uint64_t x851 = 296LLU;
	volatile uint64_t t148 = 876610592345LLU;

    t148 = (x849*(x850+(x851^x852)));

    if (t148 != 365072220160LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x865 = UINT64_MAX;
	int16_t x866 = INT16_MIN;
	static int8_t x867 = INT8_MIN;
	static int64_t x868 = INT64_MIN;
	uint64_t t149 = 620LLU;

    t149 = (x865*(x866+(x867^x868)));

    if (t149 != 9223372036854808704LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x873 = -1;
	uint64_t x874 = 2648LLU;
	static int32_t x875 = -3;
	volatile int8_t x876 = -1;

    t150 = (x873*(x874+(x875^x876)));

    if (t150 != 18446744073709548966LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x886 = 0U;
	static volatile int64_t x887 = -1LL;
	static volatile int8_t x888 = -1;
	volatile int64_t t151 = 200593472892LL;

    t151 = (x885*(x886+(x887^x888)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x907 = -1;
	uint64_t x908 = UINT64_MAX;
	uint64_t t152 = 3608LLU;

    t152 = (x905*(x906+(x907^x908)));

    if (t152 != 16994205218889531392LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x909 = INT8_MIN;
	volatile uint32_t x911 = 2854U;
	int32_t x912 = INT32_MAX;
	volatile uint32_t t153 = 1U;

    t153 = (x909*(x910+(x911^x912)));

    if (t153 != 365312U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x913 = UINT64_MAX;
	uint16_t x914 = UINT16_MAX;
	static uint16_t x915 = 118U;
	int32_t x916 = -1;

    t154 = (x913*(x914+(x915^x916)));

    if (t154 != 18446744073709486200LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x917 = UINT8_MAX;
	int64_t x918 = 2030459390793LL;
	uint64_t x919 = UINT64_MAX;
	volatile uint64_t t155 = 85508207905131077LLU;

    t155 = (x917*(x918+(x919^x920)));

    if (t155 != 518314752982200LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x921 = UINT16_MAX;
	uint8_t x922 = 18U;
	static volatile uint32_t x923 = 3U;
	volatile uint64_t t156 = 1051697266082LLU;

    t156 = (x921*(x922+(x923^x924)));

    if (t156 != 4613467395LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x925 = INT16_MIN;
	int32_t x927 = INT32_MIN;
	uint32_t x928 = 12617643U;
	volatile uint32_t t157 = 116U;

    t157 = (x925*(x926+(x927^x928)));

    if (t157 != 3156934656U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x929 = INT32_MIN;
	static uint16_t x930 = 726U;
	int32_t x932 = INT32_MIN;
	static volatile int64_t t158 = 629560698LL;

    t158 = (x929*(x930+(x931^x932)));

    if (t158 != -4611687575353032704LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x933 = INT8_MIN;
	int8_t x935 = INT8_MIN;
	int8_t x936 = -1;
	volatile uint32_t t159 = 1U;

    t159 = (x933*(x934+(x935^x936)));

    if (t159 != 4294951168U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x941 = 1661;
	int8_t x942 = 12;
	int64_t x943 = INT64_MIN;
	static uint64_t x944 = UINT64_MAX;
	uint64_t t160 = 1LLU;

    t160 = (x941*(x942+(x943^x944)));

    if (t160 != 9223372036854794079LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x945 = UINT16_MAX;
	int64_t x946 = 5214981102LL;
	volatile int8_t x947 = 49;
	uint16_t x948 = UINT16_MAX;
	volatile int64_t t161 = 69148LL;

    t161 = (x945*(x946+(x947^x948)));

    if (t161 != 341768078144580LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x953 = 1681569786507475LLU;
	uint32_t x956 = 139647U;
	static uint64_t t162 = 16LLU;

    t162 = (x953*(x954+(x955^x956)));

    if (t162 != 4386333565517011594LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x969 = INT8_MIN;
	static uint8_t x970 = UINT8_MAX;
	volatile int16_t x972 = INT16_MIN;
	int32_t t163 = -30121;

    t163 = (x969*(x970+(x971^x972)));

    if (t163 != -4226816) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x981 = -1;
	int16_t x982 = INT16_MIN;
	volatile uint16_t x984 = UINT16_MAX;
	int32_t t164 = -1;

    t164 = (x981*(x982+(x983^x984)));

    if (t164 != -32745) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x985 = INT32_MAX;
	int32_t x986 = INT32_MIN;
	uint16_t x988 = UINT16_MAX;
	int64_t t165 = 15646551313053LL;

    t165 = (x985*(x986+(x987^x988)));

    if (t165 != -4611545416230567872LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x989 = UINT8_MAX;
	volatile int32_t x990 = INT32_MAX;

    t166 = (x989*(x990+(x991^x992)));

    if (t166 != 1254344496885LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x993 = -5;
	uint64_t t167 = 29871LLU;

    t167 = (x993*(x994+(x995^x996)));

    if (t167 != 18446744073709412571LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1001 = INT16_MAX;
	volatile int16_t x1002 = -626;
	int8_t x1003 = -1;
	int8_t x1004 = -1;
	static volatile int32_t t168 = -380;

    t168 = (x1001*(x1002+(x1003^x1004)));

    if (t168 != -20512142) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x1006 = 15988203LL;
	uint64_t x1007 = 59LLU;
	uint16_t x1008 = 152U;
	volatile uint64_t t169 = 264938987112329365LLU;

    t169 = (x1005*(x1006+(x1007^x1008)));

    if (t169 != 18446373105853831124LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1025 = -1;
	int8_t x1026 = 9;
	static int32_t x1027 = 2057587;
	int16_t x1028 = -18;
	volatile int32_t t170 = -2;

    t170 = (x1025*(x1026+(x1027^x1028)));

    if (t170 != 2057562) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1029 = 369815911U;
	volatile int64_t x1031 = -1LL;
	int16_t x1032 = INT16_MAX;
	int64_t t171 = 7033347816LL;

    t171 = (x1029*(x1030+(x1031^x1032)));

    if (t171 != -245766341077804LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1033 = 5795;
	int32_t x1034 = INT32_MIN;
	int32_t x1035 = INT32_MAX;
	volatile int32_t t172 = 1;

    t172 = (x1033*(x1034+(x1035^x1036)));

    if (t172 != -189890560) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x1037 = UINT16_MAX;
	int64_t x1038 = -62673208719LL;
	static uint16_t x1040 = 19U;
	volatile int64_t t173 = 53235811214561LL;

    t173 = (x1037*(x1038+(x1039^x1040)));

    if (t173 != -4107288736741950LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x1053 = UINT8_MAX;
	int32_t x1054 = 3609097;
	static uint8_t x1055 = 36U;
	int64_t t174 = -2140096482856407LL;

    t174 = (x1053*(x1054+(x1055^x1056)));

    if (t174 != 920310300LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1057 = INT16_MAX;
	static uint32_t x1058 = 29416U;
	int16_t x1059 = INT16_MAX;
	volatile int32_t x1060 = -19206118;
	uint32_t t175 = 2289U;

    t175 = (x1057*(x1058+(x1059^x1060)));

    if (t175 != 2190179635U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1068 = 928769176285218522LLU;
	volatile uint64_t t176 = 4112943594024209774LLU;

    t176 = (x1065*(x1066+(x1067^x1068)));

    if (t176 != 17517974897424333961LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1069 = INT8_MAX;
	uint64_t x1070 = UINT64_MAX;
	volatile uint32_t x1071 = 5931U;
	volatile int32_t x1072 = 5469187;

    t177 = (x1069*(x1070+(x1071^x1072)));

    if (t177 != 694038617LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1074 = -3;
	int32_t x1076 = INT32_MIN;
	volatile int64_t t178 = 786670419LL;

    t178 = (x1073*(x1074+(x1075^x1076)));

    if (t178 != -4611686009837453312LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x1077 = UINT8_MAX;
	int8_t x1078 = INT8_MIN;
	volatile int16_t x1080 = -1;
	volatile int32_t t179 = 830;

    t179 = (x1077*(x1078+(x1079^x1080)));

    if (t179 != -37740) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1081 = 16349387LLU;
	static volatile uint64_t x1082 = 5272122465LLU;
	volatile uint64_t t180 = 951219708080LLU;

    t180 = (x1081*(x1082+(x1083^x1084)));

    if (t180 != 88344232710099912LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1085 = INT32_MAX;
	uint64_t x1087 = 44740459LLU;
	static volatile uint64_t t181 = 230179696037LLU;

    t181 = (x1085*(x1086+(x1087^x1088)));

    if (t181 != 13931137448606519451LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1089 = 19U;
	int8_t x1091 = INT8_MIN;
	static uint16_t x1092 = 396U;
	static volatile int32_t t182 = -888;

    t182 = (x1089*(x1090+(x1091^x1092)));

    if (t182 != -9500) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1093 = INT16_MIN;
	volatile uint32_t x1094 = UINT32_MAX;
	int64_t x1095 = 11267557037429LL;
	static volatile int8_t x1096 = INT8_MIN;

    t183 = (x1093*(x1094+(x1095^x1096)));

    if (t183 != 369074571510677504LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1097 = INT32_MAX;
	int16_t x1100 = -2387;
	volatile uint64_t t184 = 4LLU;

    t184 = (x1097*(x1098+(x1099^x1100)));

    if (t184 != 54410793164039LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1106 = -1;
	int8_t x1107 = INT8_MIN;
	uint16_t x1108 = 49U;
	uint32_t t185 = 45281875U;

    t185 = (x1105*(x1106+(x1107^x1108)));

    if (t185 != 80U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1109 = 462U;
	int16_t x1110 = INT16_MIN;
	uint32_t x1111 = UINT32_MAX;
	static volatile int16_t x1112 = INT16_MIN;

    t186 = (x1109*(x1110+(x1111^x1112)));

    if (t186 != 4294966834U) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x1113 = INT64_MIN;
	uint32_t x1114 = 18956U;
	static int32_t x1116 = 30632516;
	volatile uint64_t t187 = 239675606425563LLU;

    t187 = (x1113*(x1114+(x1115^x1116)));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1118 = 22;
	uint8_t x1119 = UINT8_MAX;
	static int16_t x1120 = -32;
	uint32_t t188 = 37664760U;

    t188 = (x1117*(x1118+(x1119^x1120)));

    if (t188 != 203U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x1130 = UINT16_MAX;
	static uint32_t x1131 = 82350775U;
	uint64_t x1132 = UINT64_MAX;
	volatile uint64_t t189 = 1LLU;

    t189 = (x1129*(x1130+(x1131^x1132)));

    if (t189 != 82285241LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x1133 = -1;
	uint16_t x1134 = 19U;
	int16_t x1135 = INT16_MIN;
	uint32_t x1136 = 39U;
	volatile uint32_t t190 = 133242U;

    t190 = (x1133*(x1134+(x1135^x1136)));

    if (t190 != 32710U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1137 = INT32_MIN;
	int64_t x1138 = -19586160LL;
	int8_t x1139 = INT8_MIN;
	static volatile int16_t x1140 = INT16_MAX;
	static int64_t t191 = -2024833LL;

    t191 = (x1137*(x1138+(x1139^x1140)));

    if (t191 != 42131054340866048LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x1141 = 122;
	uint8_t x1142 = 0U;
	uint32_t x1143 = 1962691U;
	uint32_t x1144 = 59998U;
	uint32_t t192 = 22230U;

    t192 = (x1141*(x1142+(x1143^x1144)));

    if (t192 != 232635090U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x1146 = -4970298001294LL;
	int8_t x1148 = INT8_MIN;

    t193 = (x1145*(x1146+(x1147^x1148)));

    if (t193 != 15558787178390950693LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1149 = 60;
	uint64_t x1150 = 252065133344412071LLU;
	volatile uint64_t t194 = 6600421688LLU;

    t194 = (x1149*(x1150+(x1151^x1152)));

    if (t194 != 15123908000664717300LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x1153 = 31U;
	int8_t x1154 = INT8_MAX;
	uint32_t x1155 = 382104U;
	static volatile uint32_t t195 = 31U;

    t195 = (x1153*(x1154+(x1155^x1156)));

    if (t195 != 4283452873U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1166 = -2892;
	int32_t x1167 = -1;
	static int32_t t196 = -658352;

    t196 = (x1165*(x1166+(x1167^x1168)));

    if (t196 != 2992) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1169 = -21;
	int64_t x1170 = 5LL;
	int32_t x1171 = INT32_MIN;
	static int64_t t197 = 20983589874LL;

    t197 = (x1169*(x1170+(x1171^x1172)));

    if (t197 != -45096468585LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1173 = 28049LLU;
	int8_t x1174 = INT8_MIN;
	uint8_t x1176 = UINT8_MAX;
	volatile uint64_t t198 = 8178298912LLU;

    t198 = (x1173*(x1174+(x1175^x1176)));

    if (t198 != 18446744073705961344LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x1177 = 127776454U;
	volatile int8_t x1179 = -30;
	static uint16_t x1180 = 4U;

    t199 = (x1177*(x1178+(x1179^x1180)));

    if (t199 != 972779492U) { NG(); } else { ; }
	
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

