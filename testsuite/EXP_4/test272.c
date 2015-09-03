#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -258373244LL;
static int8_t x11 = INT8_MAX;
uint32_t x15 = 27159803U;
static int32_t x17 = -120047630;
static volatile uint32_t x19 = 1U;
int32_t t3 = 444130;
uint8_t x28 = 1U;
volatile int32_t t7 = 51;
int64_t x38 = 1LL;
int64_t x43 = -1LL;
uint8_t x52 = UINT8_MAX;
int64_t x54 = 6887015051LL;
int16_t x55 = INT16_MAX;
int8_t x61 = INT8_MIN;
int8_t x62 = INT8_MAX;
uint32_t x64 = 497074U;
int32_t t13 = -3723458;
static uint16_t x76 = UINT16_MAX;
int16_t x82 = 0;
uint32_t x84 = 238U;
int32_t t16 = 2753099;
int32_t x92 = -768809;
volatile int32_t x95 = INT32_MIN;
int8_t x105 = INT8_MIN;
static uint16_t x106 = UINT16_MAX;
int8_t x110 = -5;
uint32_t x112 = 2U;
static uint8_t x113 = UINT8_MAX;
static volatile int64_t t24 = INT64_MAX;
static volatile uint64_t x132 = UINT64_MAX;
int64_t t28 = 8366891778LL;
int64_t x141 = -17248616238LL;
static uint16_t x145 = 11U;
uint32_t x146 = UINT32_MAX;
int32_t x151 = INT32_MIN;
volatile uint32_t x152 = UINT32_MAX;
static volatile uint16_t x155 = 488U;
int64_t x158 = -1LL;
int16_t x161 = INT16_MIN;
volatile int32_t t36 = -20;
volatile int32_t t37 = -407772;
volatile int32_t t39 = -8;
uint64_t x206 = UINT64_MAX;
uint8_t x207 = 3U;
int64_t x208 = 1003LL;
int16_t x211 = -1;
static volatile uint32_t x226 = 217770803U;
static uint8_t x227 = 19U;
int32_t x233 = -1;
volatile int32_t t49 = -3653862;
int64_t x238 = INT64_MAX;
uint64_t x245 = 94185846305LLU;
int64_t x253 = 35356LL;
static int8_t x255 = 1;
volatile int64_t x257 = INT64_MIN;
static uint8_t x258 = 4U;
int32_t x259 = 0;
static int8_t x260 = 2;
int64_t t55 = INT64_MIN;
volatile int32_t t56 = 857304;
int8_t x265 = -13;
int16_t x269 = INT16_MIN;
int64_t x276 = -3668764838456LL;
volatile int32_t t59 = -912041749;
uint32_t x278 = 5361687U;
static volatile int64_t t60 = INT64_MAX;
int32_t t61 = -220438;
uint16_t x287 = UINT16_MAX;
uint32_t x301 = 3976513U;
uint32_t x314 = UINT32_MAX;
int8_t x324 = INT8_MIN;
static volatile int32_t t70 = INT32_MIN;
uint64_t x326 = 26277LLU;
uint32_t x327 = 1006U;
uint32_t t71 = UINT32_MAX;
uint32_t x329 = 297U;
int16_t x332 = INT16_MIN;
int32_t x342 = -1;
uint8_t x349 = 4U;
uint32_t x351 = 283455158U;
int64_t x352 = -1325777369603474LL;
volatile int32_t t76 = -14949;
uint8_t x353 = 42U;
int16_t x354 = INT16_MAX;
int32_t x361 = INT32_MAX;
int16_t x363 = INT16_MIN;
uint8_t x364 = 2U;
uint16_t x367 = UINT16_MAX;
uint16_t x370 = 81U;
int16_t x371 = -1;
volatile int64_t x385 = 2000LL;
int32_t t85 = -36983;
int64_t x398 = INT64_MIN;
uint16_t x408 = UINT16_MAX;
volatile int32_t t87 = -5;
static uint32_t t88 = 66080367U;
uint8_t x423 = 113U;
uint32_t t89 = UINT32_MAX;
int8_t x426 = INT8_MAX;
uint32_t x427 = UINT32_MAX;
int64_t x429 = INT64_MAX;
int16_t x435 = -1;
static volatile uint32_t x442 = 1831333017U;
volatile int8_t x443 = -1;
volatile int8_t x448 = -1;
volatile int32_t t96 = -14;
int32_t x455 = -1;
static int8_t x458 = 0;
int8_t x464 = 0;


