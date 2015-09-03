#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int64_t x3 = -1056700131474LL;
static int64_t t0 = 448609521786577LL;
uint8_t x20 = 38U;
volatile int8_t x29 = INT8_MIN;
int32_t x31 = -1;
static uint16_t x45 = 378U;
int32_t t8 = -16218127;
static uint16_t x56 = 78U;
volatile uint8_t x65 = 11U;
uint8_t x78 = 127U;
volatile int64_t t13 = -905445431LL;
uint16_t x85 = UINT16_MAX;
uint8_t x86 = UINT8_MAX;
int64_t x87 = INT64_MIN;
uint64_t t15 = 26674429721LLU;
int64_t x97 = -41524841LL;
volatile uint8_t x98 = 2U;
int8_t x100 = -2;
static int64_t t18 = -1135436322986173498LL;
int32_t x101 = INT32_MIN;
uint8_t x103 = 0U;
int32_t t19 = 60719736;
uint32_t x110 = 23U;
uint16_t x111 = 2U;
uint32_t x112 = UINT32_MAX;
static volatile uint16_t x119 = UINT16_MAX;
static volatile uint64_t t21 = 978734103645LLU;
int8_t x124 = INT8_MIN;
int64_t t22 = 160LL;
static int16_t x127 = INT16_MAX;
static uint64_t x128 = UINT64_MAX;
static uint64_t x131 = UINT64_MAX;
volatile int64_t x143 = INT64_MAX;
uint32_t x166 = UINT32_MAX;
uint16_t x170 = 2181U;
uint64_t x182 = UINT64_MAX;
int32_t x191 = -1;
uint64_t t37 = 1LLU;
static volatile int32_t t39 = -7136395;
int16_t x213 = 14;
volatile int16_t x236 = -57;
int8_t x237 = INT8_MIN;
volatile int32_t t48 = 2;
int64_t x247 = 762548LL;
uint32_t x253 = UINT32_MAX;
volatile int32_t x262 = -1;
volatile int64_t t55 = -16590648LL;
uint8_t x282 = 5U;
int8_t x286 = 1;
volatile int8_t x293 = -3;
static uint8_t x296 = 28U;
volatile uint8_t x305 = 2U;
volatile int16_t x306 = -1;
volatile uint64_t t64 = 223563LLU;
uint16_t x328 = 119U;
int16_t x331 = INT16_MIN;
int16_t x336 = 15553;
int8_t x345 = 0;
int64_t t71 = -3599517357027LL;
int64_t x361 = 2519591LL;
volatile int16_t x367 = INT16_MIN;
uint32_t x371 = 2790U;
static int64_t x378 = INT64_MIN;
uint64_t x383 = 37848839125251LLU;
int64_t x384 = INT64_MIN;
static volatile uint64_t t79 = 124445241966732798LLU;
uint64_t x395 = 2522651734941345756LLU;
static volatile uint64_t t81 = 469655765LLU;
static volatile int32_t x405 = INT32_MIN;
static int32_t x411 = -2066971;
int16_t x412 = INT16_MIN;
static uint32_t t83 = 124477128U;
uint16_t x432 = UINT16_MAX;
volatile int8_t x433 = INT8_MIN;
int32_t x447 = -1;
volatile uint64_t t91 = 79LLU;
uint64_t t94 = UINT64_MAX;
int64_t t95 = 2069LL;
volatile uint16_t x469 = 89U;
int8_t x471 = -1;
int32_t t96 = -1;
int32_t x473 = -1;
static volatile uint64_t x481 = 15441069LLU;


