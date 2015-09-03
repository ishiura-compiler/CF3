#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
volatile int32_t x7 = INT32_MIN;
uint16_t x13 = 3U;
static int8_t x16 = INT8_MAX;
uint8_t x18 = 32U;
int64_t t3 = -31LL;
uint64_t x22 = 23312LLU;
volatile int16_t x23 = -1;
static int64_t x27 = 3034LL;
volatile int64_t t7 = -1414435790LL;
volatile int8_t x40 = 2;
uint32_t x42 = 126U;
volatile uint32_t t9 = 457720U;
volatile int8_t x48 = -1;
uint16_t x52 = 13U;
int64_t x53 = INT64_MAX;
int64_t x64 = -1LL;
int16_t x69 = -664;
int32_t x76 = INT32_MIN;
uint32_t x80 = 48U;
static uint64_t t18 = 5574LLU;
int16_t x92 = 13246;
uint16_t x93 = UINT16_MAX;
static volatile int64_t t22 = 0LL;
int32_t x98 = INT32_MAX;
uint64_t x99 = 109636428230622LLU;
uint64_t t24 = 2095744LLU;
static uint64_t x107 = 407038411210419LLU;
int16_t x116 = INT16_MIN;
uint64_t x117 = 2129404483083409885LLU;
uint64_t x118 = 68893701541469LLU;
static int64_t x119 = -1LL;
static volatile uint64_t t28 = 4215LLU;
int64_t x122 = INT64_MAX;
int32_t x126 = -3818076;
int64_t t30 = INT64_MIN;
uint64_t x129 = 253045838781LLU;
int64_t x137 = -1LL;
uint32_t x139 = 96U;
volatile int8_t x142 = INT8_MAX;
int8_t x154 = INT8_MIN;
int64_t x158 = INT64_MAX;
static volatile int64_t t37 = 3014LL;
uint16_t x162 = 472U;
static uint32_t x163 = 5U;
int8_t x167 = INT8_MIN;
uint64_t x168 = 271676LLU;
static uint8_t x170 = UINT8_MAX;
uint16_t x171 = 2U;
int8_t x173 = -1;
int64_t x176 = INT64_MIN;
uint64_t x184 = UINT64_MAX;
int8_t x187 = INT8_MIN;
int16_t x188 = -1;
volatile uint16_t x194 = UINT16_MAX;
static int64_t x195 = -1LL;
int8_t x196 = -7;
uint64_t x200 = UINT64_MAX;
uint32_t x212 = UINT32_MAX;
static int64_t t50 = -7810374908LL;
volatile int16_t x215 = INT16_MIN;
int16_t x221 = INT16_MIN;
int8_t x224 = -1;
int16_t x226 = 9;
int64_t t54 = -100506LL;
int16_t x251 = INT16_MIN;
uint64_t x252 = UINT64_MAX;
int16_t x264 = -1;
static uint8_t x265 = UINT8_MAX;
static volatile uint32_t t63 = 331U;
static uint8_t x275 = 49U;
int16_t x287 = INT16_MAX;
volatile int64_t x290 = -273585067LL;
static int16_t x291 = INT16_MAX;
static volatile int32_t x293 = INT32_MIN;
static int16_t x296 = -1;
volatile uint32_t x300 = UINT32_MAX;
volatile int16_t x310 = INT16_MIN;
int32_t x324 = -203;
int32_t t76 = -3;
volatile uint8_t x334 = 18U;
uint16_t x341 = 4U;
int64_t x344 = 7LL;
volatile uint64_t t82 = 27462339201050LLU;
uint32_t x355 = 24218426U;
int16_t x356 = 603;
volatile int16_t x358 = INT16_MIN;
volatile int16_t x367 = 1281;
int32_t x372 = INT32_MAX;
uint8_t x377 = 0U;
uint64_t t91 = 916285532589210349LLU;
int16_t x386 = INT16_MIN;
int64_t x388 = 435LL;
volatile int8_t x389 = INT8_MIN;
volatile uint64_t x392 = UINT64_MAX;
uint32_t t94 = 98U;
int32_t x399 = INT32_MIN;
static int64_t x413 = INT64_MIN;
uint16_t x415 = 29339U;
static volatile uint16_t x416 = 2U;
static volatile int64_t t99 = 258297232787143LL;


