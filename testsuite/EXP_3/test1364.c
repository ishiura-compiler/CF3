#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MIN;
uint64_t t1 = 137437LLU;
int8_t x9 = INT8_MIN;
uint64_t x13 = 883626596735LLU;
int16_t x21 = INT16_MAX;
volatile int8_t x24 = INT8_MIN;
volatile int32_t t5 = -131941;
int8_t x28 = INT8_MIN;
uint32_t x41 = UINT32_MAX;
static volatile int16_t x42 = 11;
volatile uint32_t x49 = 11473824U;
int8_t x52 = -2;
uint64_t x53 = UINT64_MAX;
int32_t x55 = INT32_MIN;
int64_t x56 = INT64_MIN;
int8_t x58 = -1;
int64_t x59 = 11962271480367068LL;
int8_t x65 = -1;
int16_t x78 = 14621;
volatile int32_t t23 = -3;
uint32_t x105 = 189U;
uint64_t x120 = 3LLU;
volatile int32_t t28 = -193997;
volatile uint32_t t29 = 794735U;
int16_t x129 = INT16_MIN;
int64_t t30 = -55846100954073599LL;
uint16_t x133 = 1U;
int64_t x141 = INT64_MAX;
static volatile int16_t x146 = -1;
volatile int16_t x147 = 10397;
uint8_t x148 = 1U;
uint64_t t34 = 6167282675271612LLU;
volatile uint8_t x155 = 28U;
uint64_t t36 = 2445469590100371640LLU;
int64_t x164 = INT64_MIN;
int64_t x166 = INT64_MIN;
uint16_t x172 = 3164U;
int64_t x175 = -1LL;
int16_t x179 = INT16_MIN;
volatile int64_t x194 = INT64_MIN;
uint64_t x196 = 4351936726LLU;
int32_t x202 = -1;
int64_t x204 = -1LL;
static volatile int32_t x215 = -1;
uint64_t x217 = 210757571553145855LLU;
int16_t x229 = INT16_MIN;
volatile int64_t t49 = 325790265152860LL;
int32_t x237 = INT32_MIN;
static int64_t x245 = -1LL;
volatile int8_t x251 = -3;
uint64_t x274 = 64168LLU;
static int32_t x276 = -1;
uint64_t x277 = 4189013523678172LLU;
int32_t x280 = INT32_MIN;
int16_t x282 = 769;
int32_t x289 = -1;
static uint32_t x290 = 20018381U;
int32_t x296 = -1;
volatile int32_t t64 = 13102769;
volatile uint64_t x297 = UINT64_MAX;
int8_t x301 = INT8_MAX;
int32_t x308 = 1;
int32_t x314 = -825;
int32_t x315 = -1;
uint64_t x325 = UINT64_MAX;
static uint32_t x326 = UINT32_MAX;
int16_t x336 = INT16_MIN;
static uint64_t t73 = 12LLU;
static int64_t x337 = 119279LL;
volatile int64_t t74 = -3352498606LL;
static volatile int32_t x345 = INT32_MIN;
volatile uint16_t x347 = 27073U;
uint64_t t77 = UINT64_MAX;
volatile int8_t x358 = INT8_MAX;
int16_t x361 = INT16_MIN;
int8_t x363 = -3;
static int32_t x367 = INT32_MAX;
uint16_t x373 = UINT16_MAX;
int32_t x376 = INT32_MIN;
static uint32_t x383 = UINT32_MAX;
static volatile uint32_t x384 = 1811U;
volatile int32_t t84 = 64;
static uint16_t x386 = 1U;
int32_t x388 = INT32_MIN;
static uint64_t x395 = UINT64_MAX;
static volatile int64_t x401 = INT64_MIN;
int16_t x402 = 11;
static int32_t x407 = -71157384;
volatile int32_t t88 = 1;
int32_t t91 = -1;
int64_t x429 = 660415LL;
uint16_t x438 = UINT16_MAX;
int64_t x439 = INT64_MIN;
int64_t t94 = 170070LL;
int64_t x449 = -1LL;
volatile int32_t t98 = 10474;


