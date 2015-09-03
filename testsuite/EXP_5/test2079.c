#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = 648651;
volatile int8_t x3 = INT8_MIN;
int8_t x5 = INT8_MIN;
int32_t x6 = INT32_MAX;
int8_t x18 = INT8_MIN;
int64_t t4 = 3537919637853995LL;
uint32_t x21 = UINT32_MAX;
int64_t x25 = -1LL;
uint64_t x34 = 20650197246LLU;
uint32_t x41 = UINT32_MAX;
uint16_t x42 = UINT16_MAX;
uint32_t x55 = 26U;
int64_t x58 = -723291468244730LL;
volatile uint16_t x61 = 2951U;
int64_t t15 = -11817200421LL;
volatile int8_t x67 = INT8_MAX;
volatile int32_t x73 = -1;
int64_t x76 = INT64_MIN;
volatile int64_t x80 = -8148158887572520LL;
int8_t x82 = INT8_MIN;
int64_t x86 = -1LL;
static uint32_t x88 = 3992425U;
volatile int64_t t21 = -236124LL;
volatile uint16_t x99 = 26U;
uint16_t x103 = 0U;
uint64_t x104 = UINT64_MAX;
static uint64_t t25 = 25LLU;
uint8_t x111 = 4U;
volatile int16_t x112 = INT16_MIN;
int64_t t27 = 6460308LL;
static volatile uint64_t t28 = 76LLU;
volatile uint32_t t29 = 8578136U;
uint8_t x122 = 0U;
int8_t x125 = 5;
int64_t x131 = INT64_MIN;
int64_t t32 = -6630039799256009LL;
uint8_t x142 = 63U;
static uint32_t x143 = UINT32_MAX;
static uint32_t x146 = 7U;
static int64_t x149 = INT64_MIN;
uint32_t x154 = 1986141U;
uint64_t x156 = UINT64_MAX;
int64_t x159 = INT64_MIN;
int16_t x163 = INT16_MAX;
int8_t x164 = INT8_MIN;
volatile int32_t t40 = -203521204;
volatile int32_t x170 = INT32_MAX;
int32_t x171 = -1;
volatile int64_t x184 = -89LL;
volatile int32_t t46 = 170833425;
int64_t x190 = 122LL;
static int64_t x193 = INT64_MAX;
static volatile uint64_t t48 = 1836147LLU;
int16_t x202 = INT16_MIN;
uint8_t x203 = 12U;
uint16_t x204 = UINT16_MAX;
uint32_t x208 = UINT32_MAX;
static int32_t x213 = INT32_MAX;
static uint64_t x225 = UINT64_MAX;
uint8_t x232 = 1U;
static int8_t x235 = INT8_MIN;
int8_t x240 = -1;
uint64_t x242 = UINT64_MAX;
int16_t x246 = 14;
uint64_t t60 = 9746224225LLU;
volatile uint16_t x254 = UINT16_MAX;
volatile uint8_t x256 = 15U;
volatile int8_t x257 = INT8_MIN;
int64_t x264 = -319883425LL;
static int16_t x266 = 13658;
volatile uint64_t t66 = 13902LLU;
volatile int32_t x277 = INT32_MIN;
int8_t x283 = -1;
int8_t x290 = INT8_MIN;
volatile int64_t t70 = -264271302717LL;
int64_t x297 = INT64_MIN;
static int32_t x305 = 0;
int16_t x308 = INT16_MIN;
static uint32_t t73 = 467210680U;
int8_t x309 = -1;
int32_t t74 = -1;
int64_t x313 = -2366676LL;
volatile int64_t t75 = -104LL;
volatile int16_t x326 = INT16_MIN;
int32_t x330 = -848007;
int8_t x335 = INT8_MIN;
static int16_t x336 = 1;
int32_t x339 = -31861;
uint16_t x340 = 5138U;
int32_t x347 = INT32_MIN;
uint64_t x350 = UINT64_MAX;
volatile int64_t x357 = -1LL;
int64_t x358 = -1LL;
static uint16_t x360 = 1031U;
volatile int64_t t86 = 7LL;
int8_t x361 = 3;
int32_t x364 = INT32_MIN;
static volatile int32_t x365 = -1;
uint64_t x373 = 18279718LLU;
int8_t x378 = -1;
uint64_t t91 = 159730034416592338LLU;
int32_t x383 = INT32_MIN;
static int32_t x385 = INT32_MAX;
uint8_t x387 = 16U;
int32_t t93 = 215;
int16_t x392 = 66;
volatile int16_t x394 = INT16_MIN;
volatile int64_t x400 = INT64_MIN;
int8_t x408 = -1;
static int32_t x419 = -93;
uint64_t t99 = UINT64_MAX;


