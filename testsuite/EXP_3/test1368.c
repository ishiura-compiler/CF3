#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 910612132LL;
int32_t x8 = -20;
volatile uint32_t t6 = 116187067U;
volatile int32_t x40 = 31683569;
int32_t t8 = -409;
int32_t t9 = 378660;
volatile uint64_t x62 = UINT64_MAX;
uint16_t x65 = 0U;
uint32_t x70 = 974683U;
int16_t x75 = INT16_MIN;
static int64_t x79 = -1LL;
int8_t x83 = INT8_MAX;
int8_t x90 = INT8_MIN;
volatile int8_t x91 = INT8_MIN;
uint16_t x101 = 17U;
int64_t x104 = 1463059856318174LL;
int16_t x105 = INT16_MIN;
int16_t x117 = 11;
int16_t x130 = -27;
int32_t x136 = 952687;
static int64_t t28 = -24772LL;
uint8_t x139 = 5U;
volatile int16_t x144 = INT16_MIN;
volatile int32_t t30 = -24;
uint64_t x147 = UINT64_MAX;
volatile uint64_t t32 = 31790364115977555LLU;
static uint32_t x161 = 1759002U;
static int8_t x163 = -2;
uint8_t x180 = 0U;
int64_t x185 = INT64_MIN;
int64_t x187 = 21384899666144036LL;
int16_t x195 = INT16_MAX;
static volatile int32_t x197 = -1;
int32_t x200 = -162;
int16_t x207 = -1;
static int8_t x212 = INT8_MAX;
volatile int16_t x213 = INT16_MIN;
int32_t x216 = INT32_MAX;
int32_t x219 = -1;
int64_t x220 = -1LL;
uint8_t x227 = 6U;
int8_t x240 = INT8_MIN;
volatile int32_t t53 = 291;
int32_t x252 = 235;
static uint32_t x254 = 19U;
volatile int16_t x259 = 15;
static uint16_t x262 = UINT16_MAX;
static volatile int16_t x263 = INT16_MAX;
uint16_t x268 = 10534U;
int16_t x272 = INT16_MAX;
static int32_t t60 = 33590813;
int16_t x274 = -17;
static int64_t x280 = 3987838943206351LL;
volatile uint64_t t62 = 638266077673979667LLU;
volatile int8_t x283 = INT8_MIN;
int32_t x286 = INT32_MIN;
int8_t x289 = 0;
static uint32_t x294 = UINT32_MAX;
int16_t x295 = 463;
int8_t x296 = 0;
int8_t x300 = INT8_MAX;
static int8_t x301 = 28;
static int64_t x304 = INT64_MIN;
int32_t t68 = -3;
int16_t x307 = 22;
volatile int64_t x308 = -24627559307170LL;
volatile int16_t x313 = -928;
int64_t x314 = INT64_MIN;
static volatile int64_t t71 = -124834903632527LL;
uint8_t x318 = UINT8_MAX;
int8_t x323 = -25;
int16_t x327 = 8048;
int32_t x331 = -1;
uint64_t x333 = 2744967558539505LLU;
uint64_t t76 = 10141414344091906LLU;
volatile uint16_t x337 = UINT16_MAX;
static int16_t x344 = -1;
static volatile int32_t t78 = -899116;
uint8_t x346 = 2U;
int64_t x347 = INT64_MIN;
volatile int64_t t79 = 124785LL;
int8_t x350 = INT8_MAX;
int32_t t80 = -86;
static int64_t x355 = 9720718LL;
static volatile uint32_t t81 = 9U;
int8_t x361 = INT8_MIN;
volatile int64_t t84 = 5204323067457LL;
uint32_t t85 = 2U;
volatile int32_t x377 = INT32_MIN;
volatile uint32_t x379 = 3U;
uint32_t t89 = 134324U;
uint8_t x390 = 17U;
int8_t x391 = INT8_MIN;
int16_t x396 = INT16_MIN;
int32_t x398 = -1;
int8_t x401 = INT8_MIN;
volatile int16_t x404 = 8711;
int16_t x406 = -1;
static uint64_t x408 = 1706915320196LLU;
int16_t x416 = INT16_MIN;
int64_t x417 = -4LL;
int8_t x424 = 3;
volatile uint64_t t97 = 145200LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	uint8_t x3 = 15U;
	int32_t x4 = INT32_MIN;

	t0 = ((x1-x2)*(x3<x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 859U;
	uint8_t x6 = UINT8_MAX;
	int8_t x7 = INT8_MIN;
	volatile int32_t t1 = -68;

	t1 = ((x5-x6)*(x7<x8));

	if (t1 != 604) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 19;
	static int64_t x10 = 4499609233023619LL;
	int16_t x11 = INT16_MAX;
	volatile int64_t x12 = -67479204706728LL;
	static int64_t t2 = -663435487083LL;

	t2 = ((x9-x10)*(x11<x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -111057;
	int32_t x14 = -1;
	volatile int64_t x15 = INT64_MAX;
	volatile int16_t x16 = -1;
	int32_t t3 = -10;

	t3 = ((x13-x14)*(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t x18 = -1;
	volatile int64_t x19 = INT64_MAX;
	volatile uint8_t x20 = 0U;
	volatile int32_t t4 = -35;

	t4 = ((x17-x18)*(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	volatile uint64_t x30 = 4LLU;
	volatile uint8_t x31 = 15U;
	int32_t x32 = 8;
	uint64_t t5 = 3817099930LLU;

	t5 = ((x29-x30)*(x31<x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = 2063U;
	uint32_t x34 = 6U;
	uint16_t x35 = 1951U;
	int8_t x36 = INT8_MIN;

	t6 = ((x33-x34)*(x35<x36));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	volatile uint32_t x38 = 13547280U;
	int32_t x39 = INT32_MIN;
	static volatile uint32_t t7 = 2683U;

	t7 = ((x37-x38)*(x39<x40));

	if (t7 != 4281419888U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MIN;
	int32_t x46 = -1;
	int32_t x47 = -1;
	int64_t x48 = 48959LL;

	t8 = ((x45-x46)*(x47<x48));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MIN;
	int64_t x51 = INT64_MIN;
	uint32_t x52 = 3190491U;

	t9 = ((x49-x50)*(x51<x52));

	if (t9 != -32640) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 3U;
	int16_t x54 = -5283;
	volatile uint64_t x55 = UINT64_MAX;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t10 = -113319;

	t10 = ((x53-x54)*(x55<x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x61 = INT16_MIN;
	int32_t x63 = -1;
	static uint64_t x64 = UINT64_MAX;
	static uint64_t t11 = 175327LLU;

	t11 = ((x61-x62)*(x63<x64));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MIN;
	volatile int32_t t12 = 0;

	t12 = ((x65-x66)*(x67<x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x69 = INT32_MIN;
	int8_t x71 = INT8_MIN;
	static int16_t x72 = -693;
	uint32_t t13 = 127U;

	t13 = ((x69-x70)*(x71<x72));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x73 = INT32_MIN;
	uint64_t x74 = UINT64_MAX;
	int8_t x76 = -1;
	uint64_t t14 = 6199281178589158732LLU;

	t14 = ((x73-x74)*(x75<x76));

	if (t14 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 847111945463LLU;
	uint32_t x78 = UINT32_MAX;
	volatile int32_t x80 = INT32_MIN;
	uint64_t t15 = 10941104627LLU;

	t15 = ((x77-x78)*(x79<x80));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x81 = 2954315LLU;
	int16_t x82 = 2;
	int32_t x84 = INT32_MIN;
	uint64_t t16 = 329718LLU;

	t16 = ((x81-x82)*(x83<x84));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = INT64_MIN;
	int16_t x92 = INT16_MIN;
	volatile int64_t t17 = -9044422LL;

	t17 = ((x89-x90)*(x91<x92));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x93 = -1;
	int32_t x94 = 289873;
	uint64_t x95 = UINT64_MAX;
	static int8_t x96 = INT8_MIN;
	volatile int32_t t18 = 5624913;

	t18 = ((x93-x94)*(x95<x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = 11LLU;
	static int8_t x98 = INT8_MAX;
	static uint16_t x99 = 2U;
	uint8_t x100 = 1U;
	static volatile uint64_t t19 = 3610457LLU;

	t19 = ((x97-x98)*(x99<x100));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x102 = 5U;
	static int64_t x103 = -1LL;
	static volatile int32_t t20 = -121741138;

	t20 = ((x101-x102)*(x103<x104));

	if (t20 != 12) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x106 = INT16_MIN;
	int32_t x107 = INT32_MIN;
	uint16_t x108 = 696U;
	volatile int32_t t21 = -2286;

	t21 = ((x105-x106)*(x107<x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x109 = 4082U;
	static volatile uint32_t x110 = UINT32_MAX;
	int8_t x111 = -1;
	int64_t x112 = INT64_MAX;
	uint32_t t22 = 6U;

	t22 = ((x109-x110)*(x111<x112));

	if (t22 != 4083U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MAX;
	int16_t x114 = INT16_MAX;
	static volatile uint8_t x115 = 1U;
	int16_t x116 = -440;
	static volatile int64_t t23 = -26LL;

	t23 = ((x113-x114)*(x115<x116));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x118 = INT8_MAX;
	int64_t x119 = -1LL;
	uint32_t x120 = 477503041U;
	volatile int32_t t24 = 331880;

	t24 = ((x117-x118)*(x119<x120));

	if (t24 != -116) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 7U;
	int32_t x122 = INT32_MAX;
	static int16_t x123 = -15305;
	uint8_t x124 = 23U;
	volatile int32_t t25 = -3;

	t25 = ((x121-x122)*(x123<x124));

	if (t25 != -2147483640) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 82LLU;
	static uint64_t x126 = 493061632344LLU;
	int8_t x127 = INT8_MIN;
	volatile int16_t x128 = INT16_MIN;
	static uint64_t t26 = 2527LLU;

	t26 = ((x125-x126)*(x127<x128));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = -1;
	static int64_t x131 = -1LL;
	int8_t x132 = 0;
	int32_t t27 = 232354;

	t27 = ((x129-x130)*(x131<x132));

	if (t27 != 26) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = 250543LL;
	uint8_t x134 = 0U;
	static int16_t x135 = -1;

	t28 = ((x133-x134)*(x135<x136));

	if (t28 != 250543LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = -1;
	volatile uint16_t x138 = UINT16_MAX;
	volatile int8_t x140 = -1;
	volatile int32_t t29 = -215977;

	t29 = ((x137-x138)*(x139<x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x141 = -1;
	int16_t x142 = INT16_MIN;
	volatile int8_t x143 = INT8_MIN;

	t30 = ((x141-x142)*(x143<x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x145 = INT8_MIN;
	int64_t x146 = 317848537619LL;
	uint8_t x148 = 24U;
	int64_t t31 = 0LL;

	t31 = ((x145-x146)*(x147<x148));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = 305LLU;
	static int16_t x150 = INT16_MAX;
	int64_t x151 = 4797LL;
	static volatile int16_t x152 = INT16_MAX;

	t32 = ((x149-x150)*(x151<x152));

	if (t32 != 18446744073709519154LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = 870740614440LL;
	static int16_t x154 = INT16_MAX;
	int32_t x155 = -2047;
	volatile uint16_t x156 = 4422U;
	volatile int64_t t33 = 42999977932LL;

	t33 = ((x153-x154)*(x155<x156));

	if (t33 != 870740581673LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x157 = 1U;
	volatile int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	int16_t x160 = 1;
	volatile int32_t t34 = -86;

	t34 = ((x157-x158)*(x159<x160));

	if (t34 != 129) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x162 = 3459U;
	uint16_t x164 = UINT16_MAX;
	volatile uint32_t t35 = 0U;

	t35 = ((x161-x162)*(x163<x164));

	if (t35 != 1755543U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = 1;
	uint16_t x170 = 1066U;
	int32_t x171 = -1;
	int64_t x172 = INT64_MIN;
	int32_t t36 = 8;

	t36 = ((x169-x170)*(x171<x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x173 = 0;
	static int8_t x174 = 27;
	int16_t x175 = 11;
	int64_t x176 = -1LL;
	int32_t t37 = 13;

	t37 = ((x173-x174)*(x175<x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = 24217;
	int32_t x178 = -7263128;
	uint16_t x179 = 2385U;
	static int32_t t38 = -1165;

	t38 = ((x177-x178)*(x179<x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x181 = -1;
	int64_t x182 = INT64_MAX;
	volatile uint16_t x183 = 44U;
	static int32_t x184 = 715152;
	volatile int64_t t39 = INT64_MIN;

	t39 = ((x181-x182)*(x183<x184));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x186 = INT64_MIN;
	int64_t x188 = INT64_MAX;
	static int64_t t40 = -2135981961963301LL;

	t40 = ((x185-x186)*(x187<x188));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = 35;
	uint64_t x190 = 0LLU;
	uint64_t x191 = UINT64_MAX;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t41 = 1451812039856319317LLU;

	t41 = ((x189-x190)*(x191<x192));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = -113526LL;
	int8_t x194 = INT8_MAX;
	volatile int16_t x196 = INT16_MAX;
	int64_t t42 = -423837LL;

	t42 = ((x193-x194)*(x195<x196));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x198 = 4078345606001222320LLU;
	volatile int64_t x199 = -106591LL;
	uint64_t t43 = 72563302LLU;

	t43 = ((x197-x198)*(x199<x200));

	if (t43 != 14368398467708329295LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x201 = -1;
	volatile int64_t x202 = INT64_MIN;
	int32_t x203 = INT32_MIN;
	int8_t x204 = -1;
	int64_t t44 = INT64_MAX;

	t44 = ((x201-x202)*(x203<x204));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = INT16_MIN;
	volatile int16_t x206 = INT16_MAX;
	static uint64_t x208 = UINT64_MAX;
	static int32_t t45 = -112;

	t45 = ((x205-x206)*(x207<x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MIN;
	volatile int64_t x210 = -1381420LL;
	int64_t x211 = INT64_MIN;
	int64_t t46 = 2292932689575LL;

	t46 = ((x209-x210)*(x211<x212));

	if (t46 != -2146102228LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x214 = INT16_MIN;
	int32_t x215 = -983;
	int32_t t47 = 2;

	t47 = ((x213-x214)*(x215<x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x217 = INT64_MIN;
	volatile int32_t x218 = INT32_MIN;
	static volatile int64_t t48 = 13453LL;

	t48 = ((x217-x218)*(x219<x220));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = UINT8_MAX;
	uint16_t x226 = 1851U;
	uint8_t x228 = 6U;
	static volatile int32_t t49 = 28;

	t49 = ((x225-x226)*(x227<x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MIN;
	volatile uint32_t x231 = UINT32_MAX;
	int8_t x232 = INT8_MIN;
	volatile int64_t t50 = -284827071091LL;

	t50 = ((x229-x230)*(x231<x232));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x233 = UINT8_MAX;
	uint16_t x234 = UINT16_MAX;
	uint16_t x235 = 347U;
	static uint8_t x236 = 0U;
	int32_t t51 = 249;

	t51 = ((x233-x234)*(x235<x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = 209759LL;
	int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MIN;
	int64_t t52 = 55585LL;

	t52 = ((x237-x238)*(x239<x240));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = -23;
	static uint8_t x242 = 46U;
	static int8_t x243 = INT8_MIN;
	int16_t x244 = 18;

	t53 = ((x241-x242)*(x243<x244));

	if (t53 != -69) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x245 = 533992086697130612LLU;
	uint8_t x246 = UINT8_MAX;
	int64_t x247 = INT64_MIN;
	int16_t x248 = -7;
	uint64_t t54 = 402LLU;

	t54 = ((x245-x246)*(x247<x248));

	if (t54 != 533992086697130357LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = -1;
	int32_t x250 = INT32_MIN;
	int64_t x251 = -3232741645557755351LL;
	volatile int32_t t55 = INT32_MAX;

	t55 = ((x249-x250)*(x251<x252));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x253 = INT8_MIN;
	static int64_t x255 = 785719625960618LL;
	int32_t x256 = INT32_MIN;
	uint32_t t56 = 417252551U;

	t56 = ((x253-x254)*(x255<x256));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = 816U;
	int64_t x258 = -7064343326962LL;
	uint32_t x260 = 99037500U;
	int64_t t57 = 84627LL;

	t57 = ((x257-x258)*(x259<x260));

	if (t57 != 7064343327778LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = -1;
	int8_t x264 = INT8_MIN;
	volatile int32_t t58 = 1;

	t58 = ((x261-x262)*(x263<x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = INT64_MAX;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = -1;
	int64_t t59 = 10LL;

	t59 = ((x265-x266)*(x267<x268));

	if (t59 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MIN;
	volatile uint16_t x270 = UINT16_MAX;
	int32_t x271 = INT32_MIN;

	t60 = ((x269-x270)*(x271<x272));

	if (t60 != -65663) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MIN;
	int64_t x275 = INT64_MAX;
	int16_t x276 = -5;
	static volatile int32_t t61 = 59565;

	t61 = ((x273-x274)*(x275<x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x277 = 3912727051LLU;
	int64_t x278 = INT64_MAX;
	int64_t x279 = INT64_MAX;

	t62 = ((x277-x278)*(x279<x280));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x281 = 4507U;
	static int16_t x282 = 7;
	uint64_t x284 = UINT64_MAX;
	static uint32_t t63 = 134929U;

	t63 = ((x281-x282)*(x283<x284));

	if (t63 != 4500U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x285 = -1;
	int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MIN;
	static int32_t t64 = -1;

	t64 = ((x285-x286)*(x287<x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x290 = 4U;
	int16_t x291 = -1;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t65 = 377385;

	t65 = ((x289-x290)*(x291<x292));

	if (t65 != -4) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x293 = UINT16_MAX;
	volatile uint32_t t66 = 42962559U;

	t66 = ((x293-x294)*(x295<x296));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x297 = 33U;
	int64_t x298 = 109LL;
	volatile int8_t x299 = -21;
	int64_t t67 = -205130914683LL;

	t67 = ((x297-x298)*(x299<x300));

	if (t67 != -76LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x302 = 100U;
	volatile uint32_t x303 = UINT32_MAX;

	t68 = ((x301-x302)*(x303<x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = 1;
	int32_t x306 = -1;
	static int32_t t69 = 28054630;

	t69 = ((x305-x306)*(x307<x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = 3;
	uint8_t x310 = UINT8_MAX;
	volatile int16_t x311 = INT16_MAX;
	volatile uint16_t x312 = UINT16_MAX;
	int32_t t70 = -3;

	t70 = ((x309-x310)*(x311<x312));

	if (t70 != -252) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x315 = 5893;
	int8_t x316 = INT8_MIN;

	t71 = ((x313-x314)*(x315<x316));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x317 = 1763U;
	volatile uint16_t x319 = 0U;
	static int32_t x320 = 7835;
	int32_t t72 = -18;

	t72 = ((x317-x318)*(x319<x320));

	if (t72 != 1508) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = -1LL;
	int32_t x322 = -1;
	int16_t x324 = INT16_MIN;
	volatile int64_t t73 = 148265LL;

	t73 = ((x321-x322)*(x323<x324));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x325 = INT8_MAX;
	static int8_t x326 = -1;
	static int64_t x328 = -215525833LL;
	volatile int32_t t74 = 74;

	t74 = ((x325-x326)*(x327<x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x329 = -3135LL;
	uint8_t x330 = 0U;
	int32_t x332 = INT32_MIN;
	volatile int64_t t75 = 1612280227488366LL;

	t75 = ((x329-x330)*(x331<x332));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x334 = -1;
	static int8_t x335 = 3;
	int16_t x336 = -1;

	t76 = ((x333-x334)*(x335<x336));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x338 = 2U;
	int32_t x339 = 81;
	static uint8_t x340 = 12U;
	volatile int32_t t77 = 38;

	t77 = ((x337-x338)*(x339<x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x341 = 860U;
	uint8_t x342 = UINT8_MAX;
	uint32_t x343 = UINT32_MAX;

	t78 = ((x341-x342)*(x343<x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x345 = INT64_MAX;
	int64_t x348 = INT64_MIN;

	t79 = ((x345-x346)*(x347<x348));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x349 = 2U;
	int64_t x351 = INT64_MAX;
	int64_t x352 = 1011752874696LL;

	t80 = ((x349-x350)*(x351<x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x353 = UINT32_MAX;
	static uint8_t x354 = UINT8_MAX;
	int16_t x356 = 14373;

	t81 = ((x353-x354)*(x355<x356));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x357 = 1815065817U;
	static int16_t x358 = -1;
	int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MAX;
	volatile uint32_t t82 = 2816079U;

	t82 = ((x357-x358)*(x359<x360));

	if (t82 != 1815065818U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x362 = 28U;
	int16_t x363 = INT16_MAX;
	int32_t x364 = 34403122;
	volatile int32_t t83 = 708;

	t83 = ((x361-x362)*(x363<x364));

	if (t83 != -156) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = INT16_MIN;
	int64_t x366 = -1LL;
	volatile uint8_t x367 = 0U;
	static int32_t x368 = INT32_MAX;

	t84 = ((x365-x366)*(x367<x368));

	if (t84 != -32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x369 = 31312044;
	uint32_t x370 = 25046300U;
	uint64_t x371 = 273176842188812091LLU;
	int16_t x372 = INT16_MIN;

	t85 = ((x369-x370)*(x371<x372));

	if (t85 != 6265744U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x373 = 2U;
	static int32_t x374 = 858173810;
	int64_t x375 = -1LL;
	static volatile int16_t x376 = INT16_MAX;
	static int32_t t86 = 438356;

	t86 = ((x373-x374)*(x375<x376));

	if (t86 != -858173808) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x378 = -531522335713272575LL;
	int16_t x380 = 21;
	volatile int64_t t87 = -1LL;

	t87 = ((x377-x378)*(x379<x380));

	if (t87 != 531522333565788927LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = -1;
	int32_t x382 = -4198448;
	volatile uint64_t x383 = 166517991769LLU;
	uint16_t x384 = 0U;
	volatile int32_t t88 = 0;

	t88 = ((x381-x382)*(x383<x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x385 = 716682992U;
	volatile int32_t x386 = INT32_MAX;
	volatile uint32_t x387 = UINT32_MAX;
	uint16_t x388 = 498U;

	t89 = ((x385-x386)*(x387<x388));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = -34997737;
	int64_t x392 = INT64_MIN;
	volatile int32_t t90 = 2723714;

	t90 = ((x389-x390)*(x391<x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x393 = -1;
	static int64_t x394 = INT64_MIN;
	static int8_t x395 = 12;
	volatile int64_t t91 = -926865269LL;

	t91 = ((x393-x394)*(x395<x396));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x397 = 192847005159312384LLU;
	int8_t x399 = INT8_MIN;
	int64_t x400 = -1LL;
	static uint64_t t92 = 23882390366447LLU;

	t92 = ((x397-x398)*(x399<x400));

	if (t92 != 192847005159312385LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x402 = INT64_MIN;
	static volatile int32_t x403 = INT32_MIN;
	int64_t t93 = -14778638760LL;

	t93 = ((x401-x402)*(x403<x404));

	if (t93 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = INT8_MAX;
	uint8_t x407 = 6U;
	static int32_t t94 = -236566;

	t94 = ((x405-x406)*(x407<x408));

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x413 = 836720063U;
	volatile uint32_t x414 = 4U;
	int8_t x415 = 15;
	uint32_t t95 = 113936U;

	t95 = ((x413-x414)*(x415<x416));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x418 = 0U;
	volatile uint16_t x419 = 442U;
	int32_t x420 = -1053437;
	static volatile int64_t t96 = 61606LL;

	t96 = ((x417-x418)*(x419<x420));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = INT8_MAX;
	uint64_t x422 = 98602223LLU;
	int16_t x423 = INT16_MAX;

	t97 = ((x421-x422)*(x423<x424));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = 0;
	int8_t x426 = INT8_MIN;
	volatile uint8_t x427 = 3U;
	uint64_t x428 = 4685445546843LLU;
	volatile int32_t t98 = -45545046;

	t98 = ((x425-x426)*(x427<x428));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = -1;
	static volatile uint8_t x430 = UINT8_MAX;
	static uint8_t x431 = 11U;
	int8_t x432 = INT8_MIN;
	int32_t t99 = 9;

	t99 = ((x429-x430)*(x431<x432));

	if (t99 != 0) { NG(); } else { ; }
	
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