void f0(void) {
	int64_t x6 = INT64_MIN;
	uint32_t x8 = 510993U;
	static int64_t t0 = 1374499515LL;

	t0 = ((x5^(x6/x7))^x8);

	if (t0 != -4295472111LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MAX;
	static int64_t x10 = -27LL;
	int16_t x11 = INT16_MAX;
	static int8_t x12 = 0;
	int64_t t1 = INT64_MAX;

	t1 = ((x9^(x10/x11))^x12);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x14 = INT64_MIN;
	static volatile uint16_t x15 = 19906U;
	int64_t t2 = -171385406112466675LL;

	t2 = ((x13^(x14/x15))^x16);

	if (t2 != -463346329591928LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = INT64_MAX;
	int64_t x19 = -6022724LL;
	uint32_t x20 = 18617U;

	t3 = ((x17^(x18/x19))^x20);

	if (t3 != 9223372036854757190LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 14431976498LL;
	uint8_t x24 = 0U;
	volatile uint64_t t4 = 52645LLU;

	t4 = ((x21^(x22/x23))^x24);

	if (t4 != 14431976498LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	static uint16_t x26 = 26179U;
	volatile int8_t x28 = -1;
	int64_t t5 = -54193053714842LL;

	t5 = ((x25^(x26/x27))^x28);

	if (t5 != 8LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = 3434;
	int16_t x30 = INT16_MAX;
	static uint16_t x31 = 814U;
	int64_t x32 = -1LL;
	int64_t t6 = -5LL;

	t6 = ((x29^(x30/x31))^x32);

	if (t6 != -3395LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -377965631LL;
	int8_t x34 = -2;
	volatile uint16_t x35 = UINT16_MAX;
	int32_t x36 = INT32_MAX;

	t7 = ((x33^(x34/x35))^x36);

	if (t7 != -1769518018LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -55;
	int8_t x38 = INT8_MIN;
	volatile int64_t x39 = INT64_MIN;
	volatile int64_t t8 = -411235599006354503LL;

	t8 = ((x37^(x38/x39))^x40);

	if (t8 != -53LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int32_t x43 = INT32_MAX;
	int32_t x44 = INT32_MIN;

	t9 = ((x41^(x42/x43))^x44);

	if (t9 != 2147483520U) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = INT8_MIN;
	volatile uint16_t x46 = 187U;
	int8_t x47 = INT8_MIN;
	int32_t t10 = 1069;

	t10 = ((x45^(x46/x47))^x48);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = 0;
	int16_t x50 = -1;
	static int32_t x51 = INT32_MIN;
	static int32_t t11 = 138;

	t11 = ((x49^(x50/x51))^x52);

	if (t11 != 13) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x54 = 63920117416226274LLU;
	volatile int64_t x55 = 1110264LL;
	int32_t x56 = 4;
	volatile uint64_t t12 = 663342255089595LLU;

	t12 = ((x53^(x54/x55))^x56);

	if (t12 != 9223371979282777245LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -102041038096LL;
	static uint8_t x58 = 50U;
	int8_t x59 = -21;
	static int64_t x60 = INT64_MIN;
	volatile int64_t t13 = 979436549879LL;

	t13 = ((x57^(x58/x59))^x60);

	if (t13 != -9223371934813737714LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 37U;
	uint8_t x62 = UINT8_MAX;
	uint64_t x63 = UINT64_MAX;
	uint64_t t14 = 2LLU;

	t14 = ((x61^(x62/x63))^x64);

	if (t14 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 8298823LLU;
	static int8_t x66 = INT8_MIN;
	int64_t x67 = -1LL;
	static uint8_t x68 = 5U;
	uint64_t t15 = 335560181187588LLU;

	t15 = ((x65^(x66/x67))^x68);

	if (t15 != 8298946LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x70 = UINT64_MAX;
	int64_t x71 = -1110978740LL;
	int16_t x72 = INT16_MIN;
	static uint64_t t16 = 5246675426478LLU;

	t16 = ((x69^(x70/x71))^x72);

	if (t16 != 32105LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 4049935878LLU;
	volatile int32_t x74 = INT32_MIN;
	uint64_t x75 = 484408707193104LLU;
	uint64_t t17 = 30449LLU;

	t17 = ((x73^(x74/x75))^x76);

	if (t17 != 18446744071317064390LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = UINT64_MAX;
	int32_t x78 = INT32_MIN;
	uint8_t x79 = 3U;

	t18 = ((x77^(x78/x79))^x80);

	if (t18 != 715827865LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x81 = 218567;
	int16_t x82 = INT16_MIN;
	int32_t x83 = -1;
	int64_t x84 = -1085287LL;
	int64_t t19 = -20LL;

	t19 = ((x81^(x82/x83))^x84);

	if (t19 != -1268386LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	uint64_t x86 = 74LLU;
	int16_t x87 = 1;
	int16_t x88 = 13;
	volatile uint64_t t20 = 9378970LLU;

	t20 = ((x85^(x86/x87))^x88);

	if (t20 != 32696LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = 381;
	static int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	volatile int32_t t21 = 1117;

	t21 = ((x89^(x90/x91))^x92);

	if (t21 != 12994) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x94 = -1;
	int64_t x95 = 1953297537285967218LL;
	static int32_t x96 = INT32_MIN;

	t22 = ((x93^(x94/x95))^x96);

	if (t22 != -2147418113LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x97 = 94180U;
	int64_t x100 = 299568676827713146LL;
	uint64_t t23 = 46227121244LLU;

	t23 = ((x97^(x98/x99))^x100);

	if (t23 != 299568676827767198LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x101 = 566151LLU;
	volatile int32_t x102 = INT32_MAX;
	volatile int64_t x103 = INT64_MIN;
	int8_t x104 = -1;

	t24 = ((x101^(x102/x103))^x104);

	if (t24 != 18446744073708985464LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x105 = INT16_MIN;
	static int8_t x106 = INT8_MIN;
	uint16_t x108 = 117U;
	static uint64_t t25 = 880580LLU;

	t25 = ((x105^(x106/x107))^x108);

	if (t25 != 18446744073709498738LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = INT8_MAX;
	static volatile uint16_t x110 = 511U;
	static int64_t x111 = INT64_MIN;
	volatile int16_t x112 = INT16_MIN;
	volatile int64_t t26 = -3232841604575450075LL;

	t26 = ((x109^(x110/x111))^x112);

	if (t26 != -32641LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x113 = 61U;
	volatile int8_t x114 = INT8_MIN;
	static int8_t x115 = -1;
	volatile int32_t t27 = -564180;

	t27 = ((x113^(x114/x115))^x116);

	if (t27 != -32579) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x120 = -8;

	t28 = ((x117^(x118/x119))^x120);

	if (t28 != 16317339590626141733LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	volatile uint8_t x123 = 93U;
	uint32_t x124 = 31457U;
	volatile int64_t t29 = -15749532096LL;

	t29 = ((x121^(x122/x123))^x124);

	if (t29 != -99176043407022778LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x125 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	volatile int8_t x128 = 0;

	t30 = ((x125^(x126/x127))^x128);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MAX;
	volatile int64_t x132 = -15096431754919252LL;
	static volatile uint64_t t31 = 1215564LLU;

	t31 = ((x129^(x130/x131))^x132);

	if (t31 != 18431647620035924241LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x138 = INT64_MAX;
	static uint64_t x140 = 1696LLU;
	volatile uint64_t t32 = 3565982893LLU;

	t32 = ((x137^(x138/x139))^x140);

	if (t32 != 18350667281658981386LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x141 = 3425U;
	int64_t x143 = 14LL;
	int8_t x144 = INT8_MIN;
	static int64_t t33 = 1LL;

	t33 = ((x141^(x142/x143))^x144);

	if (t33 != -3352LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x145 = 3;
	uint64_t x146 = 32902742471LLU;
	static volatile int16_t x147 = INT16_MIN;
	static volatile int8_t x148 = INT8_MAX;
	uint64_t t34 = 717159LLU;

	t34 = ((x145^(x146/x147))^x148);

	if (t34 != 124LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 14664U;
	int8_t x150 = INT8_MIN;
	int16_t x151 = -1;
	int32_t x152 = INT32_MIN;
	int32_t t35 = 618;

	t35 = ((x149^(x150/x151))^x152);

	if (t35 != -2147468856) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	static int64_t x155 = -1LL;
	int8_t x156 = -1;
	int64_t t36 = -164840LL;

	t36 = ((x153^(x154/x155))^x156);

	if (t36 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = -385700752LL;
	static uint32_t x159 = 313681832U;
	int16_t x160 = INT16_MAX;

	t37 = ((x157^(x158/x159))^x160);

	if (t37 != -29232857690LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x161 = 2U;
	int64_t x164 = 317479724LL;
	volatile int64_t t38 = 814703LL;

	t38 = ((x161^(x162/x163))^x164);

	if (t38 != 317479792LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = -1LL;
	volatile int32_t x166 = INT32_MAX;
	volatile uint64_t t39 = 47400147753355LLU;

	t39 = ((x165^(x166/x167))^x168);

	if (t39 != 16505538LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x169 = UINT32_MAX;
	uint16_t x172 = UINT16_MAX;
	uint32_t t40 = 1758791988U;

	t40 = ((x169^(x170/x171))^x172);

	if (t40 != 4294901887U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x174 = INT8_MAX;
	int8_t x175 = INT8_MIN;
	static volatile int64_t t41 = INT64_MAX;

	t41 = ((x173^(x174/x175))^x176);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = 13;
	int8_t x178 = INT8_MIN;
	static int8_t x179 = -1;
	static volatile int8_t x180 = INT8_MIN;
	int32_t t42 = -34806498;

	t42 = ((x177^(x178/x179))^x180);

	if (t42 != -243) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = UINT16_MAX;
	static uint8_t x182 = UINT8_MAX;
	uint64_t x183 = 1226919349975445369LLU;
	static uint64_t t43 = 1236403778177LLU;

	t43 = ((x181^(x182/x183))^x184);

	if (t43 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = UINT64_MAX;
	int16_t x186 = -1857;
	volatile uint64_t t44 = 46469074305LLU;

	t44 = ((x185^(x186/x187))^x188);

	if (t44 != 14LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x189 = INT32_MIN;
	uint16_t x190 = 56U;
	static uint32_t x191 = 12276535U;
	volatile int64_t x192 = -1LL;
	int64_t t45 = -513392648073987327LL;

	t45 = ((x189^(x190/x191))^x192);

	if (t45 != -2147483649LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	volatile int64_t t46 = -18067LL;

	t46 = ((x193^(x194/x195))^x196);

	if (t46 != -65529LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x197 = 48U;
	static int16_t x198 = INT16_MIN;
	uint32_t x199 = 53736U;
	static uint64_t t47 = 1172095625LLU;

	t47 = ((x197^(x198/x199))^x200);

	if (t47 != 18446744073709471737LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MAX;
	static int64_t x202 = 193391140LL;
	static volatile uint64_t x203 = UINT64_MAX;
	volatile int64_t x204 = -32796061957974844LL;
	uint64_t t48 = 10679399100LLU;

	t48 = ((x201^(x202/x203))^x204);

	if (t48 != 18413948011751576763LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MAX;
	static int64_t x206 = INT64_MAX;
	uint8_t x207 = 1U;
	uint8_t x208 = UINT8_MAX;
	volatile int64_t t49 = -123241LL;

	t49 = ((x205^(x206/x207))^x208);

	if (t49 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x209 = INT16_MIN;
	int64_t x210 = -1399290LL;
	volatile int8_t x211 = INT8_MIN;

	t50 = ((x209^(x210/x211))^x212);

	if (t50 != -4294945460LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = INT32_MIN;
	uint32_t x214 = 53494667U;
	int16_t x216 = -581;
	volatile uint32_t t51 = 696919572U;

	t51 = ((x213^(x214/x215))^x216);

	if (t51 != 2147483067U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = -1;
	static int32_t x218 = INT32_MIN;
	static uint16_t x219 = UINT16_MAX;
	int32_t x220 = INT32_MIN;
	int32_t t52 = 93676;

	t52 = ((x217^(x218/x219))^x220);

	if (t52 != -2147450881) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x222 = -1;
	uint32_t x223 = 318321211U;
	uint32_t t53 = 116985U;

	t53 = ((x221^(x222/x223))^x224);

	if (t53 != 32754U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 0U;
	int64_t x227 = INT64_MIN;
	int32_t x228 = 212107393;

	t54 = ((x225^(x226/x227))^x228);

	if (t54 != 212107393LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x229 = -1LL;
	static int8_t x230 = 0;
	static volatile int64_t x231 = INT64_MIN;
	int8_t x232 = 0;
	volatile int64_t t55 = 1653LL;

	t55 = ((x229^(x230/x231))^x232);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x233 = 0U;
	int32_t x234 = -38070891;
	int16_t x235 = 2;
	uint8_t x236 = UINT8_MAX;
	int32_t t56 = 173336;

	t56 = ((x233^(x234/x235))^x236);

	if (t56 != -19035596) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MAX;
	int16_t x238 = INT16_MIN;
	volatile int16_t x239 = INT16_MIN;
	uint64_t x240 = 31862441183364LLU;
	static uint64_t t57 = 188981319437917869LLU;

	t57 = ((x237^(x238/x239))^x240);

	if (t57 != 31864136071034LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x241 = INT16_MIN;
	uint32_t x242 = UINT32_MAX;
	uint8_t x243 = 6U;
	int16_t x244 = INT16_MIN;
	volatile uint32_t t58 = 64364971U;

	t58 = ((x241^(x242/x243))^x244);

	if (t58 != 715827882U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = 335LL;
	int8_t x246 = -1;
	int32_t x247 = -1;
	int8_t x248 = 0;
	static int64_t t59 = 63519028LL;

	t59 = ((x245^(x246/x247))^x248);

	if (t59 != 334LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = -7;
	volatile int16_t x250 = INT16_MIN;
	volatile uint64_t t60 = 325968856LLU;

	t60 = ((x249^(x250/x251))^x252);

	if (t60 != 7LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 6719U;
	uint8_t x258 = 3U;
	volatile int8_t x259 = 1;
	int16_t x260 = -1;
	static int32_t t61 = 81122478;

	t61 = ((x257^(x258/x259))^x260);

	if (t61 != -6717) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x261 = 3597134821136153LLU;
	int64_t x262 = 2483LL;
	int16_t x263 = -66;
	uint64_t t62 = 6000512LLU;

	t62 = ((x261^(x262/x263))^x264);

	if (t62 != 3597134821136189LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x266 = 3348U;
	static int16_t x267 = INT16_MAX;
	uint32_t x268 = UINT32_MAX;

	t63 = ((x265^(x266/x267))^x268);

	if (t63 != 4294967040U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = -1564694;
	int8_t x270 = INT8_MAX;
	volatile int64_t x271 = INT64_MIN;
	int16_t x272 = -4;
	volatile int64_t t64 = 6009193178LL;

	t64 = ((x269^(x270/x271))^x272);

	if (t64 != 1564694LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x273 = INT8_MIN;
	int8_t x274 = -3;
	int16_t x276 = -1;
	volatile int32_t t65 = -30898349;

	t65 = ((x273^(x274/x275))^x276);

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MIN;
	int32_t x278 = -57724107;
	int16_t x279 = INT16_MIN;
	int16_t x280 = -1;
	static int32_t t66 = -269;

	t66 = ((x277^(x278/x279))^x280);

	if (t66 != 1694) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x281 = 585496U;
	uint8_t x282 = 80U;
	static int64_t x283 = 298959655940554014LL;
	int32_t x284 = -1;
	static int64_t t67 = -354LL;

	t67 = ((x281^(x282/x283))^x284);

	if (t67 != -585497LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x285 = -1;
	uint32_t x286 = 6198U;
	static int8_t x288 = INT8_MIN;
	uint32_t t68 = 8160475U;

	t68 = ((x285^(x286/x287))^x288);

	if (t68 != 127U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MAX;
	int64_t x292 = INT64_MIN;
	int64_t t69 = 119054000455LL;

	t69 = ((x289^(x290/x291))^x292);

	if (t69 != 8348LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MAX;
	int32_t t70 = INT32_MIN;

	t70 = ((x293^(x294/x295))^x296);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = 307449179LLU;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	uint64_t t71 = 413901163LLU;

	t71 = ((x297^(x298/x299))^x300);

	if (t71 != 3987518117LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x301 = UINT64_MAX;
	int32_t x302 = 767278;
	volatile int64_t x303 = -1LL;
	static uint16_t x304 = 15430U;
	uint64_t t72 = 1976229947696008560LLU;

	t72 = ((x301^(x302/x303))^x304);

	if (t72 != 756075LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x309 = 150311793153021LL;
	int64_t x311 = INT64_MAX;
	static volatile int8_t x312 = -1;
	volatile int64_t t73 = -1085066783301016559LL;

	t73 = ((x309^(x310/x311))^x312);

	if (t73 != -150311793153022LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x313 = -63;
	uint64_t x314 = 1835357064049LLU;
	int16_t x315 = INT16_MIN;
	int64_t x316 = INT64_MIN;
	uint64_t t74 = 3801915708LLU;

	t74 = ((x313^(x314/x315))^x316);

	if (t74 != 9223372036854775745LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	volatile int16_t x319 = INT16_MIN;
	uint16_t x320 = UINT16_MAX;
	static int32_t t75 = -141;

	t75 = ((x317^(x318/x319))^x320);

	if (t75 != -65536) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x321 = 5U;
	int32_t x322 = -20894;
	int32_t x323 = INT32_MIN;

	t76 = ((x321^(x322/x323))^x324);

	if (t76 != -208) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x325 = 350U;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = -3;
	uint64_t x328 = 88LLU;
	volatile uint64_t t77 = 1687114LLU;

	t77 = ((x325^(x326/x327))^x328);

	if (t77 != 263LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = 47955U;
	static uint32_t x330 = UINT32_MAX;
	volatile int64_t x331 = INT64_MAX;
	int32_t x332 = -1;
	int64_t t78 = 295095200222LL;

	t78 = ((x329^(x330/x331))^x332);

	if (t78 != -47956LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = 59003524503LL;
	int32_t x335 = INT32_MIN;
	static int8_t x336 = INT8_MIN;
	static volatile int64_t t79 = -2LL;

	t79 = ((x333^(x334/x335))^x336);

	if (t79 != -59003524585LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = -1;
	static uint32_t x339 = 174U;
	int64_t x340 = -62366942632087722LL;
	int64_t t80 = 187LL;

	t80 = ((x337^(x338/x339))^x340);

	if (t80 != -62366943546919906LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x342 = INT16_MIN;
	int32_t x343 = INT32_MAX;
	int64_t t81 = -1254LL;

	t81 = ((x341^(x342/x343))^x344);

	if (t81 != 3LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = 6284724;
	int32_t x346 = 1999;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = -5555828;

	t82 = ((x345^(x346/x347))^x348);

	if (t82 != 18446744073708821560LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x349 = 3;
	int16_t x350 = INT16_MIN;
	uint8_t x351 = 57U;
	int8_t x352 = INT8_MIN;
	static int32_t t83 = 1;

	t83 = ((x349^(x350/x351))^x352);

	if (t83 != 577) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x353 = -18;
	volatile int16_t x354 = 1;
	uint32_t t84 = 7U;

	t84 = ((x353^(x354/x355))^x356);

	if (t84 != 4294966709U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x357 = UINT16_MAX;
	uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile uint32_t t85 = 2U;

	t85 = ((x357^(x358/x359))^x360);

	if (t85 != 4294901887U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x361 = -1;
	uint64_t x362 = 6607733088994724LLU;
	int8_t x363 = INT8_MAX;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t86 = 436483LLU;

	t86 = ((x361^(x362/x363))^x364);

	if (t86 != 52031220729602LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x365 = INT16_MIN;
	static int32_t x366 = -1;
	volatile int32_t x368 = 14519;
	volatile int32_t t87 = 707;

	t87 = ((x365^(x366/x367))^x368);

	if (t87 != -18249) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = -1;
	volatile int16_t x370 = 16;
	volatile int16_t x371 = INT16_MIN;
	int32_t t88 = INT32_MIN;

	t88 = ((x369^(x370/x371))^x372);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = 18727U;
	int32_t x374 = 78566338;
	int32_t x375 = INT32_MIN;
	static uint8_t x376 = 10U;
	int32_t t89 = -3;

	t89 = ((x373^(x374/x375))^x376);

	if (t89 != 18733) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x378 = UINT64_MAX;
	volatile int64_t x379 = -1LL;
	int64_t x380 = -213336914631700LL;
	uint64_t t90 = 136799088LLU;

	t90 = ((x377^(x378/x379))^x380);

	if (t90 != 18446530736794919917LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = UINT64_MAX;
	uint16_t x382 = 7U;
	int8_t x383 = -2;
	volatile uint64_t x384 = UINT64_MAX;

	t91 = ((x381^(x382/x383))^x384);

	if (t91 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MAX;
	int16_t x387 = INT16_MIN;
	volatile int64_t t92 = -4706702420056989LL;

	t92 = ((x385^(x386/x387))^x388);

	if (t92 != 2147483213LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x390 = 7U;
	uint32_t x391 = UINT32_MAX;
	volatile uint64_t t93 = 663879096LLU;

	t93 = ((x389^(x390/x391))^x392);

	if (t93 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = INT16_MIN;
	static uint32_t x394 = 86600979U;
	static volatile uint32_t x395 = UINT32_MAX;
	int32_t x396 = INT32_MAX;

	t94 = ((x393^(x394/x395))^x396);

	if (t94 != 2147516415U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = INT32_MIN;
	static uint8_t x398 = 2U;
	int32_t x400 = INT32_MIN;
	static volatile int32_t t95 = 1982896;

	t95 = ((x397^(x398/x399))^x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = 1;
	uint64_t x402 = UINT64_MAX;
	int64_t x403 = 3LL;
	uint32_t x404 = UINT32_MAX;
	uint64_t t96 = 98559107920052549LLU;

	t96 = ((x401^(x402/x403))^x404);

	if (t96 != 6148914692668172971LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x405 = UINT8_MAX;
	uint8_t x406 = UINT8_MAX;
	uint8_t x407 = UINT8_MAX;
	uint16_t x408 = 5U;
	static int32_t t97 = -6;

	t97 = ((x405^(x406/x407))^x408);

	if (t97 != 251) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x414 = UINT16_MAX;
	static int64_t t98 = INT64_MIN;

	t98 = ((x413^(x414/x415))^x416);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = -149362997700LL;
	int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	volatile int8_t x420 = INT8_MIN;

	t99 = ((x417^(x418/x419))^x420);

	if (t99 != 149362997692LL) { NG(); } else { ; }
	
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


    return 0;
}