void f0(void) {
	uint32_t x1 = 46U;
	int32_t x3 = INT32_MIN;
	volatile int64_t x4 = INT64_MIN;
	volatile uint32_t t0 = 991798842U;

	t0 = (x1|(x2==(x3-x4)));

	if (t0 != 46U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	int8_t x10 = 7;
	uint32_t x12 = 6760U;
	static int32_t t1 = 0;

	t1 = (x9|(x10==(x11-x12)));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = INT16_MIN;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t2 = INT32_MIN;

	t2 = (x13|(x14==(x15-x16)));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x18 = 11942U;
	int16_t x20 = INT16_MIN;

	t3 = (x17|(x18==(x19-x20)));

	if (t3 != -120047630) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 194795189LLU;
	int32_t x22 = 56802606;
	uint32_t x23 = 46U;
	int64_t x24 = INT64_MAX;
	volatile uint64_t t4 = 28564094503LLU;

	t4 = (x21|(x22==(x23-x24)));

	if (t4 != 194795189LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = UINT16_MAX;
	int8_t x26 = 37;
	int16_t x27 = -1;
	int32_t t5 = 1059384590;

	t5 = (x25|(x26==(x27-x28)));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = 4;
	int64_t x31 = -1209769373777787375LL;
	int16_t x32 = -1;
	volatile int32_t t6 = INT32_MIN;

	t6 = (x29|(x30==(x31-x32)));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 2U;
	int16_t x34 = INT16_MIN;
	static uint64_t x35 = 9213864263152LLU;
	int64_t x36 = INT64_MIN;

	t7 = (x33|(x34==(x35-x36)));

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MIN;
	int8_t x39 = 47;
	int64_t x40 = -1LL;
	volatile int32_t t8 = -11587;

	t8 = (x37|(x38==(x39-x40)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	static volatile int32_t x42 = 1;
	int8_t x44 = 56;
	int32_t t9 = 5354989;

	t9 = (x41|(x42==(x43-x44)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	int32_t x50 = -9520571;
	int64_t x51 = INT64_MAX;
	volatile int32_t t10 = INT32_MIN;

	t10 = (x49|(x50==(x51-x52)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = 2931965229144671LL;
	uint8_t x56 = UINT8_MAX;
	static int64_t t11 = -689020598463603LL;

	t11 = (x53|(x54==(x55-x56)));

	if (t11 != 2931965229144671LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 1;
	int64_t x58 = INT64_MIN;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = 0;
	int32_t t12 = 254;

	t12 = (x57|(x58==(x59-x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x63 = 1458U;

	t13 = (x61|(x62==(x63-x64)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = 55;
	int64_t x74 = INT64_MAX;
	int8_t x75 = -1;
	static int32_t t14 = 1767027;

	t14 = (x73|(x74==(x75-x76)));

	if (t14 != 55) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = UINT64_MAX;
	uint64_t x78 = UINT64_MAX;
	static int32_t x79 = INT32_MIN;
	volatile int64_t x80 = -1LL;
	uint64_t t15 = UINT64_MAX;

	t15 = (x77|(x78==(x79-x80)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x81 = 95U;
	uint16_t x83 = 20U;

	t16 = (x81|(x82==(x83-x84)));

	if (t16 != 95) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = 23;
	static uint32_t x87 = 712509847U;
	static volatile int32_t x88 = -319;
	static int32_t t17 = INT32_MIN;

	t17 = (x85|(x86==(x87-x88)));

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 97063233U;
	static int16_t x90 = INT16_MIN;
	volatile uint8_t x91 = 42U;
	uint32_t t18 = 18272U;

	t18 = (x89|(x90==(x91-x92)));

	if (t18 != 97063233U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MAX;
	uint64_t x96 = 17104255471230114LLU;
	int32_t t19 = 724433957;

	t19 = (x93|(x94==(x95-x96)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = -1807074000041LL;
	int64_t x102 = 1512509470472340LL;
	int64_t x103 = -160406017188633LL;
	static uint64_t x104 = 22085099888LLU;
	static int64_t t20 = 29876522990324LL;

	t20 = (x101|(x102==(x103-x104)));

	if (t20 != -1807074000041LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x107 = 2;
	static volatile int32_t x108 = -1;
	static int32_t t21 = 14595585;

	t21 = (x105|(x106==(x107-x108)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x109 = -1;
	static volatile uint8_t x111 = 22U;
	int32_t t22 = -15;

	t22 = (x109|(x110==(x111-x112)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x114 = INT64_MIN;
	int64_t x115 = -638806928181476LL;
	int64_t x116 = -7658028LL;
	int32_t t23 = 42627912;

	t23 = (x113|(x114==(x115-x116)));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = INT64_MAX;
	int8_t x122 = -1;
	uint16_t x123 = 7682U;
	int8_t x124 = 0;

	t24 = (x121|(x122==(x123-x124)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x125 = -162LL;
	int8_t x126 = 0;
	int8_t x127 = INT8_MIN;
	static int32_t x128 = 8861;
	int64_t t25 = 1400288067651LL;

	t25 = (x125|(x126==(x127-x128)));

	if (t25 != -162LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = -1;
	int64_t x130 = 1976653532341LL;
	static int16_t x131 = INT16_MIN;
	static int32_t t26 = 755453;

	t26 = (x129|(x130==(x131-x132)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x133 = 115428877U;
	uint16_t x134 = UINT16_MAX;
	int64_t x135 = -917LL;
	volatile uint16_t x136 = 29U;
	volatile uint32_t t27 = 1U;

	t27 = (x133|(x134==(x135-x136)));

	if (t27 != 115428877U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x137 = -18412358040502721LL;
	int64_t x138 = INT64_MAX;
	volatile uint32_t x139 = UINT32_MAX;
	static int16_t x140 = INT16_MAX;

	t28 = (x137|(x138==(x139-x140)));

	if (t28 != -18412358040502721LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x142 = 1364940LLU;
	uint32_t x143 = 1322641U;
	volatile int16_t x144 = -1;
	volatile int64_t t29 = 93451483429002097LL;

	t29 = (x141|(x142==(x143-x144)));

	if (t29 != -17248616238LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x147 = -11666;
	int8_t x148 = -3;
	int32_t t30 = -183;

	t30 = (x145|(x146==(x147-x148)));

	if (t30 != 11) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = INT32_MAX;
	int8_t x150 = 2;
	int32_t t31 = INT32_MAX;

	t31 = (x149|(x150==(x151-x152)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = 13263463U;
	volatile int16_t x154 = -35;
	uint32_t x156 = UINT32_MAX;
	volatile uint32_t t32 = 3U;

	t32 = (x153|(x154==(x155-x156)));

	if (t32 != 13263463U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MAX;
	volatile int16_t x159 = INT16_MIN;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t33 = -61;

	t33 = (x157|(x158==(x159-x160)));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x162 = -3149971484901LL;
	int8_t x163 = -1;
	volatile uint16_t x164 = UINT16_MAX;
	volatile int32_t t34 = 62070;

	t34 = (x161|(x162==(x163-x164)));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x165 = INT32_MAX;
	int8_t x166 = 0;
	volatile int8_t x167 = 7;
	uint64_t x168 = 227209624253207LLU;
	volatile int32_t t35 = INT32_MAX;

	t35 = (x165|(x166==(x167-x168)));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x173 = -1;
	volatile uint64_t x174 = UINT64_MAX;
	volatile uint8_t x175 = 24U;
	int8_t x176 = -3;

	t36 = (x173|(x174==(x175-x176)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int64_t x178 = 2891592582728774LL;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = 5489U;

	t37 = (x177|(x178==(x179-x180)));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x181 = UINT8_MAX;
	uint64_t x182 = 119745LLU;
	uint8_t x183 = UINT8_MAX;
	static int64_t x184 = -1LL;
	volatile int32_t t38 = 102018744;

	t38 = (x181|(x182==(x183-x184)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MIN;
	static uint8_t x186 = UINT8_MAX;
	uint8_t x187 = 1U;
	uint32_t x188 = 8169383U;

	t39 = (x185|(x186==(x187-x188)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MAX;
	static uint16_t x191 = UINT16_MAX;
	volatile int64_t x192 = -31924119LL;
	int64_t t40 = INT64_MIN;

	t40 = (x189|(x190==(x191-x192)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x193 = 31U;
	int8_t x194 = -1;
	uint16_t x195 = 13794U;
	volatile int32_t x196 = -4166646;
	volatile int32_t t41 = 15258;

	t41 = (x193|(x194==(x195-x196)));

	if (t41 != 31) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x197 = 3206276U;
	static int64_t x198 = 3000001LL;
	volatile int16_t x199 = -1;
	volatile int16_t x200 = INT16_MAX;
	volatile uint32_t t42 = 2176093U;

	t42 = (x197|(x198==(x199-x200)));

	if (t42 != 3206276U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x205 = 7057090U;
	uint32_t t43 = 7986U;

	t43 = (x205|(x206==(x207-x208)));

	if (t43 != 7057090U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = -1;
	int32_t x210 = -1;
	uint8_t x212 = 6U;
	int32_t t44 = -623869;

	t44 = (x209|(x210==(x211-x212)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x213 = INT8_MAX;
	static int32_t x214 = -1;
	uint64_t x215 = 1LLU;
	int32_t x216 = INT32_MAX;
	int32_t t45 = 659;

	t45 = (x213|(x214==(x215-x216)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = -3386;
	uint64_t x218 = 16421578195011LLU;
	static int32_t x219 = INT32_MAX;
	uint64_t x220 = 63489484011LLU;
	int32_t t46 = 50373;

	t46 = (x217|(x218==(x219-x220)));

	if (t46 != -3386) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x221 = 111102239LLU;
	int64_t x222 = 1005LL;
	int32_t x223 = INT32_MIN;
	uint32_t x224 = UINT32_MAX;
	uint64_t t47 = 484215763481134795LLU;

	t47 = (x221|(x222==(x223-x224)));

	if (t47 != 111102239LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = UINT16_MAX;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t48 = 2708;

	t48 = (x225|(x226==(x227-x228)));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x234 = 15114U;
	volatile uint8_t x235 = 14U;
	int64_t x236 = 441031935LL;

	t49 = (x233|(x234==(x235-x236)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = -24;
	volatile int8_t x239 = 13;
	int8_t x240 = INT8_MAX;
	int32_t t50 = -28541;

	t50 = (x237|(x238==(x239-x240)));

	if (t50 != -24) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x241 = -28;
	volatile int16_t x242 = INT16_MIN;
	static volatile int32_t x243 = 22058896;
	static volatile uint64_t x244 = 28LLU;
	volatile int32_t t51 = -2;

	t51 = (x241|(x242==(x243-x244)));

	if (t51 != -28) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x246 = INT64_MIN;
	int8_t x247 = -10;
	volatile uint8_t x248 = 23U;
	volatile uint64_t t52 = 49040085759870LLU;

	t52 = (x245|(x246==(x247-x248)));

	if (t52 != 94185846305LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = INT32_MIN;
	volatile int16_t x250 = -1;
	int8_t x251 = INT8_MIN;
	static int16_t x252 = INT16_MAX;
	volatile int32_t t53 = INT32_MIN;

	t53 = (x249|(x250==(x251-x252)));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x254 = INT8_MIN;
	volatile int8_t x256 = INT8_MIN;
	int64_t t54 = -8334607281669LL;

	t54 = (x253|(x254==(x255-x256)));

	if (t54 != 35356LL) { NG(); } else { ; }
	
}

void f55(void) {


	t55 = (x257|(x258==(x259-x260)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = 37;
	static volatile int8_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	uint64_t x264 = 39441958988523893LLU;

	t56 = (x261|(x262==(x263-x264)));

	if (t56 != 37) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x266 = INT16_MIN;
	uint64_t x267 = 42800LLU;
	int8_t x268 = INT8_MIN;
	volatile int32_t t57 = -188;

	t57 = (x265|(x266==(x267-x268)));

	if (t57 != -13) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x270 = INT64_MAX;
	int64_t x271 = -493175LL;
	uint8_t x272 = 5U;
	int32_t t58 = 6591;

	t58 = (x269|(x270==(x271-x272)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;

	t59 = (x273|(x274==(x275-x276)));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = INT64_MAX;
	int8_t x279 = -1;
	int64_t x280 = 1507738225LL;

	t60 = (x277|(x278==(x279-x280)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = INT8_MIN;
	static uint8_t x282 = 1U;
	int32_t x283 = 10306714;
	int8_t x284 = INT8_MIN;

	t61 = (x281|(x282==(x283-x284)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x285 = -1;
	static int16_t x286 = -39;
	int8_t x288 = -1;
	int32_t t62 = 290854943;

	t62 = (x285|(x286==(x287-x288)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x289 = UINT32_MAX;
	uint16_t x290 = 1649U;
	int16_t x291 = INT16_MAX;
	volatile uint32_t x292 = UINT32_MAX;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x289|(x290==(x291-x292)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = 1178LLU;
	volatile uint8_t x294 = 9U;
	uint64_t x295 = 1LLU;
	int16_t x296 = INT16_MIN;
	uint64_t t64 = 15500151LLU;

	t64 = (x293|(x294==(x295-x296)));

	if (t64 != 1178LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x297 = INT64_MAX;
	volatile uint32_t x298 = 4U;
	volatile uint32_t x299 = 10U;
	int16_t x300 = 30;
	volatile int64_t t65 = INT64_MAX;

	t65 = (x297|(x298==(x299-x300)));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x302 = UINT32_MAX;
	int32_t x303 = INT32_MAX;
	uint64_t x304 = 45051347LLU;
	volatile uint32_t t66 = 2034U;

	t66 = (x301|(x302==(x303-x304)));

	if (t66 != 3976513U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = -3;
	static int8_t x310 = 0;
	uint16_t x311 = UINT16_MAX;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t67 = 15;

	t67 = (x309|(x310==(x311-x312)));

	if (t67 != -3) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x313 = 1819U;
	volatile uint8_t x315 = 1U;
	uint8_t x316 = UINT8_MAX;
	int32_t t68 = 16387335;

	t68 = (x313|(x314==(x315-x316)));

	if (t68 != 1819) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = 30;
	volatile int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MAX;
	uint8_t x320 = 61U;
	volatile int32_t t69 = -1;

	t69 = (x317|(x318==(x319-x320)));

	if (t69 != 30) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MIN;
	volatile uint16_t x323 = UINT16_MAX;

	t70 = (x321|(x322==(x323-x324)));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x325 = UINT32_MAX;
	volatile int8_t x328 = INT8_MIN;

	t71 = (x325|(x326==(x327-x328)));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x330 = -1LL;
	volatile uint64_t x331 = 117LLU;
	static volatile uint32_t t72 = 42253U;

	t72 = (x329|(x330==(x331-x332)));

	if (t72 != 297U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x333 = UINT32_MAX;
	uint8_t x334 = 14U;
	static int8_t x335 = 1;
	uint16_t x336 = UINT16_MAX;
	static uint32_t t73 = UINT32_MAX;

	t73 = (x333|(x334==(x335-x336)));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x337 = 1804232177685610289LLU;
	int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MAX;
	uint16_t x340 = 42U;
	uint64_t t74 = 44015497301LLU;

	t74 = (x337|(x338==(x339-x340)));

	if (t74 != 1804232177685610289LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x341 = INT8_MAX;
	int32_t x343 = INT32_MIN;
	static int64_t x344 = INT64_MIN;
	int32_t t75 = 1;

	t75 = (x341|(x342==(x343-x344)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x350 = INT64_MIN;

	t76 = (x349|(x350==(x351-x352)));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x355 = 3;
	int16_t x356 = 1;
	static volatile int32_t t77 = 216;

	t77 = (x353|(x354==(x355-x356)));

	if (t77 != 42) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x357 = 136U;
	static int8_t x358 = INT8_MIN;
	uint32_t x359 = 19U;
	int32_t x360 = INT32_MAX;
	static int32_t t78 = 517134;

	t78 = (x357|(x358==(x359-x360)));

	if (t78 != 136) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x362 = 4U;
	static int32_t t79 = INT32_MAX;

	t79 = (x361|(x362==(x363-x364)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = -1;
	int8_t x366 = INT8_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t80 = 8112;

	t80 = (x365|(x366==(x367-x368)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x369 = 236U;
	int32_t x372 = INT32_MIN;
	int32_t t81 = 2468;

	t81 = (x369|(x370==(x371-x372)));

	if (t81 != 236) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x373 = INT32_MIN;
	static int16_t x374 = INT16_MAX;
	static int32_t x375 = INT32_MAX;
	volatile uint32_t x376 = 19568U;
	volatile int32_t t82 = INT32_MIN;

	t82 = (x373|(x374==(x375-x376)));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x381 = UINT8_MAX;
	uint64_t x382 = 6548631742034LLU;
	static volatile int64_t x383 = INT64_MIN;
	int8_t x384 = INT8_MIN;
	static volatile int32_t t83 = 214139279;

	t83 = (x381|(x382==(x383-x384)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x386 = INT64_MIN;
	uint16_t x387 = 45U;
	uint8_t x388 = 2U;
	volatile int64_t t84 = 22LL;

	t84 = (x385|(x386==(x387-x388)));

	if (t84 != 2000LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x389 = 119U;
	int32_t x390 = -816;
	static uint8_t x391 = UINT8_MAX;
	uint64_t x392 = 2075551439768LLU;

	t85 = (x389|(x390==(x391-x392)));

	if (t85 != 119) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = -1;
	volatile int16_t x399 = 919;
	uint8_t x400 = 10U;
	int32_t t86 = -3802407;

	t86 = (x397|(x398==(x399-x400)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x405 = 0U;
	int64_t x406 = INT64_MIN;
	static int8_t x407 = INT8_MAX;

	t87 = (x405|(x406==(x407-x408)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x413 = 29476U;
	static volatile uint16_t x414 = UINT16_MAX;
	int16_t x415 = INT16_MIN;
	volatile int32_t x416 = INT32_MIN;

	t88 = (x413|(x414==(x415-x416)));

	if (t88 != 29476U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x421 = UINT32_MAX;
	int64_t x422 = -1324078470412252375LL;
	static volatile uint8_t x424 = 0U;

	t89 = (x421|(x422==(x423-x424)));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x425 = INT16_MAX;
	uint8_t x428 = 0U;
	volatile int32_t t90 = -69074321;

	t90 = (x425|(x426==(x427-x428)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x430 = 2666526;
	int16_t x431 = 15;
	int64_t x432 = -1LL;
	volatile int64_t t91 = INT64_MAX;

	t91 = (x429|(x430==(x431-x432)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x433 = INT8_MIN;
	static int64_t x434 = INT64_MIN;
	volatile uint64_t x436 = 585779LLU;
	volatile int32_t t92 = -5560;

	t92 = (x433|(x434==(x435-x436)));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x437 = INT16_MIN;
	int16_t x438 = -6;
	int16_t x439 = -1;
	uint32_t x440 = 56051348U;
	int32_t t93 = 53156;

	t93 = (x437|(x438==(x439-x440)));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x441 = INT64_MAX;
	int32_t x444 = INT32_MIN;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x441|(x442==(x443-x444)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x445 = INT64_MIN;
	static int32_t x446 = INT32_MIN;
	static volatile uint16_t x447 = 33U;
	volatile int64_t t95 = INT64_MIN;

	t95 = (x445|(x446==(x447-x448)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x449 = 29;
	int64_t x450 = INT64_MIN;
	uint32_t x451 = 806531U;
	int16_t x452 = INT16_MIN;

	t96 = (x449|(x450==(x451-x452)));

	if (t96 != 29) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x453 = 79707980499324LLU;
	volatile uint64_t x454 = 992588636225067LLU;
	int32_t x456 = -53993437;
	static volatile uint64_t t97 = 1378174023053LLU;

	t97 = (x453|(x454==(x455-x456)));

	if (t97 != 79707980499324LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x457 = -1LL;
	int16_t x459 = INT16_MIN;
	static int64_t x460 = INT64_MIN;
	int64_t t98 = -176266202218LL;

	t98 = (x457|(x458==(x459-x460)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x461 = UINT16_MAX;
	uint32_t x462 = UINT32_MAX;
	int64_t x463 = INT64_MAX;
	int32_t t99 = 232163636;

	t99 = (x461|(x462==(x463-x464)));

	if (t99 != 65535) { NG(); } else { ; }
	
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

