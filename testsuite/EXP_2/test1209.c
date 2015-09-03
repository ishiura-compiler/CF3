#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = INT8_MAX;
int8_t x17 = INT8_MIN;
int32_t t4 = 3163078;
uint8_t x22 = 27U;
static uint32_t x24 = 4035495U;
volatile int8_t x29 = 15;
uint8_t x36 = 0U;
int64_t x37 = INT64_MIN;
volatile int64_t t9 = -76850661135214358LL;
uint32_t x51 = UINT32_MAX;
int64_t t14 = 14081LL;
int16_t x63 = -1;
int64_t x66 = 366545620LL;
volatile int32_t t16 = -1;
static int16_t x69 = INT16_MIN;
uint32_t x71 = 630U;
int32_t x76 = INT32_MIN;
int8_t x77 = INT8_MAX;
static int16_t x85 = INT16_MIN;
uint8_t x87 = UINT8_MAX;
volatile uint16_t x92 = 1815U;
int16_t x99 = -1;
static volatile uint16_t x104 = UINT16_MAX;
static uint64_t x106 = 23970046580813597LLU;
int8_t x117 = -1;
static int16_t x122 = INT16_MIN;
volatile int64_t t30 = -949801309204090280LL;
static int16_t x126 = -1;
volatile int64_t t31 = -1286LL;
volatile uint32_t x130 = 193U;
int64_t x131 = INT64_MIN;
volatile int32_t t32 = -2;
static volatile int8_t x134 = 1;
int64_t x137 = -751LL;
volatile uint8_t x140 = 53U;
int32_t x143 = INT32_MAX;
uint32_t x146 = 25U;
uint8_t x159 = UINT8_MAX;
int8_t x170 = INT8_MAX;
static volatile int32_t t42 = 56993;
static int32_t x173 = INT32_MIN;
int32_t t43 = INT32_MAX;
int32_t x181 = -290211;
volatile int32_t t45 = 12;
volatile int32_t x186 = -1;
int8_t x187 = INT8_MIN;
volatile int32_t t46 = 538805440;
int8_t x189 = INT8_MIN;
volatile int64_t x192 = 5246149158371LL;
int16_t x194 = -1;
int64_t x196 = INT64_MIN;
int16_t x197 = INT16_MAX;
uint64_t x198 = UINT64_MAX;
volatile uint8_t x199 = 44U;
static volatile uint32_t x203 = UINT32_MAX;
int32_t t51 = -31496;
int64_t x211 = INT64_MIN;
volatile int32_t t52 = -5189;
int8_t x214 = 0;
static volatile uint8_t x217 = UINT8_MAX;
volatile uint32_t t54 = 3U;
uint16_t x224 = 1656U;
volatile int64_t x226 = -1LL;
volatile int16_t x232 = INT16_MIN;
uint64_t t57 = 30490223046LLU;
uint16_t x234 = 0U;
int8_t x236 = -1;
int64_t x241 = INT64_MIN;
int32_t t61 = -1584547;
volatile uint16_t x252 = UINT16_MAX;
int64_t t62 = -142996531827656833LL;
int16_t x253 = 15400;
int64_t t63 = -396128139433LL;
static int64_t t65 = -238212994829428756LL;
int16_t x270 = INT16_MIN;
volatile int32_t x271 = -11;
int64_t x280 = INT64_MAX;
volatile int32_t x281 = INT32_MIN;
uint16_t x291 = 0U;
int16_t x295 = INT16_MAX;
uint8_t x320 = 0U;
int32_t t79 = 53872;
static int64_t x324 = -27LL;
int16_t x336 = INT16_MIN;
int64_t x342 = INT64_MAX;
static int8_t x345 = 1;
volatile uint32_t x346 = UINT32_MAX;
volatile int32_t t86 = 6;
int64_t x349 = INT64_MIN;
uint64_t x352 = UINT64_MAX;
volatile uint64_t t87 = 17477LLU;
static volatile int64_t x358 = 1919122913LL;
int32_t t90 = -98;
int32_t t93 = 352189;
static int64_t x379 = 481924059366563LL;
int32_t x382 = INT32_MIN;
int16_t x383 = -160;
int32_t x384 = 63;
static uint64_t t96 = 945208LLU;
static int16_t x394 = INT16_MIN;
int64_t x397 = -612567888064693141LL;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static volatile uint16_t x2 = 373U;
	uint64_t x3 = UINT64_MAX;
	static int64_t t0 = 4389450785510683043LL;

	t0 = ((x1-(x2==x3))^x4);

	if (t0 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 13344794U;
	int16_t x6 = -6248;
	int8_t x7 = INT8_MAX;
	uint32_t x8 = 864934U;
	uint32_t t1 = 2219570U;

	t1 = ((x5-(x6==x7))^x8);

	if (t1 != 13013692U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 16316U;
	static int64_t x10 = INT64_MIN;
	volatile int16_t x11 = 0;
	volatile uint8_t x12 = UINT8_MAX;
	uint32_t t2 = 742U;

	t2 = ((x9-(x10==x11))^x12);

	if (t2 != 16195U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 2669311633LL;
	int8_t x14 = INT8_MAX;
	static uint64_t x15 = UINT64_MAX;
	static uint16_t x16 = UINT16_MAX;
	int64_t t3 = -30928995959LL;

	t3 = ((x13-(x14==x15))^x16);

	if (t3 != 2669316462LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MAX;
	static volatile uint8_t x19 = 0U;
	volatile int32_t x20 = INT32_MAX;

	t4 = ((x17-(x18==x19))^x20);

	if (t4 != -2147483521) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 19U;
	int32_t x23 = INT32_MIN;
	volatile uint32_t t5 = 1656059579U;

	t5 = ((x21-(x22==x23))^x24);

	if (t5 != 4035508U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -5110LL;
	uint16_t x26 = UINT16_MAX;
	uint16_t x27 = UINT16_MAX;
	uint16_t x28 = 3146U;
	static int64_t t6 = 2337LL;

	t6 = ((x25-(x26==x27))^x28);

	if (t6 != -8125LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = 122841359;
	uint16_t x31 = UINT16_MAX;
	volatile int32_t x32 = 28962;
	int32_t t7 = 45284;

	t7 = ((x29-(x30==x31))^x32);

	if (t7 != 28973) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	static int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MIN;
	static volatile int32_t t8 = -3369220;

	t8 = ((x33-(x34==x35))^x36);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MAX;
	int16_t x39 = INT16_MAX;
	uint8_t x40 = UINT8_MAX;

	t9 = ((x37-(x38==x39))^x40);

	if (t9 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 15615087336276LLU;
	static int16_t x42 = -1;
	volatile int32_t x43 = INT32_MIN;
	volatile int16_t x44 = INT16_MIN;
	volatile uint64_t t10 = 0LLU;

	t10 = ((x41-(x42==x43))^x44);

	if (t10 != 18446728458622229332LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	uint64_t x46 = 119120275217744961LLU;
	uint16_t x47 = 120U;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 201;

	t11 = ((x45-(x46==x47))^x48);

	if (t11 != -2147418113) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int32_t x50 = 12049561;
	static int8_t x52 = INT8_MAX;
	static int64_t t12 = -31713395LL;

	t12 = ((x49-(x50==x51))^x52);

	if (t12 != -128LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 2510265664955LLU;
	uint16_t x54 = 63U;
	int8_t x55 = 3;
	int8_t x56 = INT8_MIN;
	uint64_t t13 = 5800869448097789277LLU;

	t13 = ((x53-(x54==x55))^x56);

	if (t13 != 18446741563443886651LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 0U;
	int64_t x58 = INT64_MAX;
	int32_t x59 = -31;
	static int64_t x60 = 9LL;

	t14 = ((x57-(x58==x59))^x60);

	if (t14 != 9LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 27;
	int32_t x62 = -1;
	int64_t x64 = INT64_MIN;
	int64_t t15 = -1395265LL;

	t15 = ((x61-(x62==x63))^x64);

	if (t15 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 2U;
	int32_t x67 = 1032315688;
	int16_t x68 = INT16_MIN;

	t16 = ((x65-(x66==x67))^x68);

	if (t16 != -32766) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	static volatile uint8_t x72 = 63U;
	static volatile int32_t t17 = 4080943;

	t17 = ((x69-(x70==x71))^x72);

	if (t17 != -32705) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x73 = 11811989U;
	uint32_t x74 = UINT32_MAX;
	uint8_t x75 = 2U;
	uint32_t t18 = 352479000U;

	t18 = ((x73-(x74==x75))^x76);

	if (t18 != 2159295637U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 62U;
	volatile int32_t x79 = INT32_MIN;
	int16_t x80 = -1;
	volatile int32_t t19 = 9298785;

	t19 = ((x77-(x78==x79))^x80);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 824954720U;
	static int32_t x82 = INT32_MIN;
	int32_t x83 = INT32_MIN;
	static int8_t x84 = -1;
	static volatile uint32_t t20 = 5212674U;

	t20 = ((x81-(x82==x83))^x84);

	if (t20 != 3470012576U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 2U;
	int8_t x88 = -11;
	int32_t t21 = -1705726;

	t21 = ((x85-(x86==x87))^x88);

	if (t21 != 32757) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -1;
	uint16_t x90 = 483U;
	volatile int32_t x91 = -1;
	volatile int32_t t22 = -126;

	t22 = ((x89-(x90==x91))^x92);

	if (t22 != -1816) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x94 = INT32_MIN;
	volatile int16_t x95 = 6287;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t23 = 378679LLU;

	t23 = ((x93-(x94==x95))^x96);

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 21215U;
	uint64_t x98 = UINT64_MAX;
	static int32_t x100 = -156;
	int32_t t24 = 408234124;

	t24 = ((x97-(x98==x99))^x100);

	if (t24 != -21062) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	int32_t x102 = 1341290;
	int64_t x103 = INT64_MAX;
	volatile int64_t t25 = -1LL;

	t25 = ((x101-(x102==x103))^x104);

	if (t25 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	static uint32_t x107 = UINT32_MAX;
	int8_t x108 = -2;
	volatile int64_t t26 = 896LL;

	t26 = ((x105-(x106==x107))^x108);

	if (t26 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = UINT8_MAX;
	volatile uint16_t x110 = UINT16_MAX;
	volatile uint64_t x111 = 163795744LLU;
	int16_t x112 = -1;
	volatile int32_t t27 = 1;

	t27 = ((x109-(x110==x111))^x112);

	if (t27 != -256) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 93U;
	static volatile int16_t x114 = 0;
	volatile int64_t x115 = -1LL;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = 57;

	t28 = ((x113-(x114==x115))^x116);

	if (t28 != -35) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = UINT8_MAX;
	static int32_t x119 = INT32_MIN;
	int16_t x120 = -1;
	int32_t t29 = -2349674;

	t29 = ((x117-(x118==x119))^x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 13834757U;
	static volatile int16_t x123 = 0;
	int64_t x124 = -53050518LL;

	t30 = ((x121-(x122==x123))^x124);

	if (t30 != -66741905LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	volatile int64_t x127 = INT64_MIN;
	int64_t x128 = -111443LL;

	t31 = ((x125-(x126==x127))^x128);

	if (t31 != -9223372036854664366LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = 15651;
	volatile int16_t x132 = -1;

	t32 = ((x129-(x130==x131))^x132);

	if (t32 != -15652) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int8_t x135 = -1;
	int8_t x136 = INT8_MAX;
	static volatile int32_t t33 = -15;

	t33 = ((x133-(x134==x135))^x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = 38671949;
	static uint8_t x139 = UINT8_MAX;
	int64_t t34 = 11145573831826154LL;

	t34 = ((x137-(x138==x139))^x140);

	if (t34 != -732LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	uint8_t x142 = 5U;
	static uint64_t x144 = 3954355580929LLU;
	volatile uint64_t t35 = 2682LLU;

	t35 = ((x141-(x142==x143))^x144);

	if (t35 != 18446740119353970561LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x145 = INT16_MAX;
	static volatile int32_t x147 = INT32_MAX;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -14961035;

	t36 = ((x145-(x146==x147))^x148);

	if (t36 != -32641) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 941434322;
	static int32_t x150 = -28982036;
	uint16_t x151 = 2839U;
	static uint64_t x152 = 100412LLU;
	volatile uint64_t t37 = 9602335389529LLU;

	t37 = ((x149-(x150==x151))^x152);

	if (t37 != 941403630LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	int16_t x154 = INT16_MAX;
	uint8_t x155 = UINT8_MAX;
	uint64_t x156 = 11597LLU;
	uint64_t t38 = 58028LLU;

	t38 = ((x153-(x154==x155))^x156);

	if (t38 != 18446744073709540018LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	uint16_t x158 = 83U;
	uint32_t x160 = UINT32_MAX;
	static uint32_t t39 = 20113U;

	t39 = ((x157-(x158==x159))^x160);

	if (t39 != 2147483647U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -185024897;
	uint32_t x162 = UINT32_MAX;
	int8_t x163 = -2;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t40 = -274;

	t40 = ((x161-(x162==x163))^x164);

	if (t40 != -185024896) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 97251U;
	volatile int16_t x166 = INT16_MAX;
	volatile int32_t x167 = INT32_MAX;
	int64_t x168 = -1LL;
	volatile int64_t t41 = -2872222787LL;

	t41 = ((x165-(x166==x167))^x168);

	if (t41 != -97252LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 1U;
	static uint64_t x171 = UINT64_MAX;
	static int8_t x172 = 17;

	t42 = ((x169-(x170==x171))^x172);

	if (t42 != 16) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = 1U;
	int64_t x175 = INT64_MAX;
	int16_t x176 = -1;

	t43 = ((x173-(x174==x175))^x176);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 14594167615512240LLU;
	int8_t x178 = INT8_MIN;
	uint32_t x179 = 1U;
	int64_t x180 = -1LL;
	volatile uint64_t t44 = 642320153926LLU;

	t44 = ((x177-(x178==x179))^x180);

	if (t44 != 18432149906094039375LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	volatile int8_t x183 = INT8_MIN;
	int32_t x184 = -6124;

	t45 = ((x181-(x182==x183))^x184);

	if (t45 != 293449) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 0U;
	volatile int8_t x188 = INT8_MIN;

	t46 = ((x185-(x186==x187))^x188);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MIN;
	volatile int32_t x191 = 14734728;
	volatile int64_t t47 = 1738826780711467LL;

	t47 = ((x189-(x190==x191))^x192);

	if (t47 != -5246149158301LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 49LLU;
	volatile int16_t x195 = -178;
	static volatile uint64_t t48 = 287469212288433087LLU;

	t48 = ((x193-(x194==x195))^x196);

	if (t48 != 9223372036854775857LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x200 = -1;
	static volatile int32_t t49 = 239768699;

	t49 = ((x197-(x198==x199))^x200);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 4;
	int64_t x202 = -39488450709350LL;
	volatile int32_t x204 = INT32_MAX;
	volatile int32_t t50 = 10886;

	t50 = ((x201-(x202==x203))^x204);

	if (t50 != 2147483643) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	int32_t x206 = INT32_MAX;
	int32_t x207 = INT32_MIN;
	uint8_t x208 = 15U;

	t51 = ((x205-(x206==x207))^x208);

	if (t51 != 2147483632) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -3;
	volatile uint16_t x210 = 5836U;
	int32_t x212 = INT32_MIN;

	t52 = ((x209-(x210==x211))^x212);

	if (t52 != 2147483645) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 86U;
	uint64_t x215 = 1719056390LLU;
	uint16_t x216 = 26U;
	volatile int32_t t53 = 1;

	t53 = ((x213-(x214==x215))^x216);

	if (t53 != 76) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MIN;
	static int8_t x219 = -6;
	uint32_t x220 = 185U;

	t54 = ((x217-(x218==x219))^x220);

	if (t54 != 70U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	static int8_t x222 = -1;
	int32_t x223 = -31514418;
	uint64_t t55 = 68046897528112747LLU;

	t55 = ((x221-(x222==x223))^x224);

	if (t55 != 18446744073709549959LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	int64_t x227 = INT64_MIN;
	static volatile int64_t x228 = -1LL;
	int64_t t56 = -6196945643869LL;

	t56 = ((x225-(x226==x227))^x228);

	if (t56 != -65536LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = 3348LLU;
	static volatile int16_t x230 = 16;
	uint16_t x231 = 19584U;

	t57 = ((x229-(x230==x231))^x232);

	if (t57 != 18446744073709522196LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x233 = INT8_MIN;
	volatile int32_t x235 = -1;
	int32_t t58 = -7924091;

	t58 = ((x233-(x234==x235))^x236);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	static volatile uint64_t x238 = 2851972103LLU;
	uint64_t x239 = 2911959077701LLU;
	static int64_t x240 = 8181793943LL;
	volatile int64_t t59 = 1LL;

	t59 = ((x237-(x238==x239))^x240);

	if (t59 != -8181793944LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x242 = -1;
	uint32_t x243 = 31085U;
	int64_t x244 = 28020082204LL;
	static volatile int64_t t60 = 1681448064714LL;

	t60 = ((x241-(x242==x243))^x244);

	if (t60 != -9223372008834693604LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -1;
	uint16_t x246 = 2U;
	int32_t x247 = -1;
	static int16_t x248 = INT16_MIN;

	t61 = ((x245-(x246==x247))^x248);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 6LL;
	static volatile int8_t x250 = 2;
	int16_t x251 = 5;

	t62 = ((x249-(x250==x251))^x252);

	if (t62 != 65529LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = 209351922LL;
	static uint8_t x255 = 24U;
	static int64_t x256 = INT64_MIN;

	t63 = ((x253-(x254==x255))^x256);

	if (t63 != -9223372036854760408LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 7LL;
	static int16_t x258 = -6;
	static uint64_t x259 = 8LLU;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t64 = 67496406205703LLU;

	t64 = ((x257-(x258==x259))^x260);

	if (t64 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x261 = UINT32_MAX;
	int32_t x262 = -23867;
	int32_t x263 = 404978;
	int64_t x264 = INT64_MAX;

	t65 = ((x261-(x262==x263))^x264);

	if (t65 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = -1;
	volatile int16_t x266 = INT16_MAX;
	volatile uint8_t x267 = 1U;
	volatile int32_t x268 = INT32_MIN;
	int32_t t66 = INT32_MAX;

	t66 = ((x265-(x266==x267))^x268);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MIN;
	volatile int32_t x272 = -1488;
	static volatile int32_t t67 = -1;

	t67 = ((x269-(x270==x271))^x272);

	if (t67 != 2147482160) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	static uint8_t x274 = UINT8_MAX;
	int64_t x275 = -929911050863355291LL;
	volatile uint64_t x276 = UINT64_MAX;
	volatile uint64_t t68 = 1996218378840774661LLU;

	t68 = ((x273-(x274==x275))^x276);

	if (t68 != 127LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	static volatile int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	volatile int64_t t69 = 5LL;

	t69 = ((x277-(x278==x279))^x280);

	if (t69 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MAX;
	uint32_t x283 = 4551391U;
	volatile uint16_t x284 = 15U;
	int32_t t70 = 7319;

	t70 = ((x281-(x282==x283))^x284);

	if (t70 != -2147483633) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	uint16_t x286 = 15U;
	int16_t x287 = INT16_MAX;
	volatile uint64_t x288 = UINT64_MAX;
	uint64_t t71 = 10041268LLU;

	t71 = ((x285-(x286==x287))^x288);

	if (t71 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = INT64_MAX;
	int32_t x290 = INT32_MIN;
	int64_t x292 = 6478794340665LL;
	static volatile int64_t t72 = 49387LL;

	t72 = ((x289-(x290==x291))^x292);

	if (t72 != 9223365558060435142LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MIN;
	volatile uint32_t x294 = UINT32_MAX;
	static int32_t x296 = INT32_MAX;
	static int32_t t73 = -89845;

	t73 = ((x293-(x294==x295))^x296);

	if (t73 != -2147450881) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = -1;
	static uint16_t x298 = 26U;
	int64_t x299 = -1698288099619812LL;
	int8_t x300 = INT8_MAX;
	int32_t t74 = 6952402;

	t74 = ((x297-(x298==x299))^x300);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 127;
	static uint32_t x302 = 635U;
	static volatile uint32_t x303 = UINT32_MAX;
	static int64_t x304 = INT64_MIN;
	int64_t t75 = -34317755778872747LL;

	t75 = ((x301-(x302==x303))^x304);

	if (t75 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 5975429U;
	int64_t x306 = INT64_MIN;
	int16_t x307 = -16;
	volatile uint8_t x308 = 13U;
	volatile uint32_t t76 = 5002U;

	t76 = ((x305-(x306==x307))^x308);

	if (t76 != 5975432U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 333LLU;
	static int32_t x310 = INT32_MIN;
	uint8_t x311 = 1U;
	int32_t x312 = INT32_MIN;
	uint64_t t77 = 221768LLU;

	t77 = ((x309-(x310==x311))^x312);

	if (t77 != 18446744071562068301LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	int32_t x314 = -1;
	int32_t x315 = INT32_MIN;
	int32_t x316 = 539005981;
	int32_t t78 = -59585380;

	t78 = ((x313-(x314==x315))^x316);

	if (t78 != 1608477666) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = -1;
	uint32_t x318 = 9U;
	int8_t x319 = INT8_MIN;

	t79 = ((x317-(x318==x319))^x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MAX;
	uint64_t x323 = 769954176945254LLU;
	volatile uint64_t t80 = 21773411LLU;

	t80 = ((x321-(x322==x323))^x324);

	if (t80 != 26LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = 4491260730LL;
	int16_t x326 = INT16_MAX;
	static uint8_t x327 = UINT8_MAX;
	static int64_t x328 = INT64_MIN;
	int64_t t81 = -11103908LL;

	t81 = ((x325-(x326==x327))^x328);

	if (t81 != -9223372032363515078LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	uint64_t x330 = 31705092LLU;
	int8_t x331 = INT8_MIN;
	static uint32_t x332 = 132233U;
	static volatile int64_t t82 = -223978LL;

	t82 = ((x329-(x330==x331))^x332);

	if (t82 != -9223372036854643575LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	static volatile int8_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	int32_t t83 = -371585;

	t83 = ((x333-(x334==x335))^x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = 1;
	int64_t x339 = -3557673255440047LL;
	static int16_t x340 = 13;
	volatile int32_t t84 = -1;

	t84 = ((x337-(x338==x339))^x340);

	if (t84 != -32755) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	uint8_t x343 = 20U;
	int32_t x344 = -1;
	int32_t t85 = -182744;

	t85 = ((x341-(x342==x343))^x344);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x347 = INT32_MIN;
	static volatile int32_t x348 = INT32_MIN;

	t86 = ((x345-(x346==x347))^x348);

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x350 = INT8_MAX;
	uint64_t x351 = 14LLU;

	t87 = ((x349-(x350==x351))^x352);

	if (t87 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MAX;
	int32_t x356 = -1;
	volatile int64_t t88 = INT64_MAX;

	t88 = ((x353-(x354==x355))^x356);

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x357 = -1;
	int16_t x359 = INT16_MAX;
	static int64_t x360 = 3259720445208267122LL;
	volatile int64_t t89 = -716422691081920LL;

	t89 = ((x357-(x358==x359))^x360);

	if (t89 != -3259720445208267123LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = 14703;
	int32_t x362 = INT32_MIN;
	uint16_t x363 = UINT16_MAX;
	int32_t x364 = -27;

	t90 = ((x361-(x362==x363))^x364);

	if (t90 != -14710) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	volatile int64_t x366 = INT64_MAX;
	int32_t x367 = 678;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t91 = 20849;

	t91 = ((x365-(x366==x367))^x368);

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = INT8_MIN;
	int32_t x370 = INT32_MIN;
	uint64_t x371 = 1LLU;
	int8_t x372 = INT8_MIN;
	static volatile int32_t t92 = -4;

	t92 = ((x369-(x370==x371))^x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -501377;
	static uint16_t x374 = 1U;
	uint32_t x375 = UINT32_MAX;
	static int32_t x376 = 146959;

	t93 = ((x373-(x374==x375))^x376);

	if (t93 != -366736) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	volatile int8_t x378 = -1;
	volatile int32_t x380 = -1;
	static volatile int32_t t94 = -1;

	t94 = ((x377-(x378==x379))^x380);

	if (t94 != -256) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 20U;
	volatile int32_t t95 = 2;

	t95 = ((x381-(x382==x383))^x384);

	if (t95 != 43) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	uint8_t x386 = 5U;
	int64_t x387 = 1LL;
	int32_t x388 = -251825076;

	t96 = ((x385-(x386==x387))^x388);

	if (t96 != 251825075LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = INT32_MIN;
	volatile int64_t x390 = INT64_MIN;
	volatile int16_t x391 = -341;
	uint64_t x392 = UINT64_MAX;
	uint64_t t97 = 87873274222LLU;

	t97 = ((x389-(x390==x391))^x392);

	if (t97 != 2147483647LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = 7331923976572LL;
	int64_t x395 = -1LL;
	volatile int64_t x396 = INT64_MIN;
	int64_t t98 = -77540LL;

	t98 = ((x393-(x394==x395))^x396);

	if (t98 != -9223364704930799236LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x398 = -1LL;
	int16_t x399 = -1;
	volatile uint64_t x400 = 199415109344LLU;
	volatile uint64_t t99 = 1997304076586LLU;

	t99 = ((x397-(x398==x399))^x400);

	if (t99 != 17834176382708918922LLU) { NG(); } else { ; }
	
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

