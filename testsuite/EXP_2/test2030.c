#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
volatile int8_t x7 = 0;
int32_t x10 = INT32_MIN;
int16_t x12 = INT16_MIN;
int32_t t1 = -2;
uint32_t t2 = 487897470U;
int32_t x17 = 3;
volatile int64_t x35 = INT64_MAX;
static int16_t x43 = INT16_MIN;
volatile int16_t x54 = -1;
volatile int32_t t9 = -1510;
int8_t x65 = 13;
int16_t x68 = 0;
static int64_t x70 = INT64_MIN;
int32_t x72 = INT32_MAX;
volatile int32_t x73 = INT32_MAX;
int8_t x77 = 0;
uint64_t t14 = 71772675786421LLU;
static int16_t x87 = -1;
uint32_t t15 = 6423883U;
uint8_t x91 = UINT8_MAX;
static uint32_t x92 = UINT32_MAX;
int8_t x105 = -1;
uint16_t x107 = 2U;
volatile int32_t t19 = 11911821;
uint8_t x109 = UINT8_MAX;
static int32_t x110 = 33193025;
uint32_t x114 = 1U;
volatile int64_t t21 = -31685248249017994LL;
volatile int64_t t22 = -70008741071418312LL;
int16_t x121 = INT16_MAX;
int16_t x122 = INT16_MIN;
uint64_t t23 = 10928876873478LLU;
static int64_t x132 = INT64_MIN;
static uint64_t t26 = 53014297778LLU;
volatile uint32_t x139 = 7U;
int64_t x143 = -362LL;
uint8_t x144 = 22U;
int64_t x146 = -1LL;
static uint32_t x149 = UINT32_MAX;
volatile uint32_t t30 = 933183U;
uint32_t t32 = 115888393U;
static int64_t t33 = 18LL;
int32_t x170 = INT32_MIN;
uint16_t x189 = 7809U;
volatile int64_t t39 = -8009863891LL;
int64_t t40 = 4347671LL;
int64_t x204 = INT64_MIN;
int64_t t41 = 14509837353127LL;
volatile int64_t t43 = -9661236LL;
volatile uint8_t x226 = 106U;
static int8_t x244 = INT8_MAX;
uint16_t x247 = UINT16_MAX;
static int16_t x257 = 27;
static int32_t x264 = -1;
volatile int64_t t54 = -2552656995773572LL;
int16_t x275 = -4;
uint32_t x276 = 1327829547U;
uint32_t x277 = UINT32_MAX;
static int64_t x278 = 30083901026695LL;
static int64_t t56 = -13975878299914LL;
int8_t x287 = 0;
volatile int16_t x293 = INT16_MIN;
static volatile uint16_t x312 = 1U;
volatile uint32_t x316 = 141641523U;
int32_t x320 = 26;
static int32_t t64 = 83851;
static uint8_t x322 = 1U;
int16_t x323 = INT16_MIN;
volatile int64_t t65 = -1444142LL;
uint16_t x339 = 0U;
volatile int32_t t69 = -6500560;
uint64_t x346 = UINT64_MAX;
uint64_t x357 = 660364600LLU;
uint8_t x360 = 83U;
static volatile uint64_t t72 = 102564683801401832LLU;
static uint16_t x364 = 21U;
int64_t x371 = 846819LL;
uint16_t x373 = 0U;
volatile int64_t x375 = 26407325LL;
int64_t x379 = INT64_MIN;
int16_t x382 = 189;
uint32_t t78 = 0U;
static int32_t x393 = -1582007;
uint16_t x412 = 469U;
int32_t x414 = INT32_MIN;
int64_t t85 = 29108669618963LL;
int64_t x428 = INT64_MAX;
int64_t t86 = -2917321879401LL;
uint16_t x430 = 0U;
volatile uint64_t x431 = 4101288823528LLU;
volatile int64_t x439 = -7049339689366448LL;
int32_t x443 = INT32_MIN;
int16_t x449 = INT16_MAX;
uint16_t x450 = 1U;
volatile int64_t t93 = -83952LL;
int64_t t97 = 118309098012528740LL;
uint32_t x477 = 982968424U;
static volatile int16_t x480 = INT16_MAX;
uint64_t x482 = 70183603LLU;


