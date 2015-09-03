#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
volatile uint64_t x9 = 1561531713062352491LLU;
int32_t x12 = 220110409;
uint8_t x25 = 7U;
int32_t x28 = INT32_MAX;
int8_t x29 = INT8_MIN;
int64_t x32 = -1LL;
volatile uint64_t t8 = 48708969352018LLU;
volatile int8_t x41 = -1;
int8_t x43 = -12;
volatile uint16_t x44 = 4U;
static volatile int8_t x46 = -1;
int16_t x48 = INT16_MIN;
int32_t t11 = 1;
uint8_t x54 = 122U;
int8_t x58 = -1;
uint16_t x60 = UINT16_MAX;
uint16_t x63 = 1U;
int64_t x65 = INT64_MIN;
int8_t x69 = INT8_MIN;
int64_t x72 = INT64_MAX;
uint64_t x73 = 325199469210LLU;
int64_t x78 = INT64_MIN;
int8_t x90 = -1;
int16_t x91 = INT16_MIN;
uint16_t x94 = UINT16_MAX;
int64_t x100 = -1LL;
volatile int32_t x103 = INT32_MIN;
uint64_t t24 = 16278500010198753LLU;
int64_t x114 = -1LL;
int64_t t27 = INT64_MIN;
int8_t x118 = -2;
volatile uint16_t x120 = 678U;
uint16_t x122 = 122U;
int64_t x132 = 142129LL;
static int32_t x145 = INT32_MIN;
volatile int32_t x146 = INT32_MIN;
int8_t x147 = INT8_MIN;
uint8_t x151 = UINT8_MAX;
uint64_t x153 = UINT64_MAX;
int32_t x156 = 28;
volatile int64_t t38 = 0LL;
volatile int8_t x164 = INT8_MIN;
volatile int32_t t39 = INT32_MIN;
int32_t x169 = INT32_MIN;
volatile int64_t x170 = -891124587290LL;
static uint32_t t41 = 59U;
volatile int64_t x177 = 3847LL;
uint64_t x179 = 38150511LLU;
int64_t t43 = -9396LL;
int64_t x188 = INT64_MIN;
uint32_t x194 = 1U;
int64_t x206 = -142643270076011106LL;
uint16_t x208 = 20169U;
int16_t x213 = 11642;
uint64_t x219 = UINT64_MAX;
int64_t t52 = 784785992997LL;
static int8_t x226 = 1;
uint32_t x229 = UINT32_MAX;
int64_t x233 = INT64_MIN;
static uint8_t x242 = UINT8_MAX;
int32_t x243 = -1;
uint8_t x244 = UINT8_MAX;
static volatile uint64_t t57 = 14498LLU;
int8_t x245 = -6;
volatile int8_t x250 = -1;
int8_t x256 = INT8_MIN;
int32_t t60 = INT32_MIN;
int64_t x260 = -1LL;
uint64_t x263 = UINT64_MAX;
int16_t x266 = -1;
int64_t x270 = INT64_MIN;
volatile uint16_t x281 = 8805U;
int64_t x284 = INT64_MAX;
int64_t t66 = -93748LL;
static int64_t x285 = -4LL;
uint8_t x286 = UINT8_MAX;
static int8_t x294 = INT8_MAX;
int32_t x298 = -41528432;
static volatile int16_t x299 = 312;
static uint64_t x303 = 60897LLU;
int8_t x313 = INT8_MIN;
uint16_t x318 = UINT16_MAX;
volatile int32_t t75 = -2;
int32_t x326 = INT32_MIN;
int8_t x328 = -1;
volatile int32_t t76 = -25;
volatile int8_t x329 = INT8_MAX;
int64_t x335 = INT64_MIN;
volatile int64_t t78 = 163395471318LL;
static int32_t x340 = -1;
static int32_t x345 = -1;
int8_t x348 = 1;
uint8_t x353 = 21U;
volatile uint8_t x360 = 64U;
int32_t t85 = 7707;
int64_t t86 = -158743992850LL;
volatile uint64_t t87 = 0LLU;
volatile uint8_t x373 = 26U;
int16_t x376 = -6949;
static int32_t x380 = -5408013;
int16_t x381 = INT16_MIN;
uint64_t x385 = 866361337LLU;
uint64_t t91 = 7LLU;
int32_t x395 = INT32_MIN;
uint64_t x400 = 124LLU;
int8_t x402 = INT8_MAX;
static volatile uint64_t t95 = 13LLU;
int16_t x412 = -1;
volatile uint8_t x419 = 2U;
volatile int64_t t99 = INT64_MAX;