void f0(void) {
	volatile int32_t x2 = -106;
	volatile int16_t x4 = -14126;

	t0 = ((x1&(x2+x3))+x4);

	if (t0 != -1056700145710LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 18930945030860227LL;
	static volatile uint32_t x6 = 72830U;
	uint16_t x7 = 30321U;
	uint64_t x8 = 1LLU;
	volatile uint64_t t1 = 4644915390978LLU;

	t1 = ((x5&(x6+x7))+x8);

	if (t1 != 98500LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 723911LLU;
	static int32_t x10 = INT32_MIN;
	int16_t x11 = INT16_MAX;
	int16_t x12 = INT16_MIN;
	uint64_t t2 = 178084LLU;

	t2 = ((x9&(x10+x11))+x12);

	if (t2 != 18446744073709521863LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	int64_t x18 = -1LL;
	int8_t x19 = INT8_MIN;
	int64_t t3 = 780775319302837LL;

	t3 = ((x17&(x18+x19))+x20);

	if (t3 != 165LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -1;
	int16_t x22 = INT16_MIN;
	volatile int8_t x23 = 0;
	uint64_t x24 = 2021005565LLU;
	volatile uint64_t t4 = 3853474373615LLU;

	t4 = ((x21&(x22+x23))+x24);

	if (t4 != 2020972797LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 73U;
	static volatile int64_t x26 = -1LL;
	int16_t x27 = INT16_MIN;
	volatile int8_t x28 = INT8_MIN;
	volatile int64_t t5 = -1179611LL;

	t5 = ((x25&(x26+x27))+x28);

	if (t5 != -55LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x30 = -1LL;
	int16_t x32 = INT16_MAX;
	volatile int64_t t6 = -574420LL;

	t6 = ((x29&(x30+x31))+x32);

	if (t6 != 32639LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	uint64_t x34 = 803557LLU;
	uint64_t x35 = 91LLU;
	int64_t x36 = INT64_MIN;
	uint64_t t7 = 1783LLU;

	t7 = ((x33&(x34+x35))+x36);

	if (t7 != 9223372036854793024LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x46 = INT8_MAX;
	uint8_t x47 = 25U;
	uint8_t x48 = UINT8_MAX;

	t8 = ((x45&(x46+x47))+x48);

	if (t8 != 279) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 148LLU;
	static int64_t x50 = -1LL;
	int8_t x51 = -1;
	volatile int32_t x52 = INT32_MIN;
	volatile uint64_t t9 = 11674LLU;

	t9 = ((x49&(x50+x51))+x52);

	if (t9 != 18446744071562068116LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x53 = -1;
	int16_t x54 = INT16_MAX;
	volatile int8_t x55 = -1;
	static volatile int32_t t10 = -104297;

	t10 = ((x53&(x54+x55))+x56);

	if (t10 != 32844) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -88;
	static volatile uint64_t x58 = UINT64_MAX;
	int16_t x59 = INT16_MAX;
	static int64_t x60 = -1LL;
	volatile uint64_t t11 = 2LLU;

	t11 = ((x57&(x58+x59))+x60);

	if (t11 != 32679LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x66 = INT8_MAX;
	uint16_t x67 = 10U;
	int8_t x68 = -3;
	int32_t t12 = -102161329;

	t12 = ((x65&(x66+x67))+x68);

	if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MAX;
	int64_t x79 = -66820848477319596LL;
	uint32_t x80 = 104U;

	t13 = ((x77&(x78+x79))+x80);

	if (t13 != 20283LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x81 = -1;
	int8_t x82 = INT8_MIN;
	int32_t x83 = -43753232;
	volatile int8_t x84 = 4;
	volatile int32_t t14 = -1540454;

	t14 = ((x81&(x82+x83))+x84);

	if (t14 != -43753356) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x88 = UINT64_MAX;

	t15 = ((x85&(x86+x87))+x88);

	if (t15 != 254LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = INT64_MAX;
	int16_t x90 = INT16_MIN;
	static int8_t x91 = INT8_MIN;
	uint16_t x92 = 1447U;
	int64_t t16 = -916369172000LL;

	t16 = ((x89&(x90+x91))+x92);

	if (t16 != 9223372036854744359LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = -1;
	int8_t x94 = INT8_MAX;
	int64_t x95 = -60555327702819385LL;
	volatile uint8_t x96 = 0U;
	int64_t t17 = -1388643823LL;

	t17 = ((x93&(x94+x95))+x96);

	if (t17 != -60555327702819258LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x99 = 30137U;

	t18 = ((x97&(x98+x99))+x100);

	if (t18 != 24977LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x102 = 1;
	uint16_t x104 = 130U;

	t19 = ((x101&(x102+x103))+x104);

	if (t19 != 130) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x109 = 784656U;
	uint32_t t20 = 28031799U;

	t20 = ((x109&(x110+x111))+x112);

	if (t20 != 15U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x117 = UINT64_MAX;
	int32_t x118 = -1;
	volatile int64_t x120 = INT64_MIN;

	t21 = ((x117&(x118+x119))+x120);

	if (t21 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = 2;
	int64_t x122 = -1LL;
	uint32_t x123 = 0U;

	t22 = ((x121&(x122+x123))+x124);

	if (t22 != -126LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = -1LL;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = ((x125&(x126+x127))+x128);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = 3778;
	static int16_t x130 = INT16_MIN;
	int8_t x132 = -38;
	uint64_t t24 = 162059764072LLU;

	t24 = ((x129&(x130+x131))+x132);

	if (t24 != 3740LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	uint64_t x140 = 1843554491608LLU;
	uint64_t t25 = 18356778741192529LLU;

	t25 = ((x137&(x138+x139))+x140);

	if (t25 != 1843554458840LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x141 = 648960720LLU;
	uint64_t x142 = UINT64_MAX;
	int64_t x144 = INT64_MIN;
	uint64_t t26 = 119LLU;

	t26 = ((x141&(x142+x143))+x144);

	if (t26 != 9223372037503736528LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x145 = INT16_MAX;
	volatile uint16_t x146 = 1940U;
	int8_t x147 = INT8_MAX;
	uint64_t x148 = UINT64_MAX;
	static volatile uint64_t t27 = 55251LLU;

	t27 = ((x145&(x146+x147))+x148);

	if (t27 != 2066LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = INT8_MIN;
	static int64_t x150 = 10344498472LL;
	int8_t x151 = -1;
	int64_t x152 = -1LL;
	volatile int64_t t28 = 159358996082LL;

	t28 = ((x149&(x150+x151))+x152);

	if (t28 != 10344498431LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x153 = INT32_MIN;
	static volatile int32_t x154 = INT32_MIN;
	uint16_t x155 = UINT16_MAX;
	int64_t x156 = -33136LL;
	int64_t t29 = -7635141LL;

	t29 = ((x153&(x154+x155))+x156);

	if (t29 != -2147516784LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x157 = UINT16_MAX;
	static int16_t x158 = -2;
	volatile uint16_t x159 = 4132U;
	uint8_t x160 = 29U;
	volatile int32_t t30 = 26901686;

	t30 = ((x157&(x158+x159))+x160);

	if (t30 != 4159) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x165 = INT64_MIN;
	int32_t x167 = -26034;
	int32_t x168 = INT32_MIN;
	static int64_t t31 = -227LL;

	t31 = ((x165&(x166+x167))+x168);

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x169 = UINT16_MAX;
	int8_t x171 = INT8_MAX;
	int64_t x172 = -66830877LL;
	volatile int64_t t32 = -3262241343392LL;

	t32 = ((x169&(x170+x171))+x172);

	if (t32 != -66828569LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x173 = UINT32_MAX;
	static int16_t x174 = 14989;
	int8_t x175 = -24;
	int16_t x176 = -2;
	static uint32_t t33 = 719996U;

	t33 = ((x173&(x174+x175))+x176);

	if (t33 != 14963U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x177 = -63;
	static volatile uint32_t x178 = 3006538U;
	int8_t x179 = -1;
	int32_t x180 = 47240831;
	uint32_t t34 = 207502U;

	t34 = ((x177&(x178+x179))+x180);

	if (t34 != 50247360U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x181 = INT16_MAX;
	uint64_t x183 = UINT64_MAX;
	volatile int64_t x184 = INT64_MIN;
	volatile uint64_t t35 = 8LLU;

	t35 = ((x181&(x182+x183))+x184);

	if (t35 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x185 = INT32_MAX;
	int64_t x186 = 1419918LL;
	int8_t x187 = 1;
	volatile int8_t x188 = INT8_MAX;
	volatile int64_t t36 = -6LL;

	t36 = ((x185&(x186+x187))+x188);

	if (t36 != 1420046LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x189 = UINT64_MAX;
	volatile int32_t x190 = 95;
	static uint16_t x192 = UINT16_MAX;

	t37 = ((x189&(x190+x191))+x192);

	if (t37 != 65629LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x197 = 3;
	static uint64_t x198 = UINT64_MAX;
	int32_t x199 = -1;
	uint32_t x200 = UINT32_MAX;
	static volatile uint64_t t38 = 8131324802338697LLU;

	t38 = ((x197&(x198+x199))+x200);

	if (t38 != 4294967297LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = INT8_MAX;
	uint16_t x202 = 1095U;
	volatile uint8_t x203 = 0U;
	int32_t x204 = 1;

	t39 = ((x201&(x202+x203))+x204);

	if (t39 != 72) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x206 = 33577;
	uint64_t x207 = 18721894LLU;
	int32_t x208 = INT32_MIN;
	uint64_t t40 = 118665160522LLU;

	t40 = ((x205&(x206+x207))+x208);

	if (t40 != 18446744071562080143LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x209 = 1U;
	static uint16_t x210 = 339U;
	int16_t x211 = INT16_MAX;
	volatile int32_t x212 = -1;
	static volatile int32_t t41 = -37848111;

	t41 = ((x209&(x210+x211))+x212);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x214 = INT8_MAX;
	int16_t x215 = INT16_MIN;
	volatile int8_t x216 = -25;
	int32_t t42 = -17;

	t42 = ((x213&(x214+x215))+x216);

	if (t42 != -11) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x217 = -1;
	static int16_t x218 = 1;
	int64_t x219 = 497440LL;
	uint32_t x220 = 2U;
	int64_t t43 = -89467LL;

	t43 = ((x217&(x218+x219))+x220);

	if (t43 != 497443LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = 6LLU;
	int64_t x222 = 7LL;
	int32_t x223 = -1;
	int8_t x224 = INT8_MIN;
	volatile uint64_t t44 = 18743963480LLU;

	t44 = ((x221&(x222+x223))+x224);

	if (t44 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x225 = 7826U;
	uint64_t x226 = UINT64_MAX;
	static uint32_t x227 = UINT32_MAX;
	uint16_t x228 = UINT16_MAX;
	uint64_t t45 = 65057427474925LLU;

	t45 = ((x225&(x226+x227))+x228);

	if (t45 != 73361LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x229 = -1;
	uint64_t x230 = 4LLU;
	volatile int16_t x231 = INT16_MIN;
	static int16_t x232 = 11;
	static volatile uint64_t t46 = 2LLU;

	t46 = ((x229&(x230+x231))+x232);

	if (t46 != 18446744073709518863LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = -3;
	static uint64_t x234 = 135LLU;
	static uint64_t x235 = 18223592994566806LLU;
	volatile uint64_t t47 = 25907716504LLU;

	t47 = ((x233&(x234+x235))+x236);

	if (t47 != 18223592994566884LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x238 = INT8_MIN;
	int16_t x239 = -525;
	uint16_t x240 = 240U;

	t48 = ((x237&(x238+x239))+x240);

	if (t48 != -528) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = INT64_MAX;
	static int16_t x242 = 0;
	int8_t x243 = 0;
	uint8_t x244 = UINT8_MAX;
	static int64_t t49 = 5075317LL;

	t49 = ((x241&(x242+x243))+x244);

	if (t49 != 255LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x245 = UINT64_MAX;
	int8_t x246 = INT8_MIN;
	uint64_t x248 = 20334662796300LLU;
	static uint64_t t50 = 1216257411053998LLU;

	t50 = ((x245&(x246+x247))+x248);

	if (t50 != 20334663558720LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MAX;
	int16_t x250 = -8;
	uint16_t x251 = UINT16_MAX;
	int8_t x252 = -30;
	volatile int32_t t51 = -768598;

	t51 = ((x249&(x250+x251))+x252);

	if (t51 != 89) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x254 = 1717868938U;
	volatile int64_t x255 = -4786093LL;
	int32_t x256 = 7387913;
	static volatile int64_t t52 = -13136966965126LL;

	t52 = ((x253&(x254+x255))+x256);

	if (t52 != 1720470758LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x257 = UINT64_MAX;
	uint8_t x258 = 2U;
	static volatile int8_t x259 = 7;
	uint32_t x260 = UINT32_MAX;
	static uint64_t t53 = 15007905LLU;

	t53 = ((x257&(x258+x259))+x260);

	if (t53 != 4294967304LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = INT32_MAX;
	uint64_t x263 = 9521800127LLU;
	int16_t x264 = -1;
	volatile uint64_t t54 = 1507740744597068458LLU;

	t54 = ((x261&(x262+x263))+x264);

	if (t54 != 931865533LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = -5;
	volatile int64_t x266 = -15LL;
	int64_t x267 = -3LL;
	uint32_t x268 = 3571U;

	t55 = ((x265&(x266+x267))+x268);

	if (t55 != 3549LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x277 = INT64_MAX;
	int32_t x278 = -7336;
	uint64_t x279 = 8597213638616471LLU;
	uint64_t x280 = 1832LLU;
	uint64_t t56 = 18521860LLU;

	t56 = ((x277&(x278+x279))+x280);

	if (t56 != 8597213638610967LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x281 = INT64_MAX;
	volatile uint16_t x283 = 0U;
	int16_t x284 = -1;
	volatile int64_t t57 = 56LL;

	t57 = ((x281&(x282+x283))+x284);

	if (t57 != 4LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x285 = -1;
	int32_t x287 = INT32_MIN;
	int64_t x288 = 2258728392783290447LL;
	volatile int64_t t58 = 3169924734LL;

	t58 = ((x285&(x286+x287))+x288);

	if (t58 != 2258728390635806800LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x289 = UINT16_MAX;
	int32_t x290 = INT32_MIN;
	volatile int64_t x291 = -3LL;
	int32_t x292 = -122389867;
	int64_t t59 = -221781LL;

	t59 = ((x289&(x290+x291))+x292);

	if (t59 != -122324334LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x294 = -1;
	int8_t x295 = -1;
	volatile int32_t t60 = 9956907;

	t60 = ((x293&(x294+x295))+x296);

	if (t60 != 24) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x301 = -1951;
	volatile int8_t x302 = -1;
	static volatile int32_t x303 = -1;
	int32_t x304 = -1;
	int32_t t61 = 652409178;

	t61 = ((x301&(x302+x303))+x304);

	if (t61 != -1953) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x307 = INT32_MAX;
	uint32_t x308 = 7761735U;
	volatile uint32_t t62 = 2U;

	t62 = ((x305&(x306+x307))+x308);

	if (t62 != 7761737U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MAX;
	uint64_t x311 = 2739LLU;
	static int64_t x312 = -1LL;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = ((x309&(x310+x311))+x312);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x313 = 44924519007332902LLU;
	int32_t x314 = 16999692;
	static int16_t x315 = INT16_MIN;
	uint64_t x316 = 2045689LLU;

	t64 = ((x313&(x314+x315))+x316);

	if (t64 != 18962173LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x317 = INT64_MIN;
	volatile int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	volatile uint8_t x320 = 1U;
	volatile int64_t t65 = 43LL;

	t65 = ((x317&(x318+x319))+x320);

	if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x325 = 252U;
	static volatile int8_t x326 = 0;
	static uint16_t x327 = UINT16_MAX;
	static int32_t t66 = -1026258;

	t66 = ((x325&(x326+x327))+x328);

	if (t66 != 371) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x329 = -1LL;
	int32_t x330 = -41329124;
	static int32_t x332 = 14;
	int64_t t67 = -1944729017813929134LL;

	t67 = ((x329&(x330+x331))+x332);

	if (t67 != -41361878LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x333 = UINT16_MAX;
	int8_t x334 = -1;
	static int8_t x335 = 1;
	volatile int32_t t68 = -98784743;

	t68 = ((x333&(x334+x335))+x336);

	if (t68 != 15553) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x346 = INT16_MIN;
	volatile int8_t x347 = -1;
	int16_t x348 = 12;
	volatile int32_t t69 = -2830080;

	t69 = ((x345&(x346+x347))+x348);

	if (t69 != 12) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = INT16_MIN;
	int64_t x350 = -1LL;
	static volatile uint32_t x351 = 6429947U;
	int64_t x352 = INT64_MIN;
	static int64_t t70 = -4139LL;

	t70 = ((x349&(x350+x351))+x352);

	if (t70 != -9223372036848353280LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x353 = UINT8_MAX;
	int32_t x354 = 51380195;
	int64_t x355 = 4211837894675LL;
	int64_t x356 = -1LL;

	t71 = ((x353&(x354+x355))+x356);

	if (t71 != 245LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x357 = 8627778;
	static uint64_t x358 = 187123249LLU;
	static volatile int16_t x359 = INT16_MAX;
	int64_t x360 = INT64_MIN;
	uint64_t t72 = 51147LLU;

	t72 = ((x357&(x358+x359))+x360);

	if (t72 != 9223372036855006720LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x362 = 294966;
	volatile uint8_t x363 = 22U;
	uint32_t x364 = 10017U;
	volatile int64_t t73 = 170297LL;

	t73 = ((x361&(x362+x363))+x364);

	if (t73 != 272165LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x365 = -1;
	int64_t x366 = INT64_MAX;
	int8_t x368 = -1;
	volatile int64_t t74 = 8384092217191LL;

	t74 = ((x365&(x366+x367))+x368);

	if (t74 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x370 = INT64_MIN;
	uint64_t x372 = UINT64_MAX;
	uint64_t t75 = 275597076271LLU;

	t75 = ((x369&(x370+x371))+x372);

	if (t75 != 2789LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x373 = 160LLU;
	int32_t x374 = INT32_MIN;
	uint16_t x375 = UINT16_MAX;
	uint8_t x376 = 15U;
	volatile uint64_t t76 = 6844713541768334LLU;

	t76 = ((x373&(x374+x375))+x376);

	if (t76 != 175LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x377 = INT32_MIN;
	uint16_t x379 = 64U;
	uint32_t x380 = 117U;
	volatile int64_t t77 = -70LL;

	t77 = ((x377&(x378+x379))+x380);

	if (t77 != -9223372036854775691LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x381 = -1LL;
	int32_t x382 = INT32_MIN;
	static uint64_t t78 = 69674365751623131LLU;

	t78 = ((x381&(x382+x383))+x384);

	if (t78 != 9223409883546417411LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x389 = 2U;
	int8_t x390 = INT8_MAX;
	uint32_t x391 = 392227U;
	volatile uint64_t x392 = 850571375LLU;

	t79 = ((x389&(x390+x391))+x392);

	if (t79 != 850571377LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x393 = INT16_MIN;
	int64_t x394 = -57252839845LL;
	uint8_t x396 = 36U;
	uint64_t t80 = 6063430098910257296LLU;

	t80 = ((x393&(x394+x395))+x396);

	if (t80 != 2522651677688496164LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x401 = -1;
	uint64_t x402 = 54339698494271263LLU;
	static int16_t x403 = INT16_MAX;
	int16_t x404 = -1;

	t81 = ((x401&(x402+x403))+x404);

	if (t81 != 54339698494304029LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x406 = 1866U;
	int16_t x407 = -1;
	int16_t x408 = INT16_MIN;
	static volatile int32_t t82 = -16;

	t82 = ((x405&(x406+x407))+x408);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x409 = -211751260;
	static uint32_t x410 = UINT32_MAX;

	t83 = ((x409&(x410+x411))+x412);

	if (t83 != 4083147940U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x413 = -296702;
	volatile uint8_t x414 = UINT8_MAX;
	static uint64_t x415 = 1LLU;
	uint8_t x416 = 10U;
	volatile uint64_t t84 = 1035625446996LLU;

	t84 = ((x413&(x414+x415))+x416);

	if (t84 != 266LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x417 = 1U;
	int16_t x418 = -25;
	int8_t x419 = INT8_MAX;
	int8_t x420 = 0;
	volatile int32_t t85 = 305074484;

	t85 = ((x417&(x418+x419))+x420);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x421 = 114582U;
	uint64_t x422 = 505LLU;
	uint16_t x423 = 0U;
	int16_t x424 = -3429;
	uint64_t t86 = 12331525LLU;

	t86 = ((x421&(x422+x423))+x424);

	if (t86 != 18446744073709548587LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x425 = UINT32_MAX;
	volatile uint64_t x426 = UINT64_MAX;
	int16_t x427 = INT16_MIN;
	uint8_t x428 = 27U;
	volatile uint64_t t87 = 82024264488941887LLU;

	t87 = ((x425&(x426+x427))+x428);

	if (t87 != 4294934554LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x429 = INT16_MIN;
	static int16_t x430 = 15;
	static int64_t x431 = 1644854833490LL;
	int64_t t88 = -3784777793165LL;

	t88 = ((x429&(x430+x431))+x432);

	if (t88 != 1644854870015LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x434 = -1;
	static int16_t x435 = 1;
	uint64_t x436 = 600477165426LLU;
	volatile uint64_t t89 = 14571763111LLU;

	t89 = ((x433&(x434+x435))+x436);

	if (t89 != 600477165426LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x441 = INT16_MIN;
	uint16_t x442 = 1741U;
	static volatile uint16_t x443 = UINT16_MAX;
	int32_t x444 = INT32_MIN;
	int32_t t90 = -2;

	t90 = ((x441&(x442+x443))+x444);

	if (t90 != -2147418112) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x445 = INT16_MAX;
	uint64_t x446 = UINT64_MAX;
	int64_t x448 = -200532728534332LL;

	t91 = ((x445&(x446+x447))+x448);

	if (t91 != 18446543540981050050LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x453 = INT32_MIN;
	int32_t x454 = INT32_MIN;
	uint32_t x455 = 4623U;
	uint64_t x456 = 1LLU;
	uint64_t t92 = 27591957LLU;

	t92 = ((x453&(x454+x455))+x456);

	if (t92 != 2147483649LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x457 = -29739928327879LL;
	int64_t x458 = INT64_MIN;
	static volatile int32_t x459 = INT32_MAX;
	volatile uint64_t x460 = UINT64_MAX;
	volatile uint64_t t93 = 782684543527LLU;

	t93 = ((x457&(x458+x459))+x460);

	if (t93 != 9223372037427489080LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x461 = INT64_MIN;
	volatile int32_t x462 = INT32_MAX;
	int64_t x463 = 65359454542LL;
	static uint64_t x464 = UINT64_MAX;

	t94 = ((x461&(x462+x463))+x464);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x465 = -1;
	int8_t x466 = -15;
	static int64_t x467 = -1LL;
	volatile uint16_t x468 = 252U;

	t95 = ((x465&(x466+x467))+x468);

	if (t95 != 236LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x470 = -423984940;
	int8_t x472 = 25;

	t96 = ((x469&(x470+x471))+x472);

	if (t96 != 106) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x474 = -1;
	uint32_t x475 = UINT32_MAX;
	int64_t x476 = INT64_MIN;
	volatile int64_t t97 = 920LL;

	t97 = ((x473&(x474+x475))+x476);

	if (t97 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x477 = -869241688740691896LL;
	int64_t x478 = -990LL;
	volatile int64_t x479 = -483802712730LL;
	static volatile uint8_t x480 = 11U;
	int64_t t98 = -30708LL;

	t98 = ((x477&(x478+x479))+x480);

	if (t98 != -869241963696357357LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x482 = INT32_MIN;
	uint8_t x483 = 1U;
	static int8_t x484 = INT8_MIN;
	volatile uint64_t t99 = 128LLU;

	t99 = ((x481&(x482+x483))+x484);

	if (t99 != 18446744073709551489LLU) { NG(); } else { ; }
	
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