void f0(void) {
	int8_t x2 = -3;
	uint16_t x3 = UINT16_MAX;
	static uint64_t x4 = 48163523066248LLU;
	volatile int32_t t0 = 115;

	t0 = ((x1+x2)|(x3<x4));

	if (t0 != -131) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	uint64_t x6 = 7905658203LLU;
	static volatile uint64_t x7 = 6433LLU;
	volatile uint8_t x8 = 123U;

	t1 = ((x5+x6)|(x7<x8));

	if (t1 != 9223372044760434011LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	static int64_t x11 = INT64_MIN;
	volatile int32_t x12 = 1;
	int64_t t2 = -24141LL;

	t2 = ((x9+x10)|(x11<x12));

	if (t2 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x14 = INT8_MAX;
	int32_t x15 = -26;
	volatile uint32_t x16 = 7298831U;
	static uint64_t t3 = 115329436291LLU;

	t3 = ((x13+x14)|(x15<x16));

	if (t3 != 883626596862LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	static int8_t x18 = -12;
	int64_t x19 = -3228LL;
	uint64_t x20 = 103276157LLU;
	static volatile int32_t t4 = 55332;

	t4 = ((x17+x18)|(x19<x20));

	if (t4 != 65523) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MAX;
	int32_t x23 = -515459;

	t5 = ((x21+x22)|(x23<x24));

	if (t5 != 32895) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	uint64_t x26 = 6203LLU;
	volatile int32_t x27 = -1;
	uint64_t t6 = 3116924910LLU;

	t6 = ((x25+x26)|(x27<x28));

	if (t6 != 6202LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	int8_t x30 = -1;
	int64_t x31 = INT64_MIN;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = 2872312;

	t7 = ((x29+x30)|(x31<x32));

	if (t7 != -32769) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int8_t x34 = -1;
	static int64_t x35 = INT64_MAX;
	static uint8_t x36 = 29U;
	volatile int32_t t8 = -1;

	t8 = ((x33+x34)|(x35<x36));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile uint16_t x38 = 937U;
	int32_t x39 = INT32_MAX;
	static int32_t x40 = 105496;
	static volatile int32_t t9 = 831;

	t9 = ((x37+x38)|(x39<x40));

	if (t9 != -2147482711) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x43 = 13U;
	int8_t x44 = INT8_MAX;
	uint32_t t10 = 631913U;

	t10 = ((x41+x42)|(x43<x44));

	if (t10 != 11U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	static int16_t x46 = 6;
	int64_t x47 = INT64_MIN;
	int64_t x48 = INT64_MIN;
	volatile int32_t t11 = -928915424;

	t11 = ((x45+x46)|(x47<x48));

	if (t11 != 5) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 61794639727LLU;
	int8_t x51 = INT8_MAX;
	uint64_t t12 = 3942254LLU;

	t12 = ((x49+x50)|(x51<x52));

	if (t12 != 61806113551LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MAX;
	volatile uint64_t t13 = 727798698175925LLU;

	t13 = ((x53+x54)|(x55<x56));

	if (t13 != 126LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 15U;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = 7;

	t14 = ((x57+x58)|(x59<x60));

	if (t14 != 15) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	uint16_t x62 = 991U;
	static volatile int16_t x63 = INT16_MAX;
	static volatile uint64_t x64 = 17149045654949430LLU;
	static int32_t t15 = 1;

	t15 = ((x61+x62)|(x63<x64));

	if (t15 != 863) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 1U;
	int64_t x67 = INT64_MAX;
	int16_t x68 = -17;
	int32_t t16 = -80;

	t16 = ((x65+x66)|(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	volatile uint64_t x70 = 10643210781884LLU;
	int8_t x71 = INT8_MAX;
	int16_t x72 = INT16_MIN;
	uint64_t t17 = 58860702638465LLU;

	t17 = ((x69+x70)|(x71<x72));

	if (t17 != 10641063298236LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 0U;
	uint8_t x74 = 0U;
	int16_t x75 = 8;
	uint16_t x76 = 0U;
	int32_t t18 = 5587135;

	t18 = ((x73+x74)|(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = -1;
	int8_t x79 = 1;
	static volatile int16_t x80 = -1;
	static int32_t t19 = 131;

	t19 = ((x77+x78)|(x79<x80));

	if (t19 != 14620) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x81 = INT64_MIN;
	uint8_t x82 = UINT8_MAX;
	uint8_t x83 = UINT8_MAX;
	int32_t x84 = -1;
	int64_t t20 = -216654LL;

	t20 = ((x81+x82)|(x83<x84));

	if (t20 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	static int64_t x86 = INT64_MIN;
	int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MIN;
	volatile uint64_t t21 = 3108987LLU;

	t21 = ((x85+x86)|(x87<x88));

	if (t21 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -94LL;
	int8_t x90 = 0;
	static volatile int8_t x91 = -1;
	int64_t x92 = INT64_MIN;
	int64_t t22 = -871526LL;

	t22 = ((x89+x90)|(x91<x92));

	if (t22 != -94LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int16_t x94 = INT16_MIN;
	int16_t x95 = -12;
	int32_t x96 = INT32_MIN;

	t23 = ((x93+x94)|(x95<x96));

	if (t23 != -32769) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	volatile int64_t x102 = -1LL;
	static int32_t x103 = -1;
	int64_t x104 = INT64_MIN;
	static int64_t t24 = -11LL;

	t24 = ((x101+x102)|(x103<x104));

	if (t24 != 126LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x106 = UINT8_MAX;
	int32_t x107 = INT32_MIN;
	static volatile int8_t x108 = 1;
	uint32_t t25 = 6660885U;

	t25 = ((x105+x106)|(x107<x108));

	if (t25 != 445U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = -13799256122864LL;
	int16_t x114 = INT16_MAX;
	static uint16_t x115 = UINT16_MAX;
	int16_t x116 = INT16_MAX;
	volatile int64_t t26 = 209129925LL;

	t26 = ((x113+x114)|(x115<x116));

	if (t26 != -13799256090097LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MAX;
	int32_t x118 = 3;
	uint16_t x119 = 2595U;
	volatile int32_t t27 = -246;

	t27 = ((x117+x118)|(x119<x120));

	if (t27 != 32770) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -1;
	int8_t x122 = INT8_MAX;
	int8_t x123 = INT8_MIN;
	uint32_t x124 = UINT32_MAX;

	t28 = ((x121+x122)|(x123<x124));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x125 = 234942U;
	int16_t x126 = INT16_MAX;
	int16_t x127 = -1;
	int8_t x128 = INT8_MAX;

	t29 = ((x125+x126)|(x127<x128));

	if (t29 != 267709U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x130 = -8331982747480LL;
	static int16_t x131 = 5;
	static volatile uint8_t x132 = UINT8_MAX;

	t30 = ((x129+x130)|(x131<x132));

	if (t30 != -8331982780247LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x134 = 12056360527768438LL;
	int32_t x135 = -16392646;
	int16_t x136 = 0;
	static volatile int64_t t31 = -3950256449547122936LL;

	t31 = ((x133+x134)|(x135<x136));

	if (t31 != 12056360527768439LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x142 = UINT64_MAX;
	volatile int32_t x143 = INT32_MAX;
	static int32_t x144 = INT32_MAX;
	uint64_t t32 = 3850236LLU;

	t32 = ((x141+x142)|(x143<x144));

	if (t32 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -1;
	int32_t t33 = -3827;

	t33 = ((x145+x146)|(x147<x148));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x149 = 190LLU;
	volatile int64_t x150 = -1LL;
	int8_t x151 = INT8_MAX;
	int16_t x152 = INT16_MAX;

	t34 = ((x149+x150)|(x151<x152));

	if (t34 != 189LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = -339;
	int32_t x154 = 11;
	int16_t x156 = -27;
	volatile int32_t t35 = -70924259;

	t35 = ((x153+x154)|(x155<x156));

	if (t35 != -328) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x157 = UINT32_MAX;
	volatile uint64_t x158 = UINT64_MAX;
	uint32_t x159 = 649318U;
	int64_t x160 = INT64_MAX;

	t36 = ((x157+x158)|(x159<x160));

	if (t36 != 4294967295LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x161 = INT32_MAX;
	volatile int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MIN;
	volatile int64_t t37 = -2LL;

	t37 = ((x161+x162)|(x163<x164));

	if (t37 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x165 = 3U;
	int32_t x167 = -1;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t38 = 31322LL;

	t38 = ((x165+x166)|(x167<x168));

	if (t38 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x169 = 83U;
	uint64_t x170 = 420214076460015082LLU;
	int32_t x171 = -1;
	static volatile uint64_t t39 = 22194800290737LLU;

	t39 = ((x169+x170)|(x171<x172));

	if (t39 != 420214076460015165LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = INT16_MIN;
	static int32_t x174 = 20729088;
	int64_t x176 = -30093027LL;
	volatile int32_t t40 = 27;

	t40 = ((x173+x174)|(x175<x176));

	if (t40 != 20696320) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = 1668LL;
	int64_t x178 = INT64_MIN;
	static int16_t x180 = INT16_MAX;
	int64_t t41 = -114LL;

	t41 = ((x177+x178)|(x179<x180));

	if (t41 != -9223372036854774139LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x181 = 2320;
	int32_t x182 = INT32_MIN;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = 5481;
	volatile int32_t t42 = -70422792;

	t42 = ((x181+x182)|(x183<x184));

	if (t42 != -2147481328) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	volatile uint16_t x186 = UINT16_MAX;
	uint32_t x187 = 92860U;
	uint64_t x188 = UINT64_MAX;
	int32_t t43 = -8732;

	t43 = ((x185+x186)|(x187<x188));

	if (t43 != -2147418113) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = 0U;
	uint64_t x195 = 241306994278LLU;
	static int64_t t44 = INT64_MIN;

	t44 = ((x193+x194)|(x195<x196));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = 10;
	int32_t x203 = 16090036;
	int32_t t45 = 161757;

	t45 = ((x201+x202)|(x203<x204));

	if (t45 != 9) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x213 = 15219146962LLU;
	static int64_t x214 = INT64_MIN;
	int64_t x216 = INT64_MAX;
	uint64_t t46 = 620005616709884LLU;

	t46 = ((x213+x214)|(x215<x216));

	if (t46 != 9223372052073922771LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x218 = UINT16_MAX;
	static uint32_t x219 = 10823927U;
	volatile int32_t x220 = INT32_MAX;
	static uint64_t t47 = 7866791268804169650LLU;

	t47 = ((x217+x218)|(x219<x220));

	if (t47 != 210757571553211391LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x230 = UINT32_MAX;
	static int64_t x231 = -641LL;
	int8_t x232 = INT8_MAX;
	volatile uint32_t t48 = 7U;

	t48 = ((x229+x230)|(x231<x232));

	if (t48 != 4294934527U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = -1996574023743604269LL;
	int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MIN;
	int32_t x236 = 35;

	t49 = ((x233+x234)|(x235<x236));

	if (t49 != -1996574023743637037LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x238 = INT64_MAX;
	int16_t x239 = -1;
	int16_t x240 = -1;
	int64_t t50 = -260102LL;

	t50 = ((x237+x238)|(x239<x240));

	if (t50 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x241 = 106238609017621LLU;
	uint16_t x242 = 274U;
	int16_t x243 = 14198;
	volatile uint8_t x244 = UINT8_MAX;
	uint64_t t51 = 4295156173672941508LLU;

	t51 = ((x241+x242)|(x243<x244));

	if (t51 != 106238609017895LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x246 = -1;
	int64_t x247 = INT64_MIN;
	uint64_t x248 = UINT64_MAX;
	static int64_t t52 = -931LL;

	t52 = ((x245+x246)|(x247<x248));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = 480343436;
	int32_t x250 = INT32_MIN;
	volatile uint8_t x252 = UINT8_MAX;
	int32_t t53 = 166992;

	t53 = ((x249+x250)|(x251<x252));

	if (t53 != -1667140211) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x253 = INT16_MAX;
	static int32_t x254 = -1;
	uint16_t x255 = 217U;
	int64_t x256 = INT64_MIN;
	volatile int32_t t54 = -624;

	t54 = ((x253+x254)|(x255<x256));

	if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x257 = INT32_MAX;
	volatile int16_t x258 = INT16_MIN;
	volatile int16_t x259 = -1;
	int64_t x260 = -16LL;
	int32_t t55 = -2687;

	t55 = ((x257+x258)|(x259<x260));

	if (t55 != 2147450879) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x261 = -1;
	int32_t x262 = -25;
	int32_t x263 = -42;
	uint32_t x264 = UINT32_MAX;
	int32_t t56 = -745;

	t56 = ((x261+x262)|(x263<x264));

	if (t56 != -25) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = -1;
	uint64_t x266 = 6LLU;
	static uint16_t x267 = 53U;
	uint16_t x268 = UINT16_MAX;
	volatile uint64_t t57 = 4074100LLU;

	t57 = ((x265+x266)|(x267<x268));

	if (t57 != 5LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = -5;
	int16_t x270 = INT16_MIN;
	int8_t x271 = -1;
	int64_t x272 = -1746433206974177706LL;
	volatile int32_t t58 = 14;

	t58 = ((x269+x270)|(x271<x272));

	if (t58 != -32773) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x273 = 5U;
	static int32_t x275 = INT32_MAX;
	static volatile uint64_t t59 = 108469043LLU;

	t59 = ((x273+x274)|(x275<x276));

	if (t59 != 64173LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x278 = UINT8_MAX;
	uint16_t x279 = 201U;
	volatile uint64_t t60 = 742LLU;

	t60 = ((x277+x278)|(x279<x280));

	if (t60 != 4189013523678427LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = INT64_MIN;
	int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MAX;
	int64_t t61 = 5170364992263249LL;

	t61 = ((x281+x282)|(x283<x284));

	if (t61 != -9223372036854775039LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x285 = 1U;
	int16_t x286 = -65;
	static uint16_t x287 = 1919U;
	uint8_t x288 = 13U;
	volatile int32_t t62 = -10947736;

	t62 = ((x285+x286)|(x287<x288));

	if (t62 != -64) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x291 = -1;
	volatile int16_t x292 = 21;
	uint32_t t63 = 586765826U;

	t63 = ((x289+x290)|(x291<x292));

	if (t63 != 20018381U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = -1;
	int32_t x294 = -166674002;
	uint16_t x295 = 465U;

	t64 = ((x293+x294)|(x295<x296));

	if (t64 != -166674003) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x298 = UINT32_MAX;
	int8_t x299 = INT8_MIN;
	int64_t x300 = INT64_MAX;
	uint64_t t65 = 1LLU;

	t65 = ((x297+x298)|(x299<x300));

	if (t65 != 4294967295LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x302 = UINT64_MAX;
	static int8_t x303 = -1;
	volatile int8_t x304 = INT8_MAX;
	volatile uint64_t t66 = 662823903272180LLU;

	t66 = ((x301+x302)|(x303<x304));

	if (t66 != 127LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = 168;
	int32_t x306 = 530977;
	static int8_t x307 = INT8_MAX;
	volatile int32_t t67 = -32;

	t67 = ((x305+x306)|(x307<x308));

	if (t67 != 531145) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = -1;
	volatile uint64_t x310 = 352322333LLU;
	uint64_t x311 = UINT64_MAX;
	uint16_t x312 = 4U;
	static uint64_t t68 = 855595LLU;

	t68 = ((x309+x310)|(x311<x312));

	if (t68 != 352322332LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = -1LL;
	int16_t x316 = -1869;
	int64_t t69 = 2LL;

	t69 = ((x313+x314)|(x315<x316));

	if (t69 != -826LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x321 = -475;
	volatile uint8_t x322 = UINT8_MAX;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = 5856628;
	int32_t t70 = 397372;

	t70 = ((x321+x322)|(x323<x324));

	if (t70 != -220) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x327 = -4;
	int16_t x328 = INT16_MAX;
	volatile uint64_t t71 = 2481557LLU;

	t71 = ((x325+x326)|(x327<x328));

	if (t71 != 4294967295LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x329 = 7688;
	uint8_t x330 = 93U;
	int64_t x331 = -1LL;
	int16_t x332 = 583;
	volatile int32_t t72 = -47186839;

	t72 = ((x329+x330)|(x331<x332));

	if (t72 != 7781) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x333 = 537933426799504050LLU;
	int16_t x334 = INT16_MIN;
	int64_t x335 = -1529657793109LL;

	t73 = ((x333+x334)|(x335<x336));

	if (t73 != 537933426799471283LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x338 = 204U;
	uint8_t x339 = UINT8_MAX;
	uint8_t x340 = 1U;

	t74 = ((x337+x338)|(x339<x340));

	if (t74 != 119483LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x341 = -748262;
	static int32_t x342 = -1;
	int16_t x343 = -1;
	uint64_t x344 = UINT64_MAX;
	volatile int32_t t75 = 191281;

	t75 = ((x341+x342)|(x343<x344));

	if (t75 != -748263) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x346 = 23115U;
	static volatile uint16_t x348 = 753U;
	int32_t t76 = 57958332;

	t76 = ((x345+x346)|(x347<x348));

	if (t76 != -2147460533) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x349 = -1;
	uint64_t x350 = UINT64_MAX;
	volatile int8_t x351 = -1;
	uint16_t x352 = UINT16_MAX;

	t77 = ((x349+x350)|(x351<x352));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = 11;
	int8_t x354 = 4;
	volatile uint8_t x355 = 0U;
	volatile int16_t x356 = INT16_MAX;
	volatile int32_t t78 = 92;

	t78 = ((x353+x354)|(x355<x356));

	if (t78 != 15) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x357 = UINT64_MAX;
	int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	volatile uint64_t t79 = 763LLU;

	t79 = ((x357+x358)|(x359<x360));

	if (t79 != 126LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x362 = 34U;
	volatile int16_t x364 = INT16_MAX;
	volatile int32_t t80 = -21883;

	t80 = ((x361+x362)|(x363<x364));

	if (t80 != -32733) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = INT32_MIN;
	volatile uint32_t x366 = 1U;
	int16_t x368 = INT16_MAX;
	volatile uint32_t t81 = 3U;

	t81 = ((x365+x366)|(x367<x368));

	if (t81 != 2147483649U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x374 = -1286703LL;
	uint16_t x375 = 9092U;
	int64_t t82 = 0LL;

	t82 = ((x373+x374)|(x375<x376));

	if (t82 != -1221168LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x377 = 7U;
	volatile int8_t x378 = INT8_MAX;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = INT8_MIN;
	static uint32_t t83 = 36264U;

	t83 = ((x377+x378)|(x379<x380));

	if (t83 != 134U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = INT8_MAX;
	int8_t x382 = INT8_MIN;

	t84 = ((x381+x382)|(x383<x384));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x385 = 3U;
	uint64_t x387 = 155LLU;
	int32_t t85 = 53857618;

	t85 = ((x385+x386)|(x387<x388));

	if (t85 != 5) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = INT16_MIN;
	int64_t x394 = 880072698LL;
	int16_t x396 = 500;
	static int64_t t86 = -123004625074520LL;

	t86 = ((x393+x394)|(x395<x396));

	if (t86 != 880039930LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x403 = INT8_MAX;
	int16_t x404 = INT16_MAX;
	int64_t t87 = -3671217LL;

	t87 = ((x401+x402)|(x403<x404));

	if (t87 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = INT16_MIN;
	static uint16_t x406 = 23U;
	static volatile int32_t x408 = -1;

	t88 = ((x405+x406)|(x407<x408));

	if (t88 != -32745) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x409 = 2U;
	uint64_t x410 = 821704502436540584LLU;
	int16_t x411 = -1;
	volatile int64_t x412 = INT64_MAX;
	volatile uint64_t t89 = 27871643743795LLU;

	t89 = ((x409+x410)|(x411<x412));

	if (t89 != 821704502436540587LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x413 = -1LL;
	volatile int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MIN;
	volatile uint16_t x416 = UINT16_MAX;
	volatile int64_t t90 = 173055LL;

	t90 = ((x413+x414)|(x415<x416));

	if (t90 != -129LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x421 = 7;
	int8_t x422 = 1;
	int8_t x423 = -1;
	static uint32_t x424 = UINT32_MAX;

	t91 = ((x421+x422)|(x423<x424));

	if (t91 != 8) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x430 = 14U;
	volatile uint8_t x431 = UINT8_MAX;
	uint64_t x432 = UINT64_MAX;
	int64_t t92 = 889LL;

	t92 = ((x429+x430)|(x431<x432));

	if (t92 != 660429LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = -1;
	int8_t x440 = INT8_MIN;
	static int32_t t93 = 8;

	t93 = ((x437+x438)|(x439<x440));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x441 = -1;
	int64_t x442 = -158036LL;
	static int64_t x443 = INT64_MIN;
	volatile int64_t x444 = INT64_MAX;

	t94 = ((x441+x442)|(x443<x444));

	if (t94 != -158037LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x445 = -1;
	static volatile int16_t x446 = INT16_MIN;
	static int16_t x447 = -2;
	int32_t x448 = 311;
	volatile int32_t t95 = -55662;

	t95 = ((x445+x446)|(x447<x448));

	if (t95 != -32769) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x450 = 25427;
	static int64_t x451 = INT64_MAX;
	int32_t x452 = -1;
	int64_t t96 = 148278890447035897LL;

	t96 = ((x449+x450)|(x451<x452));

	if (t96 != 25426LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x453 = INT8_MAX;
	int8_t x454 = INT8_MIN;
	int32_t x455 = 283;
	static volatile uint64_t x456 = 1429LLU;
	volatile int32_t t97 = 372;

	t97 = ((x453+x454)|(x455<x456));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x457 = 454;
	int32_t x458 = INT32_MIN;
	static uint32_t x459 = UINT32_MAX;
	int64_t x460 = -14030442988LL;

	t98 = ((x457+x458)|(x459<x460));

	if (t98 != -2147483194) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x461 = -18;
	uint16_t x462 = UINT16_MAX;
	uint64_t x463 = 49932288811LLU;
	uint8_t x464 = 13U;
	int32_t t99 = 302965092;

	t99 = ((x461+x462)|(x463<x464));

	if (t99 != 65517) { NG(); } else { ; }
	
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