void f0(void) {
	int32_t x1 = 16;
	int16_t x2 = 104;
	static uint64_t x3 = 35888123147550LLU;
	volatile int64_t x4 = -91216136080008LL;
	volatile uint64_t t0 = 37193765LLU;

	t0 = (x1^((x2/x3)/x4));

	if (t0 != 16LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -9793808430713LL;
	volatile uint32_t x7 = 216885799U;
	int8_t x8 = INT8_MIN;
	volatile int64_t t1 = 1190838386915252729LL;

	t1 = (x5^((x6/x7)/x8));

	if (t1 != 9223372036854775455LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 695402U;
	int8_t x11 = -1;
	uint64_t t2 = 972814808536LLU;

	t2 = (x9^((x10/x11)/x12));

	if (t2 != 1561531713062352491LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 1263911487889LL;
	static int16_t x14 = 12732;
	volatile int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MIN;
	int64_t t3 = -693236734240297LL;

	t3 = (x13^((x14/x15)/x16));

	if (t3 != 1263911487889LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -4704LL;
	uint32_t x18 = 436909U;
	int8_t x19 = -1;
	uint64_t x20 = 46095565350785LLU;
	volatile uint64_t t4 = 16074829229LLU;

	t4 = (x17^((x18/x19)/x20));

	if (t4 != 18446744073709546912LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 45LLU;
	int16_t x22 = INT16_MIN;
	uint64_t x23 = UINT64_MAX;
	int64_t x24 = INT64_MIN;
	uint64_t t5 = 199LLU;

	t5 = (x21^((x22/x23)/x24));

	if (t5 != 45LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 0U;
	volatile uint8_t x27 = UINT8_MAX;
	int32_t t6 = -451647260;

	t6 = (x25^((x26/x27)/x28));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	int64_t x31 = INT64_MIN;
	volatile int64_t t7 = -25826LL;

	t7 = (x29^((x30/x31)/x32));

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 2LL;
	int16_t x34 = INT16_MIN;
	int32_t x35 = -2;
	uint64_t x36 = UINT64_MAX;

	t8 = (x33^((x34/x35)/x36));

	if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 17U;
	static uint32_t x38 = 163U;
	volatile int64_t x39 = -1LL;
	int16_t x40 = INT16_MIN;
	int64_t t9 = 189183428LL;

	t9 = (x37^((x38/x39)/x40));

	if (t9 != 17LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = UINT16_MAX;
	volatile int32_t t10 = -1;

	t10 = (x41^((x42/x43)/x44));

	if (t10 != 1364) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 1U;
	int16_t x47 = -1;

	t11 = (x45^((x46/x47)/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MAX;
	static uint64_t x55 = 198LLU;
	volatile int64_t x56 = 145261000967198464LL;
	uint64_t t12 = 1062711158870339468LLU;

	t12 = (x53^((x54/x55)/x56));

	if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int64_t x59 = -1LL;
	static volatile int64_t t13 = INT64_MIN;

	t13 = (x57^((x58/x59)/x60));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MAX;
	uint16_t x62 = UINT16_MAX;
	int8_t x64 = -1;
	int64_t t14 = 466532173784984165LL;

	t14 = (x61^((x62/x63)/x64));

	if (t14 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x66 = 14U;
	volatile int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MIN;
	int64_t t15 = INT64_MIN;

	t15 = (x65^((x66/x67)/x68));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x70 = UINT8_MAX;
	int8_t x71 = INT8_MIN;
	int64_t t16 = -321395LL;

	t16 = (x69^((x70/x71)/x72));

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x74 = UINT64_MAX;
	int64_t x75 = -258258480334LL;
	volatile int64_t x76 = 44667LL;
	uint64_t t17 = 212714150249LLU;

	t17 = (x73^((x74/x75)/x76));

	if (t17 != 325199469210LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x77 = 91805971557956LLU;
	int64_t x79 = 531614177LL;
	static int8_t x80 = INT8_MIN;
	volatile uint64_t t18 = 3594LLU;

	t18 = (x77^((x78/x79)/x80));

	if (t18 != 91805836570126LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 14177;
	int16_t x82 = INT16_MIN;
	static uint16_t x83 = 21U;
	int32_t x84 = -706566093;
	int32_t t19 = 171564059;

	t19 = (x81^((x82/x83)/x84));

	if (t19 != 14177) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -317;
	int8_t x86 = INT8_MAX;
	uint32_t x87 = 1790769U;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t20 = 78098975070596198LLU;

	t20 = (x85^((x86/x87)/x88));

	if (t20 != 18446744073709551299LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -1LL;
	int64_t x92 = INT64_MIN;
	volatile int64_t t21 = -108674LL;

	t21 = (x89^((x90/x91)/x92));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	int64_t x95 = -22355909621827LL;
	int8_t x96 = INT8_MIN;
	volatile int64_t t22 = 0LL;

	t22 = (x93^((x94/x95)/x96));

	if (t22 != 4294967295LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	volatile int64_t x98 = -1LL;
	uint32_t x99 = 4188777U;
	volatile int64_t t23 = 3175936074LL;

	t23 = (x97^((x98/x99)/x100));

	if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = UINT8_MAX;
	uint64_t x102 = 666875162LLU;
	uint32_t x104 = 52993467U;

	t24 = (x101^((x102/x103)/x104));

	if (t24 != 255LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x105 = UINT32_MAX;
	int16_t x106 = -1;
	static int8_t x107 = INT8_MAX;
	static int16_t x108 = 3;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (x105^((x106/x107)/x108));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x109 = 10U;
	volatile int32_t x110 = INT32_MIN;
	uint32_t x111 = UINT32_MAX;
	uint16_t x112 = 444U;
	uint32_t t26 = 213297167U;

	t26 = (x109^((x110/x111)/x112));

	if (t26 != 10U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	uint32_t x115 = UINT32_MAX;
	volatile int8_t x116 = INT8_MIN;

	t27 = (x113^((x114/x115)/x116));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -1;
	int64_t x119 = INT64_MIN;
	volatile int64_t t28 = -288511652293288542LL;

	t28 = (x117^((x118/x119)/x120));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = INT32_MIN;
	volatile int8_t x123 = -25;
	int8_t x124 = -63;
	volatile int32_t t29 = INT32_MIN;

	t29 = (x121^((x122/x123)/x124));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	static uint8_t x126 = 5U;
	uint16_t x127 = 4U;
	volatile uint8_t x128 = UINT8_MAX;
	int32_t t30 = INT32_MIN;

	t30 = (x125^((x126/x127)/x128));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -1;
	int8_t x130 = -1;
	volatile int32_t x131 = -115570397;
	volatile int64_t t31 = 223LL;

	t31 = (x129^((x130/x131)/x132));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = 1;
	volatile int16_t x134 = -3590;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = UINT32_MAX;
	uint32_t t32 = 669U;

	t32 = (x133^((x134/x135)/x136));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	uint8_t x138 = 7U;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = 59;
	uint64_t t33 = 35LLU;

	t33 = (x137^((x138/x139)/x140));

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	int32_t x142 = -146663;
	int64_t x143 = 11339608469LL;
	int64_t x144 = -1LL;
	volatile int64_t t34 = -160886377627443LL;

	t34 = (x141^((x142/x143)/x144));

	if (t34 != -2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x148 = INT16_MAX;
	int32_t t35 = -19;

	t35 = (x145^((x146/x147)/x148));

	if (t35 != -2147483136) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -234684515180946097LL;
	static int16_t x150 = -1;
	volatile int32_t x152 = INT32_MIN;
	volatile int64_t t36 = 6610751LL;

	t36 = (x149^((x150/x151)/x152));

	if (t36 != -234684515180946097LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x154 = 0;
	int32_t x155 = INT32_MIN;
	uint64_t t37 = UINT64_MAX;

	t37 = (x153^((x154/x155)/x156));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = 760718654130LL;
	static volatile int32_t x158 = INT32_MAX;
	int32_t x159 = INT32_MAX;
	uint8_t x160 = UINT8_MAX;

	t38 = (x157^((x158/x159)/x160));

	if (t38 != 760718654130LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	static volatile int32_t x162 = -1;
	int16_t x163 = INT16_MAX;

	t39 = (x161^((x162/x163)/x164));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x171 = INT8_MIN;
	static uint64_t x172 = UINT64_MAX;
	volatile uint64_t t40 = 29789397993961LLU;

	t40 = (x169^((x170/x171)/x172));

	if (t40 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 115U;
	int32_t x174 = -372;
	volatile uint16_t x175 = UINT16_MAX;
	uint32_t x176 = 183819038U;

	t41 = (x173^((x174/x175)/x176));

	if (t41 != 115U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = INT16_MIN;
	int64_t x180 = 187562LL;
	volatile uint64_t t42 = 14248011300LLU;

	t42 = (x177^((x178/x179)/x180));

	if (t42 != 2578713LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MAX;
	static int64_t x182 = -1LL;
	int32_t x183 = INT32_MAX;
	int8_t x184 = INT8_MIN;

	t43 = (x181^((x182/x183)/x184));

	if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x185 = -104;
	int8_t x186 = INT8_MIN;
	int32_t x187 = -1;
	static volatile int64_t t44 = -25546821379649028LL;

	t44 = (x185^((x186/x187)/x188));

	if (t44 != -104LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = 1U;
	uint16_t x190 = 456U;
	static volatile int8_t x191 = -1;
	int16_t x192 = -1;
	int32_t t45 = 6639539;

	t45 = (x189^((x190/x191)/x192));

	if (t45 != 457) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 5206087985LLU;
	int32_t x195 = INT32_MIN;
	static volatile int8_t x196 = 3;
	uint64_t t46 = 77LLU;

	t46 = (x193^((x194/x195)/x196));

	if (t46 != 5206087985LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = 89842964823LL;
	int8_t x198 = 49;
	int16_t x199 = -1;
	uint16_t x200 = 19U;
	int64_t t47 = -17202644436LL;

	t47 = (x197^((x198/x199)/x200));

	if (t47 != -89842964823LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -1;
	uint32_t x202 = 383530U;
	int8_t x203 = -1;
	uint32_t x204 = 8U;
	volatile uint32_t t48 = UINT32_MAX;

	t48 = (x201^((x202/x203)/x204));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -1;
	int8_t x207 = INT8_MAX;
	volatile int64_t t49 = 2741620071LL;

	t49 = (x205^((x206/x207)/x208));

	if (t49 != 55688202434LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x214 = -1LL;
	volatile int16_t x215 = INT16_MIN;
	volatile uint32_t x216 = 8100745U;
	int64_t t50 = 311627774981LL;

	t50 = (x213^((x214/x215)/x216));

	if (t50 != 11642LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MIN;
	uint64_t x218 = 30220755515757LLU;
	uint64_t x220 = 234798188LLU;
	static volatile uint64_t t51 = 154264LLU;

	t51 = (x217^((x218/x219)/x220));

	if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x221 = INT16_MIN;
	static int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MAX;
	int8_t x224 = -2;

	t52 = (x221^((x222/x223)/x224));

	if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x225 = INT64_MIN;
	int16_t x227 = 13127;
	int32_t x228 = -5598380;
	static volatile int64_t t53 = INT64_MIN;

	t53 = (x225^((x226/x227)/x228));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x230 = INT64_MIN;
	static int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MAX;
	int64_t t54 = 464215240677636517LL;

	t54 = (x229^((x230/x231)/x232));

	if (t54 != 4294836219LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	int16_t x236 = -1;
	static int64_t t55 = -1407282081323158LL;

	t55 = (x233^((x234/x235)/x236));

	if (t55 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MIN;
	static int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MIN;
	int32_t x240 = -7;
	static int32_t t56 = 476373050;

	t56 = (x237^((x238/x239)/x240));

	if (t56 != 2147483612) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x241 = UINT64_MAX;

	t57 = (x241^((x242/x243)/x244));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x246 = 509444U;
	static int64_t x247 = INT64_MAX;
	int16_t x248 = -1;
	static volatile int64_t t58 = -10100233316882624LL;

	t58 = (x245^((x246/x247)/x248));

	if (t58 != -6LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -292752310;
	int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t59 = -7847;

	t59 = (x249^((x250/x251)/x252));

	if (t59 != -292752310) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x253 = INT32_MIN;
	int32_t x254 = INT32_MIN;
	int32_t x255 = INT32_MIN;

	t60 = (x253^((x254/x255)/x256));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x257 = INT8_MIN;
	uint64_t x258 = 2867619212633083LLU;
	int32_t x259 = -1;
	static uint64_t t61 = 96202276LLU;

	t61 = (x257^((x258/x259)/x260));

	if (t61 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x261 = INT8_MAX;
	uint16_t x262 = 2U;
	uint32_t x264 = UINT32_MAX;
	volatile uint64_t t62 = 262145296746803LLU;

	t62 = (x261^((x262/x263)/x264));

	if (t62 != 127LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = -2;
	uint8_t x267 = 22U;
	int64_t x268 = INT64_MIN;
	int64_t t63 = 1802LL;

	t63 = (x265^((x266/x267)/x268));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x269 = 14441364;
	int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MIN;
	int64_t t64 = -463348986878LL;

	t64 = (x269^((x270/x271)/x272));

	if (t64 != 14441364LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x277 = 1U;
	uint64_t x278 = 31153685166LLU;
	int8_t x279 = INT8_MIN;
	uint32_t x280 = 17680405U;
	volatile uint64_t t65 = 3940LLU;

	t65 = (x277^((x278/x279)/x280));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x282 = 775;
	uint16_t x283 = 7898U;

	t66 = (x281^((x282/x283)/x284));

	if (t66 != 8805LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x287 = INT64_MAX;
	int64_t x288 = INT64_MIN;
	volatile int64_t t67 = 24231464LL;

	t67 = (x285^((x286/x287)/x288));

	if (t67 != -4LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x289 = 9344701558LLU;
	int8_t x290 = -1;
	uint8_t x291 = 2U;
	static volatile int32_t x292 = -1;
	volatile uint64_t t68 = 3721234750698608241LLU;

	t68 = (x289^((x290/x291)/x292));

	if (t68 != 9344701558LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = -1;
	int64_t x295 = 10708171511993LL;
	static int8_t x296 = INT8_MIN;
	int64_t t69 = -4526230LL;

	t69 = (x293^((x294/x295)/x296));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = UINT16_MAX;
	static uint64_t x300 = 11236163558LLU;
	volatile uint64_t t70 = 1870LLU;

	t70 = (x297^((x298/x299)/x300));

	if (t70 != 1641689378LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x301 = 11130U;
	int16_t x302 = 48;
	uint64_t x304 = 300426290LLU;
	volatile uint64_t t71 = 268606793772485LLU;

	t71 = (x301^((x302/x303)/x304));

	if (t71 != 11130LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = INT64_MAX;
	int16_t x306 = -14752;
	uint64_t x307 = 59037721870707LLU;
	uint8_t x308 = UINT8_MAX;
	volatile uint64_t t72 = 188226LLU;

	t72 = (x305^((x306/x307)/x308));

	if (t72 != 9223372036854774582LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x309 = 294LLU;
	int16_t x310 = INT16_MIN;
	volatile uint32_t x311 = UINT32_MAX;
	static volatile int16_t x312 = 150;
	uint64_t t73 = 1786323013593892890LLU;

	t73 = (x309^((x310/x311)/x312));

	if (t73 != 294LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x314 = UINT64_MAX;
	int16_t x315 = -1;
	static int64_t x316 = INT64_MIN;
	uint64_t t74 = 264783462618571681LLU;

	t74 = (x313^((x314/x315)/x316));

	if (t74 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = -26;
	int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MIN;

	t75 = (x317^((x318/x319)/x320));

	if (t75 != -26) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x325 = INT32_MIN;
	static int16_t x327 = INT16_MIN;

	t76 = (x325^((x326/x327)/x328));

	if (t76 != 2147418112) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x330 = INT64_MAX;
	uint16_t x331 = UINT16_MAX;
	int16_t x332 = INT16_MIN;
	volatile int64_t t77 = -694491697660211805LL;

	t77 = (x329^((x330/x331)/x332));

	if (t77 != -4295032960LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x333 = 4;
	static int32_t x334 = -151;
	volatile int16_t x336 = 90;

	t78 = (x333^((x334/x335)/x336));

	if (t78 != 4LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = -1;
	uint8_t x338 = 0U;
	uint8_t x339 = UINT8_MAX;
	int32_t t79 = -4823224;

	t79 = (x337^((x338/x339)/x340));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = 0;
	int8_t x342 = -1;
	uint64_t x343 = 76268066350LLU;
	static int64_t x344 = -1LL;
	uint64_t t80 = 196210LLU;

	t80 = (x341^((x342/x343)/x344));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x346 = 21505588851124356LLU;
	int16_t x347 = INT16_MIN;
	static uint64_t t81 = UINT64_MAX;

	t81 = (x345^((x346/x347)/x348));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MAX;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = -1LL;
	int16_t x352 = -1;
	uint64_t t82 = 5776836LLU;

	t82 = (x349^((x350/x351)/x352));

	if (t82 != 32767LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x354 = -1840;
	static uint16_t x355 = 6U;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t83 = 13U;

	t83 = (x353^((x354/x355)/x356));

	if (t83 != 21U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x357 = UINT8_MAX;
	int64_t x358 = INT64_MIN;
	volatile int64_t x359 = 76973787LL;
	int64_t t84 = -4LL;

	t84 = (x357^((x358/x359)/x360));

	if (t84 != -1872263402LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x361 = 2165;
	uint8_t x362 = 28U;
	static volatile uint16_t x363 = 157U;
	volatile int32_t x364 = -1;

	t85 = (x361^((x362/x363)/x364));

	if (t85 != 2165) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = -130446192;
	uint8_t x366 = UINT8_MAX;
	int16_t x367 = -15529;
	int64_t x368 = INT64_MAX;

	t86 = (x365^((x366/x367)/x368));

	if (t86 != -130446192LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x369 = 7969U;
	int64_t x370 = -1LL;
	static volatile uint64_t x371 = 136LLU;
	volatile int16_t x372 = INT16_MIN;

	t87 = (x369^((x370/x371)/x372));

	if (t87 != 7969LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x374 = 6984;
	static int64_t x375 = INT64_MAX;
	volatile int64_t t88 = 3186219982440617491LL;

	t88 = (x373^((x374/x375)/x376));

	if (t88 != 26LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = -26923437LL;
	int64_t x378 = -529LL;
	int64_t x379 = -39192026979083LL;
	int64_t t89 = 15866291557480LL;

	t89 = (x377^((x378/x379)/x380));

	if (t89 != -26923437LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x382 = 37362U;
	int32_t x383 = 22245;
	int64_t x384 = 29066336052186LL;
	int64_t t90 = 467911093193LL;

	t90 = (x381^((x382/x383)/x384));

	if (t90 != -32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MAX;
	int32_t x388 = INT32_MIN;

	t91 = (x385^((x386/x387)/x388));

	if (t91 != 866361337LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = -1;
	static int64_t x390 = -1LL;
	int8_t x391 = INT8_MIN;
	volatile int32_t x392 = INT32_MAX;
	int64_t t92 = -31LL;

	t92 = (x389^((x390/x391)/x392));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x393 = INT16_MIN;
	int64_t x394 = INT64_MIN;
	int32_t x396 = -1;
	int64_t t93 = 920930628LL;

	t93 = (x393^((x394/x395)/x396));

	if (t93 != 4294934528LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x397 = -1;
	int32_t x398 = 1;
	int32_t x399 = 267420329;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (x397^((x398/x399)/x400));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = 3826164545713LLU;
	uint8_t x403 = 5U;
	uint32_t x404 = 9537301U;

	t95 = (x401^((x402/x403)/x404));

	if (t95 != 3826164545713LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x405 = UINT64_MAX;
	static int32_t x406 = 51395577;
	uint16_t x407 = 834U;
	volatile uint16_t x408 = UINT16_MAX;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x405^((x406/x407)/x408));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x409 = INT64_MIN;
	volatile int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MIN;
	volatile int64_t t97 = INT64_MAX;

	t97 = (x409^((x410/x411)/x412));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x413 = 83U;
	static int16_t x414 = -4;
	volatile int64_t x415 = -1LL;
	volatile uint8_t x416 = 3U;
	int64_t t98 = -3541833LL;

	t98 = (x413^((x414/x415)/x416));

	if (t98 != 82LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x417 = INT64_MAX;
	uint8_t x418 = 39U;
	uint16_t x420 = 6958U;

	t99 = (x417^((x418/x419)/x420));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