void f0(void) {
	static int64_t x1 = 604616139771LL;
	uint8_t x4 = 2U;
	volatile int64_t t0 = 1197681735610626033LL;

	t0 = (x1|((x2^x3)/x4));

	if (t0 != -53249LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x7 = INT16_MIN;
	int32_t x8 = -6;
	static volatile int32_t t1 = -56;

	t1 = (x5|((x6^x7)/x8));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 5599497375850655LL;
	int8_t x10 = -1;
	static volatile int64_t x11 = INT64_MIN;
	uint32_t x12 = 333555542U;
	volatile int64_t t2 = -4157705964527141LL;

	t2 = (x9|((x10^x11)/x12));

	if (t2 != 5599498989154783LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	static int8_t x14 = INT8_MIN;
	volatile uint64_t x15 = 22961LLU;
	uint8_t x16 = 4U;
	static volatile uint64_t t3 = 253722533673LLU;

	t3 = (x13|((x14^x15)/x16));

	if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 28U;
	static int64_t x19 = -59052232LL;
	volatile int8_t x20 = -1;

	t4 = (x17|((x18^x19)/x20));

	if (t4 != -59052196LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MAX;
	uint8_t x23 = UINT8_MAX;
	int64_t x24 = -248825021305766LL;
	static int64_t t5 = 42LL;

	t5 = (x21|((x22^x23)/x24));

	if (t5 != 4294967295LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = INT16_MAX;
	uint32_t x27 = 17340086U;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = 16892866306LL;

	t6 = (x25|((x26^x27)/x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 5698;
	uint32_t x30 = 34U;
	uint8_t x31 = 17U;
	uint64_t x32 = 150107997269LLU;
	volatile uint64_t t7 = 193943767829428862LLU;

	t7 = (x29|((x30^x31)/x32));

	if (t7 != 5698LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 52;
	static volatile int64_t x35 = -1LL;
	static int64_t x36 = INT64_MIN;
	uint64_t t8 = 12377LLU;

	t8 = (x33|((x34^x35)/x36));

	if (t8 != 53LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	static uint64_t x38 = 1340005411450991914LLU;
	int16_t x39 = -3931;
	int64_t x40 = INT64_MIN;
	volatile uint64_t t9 = 242049LLU;

	t9 = (x37|((x38^x39)/x40));

	if (t9 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x43 = 61183417923LLU;
	int32_t x44 = -1639;
	uint64_t t10 = 6166515826794LLU;

	t10 = (x41|((x42^x43)/x44));

	if (t10 != 4294967295LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int64_t x46 = INT64_MIN;
	int64_t x47 = -3795405406LL;
	static volatile int64_t x48 = -1LL;
	volatile int64_t t11 = -66759433274LL;

	t11 = (x45|((x46^x47)/x48));

	if (t11 != -9223372033059323905LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = 487319138;
	static int32_t x50 = -193811519;
	uint16_t x51 = 179U;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 1322408;

	t12 = (x49|((x50^x51)/x52));

	if (t12 != 487323514) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static volatile int16_t x54 = -1;
	int32_t x56 = INT32_MIN;
	volatile uint32_t t13 = 4297512U;

	t13 = (x53|((x54^x55)/x56));

	if (t13 != 4294967169U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int64_t x59 = -211927371016640061LL;
	int16_t x60 = INT16_MIN;
	int64_t t14 = 3064218LL;

	t14 = (x57|((x58^x59)/x60));

	if (t14 != -6478958166017LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MAX;
	int64_t x63 = INT64_MAX;
	static int32_t x64 = -10558;

	t15 = (x61|((x62^x63)/x64));

	if (t15 != -873590835085409LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 1031U;
	int32_t x66 = INT32_MIN;
	int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 408387382;

	t16 = (x65|((x66^x67)/x68));

	if (t16 != -16908289) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int64_t x70 = INT64_MIN;
	int32_t x71 = -1;
	int32_t x72 = INT32_MIN;
	static int64_t t17 = 2777706421608485LL;

	t17 = (x69|((x70^x71)/x72));

	if (t17 != -4294901761LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x74 = UINT16_MAX;
	static int32_t x75 = 1226;
	volatile int64_t t18 = -6927LL;

	t18 = (x73|((x74^x75)/x76));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = INT16_MIN;
	static int16_t x78 = INT16_MIN;
	int64_t x79 = INT64_MIN;
	volatile int64_t t19 = -9LL;

	t19 = (x77|((x78^x79)/x80));

	if (t19 != -1131LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 6U;
	int64_t x83 = INT64_MIN;
	volatile uint64_t x84 = 3385LLU;
	uint64_t t20 = 13796598869538480LLU;

	t20 = (x81|((x82^x83)/x84));

	if (t20 != 2724777558893582LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -1;
	uint16_t x87 = 12679U;

	t21 = (x85|((x86^x87)/x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = -56794600;
	static uint16_t x91 = 26U;
	int32_t x92 = INT32_MIN;
	static int32_t t22 = 3718;

	t22 = (x89|((x90^x91)/x92));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	int32_t x94 = INT32_MIN;
	int8_t x95 = INT8_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -201594;

	t23 = (x93|((x94^x95)/x96));

	if (t23 != -2130706433) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 4330654650635269LLU;
	volatile int16_t x98 = INT16_MIN;
	uint16_t x100 = UINT16_MAX;
	uint64_t t24 = 1427132749621LLU;

	t24 = (x97|((x98^x99)/x100));

	if (t24 != 4330654650635269LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 1U;
	int64_t x102 = INT64_MIN;

	t25 = (x101|((x102^x103)/x104));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 0;
	int64_t x106 = -231LL;
	static int32_t x107 = -1;
	int32_t x108 = -1;
	volatile int64_t t26 = 125002023433LL;

	t26 = (x105|((x106^x107)/x108));

	if (t26 != -230LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1531148539157170371LL;
	volatile uint8_t x110 = 1U;

	t27 = (x109|((x110^x111)/x112));

	if (t27 != -1531148539157170371LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 24;
	static int8_t x114 = 1;
	uint64_t x115 = 719LLU;
	volatile uint8_t x116 = 7U;

	t28 = (x113|((x114^x115)/x116));

	if (t28 != 126LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -5;
	int16_t x118 = INT16_MIN;
	volatile uint32_t x119 = 23041355U;
	static volatile uint32_t x120 = UINT32_MAX;

	t29 = (x117|((x118^x119)/x120));

	if (t29 != 4294967291U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	static int64_t x123 = 527523LL;
	int32_t x124 = INT32_MIN;
	volatile int64_t t30 = 1102281LL;

	t30 = (x121|((x122^x123)/x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 53U;
	int32_t x127 = 0;
	uint8_t x128 = 2U;
	volatile uint32_t t31 = 28892U;

	t31 = (x125|((x126^x127)/x128));

	if (t31 != 31U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static int32_t x130 = INT32_MIN;
	volatile uint16_t x132 = 242U;

	t32 = (x129|((x130^x131)/x132));

	if (t32 != -9185258929273340717LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	static uint64_t x134 = UINT64_MAX;
	int32_t x135 = 59309;
	int16_t x136 = -1093;
	static uint64_t t33 = 5172045965962556622LLU;

	t33 = (x133|((x134^x135)/x136));

	if (t33 != 255LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MAX;
	int32_t x138 = -6779;
	int8_t x139 = INT8_MIN;
	int64_t x140 = 242205866230LL;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x137|((x138^x139)/x140));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	volatile uint64_t x144 = 25160128558LLU;
	static uint64_t t35 = 99326LLU;

	t35 = (x141|((x142^x143)/x144));

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = 67557886946167LL;
	uint16_t x147 = 119U;
	uint8_t x148 = 9U;
	volatile int64_t t36 = -76LL;

	t36 = (x145|((x146^x147)/x148));

	if (t36 != 67557886946175LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = -1;
	int16_t x151 = INT16_MIN;
	static int8_t x152 = INT8_MAX;
	volatile int64_t t37 = 14562356546582LL;

	t37 = (x149|((x150^x151)/x152));

	if (t37 != -9223372036854775550LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	int32_t x155 = INT32_MIN;
	static uint64_t t38 = UINT64_MAX;

	t38 = (x153|((x154^x155)/x156));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = -41LL;
	volatile uint32_t x160 = 1201001474U;
	int64_t t39 = 30620LL;

	t39 = (x157|((x158^x159)/x160));

	if (t39 != 7679734271LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = 252843030;
	static uint16_t x162 = UINT16_MAX;

	t40 = (x161|((x162^x163)/x164));

	if (t40 != -234) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	static int16_t x166 = INT16_MIN;
	int64_t x167 = 530141708LL;
	static int8_t x168 = INT8_MAX;
	int64_t t41 = 58269710LL;

	t41 = (x165|((x166^x167)/x168));

	if (t41 != -4174209LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	int8_t x172 = INT8_MAX;
	int64_t t42 = 108050056100328489LL;

	t42 = (x169|((x170^x171)/x172));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	uint8_t x174 = UINT8_MAX;
	static int64_t x175 = -1LL;
	int16_t x176 = -53;
	int64_t t43 = -2088392270521898LL;

	t43 = (x173|((x174^x175)/x176));

	if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	uint8_t x178 = 5U;
	volatile int16_t x179 = INT16_MIN;
	static int8_t x180 = 1;
	static int32_t t44 = 1976124;

	t44 = (x177|((x178^x179)/x180));

	if (t44 != -123) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 1089U;
	uint8_t x182 = 1U;
	int32_t x183 = INT32_MIN;
	int64_t t45 = 3271050884710635909LL;

	t45 = (x181|((x182^x183)/x184));

	if (t45 != 24129093LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int32_t x186 = 304041299;
	volatile int16_t x187 = -1;
	volatile int16_t x188 = -1;

	t46 = (x185|((x186^x187)/x188));

	if (t46 != 304054271) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	uint32_t x191 = 31608129U;
	int16_t x192 = -1;
	volatile int64_t t47 = -8105201LL;

	t47 = (x189|((x190^x191)/x192));

	if (t47 != -59LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = 121756347341117LLU;
	int64_t x195 = -1LL;
	static int32_t x196 = 802728;

	t48 = (x193|((x194^x195)/x196));

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int64_t x198 = -1LL;
	int16_t x199 = 0;
	int16_t x200 = -1;
	volatile int64_t t49 = -35295943316406819LL;

	t49 = (x197|((x198^x199)/x200));

	if (t49 != -32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = 53;
	volatile int32_t t50 = 63872;

	t50 = (x201|((x202^x203)/x204));

	if (t50 != 53) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MIN;
	int64_t x207 = INT64_MIN;
	static volatile int64_t t51 = 286526513849975282LL;

	t51 = (x205|((x206^x207)/x208));

	if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x214 = 82U;
	volatile int8_t x215 = 1;
	int8_t x216 = -43;
	int32_t t52 = 3;

	t52 = (x213|((x214^x215)/x216));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x217 = INT64_MAX;
	static int16_t x218 = INT16_MIN;
	int8_t x219 = -1;
	static int64_t x220 = INT64_MIN;
	int64_t t53 = INT64_MAX;

	t53 = (x217|((x218^x219)/x220));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -1;
	int32_t x222 = -1;
	static uint64_t x223 = UINT64_MAX;
	static int32_t x224 = -1;
	uint64_t t54 = UINT64_MAX;

	t54 = (x221|((x222^x223)/x224));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x226 = -1;
	uint8_t x227 = 4U;
	int16_t x228 = -1;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x225|((x226^x227)/x228));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = -1;
	volatile uint32_t x230 = UINT32_MAX;
	uint64_t x231 = 25940LLU;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = (x229|((x230^x231)/x232));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = 8;
	int8_t x234 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	volatile int64_t t57 = 2259189817537049407LL;

	t57 = (x233|((x234^x235)/x236));

	if (t57 != 8LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MAX;
	uint16_t x238 = UINT16_MAX;
	volatile int16_t x239 = INT16_MIN;
	static int32_t t58 = -2;

	t58 = (x237|((x238^x239)/x240));

	if (t58 != 32895) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x241 = UINT8_MAX;
	int64_t x243 = -1LL;
	int16_t x244 = -1;
	volatile uint64_t t59 = 20380624670LLU;

	t59 = (x241|((x242^x243)/x244));

	if (t59 != 255LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MIN;
	static uint64_t x247 = 39721555845497LLU;
	int16_t x248 = INT16_MIN;

	t60 = (x245|((x246^x247)/x248));

	if (t60 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = UINT16_MAX;
	int16_t x255 = INT16_MIN;
	int32_t t61 = -60;

	t61 = (x253|((x254^x255)/x256));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x258 = -21;
	volatile int64_t x259 = INT64_MAX;
	int64_t x260 = INT64_MAX;
	static volatile int64_t t62 = 208146756516LL;

	t62 = (x257|((x258^x259)/x260));

	if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = 25611692U;
	int64_t x262 = INT64_MIN;
	static int32_t x263 = -19;
	int64_t t63 = -2031558184728LL;

	t63 = (x261|((x262^x263)/x264));

	if (t63 != -28824838212LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = UINT64_MAX;
	int64_t x267 = INT64_MAX;
	static uint16_t x268 = UINT16_MAX;
	static volatile uint64_t t64 = UINT64_MAX;

	t64 = (x265|((x266^x267)/x268));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = -1LL;
	uint8_t x270 = 1U;
	int16_t x271 = INT16_MIN;
	uint8_t x272 = 103U;
	static int64_t t65 = -1114927849167302LL;

	t65 = (x269|((x270^x271)/x272));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = 376LLU;
	int16_t x274 = -1;
	uint8_t x275 = UINT8_MAX;
	uint8_t x276 = 2U;

	t66 = (x273|((x274^x275)/x276));

	if (t66 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x278 = -1;
	int32_t x279 = INT32_MIN;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t67 = 13;

	t67 = (x277|((x278^x279)/x280));

	if (t67 != -2147450880) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x281 = 1463;
	static int64_t x282 = INT64_MAX;
	volatile int32_t x284 = -202482;
	int64_t t68 = -3104156LL;

	t68 = (x281|((x282^x283)/x284));

	if (t68 != 45551565260735LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = -1;
	int8_t x287 = INT8_MAX;
	volatile uint32_t x288 = 1090710974U;
	uint32_t t69 = 1U;

	t69 = (x285|((x286^x287)/x288));

	if (t69 != 4294967171U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = -95364873LL;
	uint16_t x291 = 0U;
	int16_t x292 = INT16_MIN;

	t70 = (x289|((x290^x291)/x292));

	if (t70 != -95364873LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x298 = 5;
	uint8_t x299 = 2U;
	static volatile int32_t x300 = INT32_MAX;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x297|((x298^x299)/x300));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = -1LL;
	static int64_t x302 = -1LL;
	static uint16_t x303 = 10U;
	static volatile int16_t x304 = INT16_MIN;
	volatile int64_t t72 = 106716LL;

	t72 = (x301|((x302^x303)/x304));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x306 = UINT32_MAX;
	static int8_t x307 = 34;

	t73 = (x305|((x306^x307)/x308));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x310 = INT8_MIN;
	uint8_t x311 = 1U;
	int32_t x312 = INT32_MAX;

	t74 = (x309|((x310^x311)/x312));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x314 = 30080754;
	static int16_t x315 = INT16_MIN;
	int64_t x316 = INT64_MIN;

	t75 = (x313|((x314^x315)/x316));

	if (t75 != -2366676LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x317 = INT16_MIN;
	static int64_t x318 = INT64_MIN;
	int16_t x319 = INT16_MIN;
	uint32_t x320 = UINT32_MAX;
	volatile int64_t t76 = 1674LL;

	t76 = (x317|((x318^x319)/x320));

	if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x321 = INT8_MIN;
	volatile int8_t x322 = -15;
	volatile uint32_t x323 = 8661U;
	int16_t x324 = 4784;
	volatile uint32_t t77 = 374534191U;

	t77 = (x321|((x322^x323)/x324));

	if (t77 != 4294967279U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	volatile int32_t t78 = 18;

	t78 = (x325|((x326^x327)/x328));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = INT64_MIN;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MAX;
	int64_t t79 = 49861LL;

	t79 = (x329|((x330^x331)/x332));

	if (t79 != -9223372036854769130LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = -119;
	int32_t t80 = -226423437;

	t80 = (x333|((x334^x335)/x336));

	if (t80 != -119) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x337 = -1;
	int64_t x338 = INT64_MAX;
	int64_t t81 = -21251056473LL;

	t81 = (x337|((x338^x339)/x340));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 10752665951915871LLU;
	int8_t x342 = INT8_MIN;
	uint32_t x343 = 405766845U;
	uint32_t x344 = UINT32_MAX;
	uint64_t t82 = 11834LLU;

	t82 = (x341|((x342^x343)/x344));

	if (t82 != 10752665951915871LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MIN;
	int8_t x348 = 1;
	int32_t t83 = -188423;

	t83 = (x345|((x346^x347)/x348));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x349 = INT16_MAX;
	static int8_t x351 = 1;
	static int16_t x352 = INT16_MAX;
	volatile uint64_t t84 = 183LLU;

	t84 = (x349|((x350^x351)/x352));

	if (t84 != 562967133847551LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = -1;
	static int8_t x354 = 0;
	int32_t x355 = INT32_MAX;
	uint16_t x356 = 90U;
	static int32_t t85 = -3344925;

	t85 = (x353|((x354^x355)/x356));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x359 = INT64_MAX;

	t86 = (x357|((x358^x359)/x360));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x362 = -2;
	int8_t x363 = INT8_MIN;
	volatile int32_t t87 = 0;

	t87 = (x361|((x362^x363)/x364));

	if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x366 = INT64_MIN;
	int64_t x367 = INT64_MAX;
	int16_t x368 = INT16_MIN;
	volatile int64_t t88 = -356875380176043634LL;

	t88 = (x365|((x366^x367)/x368));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = 767LLU;
	int64_t x370 = INT64_MIN;
	int8_t x371 = -1;
	int16_t x372 = 27;
	volatile uint64_t t89 = 300LLU;

	t89 = (x369|((x370^x371)/x372));

	if (t89 != 341606371735362303LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x374 = 1U;
	int8_t x375 = INT8_MIN;
	static int8_t x376 = 1;
	uint64_t t90 = 148435857957199LLU;

	t90 = (x373|((x374^x375)/x376));

	if (t90 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x377 = UINT16_MAX;
	int64_t x379 = -1LL;
	uint64_t x380 = 1414LLU;

	t91 = (x377|((x378^x379)/x380));

	if (t91 != 65535LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = 3;
	int8_t x382 = INT8_MIN;
	int8_t x384 = -1;
	int32_t t92 = -3665;

	t92 = (x381|((x382^x383)/x384));

	if (t92 != -2147483517) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x386 = 4U;
	int8_t x388 = -1;

	t93 = (x385|((x386^x387)/x388));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = INT8_MAX;
	uint32_t x390 = UINT32_MAX;
	volatile uint16_t x391 = UINT16_MAX;
	volatile uint32_t t94 = 2869U;

	t94 = (x389|((x390^x391)/x392));

	if (t94 != 65074303U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = INT32_MAX;
	int8_t x395 = INT8_MIN;
	volatile int16_t x396 = 89;
	int32_t t95 = INT32_MAX;

	t95 = (x393|((x394^x395)/x396));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x397 = 3515U;
	int64_t x398 = INT64_MIN;
	volatile int16_t x399 = INT16_MAX;
	volatile int64_t t96 = 70194LL;

	t96 = (x397|((x398^x399)/x400));

	if (t96 != 3515LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = 4;
	int8_t x406 = INT8_MAX;
	int16_t x407 = -15009;
	volatile int32_t t97 = 913983;

	t97 = (x405|((x406^x407)/x408));

	if (t97 != 15076) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x413 = 17755U;
	uint16_t x414 = 3327U;
	volatile int32_t x415 = INT32_MAX;
	int8_t x416 = 53;
	volatile int32_t t98 = 472079;

	t98 = (x413|((x414^x415)/x416));

	if (t98 != 40519547) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x417 = UINT64_MAX;
	int8_t x418 = 1;
	int64_t x420 = INT64_MIN;

	t99 = (x417|((x418^x419)/x420));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

