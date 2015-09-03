#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MIN;
uint64_t x2 = 446167731319657943LLU;
static volatile int64_t x3 = INT64_MAX;
volatile int16_t x4 = 21;
int32_t x6 = 10;
uint32_t t1 = 3U;
uint64_t t4 = 201907449LLU;
static uint64_t t5 = 3LLU;
int8_t x29 = -1;
uint32_t x31 = 37281U;
int8_t x33 = INT8_MIN;
uint8_t x40 = 21U;
static volatile int32_t t11 = 8;
int32_t t13 = -22;
volatile uint64_t t14 = 755LLU;
int16_t x70 = 1;
static volatile int32_t t16 = INT32_MIN;
volatile uint64_t x74 = 11022327LLU;
uint64_t t17 = 404716678450803LLU;
int32_t x83 = INT32_MIN;
volatile int32_t x94 = -1;
uint8_t x97 = 20U;
int64_t x102 = -138606738226280650LL;
volatile int64_t t22 = 1034587870578082127LL;
static int8_t x106 = 1;
uint32_t x124 = 1633253U;
uint64_t x151 = 5479LLU;
int32_t x153 = 3030;
uint8_t x154 = UINT8_MAX;
static volatile int32_t t33 = -5;
int16_t x159 = INT16_MAX;
static int64_t x160 = INT64_MAX;
int64_t x172 = 245817480705LL;
static uint32_t x173 = UINT32_MAX;
uint32_t x182 = 1011098195U;
static int16_t x194 = INT16_MIN;
int8_t x195 = INT8_MIN;
volatile uint8_t x212 = UINT8_MAX;
volatile int64_t t45 = 46523414353483305LL;
int8_t x233 = -1;
uint32_t t50 = 118601259U;
uint16_t x242 = UINT16_MAX;
int16_t x248 = -1;
static volatile int16_t x251 = INT16_MAX;
volatile uint16_t x253 = 3848U;
static uint64_t x255 = 1974608861778025190LLU;
int16_t x257 = -1;
static int8_t x258 = INT8_MIN;
int32_t x261 = INT32_MAX;
static uint64_t x264 = 16744561388472LLU;
volatile int64_t t57 = 270556784433741170LL;
static int64_t x270 = INT64_MIN;
int16_t x274 = INT16_MIN;
int16_t x287 = -1;
uint16_t x288 = UINT16_MAX;
static volatile int8_t x291 = -1;
volatile int8_t x292 = 1;
int32_t t62 = -103001504;
volatile uint64_t t63 = 4546717406011825995LLU;
static volatile uint32_t x302 = 166372684U;
volatile int64_t t64 = 1048468LL;
volatile uint64_t x305 = 1645783LLU;
int32_t x309 = 38318674;
static uint64_t t68 = 13530001728LLU;
int8_t x329 = -11;
volatile uint8_t x332 = UINT8_MAX;
volatile uint32_t t70 = 6U;
uint64_t x333 = 8106748368369283454LLU;
int64_t x335 = INT64_MAX;
int16_t x336 = -274;
volatile uint8_t x340 = 3U;
int64_t x345 = INT64_MAX;
static int64_t x349 = INT64_MAX;
volatile int8_t x350 = INT8_MIN;
int64_t x352 = INT64_MIN;
uint64_t x353 = UINT64_MAX;
uint64_t t76 = 2569LLU;
static int8_t x357 = INT8_MIN;
volatile int64_t t77 = -14134331546902419LL;
uint32_t x363 = 2527941U;
volatile int8_t x364 = INT8_MIN;
int32_t x372 = 223840;
uint8_t x373 = 98U;
static int8_t x382 = 1;
uint32_t x383 = UINT32_MAX;
int16_t x387 = -1;
uint8_t x388 = 20U;
uint32_t x393 = UINT32_MAX;
int16_t x394 = -1;
static int8_t x397 = -63;
int32_t x402 = -1;
int64_t t86 = -3LL;
static volatile int32_t t87 = 54;
volatile uint32_t x415 = UINT32_MAX;
static volatile uint8_t x419 = 100U;
int8_t x421 = INT8_MIN;
uint16_t x423 = 318U;
static volatile uint32_t t91 = 346968571U;
int8_t x428 = -1;
uint16_t x434 = UINT16_MAX;
volatile int8_t x436 = 1;
uint8_t x451 = UINT8_MAX;
volatile int32_t t98 = -624188;
volatile uint8_t x460 = UINT8_MAX;