void f0(void) {
	int16_t x5 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t0 = 48767147;

	t0 = ((x5+(x6^x7))-x8);

	if (t0 != -65408) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 18U;
	int16_t x11 = 0;

	t1 = ((x9+(x10^x11))-x12);

	if (t1 != -2147450862) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 333U;
	uint8_t x14 = UINT8_MAX;
	uint16_t x15 = UINT16_MAX;
	int8_t x16 = -32;

	t2 = ((x13+(x14^x15))-x16);

	if (t2 != 65645U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = -56;
	int16_t x19 = 343;
	uint8_t x20 = 3U;
	int32_t t3 = 2;

	t3 = ((x17+(x18^x19))-x20);

	if (t3 != -353) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	volatile uint64_t x22 = 1097446165402873049LLU;
	int32_t x23 = INT32_MAX;
	uint8_t x24 = 1U;
	uint64_t t4 = 2031LLU;

	t4 = ((x21+(x22^x23))-x24);

	if (t4 != 10320818203836289828LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 6U;
	volatile int64_t x26 = INT64_MAX;
	int8_t x27 = INT8_MIN;
	volatile int16_t x28 = -222;
	static volatile int64_t t5 = 116LL;

	t5 = ((x25+(x26^x27))-x28);

	if (t5 != -9223372036854775453LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	int64_t x34 = INT64_MIN;
	uint32_t x36 = 911U;
	int64_t t6 = -5774540LL;

	t6 = ((x33+(x34^x35))-x36);

	if (t6 != -913LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MIN;
	int64_t x42 = -19LL;
	uint64_t x44 = UINT64_MAX;
	uint64_t t7 = 11545486LLU;

	t7 = ((x41+(x42^x43))-x44);

	if (t7 != 32622LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 85068283U;
	volatile int8_t x46 = -1;
	int32_t x47 = INT32_MIN;
	int32_t x48 = -1;
	uint32_t t8 = 6U;

	t8 = ((x45+(x46^x47))-x48);

	if (t8 != 2232551931U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x53 = UINT8_MAX;
	int16_t x55 = INT16_MIN;
	int32_t x56 = -5836714;

	t9 = ((x53+(x54^x55))-x56);

	if (t9 != 5869736) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = UINT32_MAX;
	int8_t x62 = INT8_MIN;
	static int8_t x63 = INT8_MIN;
	int16_t x64 = -1;
	uint32_t t10 = 316176U;

	t10 = ((x61+(x62^x63))-x64);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x66 = -337LL;
	int32_t x67 = 80907;
	int64_t t11 = -4288511471043LL;

	t11 = ((x65+(x66^x67))-x68);

	if (t11 != -81231LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x69 = UINT32_MAX;
	int16_t x71 = 107;
	volatile int64_t t12 = 873474685LL;

	t12 = ((x69+(x70^x71))-x72);

	if (t12 != -9223372034707292053LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x74 = 547609757957259506LLU;
	int32_t x75 = INT32_MIN;
	static int64_t x76 = -1LL;
	volatile uint64_t t13 = 13856690437829LLU;

	t13 = ((x73+(x74^x75))-x76);

	if (t13 != 17899134319328526578LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x78 = INT64_MAX;
	uint64_t x79 = 9LLU;
	volatile int32_t x80 = -1;

	t14 = ((x77+(x78^x79))-x80);

	if (t14 != 9223372036854775799LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x85 = 101290U;
	volatile int16_t x86 = INT16_MIN;
	volatile int16_t x88 = INT16_MIN;

	t15 = ((x85+(x86^x87))-x88);

	if (t15 != 166825U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	volatile uint32_t t16 = 0U;

	t16 = ((x89+(x90^x91))-x92);

	if (t16 != 4294934400U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int16_t x94 = INT16_MIN;
	static uint16_t x95 = UINT16_MAX;
	int32_t x96 = 38;
	volatile uint64_t t17 = 69792LLU;

	t17 = ((x93+(x94^x95))-x96);

	if (t17 != 18446744073709518808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x97 = UINT32_MAX;
	uint8_t x98 = 126U;
	uint16_t x99 = 83U;
	static int8_t x100 = INT8_MAX;
	volatile uint32_t t18 = 1053085097U;

	t18 = ((x97+(x98^x99))-x100);

	if (t18 != 4294967213U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x106 = -3;
	int16_t x108 = INT16_MIN;

	t19 = ((x105+(x106^x107))-x108);

	if (t19 != 32766) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x111 = 1LL;
	static volatile uint64_t x112 = 91275166LLU;
	static volatile uint64_t t20 = 42315934LLU;

	t20 = ((x109+(x110^x111))-x112);

	if (t20 != 18446744073651469729LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x113 = -1;
	int8_t x115 = INT8_MAX;
	int64_t x116 = 2659178183878LL;

	t21 = ((x113+(x114^x115))-x116);

	if (t21 != -2659178183753LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x117 = 22U;
	int64_t x118 = -1LL;
	int16_t x119 = -1;
	volatile uint8_t x120 = 1U;

	t22 = ((x117+(x118^x119))-x120);

	if (t22 != 21LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x123 = 0LLU;
	int8_t x124 = -1;

	t23 = ((x121+(x122^x123))-x124);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x125 = INT32_MAX;
	int32_t x126 = 109423160;
	static uint64_t x127 = 7607209942376805LLU;
	int32_t x128 = INT32_MIN;
	volatile uint64_t t24 = 9192727650LLU;

	t24 = ((x125+(x126^x127))-x128);

	if (t24 != 7607214145358684LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = -3;
	int8_t x130 = INT8_MIN;
	uint16_t x131 = UINT16_MAX;
	volatile int64_t t25 = 146194564290236LL;

	t25 = ((x129+(x130^x131))-x132);

	if (t25 != 9223372036854710396LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MAX;
	uint64_t x136 = 99636124961LLU;

	t26 = ((x133+(x134^x135))-x136);

	if (t26 != 9223371935071134431LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = -2278277904LL;
	int32_t x138 = -1;
	static uint8_t x140 = UINT8_MAX;
	volatile int64_t t27 = -63426156766207045LL;

	t27 = ((x137+(x138^x139))-x140);

	if (t27 != 2016689129LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x141 = UINT8_MAX;
	int32_t x142 = -16568898;
	int64_t t28 = 4058757683688LL;

	t28 = ((x141+(x142^x143))-x144);

	if (t28 != 16569361LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x145 = UINT32_MAX;
	static uint32_t x147 = UINT32_MAX;
	int8_t x148 = -19;
	int64_t t29 = 3460677LL;

	t29 = ((x145+(x146^x147))-x148);

	if (t29 != 18LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x150 = UINT32_MAX;
	volatile uint32_t x151 = 169261U;
	volatile int16_t x152 = 0;

	t30 = ((x149+(x150^x151))-x152);

	if (t30 != 4294798033U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x153 = 49U;
	int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MIN;
	volatile int32_t x156 = -28598;
	int32_t t31 = 6;

	t31 = ((x153+(x154^x155))-x156);

	if (t31 != 28647) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x157 = 107U;
	static int16_t x158 = -1;
	static uint16_t x159 = UINT16_MAX;
	uint32_t x160 = 7561U;

	t32 = ((x157+(x158^x159))-x160);

	if (t32 != 4294894306U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x161 = -1;
	static int64_t x162 = 13496335997LL;
	static int8_t x163 = -11;
	uint16_t x164 = UINT16_MAX;

	t33 = ((x161+(x162^x163))-x164);

	if (t33 != -13496401528LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = INT32_MIN;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = -1LL;
	static int64_t t34 = -19482LL;

	t34 = ((x169+(x170^x171))-x172);

	if (t34 != 4294967296LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = -1;
	int8_t x174 = INT8_MAX;
	int32_t x175 = INT32_MIN;
	static int32_t x176 = -167950;
	int32_t t35 = 246;

	t35 = ((x173+(x174^x175))-x176);

	if (t35 != -2147315572) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x177 = -1;
	uint64_t x178 = 7778LLU;
	int8_t x179 = INT8_MIN;
	static int16_t x180 = INT16_MIN;
	uint64_t t36 = 3257431809LLU;

	t36 = ((x177+(x178^x179))-x180);

	if (t36 != 25057LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x181 = UINT8_MAX;
	static int64_t x182 = -6474918LL;
	int32_t x183 = INT32_MAX;
	uint64_t x184 = 7535353617499646107LLU;
	volatile uint64_t t37 = 1510273726272328387LLU;

	t37 = ((x181+(x182^x183))-x184);

	if (t37 != 10911390454068897033LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x185 = 1U;
	static uint32_t x186 = 85337U;
	static int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MAX;
	volatile int64_t t38 = -899LL;

	t38 = ((x185+(x186^x187))-x188);

	if (t38 != -9223372034707206821LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x190 = -89;
	int64_t x191 = 199257LL;
	uint16_t x192 = 170U;

	t39 = ((x189+(x190^x191))-x192);

	if (t39 != -191531LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MIN;
	static int64_t x199 = 264272360LL;
	int64_t x200 = 2378092LL;

	t40 = ((x197+(x198^x199))-x200);

	if (t40 != -266683140LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = INT64_MIN;
	uint8_t x202 = UINT8_MAX;
	static volatile int16_t x203 = INT16_MAX;

	t41 = ((x201+(x202^x203))-x204);

	if (t41 != 32512LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x205 = 210763516U;
	volatile int32_t x206 = 17;
	int32_t x207 = 145;
	uint8_t x208 = UINT8_MAX;
	uint32_t t42 = 8155U;

	t42 = ((x205+(x206^x207))-x208);

	if (t42 != 210763389U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x209 = UINT16_MAX;
	int32_t x210 = -896;
	static int64_t x211 = INT64_MAX;
	int64_t x212 = -722430704386707LL;

	t43 = ((x209+(x210^x211))-x212);

	if (t43 != -9222649606150322671LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = INT32_MIN;
	volatile int32_t x214 = -30082;
	int64_t x215 = INT64_MIN;
	volatile uint32_t x216 = 9U;
	int64_t t44 = -23988LL;

	t44 = ((x213+(x214^x215))-x216);

	if (t44 != 9223372034707262069LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = -56618032187188LL;
	volatile int32_t x223 = 198167;
	int32_t x224 = INT32_MIN;
	int64_t t45 = -496258089271LL;

	t45 = ((x221+(x222^x223))-x224);

	if (t45 != -56618032120101LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x225 = UINT16_MAX;
	uint8_t x227 = 13U;
	uint16_t x228 = 1176U;
	int32_t t46 = 387;

	t46 = ((x225+(x226^x227))-x228);

	if (t46 != 64462) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x233 = UINT32_MAX;
	static volatile uint64_t x234 = 996LLU;
	uint16_t x235 = UINT16_MAX;
	int64_t x236 = INT64_MAX;
	uint64_t t47 = 2142940555685LLU;

	t47 = ((x233+(x234^x235))-x236);

	if (t47 != 9223372041149807643LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x237 = 196962263U;
	volatile int16_t x238 = -38;
	uint64_t x239 = UINT64_MAX;
	uint64_t x240 = UINT64_MAX;
	uint64_t t48 = 223078968156064505LLU;

	t48 = ((x237+(x238^x239))-x240);

	if (t48 != 196962301LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x241 = INT8_MIN;
	volatile int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MAX;
	int32_t t49 = -10;

	t49 = ((x241+(x242^x243))-x244);

	if (t49 != -256) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x245 = 350461344U;
	int8_t x246 = 0;
	uint16_t x248 = 4U;
	static volatile uint32_t t50 = 75027U;

	t50 = ((x245+(x246^x247))-x248);

	if (t50 != 350526875U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x253 = 33U;
	int32_t x254 = 6;
	uint16_t x255 = 328U;
	uint8_t x256 = UINT8_MAX;
	int32_t t51 = 1875;

	t51 = ((x253+(x254^x255))-x256);

	if (t51 != 112) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x258 = -1;
	int32_t x259 = INT32_MAX;
	volatile int32_t x260 = -65332169;
	int32_t t52 = 2031869;

	t52 = ((x257+(x258^x259))-x260);

	if (t52 != -2082151452) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x261 = 2;
	uint64_t x262 = 42674146LLU;
	static uint32_t x263 = UINT32_MAX;
	volatile uint64_t t53 = 9061906112475449871LLU;

	t53 = ((x261+(x262^x263))-x264);

	if (t53 != 4252293152LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x265 = -1;
	uint8_t x266 = 102U;
	int64_t x267 = -1LL;
	volatile int16_t x268 = INT16_MAX;

	t54 = ((x265+(x266^x267))-x268);

	if (t54 != -32871LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x273 = 8996260LLU;
	static int64_t x274 = INT64_MIN;
	static uint64_t t55 = 889181058LLU;

	t55 = ((x273+(x274^x275))-x276);

	if (t55 != 9223372035535942517LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x279 = INT16_MAX;
	int16_t x280 = 2649;

	t56 = ((x277+(x278^x279))-x280);

	if (t56 != 30088195965982LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x281 = INT16_MAX;
	uint16_t x282 = UINT16_MAX;
	static volatile int16_t x283 = INT16_MIN;
	int8_t x284 = -29;
	int32_t t57 = 15487;

	t57 = ((x281+(x282^x283))-x284);

	if (t57 != 27) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x285 = -83989450;
	int64_t x286 = -71025374650LL;
	int64_t x288 = -3918262686LL;
	static int64_t t58 = 5593LL;

	t58 = ((x285+(x286^x287))-x288);

	if (t58 != -67191101414LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x294 = 173006U;
	volatile uint8_t x295 = UINT8_MAX;
	int32_t x296 = INT32_MIN;
	volatile uint32_t t59 = 12U;

	t59 = ((x293+(x294^x295))-x296);

	if (t59 != 2147623729U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = INT64_MIN;
	static int8_t x298 = -1;
	int16_t x299 = INT16_MIN;
	int8_t x300 = 1;
	volatile int64_t t60 = -4LL;

	t60 = ((x297+(x298^x299))-x300);

	if (t60 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x301 = -1;
	static int32_t x302 = -39;
	volatile int64_t x303 = INT64_MAX;
	int32_t x304 = -203103498;
	int64_t t61 = -2672610862575890LL;

	t61 = ((x301+(x302^x303))-x304);

	if (t61 != -9223372036651672273LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x309 = 8643U;
	int32_t x310 = INT32_MIN;
	volatile uint32_t x311 = 3449502U;
	volatile uint32_t t62 = 0U;

	t62 = ((x309+(x310^x311))-x312);

	if (t62 != 2150941792U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x313 = INT16_MAX;
	static int16_t x314 = 196;
	static uint8_t x315 = 1U;
	static uint32_t t63 = 17335370U;

	t63 = ((x313+(x314^x315))-x316);

	if (t63 != 4153358737U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x317 = 89U;
	static int32_t x318 = INT32_MAX;
	int16_t x319 = -1;

	t64 = ((x317+(x318^x319))-x320);

	if (t64 != -2147483585) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x321 = INT16_MIN;
	static int64_t x324 = 4LL;

	t65 = ((x321+(x322^x323))-x324);

	if (t65 != -65539LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MIN;
	volatile int16_t x327 = -1;
	int64_t x328 = INT64_MIN;
	static int64_t t66 = 1LL;

	t66 = ((x325+(x326^x327))-x328);

	if (t66 != 127LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x329 = -1;
	int8_t x330 = -1;
	int16_t x331 = -135;
	static volatile uint16_t x332 = 18160U;
	static volatile int32_t t67 = 57;

	t67 = ((x329+(x330^x331))-x332);

	if (t67 != -18027) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x333 = INT32_MAX;
	int64_t x334 = INT64_MAX;
	int32_t x335 = -1;
	int64_t x336 = INT64_MIN;
	static volatile int64_t t68 = 529951LL;

	t68 = ((x333+(x334^x335))-x336);

	if (t68 != 2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x337 = -6;
	static int16_t x338 = -1;
	static uint16_t x340 = 1722U;

	t69 = ((x337+(x338^x339))-x340);

	if (t69 != -1729) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x345 = INT8_MIN;
	int16_t x347 = -1;
	uint8_t x348 = 1U;
	volatile uint64_t t70 = 273250947998963LLU;

	t70 = ((x345+(x346^x347))-x348);

	if (t70 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x349 = 2;
	int64_t x350 = 481LL;
	int16_t x351 = -2159;
	int32_t x352 = 407792;
	int64_t t71 = -215598660423LL;

	t71 = ((x349+(x350^x351))-x352);

	if (t71 != -410238LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x358 = INT16_MAX;
	int8_t x359 = 2;

	t72 = ((x357+(x358^x359))-x360);

	if (t72 != 660397282LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = -1LL;
	uint32_t x363 = UINT32_MAX;
	volatile int64_t t73 = -3032238217LL;

	t73 = ((x361+(x362^x363))-x364);

	if (t73 != -6442450965LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x365 = 28LLU;
	uint64_t x366 = 117280092LLU;
	uint8_t x367 = 49U;
	int8_t x368 = 2;
	uint64_t t74 = 1693LLU;

	t74 = ((x365+(x366^x367))-x368);

	if (t74 != 117280135LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x369 = -101;
	int32_t x370 = INT32_MIN;
	volatile uint16_t x372 = 1355U;
	static int64_t t75 = 74449396837LL;

	t75 = ((x369+(x370^x371))-x372);

	if (t75 != -2146638285LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x374 = -1;
	int16_t x376 = -304;
	int64_t t76 = 993LL;

	t76 = ((x373+(x374^x375))-x376);

	if (t76 != -26407022LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x377 = INT32_MIN;
	static volatile int32_t x378 = -1;
	static int32_t x380 = INT32_MIN;
	volatile int64_t t77 = INT64_MAX;

	t77 = ((x377+(x378^x379))-x380);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x381 = 127U;
	uint32_t x383 = 176U;
	int8_t x384 = -1;

	t78 = ((x381+(x382^x383))-x384);

	if (t78 != 141U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x394 = INT16_MIN;
	int64_t x395 = -1LL;
	int64_t x396 = INT64_MIN;
	int64_t t79 = -61434144LL;

	t79 = ((x393+(x394^x395))-x396);

	if (t79 != 9223372036853226568LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x401 = 0LLU;
	int8_t x402 = -1;
	volatile int64_t x403 = 174LL;
	uint8_t x404 = 5U;
	static uint64_t t80 = 75LLU;

	t80 = ((x401+(x402^x403))-x404);

	if (t80 != 18446744073709551436LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x405 = 40;
	int32_t x406 = INT32_MIN;
	uint32_t x407 = UINT32_MAX;
	volatile uint16_t x408 = 152U;
	volatile uint32_t t81 = 1U;

	t81 = ((x405+(x406^x407))-x408);

	if (t81 != 2147483535U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x409 = 40U;
	uint64_t x410 = UINT64_MAX;
	int64_t x411 = INT64_MIN;
	volatile uint64_t t82 = 370151660179577789LLU;

	t82 = ((x409+(x410^x411))-x412);

	if (t82 != 9223372036854775378LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x413 = UINT64_MAX;
	static uint8_t x415 = 83U;
	uint64_t x416 = UINT64_MAX;
	uint64_t t83 = 63990245307257597LLU;

	t83 = ((x413+(x414^x415))-x416);

	if (t83 != 18446744071562068051LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x417 = -1218LL;
	uint32_t x418 = 546U;
	uint16_t x419 = 468U;
	volatile uint8_t x420 = 0U;
	int64_t t84 = 1LL;

	t84 = ((x417+(x418^x419))-x420);

	if (t84 != -204LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x421 = INT64_MIN;
	volatile uint32_t x422 = 1910080660U;
	int8_t x423 = INT8_MIN;
	static int16_t x424 = INT16_MIN;

	t85 = ((x421+(x422^x423))-x424);

	if (t85 != -9223372034469856492LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x425 = 199447499934664LL;
	uint8_t x426 = 3U;
	int16_t x427 = INT16_MAX;

	t86 = ((x425+(x426^x427))-x428);

	if (t86 != -9223172589354808379LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x429 = INT32_MAX;
	static int64_t x432 = INT64_MIN;
	volatile uint64_t t87 = 259500344287608LLU;

	t87 = ((x429+(x430^x431))-x432);

	if (t87 != 9223376140291082983LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x433 = 7U;
	volatile int64_t x434 = 5730794LL;
	uint8_t x435 = UINT8_MAX;
	int16_t x436 = -1;
	volatile int64_t t88 = 36218304LL;

	t88 = ((x433+(x434^x435))-x436);

	if (t88 != 5730589LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x437 = -1;
	volatile int64_t x438 = INT64_MIN;
	int8_t x440 = INT8_MAX;
	int64_t t89 = 1535571LL;

	t89 = ((x437+(x438^x439))-x440);

	if (t89 != 9216322697165409232LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x441 = INT8_MIN;
	uint64_t x442 = 4331970130LLU;
	int8_t x444 = -1;
	uint64_t t90 = 15986581351LLU;

	t90 = ((x441+(x442^x443))-x444);

	if (t90 != 18446744067304103379LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x445 = INT8_MIN;
	uint64_t x446 = 16LLU;
	int64_t x447 = INT64_MIN;
	int8_t x448 = -1;
	volatile uint64_t t91 = 164601029132202LLU;

	t91 = ((x445+(x446^x447))-x448);

	if (t91 != 9223372036854775697LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x451 = -1;
	uint32_t x452 = 1966204U;
	uint32_t t92 = 21U;

	t92 = ((x449+(x450^x451))-x452);

	if (t92 != 4293033857U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x453 = -1;
	static uint8_t x454 = 6U;
	int64_t x455 = -1LL;
	int8_t x456 = 3;

	t93 = ((x453+(x454^x455))-x456);

	if (t93 != -11LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x457 = -1;
	int64_t x458 = INT64_MIN;
	int8_t x459 = INT8_MIN;
	static uint16_t x460 = 12U;
	volatile int64_t t94 = 1LL;

	t94 = ((x457+(x458^x459))-x460);

	if (t94 != 9223372036854775667LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x461 = -448LL;
	static volatile int8_t x462 = 7;
	int16_t x463 = INT16_MAX;
	int32_t x464 = INT32_MAX;
	volatile int64_t t95 = 3544143LL;

	t95 = ((x461+(x462^x463))-x464);

	if (t95 != -2147451335LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x465 = 559U;
	int32_t x466 = INT32_MIN;
	static volatile int64_t x467 = INT64_MAX;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t96 = 225LLU;

	t96 = ((x465+(x466^x467))-x468);

	if (t96 != 9223372039002260015LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x469 = 109449683LL;
	int16_t x470 = 3244;
	volatile int32_t x471 = -34063;
	static volatile uint16_t x472 = 4810U;

	t97 = ((x469+(x470^x471))-x472);

	if (t97 != 109409638LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x478 = 62840378977058643LL;
	static int16_t x479 = 126;
	int64_t t98 = -184817539185016890LL;

	t98 = ((x477+(x478^x479))-x480);

	if (t98 != 62840379959994262LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x481 = INT16_MAX;
	uint16_t x483 = 16514U;
	static uint32_t x484 = 0U;
	uint64_t t99 = 5LLU;

	t99 = ((x481+(x482^x483))-x484);

	if (t99 != 70199856LLU) { NG(); } else { ; }
	
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