void f0(void) {
	volatile uint64_t t0 = 47150731634303LLU;

	t0 = ((x1+x2)+(x3&x4));

	if (t0 != 446167731319657836LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	volatile int16_t x7 = INT16_MIN;
	uint32_t x8 = 21U;

	t1 = ((x5+x6)+(x7&x8));

	if (t1 != 10U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int16_t x10 = -1;
	int64_t x11 = 19719975LL;
	volatile int16_t x12 = -1;
	int64_t t2 = 823414257559LL;

	t2 = ((x9+x10)+(x11&x12));

	if (t2 != 19720101LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 4U;
	int64_t x14 = 666252142998LL;
	int64_t x15 = INT64_MIN;
	static int64_t x16 = INT64_MIN;
	int64_t t3 = -2877358661172062LL;

	t3 = ((x13+x14)+(x15&x16));

	if (t3 != -9223371370602632806LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 91838LLU;
	int64_t x18 = INT64_MIN;
	int32_t x19 = 1;
	volatile uint32_t x20 = UINT32_MAX;

	t4 = ((x17+x18)+(x19&x20));

	if (t4 != 9223372036854867647LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -398423;
	uint32_t x22 = 3599226U;
	int64_t x23 = 332713LL;
	volatile uint64_t x24 = 518727855372576071LLU;

	t5 = ((x21+x22)+(x23&x24));

	if (t5 != 3528740LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x30 = INT16_MAX;
	int16_t x32 = INT16_MIN;
	volatile uint32_t t6 = 150124U;

	t6 = ((x29+x30)+(x31&x32));

	if (t6 != 65534U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = -1LL;
	volatile uint32_t x35 = 246306488U;
	volatile int32_t x36 = INT32_MIN;
	static int64_t t7 = 1004208293577171LL;

	t7 = ((x33+x34)+(x35&x36));

	if (t7 != -129LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	static volatile int8_t x38 = -1;
	uint64_t x39 = 248899427364LLU;
	static uint64_t t8 = 318547191298367LLU;

	t8 = ((x37+x38)+(x39&x40));

	if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x41 = 0U;
	uint8_t x42 = 7U;
	uint16_t x43 = UINT16_MAX;
	int32_t x44 = -1;
	int32_t t9 = -3951058;

	t9 = ((x41+x42)+(x43&x44));

	if (t9 != 65542) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = INT8_MIN;
	uint8_t x47 = UINT8_MAX;
	int8_t x48 = INT8_MIN;
	int32_t t10 = 33106;

	t10 = ((x45+x46)+(x47&x48));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 1;
	int8_t x50 = 1;
	int16_t x51 = INT16_MAX;
	uint8_t x52 = 1U;

	t11 = ((x49+x50)+(x51&x52));

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = INT8_MAX;
	static uint64_t x54 = 1LLU;
	static uint32_t x55 = 9560290U;
	volatile int64_t x56 = -1LL;
	volatile uint64_t t12 = 252982701618349579LLU;

	t12 = ((x53+x54)+(x55&x56));

	if (t12 != 9560418LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 2374083;
	static int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MAX;
	uint8_t x60 = 2U;

	t13 = ((x57+x58)+(x59&x60));

	if (t13 != 2341317) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = -13625088;
	uint64_t x62 = 9974623204154LLU;
	uint16_t x63 = UINT16_MAX;
	int64_t x64 = 14428694040LL;

	t14 = ((x61+x62)+(x63&x64));

	if (t14 != 9974609605202LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	int8_t x66 = INT8_MAX;
	static int64_t x67 = 52262455LL;
	uint16_t x68 = 81U;
	int64_t t15 = 1LL;

	t15 = ((x65+x66)+(x67&x68));

	if (t15 != 143LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = -1;
	int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MIN;

	t16 = ((x69+x70)+(x71&x72));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 3U;
	uint32_t x75 = UINT32_MAX;
	static volatile uint16_t x76 = UINT16_MAX;

	t17 = ((x73+x74)+(x75&x76));

	if (t17 != 11087865LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = 4803591267642LL;
	volatile int8_t x82 = INT8_MAX;
	int32_t x84 = -1;
	volatile int64_t t18 = -963728LL;

	t18 = ((x81+x82)+(x83&x84));

	if (t18 != 4801443784121LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MAX;
	static uint32_t x90 = 30U;
	int64_t x91 = -1LL;
	int16_t x92 = 617;
	volatile int64_t t19 = 308984405838LL;

	t19 = ((x89+x90)+(x91&x92));

	if (t19 != 33414LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -1LL;
	static int32_t x95 = -45330;
	int32_t x96 = -10742;
	int64_t t20 = -29220073838LL;

	t20 = ((x93+x94)+(x95&x96));

	if (t20 != -47608LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x98 = -2873;
	static volatile int16_t x99 = INT16_MAX;
	int8_t x100 = INT8_MIN;
	static int32_t t21 = 405218;

	t21 = ((x97+x98)+(x99&x100));

	if (t21 != 29787) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x101 = 45U;
	volatile uint32_t x103 = UINT32_MAX;
	int8_t x104 = -1;

	t22 = ((x101+x102)+(x103&x104));

	if (t22 != -138606733931313310LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x105 = -85;
	static int16_t x107 = -1018;
	volatile int32_t x108 = 933;
	volatile int32_t t23 = -4;

	t23 = ((x105+x106)+(x107&x108));

	if (t23 != -80) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = INT16_MAX;
	uint8_t x114 = 7U;
	int32_t x115 = INT32_MIN;
	uint64_t x116 = UINT64_MAX;
	uint64_t t24 = 8956523375679304189LLU;

	t24 = ((x113+x114)+(x115&x116));

	if (t24 != 18446744071562100742LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = UINT16_MAX;
	static volatile uint32_t x120 = UINT32_MAX;
	static volatile uint32_t t25 = 823U;

	t25 = ((x117+x118)+(x119&x120));

	if (t25 != 32639U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = 6306226LLU;
	volatile int64_t x122 = INT64_MAX;
	int8_t x123 = -2;
	static uint64_t t26 = 77LLU;

	t26 = ((x121+x122)+(x123&x124));

	if (t26 != 9223372036862715285LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -502710928485530930LL;
	volatile int64_t x126 = -3710LL;
	uint16_t x127 = UINT16_MAX;
	uint8_t x128 = 25U;
	volatile int64_t t27 = 23866LL;

	t27 = ((x125+x126)+(x127&x128));

	if (t27 != -502710928485534615LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 10167U;
	uint64_t x130 = UINT64_MAX;
	uint64_t x131 = 120453LLU;
	int8_t x132 = INT8_MAX;
	static volatile uint64_t t28 = 2434668014202891869LLU;

	t28 = ((x129+x130)+(x131&x132));

	if (t28 != 10171LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = INT32_MAX;
	volatile int16_t x135 = INT16_MIN;
	int8_t x136 = -1;
	volatile int32_t t29 = -171;

	t29 = ((x133+x134)+(x135&x136));

	if (t29 != 2147450751) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int16_t x139 = -1377;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t30 = 141493186870777052LLU;

	t30 = ((x137+x138)+(x139&x140));

	if (t30 != 18446744073709517470LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = UINT32_MAX;
	uint32_t x146 = UINT32_MAX;
	uint64_t x147 = 4092961316886507LLU;
	uint8_t x148 = 18U;
	uint64_t t31 = 1644703LLU;

	t31 = ((x145+x146)+(x147&x148));

	if (t31 != 4294967296LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x149 = 81969U;
	uint8_t x150 = UINT8_MAX;
	int32_t x152 = INT32_MIN;
	volatile uint64_t t32 = 4179994624046589620LLU;

	t32 = ((x149+x150)+(x151&x152));

	if (t32 != 82224LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x155 = -1;
	int16_t x156 = 9;

	t33 = ((x153+x154)+(x155&x156));

	if (t33 != 3294) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MIN;
	uint16_t x158 = 695U;
	int64_t t34 = -203790LL;

	t34 = ((x157+x158)+(x159&x160));

	if (t34 != -9223372036854742346LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = INT32_MAX;
	int64_t x163 = -5596LL;
	int16_t x164 = 478;
	volatile int64_t t35 = -14445285282698LL;

	t35 = ((x161+x162)+(x163&x164));

	if (t35 != 2147450883LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x169 = INT16_MAX;
	int16_t x170 = -195;
	static uint16_t x171 = UINT16_MAX;
	volatile int64_t t36 = -62155624501810LL;

	t36 = ((x169+x170)+(x171&x172));

	if (t36 != 38205LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x174 = -1;
	volatile uint8_t x175 = UINT8_MAX;
	volatile int8_t x176 = INT8_MIN;
	uint32_t t37 = 2892U;

	t37 = ((x173+x174)+(x175&x176));

	if (t37 != 126U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = -1LL;
	int64_t x183 = -1150135720933LL;
	int8_t x184 = INT8_MAX;
	volatile int64_t t38 = 9288LL;

	t38 = ((x181+x182)+(x183&x184));

	if (t38 != 1011098221LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x189 = UINT32_MAX;
	volatile int32_t x190 = INT32_MIN;
	int32_t x191 = 902557;
	int32_t x192 = INT32_MAX;
	volatile uint32_t t39 = 6909U;

	t39 = ((x189+x190)+(x191&x192));

	if (t39 != 2148386204U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x193 = 2U;
	int16_t x196 = INT16_MAX;
	int32_t t40 = 1912265;

	t40 = ((x193+x194)+(x195&x196));

	if (t40 != -126) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = 9;
	uint16_t x202 = 86U;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MIN;
	volatile int32_t t41 = -145673;

	t41 = ((x201+x202)+(x203&x204));

	if (t41 != -32673) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = -1;
	int16_t x207 = 222;
	volatile uint32_t x208 = 39U;
	static volatile uint32_t t42 = 26189845U;

	t42 = ((x205+x206)+(x207&x208));

	if (t42 != 4294967173U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = UINT32_MAX;
	static int64_t x210 = -90842193826015121LL;
	static uint16_t x211 = 102U;
	volatile int64_t t43 = -99231173LL;

	t43 = ((x209+x210)+(x211&x212));

	if (t43 != -90842189531047724LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = -5;
	int16_t x214 = 6462;
	static int16_t x215 = -1;
	int32_t x216 = -1;
	volatile int32_t t44 = 14240;

	t44 = ((x213+x214)+(x215&x216));

	if (t44 != 6456) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = INT16_MIN;
	uint32_t x218 = 122U;
	static int16_t x219 = -1;
	int64_t x220 = -1LL;

	t45 = ((x217+x218)+(x219&x220));

	if (t45 != 4294934649LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = INT16_MIN;
	volatile uint64_t x222 = UINT64_MAX;
	int64_t x223 = -1LL;
	int32_t x224 = -58010;
	uint64_t t46 = 26890370881LLU;

	t46 = ((x221+x222)+(x223&x224));

	if (t46 != 18446744073709460837LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x225 = 13138;
	int64_t x226 = 65449677428596LL;
	uint16_t x227 = UINT16_MAX;
	uint32_t x228 = UINT32_MAX;
	int64_t t47 = 2208896014LL;

	t47 = ((x225+x226)+(x227&x228));

	if (t47 != 65449677507269LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = 1;
	uint64_t x230 = 41529993584LLU;
	volatile int64_t x231 = -1LL;
	volatile int32_t x232 = -1;
	volatile uint64_t t48 = 2049843328894852590LLU;

	t48 = ((x229+x230)+(x231&x232));

	if (t48 != 41529993584LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x234 = UINT32_MAX;
	volatile int64_t x235 = -206523894203LL;
	int8_t x236 = INT8_MAX;
	volatile int64_t t49 = 1474326979879970141LL;

	t49 = ((x233+x234)+(x235&x236));

	if (t49 != 4294967363LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int32_t x238 = 190;
	volatile uint32_t x239 = 21U;
	volatile int16_t x240 = -5;

	t50 = ((x237+x238)+(x239&x240));

	if (t50 != 65742U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x243 = 9384501;
	uint16_t x244 = 64U;
	volatile uint32_t t51 = 11959U;

	t51 = ((x241+x242)+(x243&x244));

	if (t51 != 65534U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x245 = 27U;
	volatile uint32_t x246 = 1249U;
	static int8_t x247 = 2;
	uint32_t t52 = 1844721894U;

	t52 = ((x245+x246)+(x247&x248));

	if (t52 != 1278U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x249 = -382;
	static uint64_t x250 = 7447112934710993619LLU;
	volatile int8_t x252 = INT8_MIN;
	volatile uint64_t t53 = 3231LLU;

	t53 = ((x249+x250)+(x251&x252));

	if (t53 != 7447112934711025877LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x254 = 3102U;
	int16_t x256 = INT16_MIN;
	volatile uint64_t t54 = 101980LLU;

	t54 = ((x253+x254)+(x255&x256));

	if (t54 != 1974608861778025254LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x259 = INT8_MAX;
	uint8_t x260 = UINT8_MAX;
	int32_t t55 = 0;

	t55 = ((x257+x258)+(x259&x260));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x262 = INT8_MIN;
	static volatile int32_t x263 = INT32_MIN;
	uint64_t t56 = 7114LLU;

	t56 = ((x261+x262)+(x263&x264));

	if (t56 != 16746077486975LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = INT32_MIN;
	static int64_t x266 = 110414LL;
	static int32_t x267 = INT32_MIN;
	uint16_t x268 = 681U;

	t57 = ((x265+x266)+(x267&x268));

	if (t57 != -2147373234LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x269 = 31316793U;
	uint16_t x271 = 75U;
	int32_t x272 = -1;
	int64_t t58 = 206693334215LL;

	t58 = ((x269+x270)+(x271&x272));

	if (t58 != -9223372036823458940LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x273 = 1297473330U;
	int64_t x275 = INT64_MIN;
	static volatile int16_t x276 = -1;
	int64_t t59 = 168751205781LL;

	t59 = ((x273+x274)+(x275&x276));

	if (t59 != -9223372035557335246LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = 4;
	int32_t x279 = INT32_MAX;
	uint32_t x280 = 1544346472U;
	volatile uint32_t t60 = 129749111U;

	t60 = ((x277+x278)+(x279&x280));

	if (t60 != 1544313708U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = -132087468;
	uint16_t x286 = 154U;
	int32_t t61 = -11411896;

	t61 = ((x285+x286)+(x287&x288));

	if (t61 != -132021779) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x289 = 28U;
	uint16_t x290 = UINT16_MAX;

	t62 = ((x289+x290)+(x291&x292));

	if (t62 != 65564) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x293 = 3571815U;
	uint64_t x294 = UINT64_MAX;
	int16_t x295 = INT16_MAX;
	static int64_t x296 = -3522332893696966LL;

	t63 = ((x293+x294)+(x295&x296));

	if (t63 != 3583136LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x301 = -1;
	int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;

	t64 = ((x301+x302)+(x303&x304));

	if (t64 != -9223372036688403125LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x306 = INT16_MIN;
	volatile int8_t x307 = INT8_MIN;
	static int8_t x308 = -13;
	uint64_t t65 = 54LLU;

	t65 = ((x305+x306)+(x307&x308));

	if (t65 != 1612887LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x310 = INT16_MIN;
	static volatile int16_t x311 = INT16_MIN;
	uint64_t x312 = 34178223321LLU;
	volatile uint64_t t66 = 14457607363416LLU;

	t66 = ((x309+x310)+(x311&x312));

	if (t66 != 34216489554LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x317 = -1LL;
	int64_t x318 = -35LL;
	uint32_t x319 = 0U;
	int16_t x320 = INT16_MAX;
	volatile int64_t t67 = -2047041342163953LL;

	t67 = ((x317+x318)+(x319&x320));

	if (t67 != -36LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int16_t x322 = -1;
	int32_t x323 = -1;
	volatile uint8_t x324 = 2U;

	t68 = ((x321+x322)+(x323&x324));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = -1;
	static uint8_t x327 = 37U;
	static int16_t x328 = 14198;
	volatile int32_t t69 = 1895403;

	t69 = ((x325+x326)+(x327&x328));

	if (t69 != -93) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x330 = UINT32_MAX;
	volatile uint8_t x331 = 55U;

	t70 = ((x329+x330)+(x331&x332));

	if (t70 != 43U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x334 = INT16_MIN;
	volatile uint64_t t71 = 153276210049231301LLU;

	t71 = ((x333+x334)+(x335&x336));

	if (t71 != 17330120405224026220LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x337 = -1LL;
	int8_t x338 = INT8_MIN;
	static int64_t x339 = -3701019707LL;
	int64_t t72 = -20LL;

	t72 = ((x337+x338)+(x339&x340));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x341 = 3569864249096394976LL;
	static uint8_t x342 = 5U;
	static int64_t x343 = -21643LL;
	int64_t x344 = -24183793114702LL;
	volatile int64_t t73 = 75452447324675351LL;

	t73 = ((x341+x342)+(x343&x344));

	if (t73 != 3569840065303280149LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x346 = INT8_MIN;
	int16_t x347 = -3122;
	int8_t x348 = 15;
	static int64_t t74 = 6LL;

	t74 = ((x345+x346)+(x347&x348));

	if (t74 != 9223372036854775693LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x351 = -1;
	int64_t t75 = -14423889LL;

	t75 = ((x349+x350)+(x351&x352));

	if (t75 != -129LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x354 = UINT16_MAX;
	volatile uint16_t x355 = 14U;
	static int16_t x356 = INT16_MIN;

	t76 = ((x353+x354)+(x355&x356));

	if (t76 != 65534LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x358 = INT16_MIN;
	static volatile int64_t x359 = -1LL;
	uint8_t x360 = 12U;

	t77 = ((x357+x358)+(x359&x360));

	if (t77 != -32884LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = 7;
	int16_t x362 = -26;
	uint32_t t78 = 898687466U;

	t78 = ((x361+x362)+(x363&x364));

	if (t78 != 2527853U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x365 = -1;
	volatile int16_t x366 = INT16_MIN;
	volatile int64_t x367 = INT64_MAX;
	int64_t x368 = INT64_MIN;
	static volatile int64_t t79 = 2836008LL;

	t79 = ((x365+x366)+(x367&x368));

	if (t79 != -32769LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x369 = 1;
	static int8_t x370 = INT8_MIN;
	int32_t x371 = 1357198;
	int32_t t80 = -210512823;

	t80 = ((x369+x370)+(x371&x372));

	if (t80 != 8065) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x374 = INT8_MIN;
	uint64_t x375 = 141146834911148953LLU;
	static volatile uint32_t x376 = UINT32_MAX;
	uint64_t t81 = 1026209264785330952LLU;

	t81 = ((x373+x374)+(x375&x376));

	if (t81 != 1812773755LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = -17;
	uint16_t x384 = 5U;
	uint32_t t82 = 27086U;

	t82 = ((x381+x382)+(x383&x384));

	if (t82 != 4294967285U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x385 = -195931069;
	int8_t x386 = INT8_MIN;
	int32_t t83 = 94917089;

	t83 = ((x385+x386)+(x387&x388));

	if (t83 != -195931177) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x395 = 109505U;
	uint64_t x396 = UINT64_MAX;
	static volatile uint64_t t84 = 10423895809LLU;

	t84 = ((x393+x394)+(x395&x396));

	if (t84 != 4295076799LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = 6;
	int8_t x400 = -1;
	int32_t t85 = 214902686;

	t85 = ((x397+x398)+(x399&x400));

	if (t85 != 65478) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = -439LL;
	int64_t x403 = INT64_MIN;
	int16_t x404 = 1839;

	t86 = ((x401+x402)+(x403&x404));

	if (t86 != -440LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x405 = INT8_MIN;
	volatile int8_t x406 = INT8_MIN;
	volatile uint8_t x407 = 47U;
	static volatile int8_t x408 = INT8_MAX;

	t87 = ((x405+x406)+(x407&x408));

	if (t87 != -209) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x409 = UINT64_MAX;
	int32_t x410 = INT32_MIN;
	int32_t x411 = -121185701;
	int8_t x412 = INT8_MAX;
	uint64_t t88 = 464598726388LLU;

	t88 = ((x409+x410)+(x411&x412));

	if (t88 != 18446744071562068058LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x413 = UINT8_MAX;
	uint16_t x414 = UINT16_MAX;
	int64_t x416 = 63LL;
	static int64_t t89 = -5055791280075LL;

	t89 = ((x413+x414)+(x415&x416));

	if (t89 != 65853LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x417 = -17LL;
	int8_t x418 = INT8_MIN;
	int8_t x420 = INT8_MAX;
	static volatile int64_t t90 = 177091387613096LL;

	t90 = ((x417+x418)+(x419&x420));

	if (t90 != -45LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x422 = UINT32_MAX;
	uint8_t x424 = UINT8_MAX;

	t91 = ((x421+x422)+(x423&x424));

	if (t91 != 4294967229U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x425 = 8;
	static int32_t x426 = 58675761;
	uint16_t x427 = 32U;
	int32_t t92 = 24544871;

	t92 = ((x425+x426)+(x427&x428));

	if (t92 != 58675801) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x429 = 24030U;
	int32_t x430 = -14516274;
	volatile int8_t x431 = INT8_MAX;
	int8_t x432 = INT8_MIN;
	uint32_t t93 = 1771410U;

	t93 = ((x429+x430)+(x431&x432));

	if (t93 != 4280475052U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x433 = 3U;
	int16_t x435 = INT16_MIN;
	static volatile int32_t t94 = -323;

	t94 = ((x433+x434)+(x435&x436));

	if (t94 != 65538) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x437 = INT16_MIN;
	uint64_t x438 = 820987773896393551LLU;
	static int32_t x439 = -1;
	int64_t x440 = INT64_MIN;
	volatile uint64_t t95 = 51LLU;

	t95 = ((x437+x438)+(x439&x440));

	if (t95 != 10044359810751136591LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x441 = 12U;
	int64_t x442 = INT64_MIN;
	static uint64_t x443 = UINT64_MAX;
	static int8_t x444 = -23;
	uint64_t t96 = 2071041652029LLU;

	t96 = ((x441+x442)+(x443&x444));

	if (t96 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x445 = 27U;
	uint32_t x446 = UINT32_MAX;
	int64_t x447 = -1LL;
	volatile int16_t x448 = INT16_MAX;
	volatile int64_t t97 = 78LL;

	t97 = ((x445+x446)+(x447&x448));

	if (t97 != 32793LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = -1;
	int8_t x450 = INT8_MIN;
	uint16_t x452 = UINT16_MAX;

	t98 = ((x449+x450)+(x451&x452));

	if (t98 != 126) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x457 = INT16_MIN;
	volatile int64_t x458 = -1LL;
	uint32_t x459 = UINT32_MAX;
	volatile int64_t t99 = -4709950654779195LL;

	t99 = ((x457+x458)+(x459&x460));

	if (t99 != -32514LL) { NG(); } else { ; }
	
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

