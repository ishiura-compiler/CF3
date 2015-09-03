#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 82LL;
volatile int32_t x19 = -1;
uint16_t x25 = UINT16_MAX;
volatile int32_t t5 = -1;
uint8_t x48 = 48U;
static volatile uint64_t t8 = 254511LLU;
volatile int8_t x51 = INT8_MAX;
static volatile int8_t x52 = -1;
volatile int64_t x60 = INT64_MIN;
volatile uint32_t x61 = UINT32_MAX;
uint64_t x63 = UINT64_MAX;
uint32_t x72 = 946U;
int16_t x74 = -1;
int32_t x76 = -1;
uint16_t x77 = 1U;
int16_t x81 = INT16_MIN;
static int16_t x84 = 73;
uint32_t x91 = 1393039421U;
int8_t x93 = INT8_MIN;
uint64_t x96 = UINT64_MAX;
int64_t t19 = -8317309495903563LL;
volatile uint32_t x103 = UINT32_MAX;
volatile int16_t x104 = 27;
int16_t x108 = INT16_MAX;
int16_t x111 = INT16_MAX;
uint16_t x115 = UINT16_MAX;
uint64_t x118 = 29778320127LLU;
volatile uint64_t t24 = 6919LLU;
volatile uint8_t x125 = UINT8_MAX;
volatile int8_t x126 = -1;
uint8_t x129 = 2U;
int32_t x136 = 100161;
static volatile uint64_t t27 = 319LLU;
static int8_t x137 = INT8_MAX;
int16_t x138 = 648;
uint64_t x139 = 473267LLU;
volatile uint64_t t28 = 189382093LLU;
int32_t x150 = INT32_MAX;
volatile uint8_t x158 = 90U;
uint8_t x160 = 41U;
volatile uint16_t x163 = 39U;
volatile int64_t t32 = -11416174912503544LL;
int32_t x169 = -1;
int16_t x171 = -63;
volatile int64_t t34 = -1001848986816222LL;
static int64_t x183 = INT64_MIN;
static int16_t x189 = 114;
int8_t x190 = INT8_MIN;
uint32_t x193 = 59076611U;
static uint32_t x194 = 0U;
int32_t x195 = INT32_MAX;
volatile int32_t x200 = INT32_MIN;
int64_t x214 = INT64_MIN;
int64_t t44 = 96444223243LL;
static int8_t x226 = INT8_MIN;
volatile uint32_t t45 = 15U;
int8_t x229 = -15;
uint32_t x237 = 122017729U;
volatile int32_t x240 = INT32_MAX;
uint64_t t47 = 387620785070LLU;
uint64_t t48 = 2977550407958LLU;
uint8_t x261 = UINT8_MAX;
uint16_t x268 = UINT16_MAX;
static volatile int64_t t53 = -37506801422777825LL;
volatile int32_t x275 = 882382;
uint32_t t54 = 27122U;
int16_t x279 = INT16_MAX;
static uint64_t x292 = 4006780741619852LLU;
int8_t x305 = -12;
int8_t x307 = -1;
static volatile int32_t t60 = -27;
volatile int8_t x311 = -1;
uint64_t t62 = 2800LLU;
static uint64_t x332 = UINT64_MAX;
static int32_t x339 = INT32_MAX;
uint32_t x344 = 1U;
volatile int64_t t69 = -512615323LL;
volatile uint64_t x357 = 2037LLU;
int64_t x363 = INT64_MAX;
volatile int8_t x364 = INT8_MIN;
uint8_t x367 = 10U;
volatile uint64_t x380 = UINT64_MAX;
volatile uint64_t t74 = 3LLU;
static uint8_t x387 = UINT8_MAX;
int32_t x408 = 988;
volatile int64_t t81 = -190702154LL;
static uint16_t x420 = 10845U;
static uint64_t x421 = 888649LLU;
int64_t x424 = -1LL;
int64_t x425 = 3321901LL;
uint32_t x428 = 286623U;
volatile int64_t t85 = -457LL;
int16_t x429 = -491;
volatile int8_t x432 = INT8_MIN;
volatile int64_t x435 = INT64_MIN;
uint32_t x438 = 15371315U;
static int64_t x449 = INT64_MIN;
int16_t x450 = INT16_MIN;
volatile int64_t t90 = -4212056598125378LL;
int32_t x468 = INT32_MIN;
int32_t x473 = -1;
static int8_t x480 = -1;
int8_t x483 = INT8_MIN;
static volatile int64_t x486 = -1LL;
static int32_t x488 = INT32_MIN;
int64_t x494 = 1766638570632199LL;
int32_t x495 = INT32_MIN;
volatile int64_t t97 = 18867990574LL;
int64_t x503 = INT64_MIN;
int32_t x505 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MAX;
	int8_t x3 = INT8_MIN;
	int64_t x4 = 21LL;

	t0 = ((x1|(x2%x3))*x4);

	if (t0 != -685461LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint8_t x6 = 47U;
	uint64_t x7 = 10377556821422661LLU;
	int32_t x8 = INT32_MAX;
	uint64_t t1 = 302LLU;

	t1 = ((x5|(x6%x7))*x8);

	if (t1 != 13835058158361378769LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x17 = 1000LL;
	volatile uint32_t x18 = 237427U;
	volatile uint16_t x20 = UINT16_MAX;
	volatile int64_t t2 = 1007035798553583LL;

	t2 = ((x17|(x18%x19))*x20);

	if (t2 != 15568691205LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MAX;
	static int8_t x22 = INT8_MIN;
	int8_t x23 = INT8_MIN;
	volatile int64_t x24 = -1LL;
	volatile int64_t t3 = 882385557936757LL;

	t3 = ((x21|(x22%x23))*x24);

	if (t3 != -32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x26 = INT64_MIN;
	uint16_t x27 = UINT16_MAX;
	volatile int64_t x28 = INT64_MAX;
	int64_t t4 = 1092671661809384LL;

	t4 = ((x25|(x26%x27))*x28);

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = UINT16_MAX;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = INT32_MAX;
	int16_t x32 = INT16_MIN;

	t5 = ((x29|(x30%x31))*x32);

	if (t5 != -2147450880) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x37 = 9200U;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = UINT64_MAX;
	int64_t x40 = INT64_MAX;
	uint64_t t6 = 1LLU;

	t6 = ((x37|(x38%x39))*x40);

	if (t6 != 9223372036854766608LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x41 = INT32_MAX;
	volatile int16_t x42 = INT16_MIN;
	volatile uint8_t x43 = UINT8_MAX;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t7 = 4131LLU;

	t7 = ((x41|(x42%x43))*x44);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	static volatile uint64_t x46 = 5663145175687751LLU;
	uint16_t x47 = UINT16_MAX;

	t8 = ((x45|(x46%x47))*x48);

	if (t8 != 18446743970633451040LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = 4U;
	volatile int32_t t9 = -10273930;

	t9 = ((x49|(x50%x51))*x52);

	if (t9 != -65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 1019U;
	int16_t x54 = -300;
	int8_t x55 = -1;
	static int8_t x56 = -6;
	uint32_t t10 = 709U;

	t10 = ((x53|(x54%x55))*x56);

	if (t10 != 4294961182U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = 674758411413LLU;
	uint8_t x58 = 90U;
	uint16_t x59 = 111U;
	uint64_t t11 = 12968897437605684LLU;

	t11 = ((x57|(x58%x59))*x60);

	if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x62 = INT8_MIN;
	int64_t x64 = INT64_MIN;
	uint64_t t12 = 14144842826845LLU;

	t12 = ((x61|(x62%x63))*x64);

	if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x69 = 441LLU;
	uint64_t x70 = UINT64_MAX;
	int64_t x71 = -516915306056852935LL;
	static uint64_t t13 = 2771507461621LLU;

	t13 = ((x69|(x70%x71))*x72);

	if (t13 != 9386533613334587470LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x73 = INT32_MIN;
	static int32_t x75 = INT32_MIN;
	volatile int32_t t14 = -951;

	t14 = ((x73|(x74%x75))*x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x78 = 12LL;
	uint32_t x79 = UINT32_MAX;
	volatile int16_t x80 = INT16_MIN;
	int64_t t15 = -174672LL;

	t15 = ((x77|(x78%x79))*x80);

	if (t15 != -425984LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x82 = 459U;
	uint64_t x83 = 1391872215532LLU;
	volatile uint64_t t16 = 333680134176LLU;

	t16 = ((x81|(x82%x83))*x84);

	if (t16 != 18446744073707193059LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = -1;
	int32_t x90 = INT32_MAX;
	volatile int8_t x92 = -1;
	uint32_t t17 = 7U;

	t17 = ((x89|(x90%x91))*x92);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x94 = INT16_MIN;
	int16_t x95 = 5;
	uint64_t t18 = 1123527666669LLU;

	t18 = ((x93|(x94%x95))*x96);

	if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MAX;
	volatile int16_t x98 = INT16_MIN;
	int64_t x99 = INT64_MIN;
	uint16_t x100 = 2U;

	t19 = ((x97|(x98%x99))*x100);

	if (t19 != -65282LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = -8376239903642065LL;
	int32_t x102 = INT32_MIN;
	volatile int64_t t20 = 3LL;

	t20 = ((x101|(x102%x103))*x104);

	if (t20 != -226158477398335755LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = UINT8_MAX;
	volatile int64_t x106 = -1LL;
	int64_t x107 = -475745446448350692LL;
	static volatile int64_t t21 = -22107157484448715LL;

	t21 = ((x105|(x106%x107))*x108);

	if (t21 != -32767LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = INT8_MIN;
	int8_t x110 = -1;
	volatile int16_t x112 = -1;
	int32_t t22 = -1420558;

	t22 = ((x109|(x110%x111))*x112);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = 215;
	static volatile int32_t x114 = INT32_MIN;
	static volatile int64_t x116 = -1LL;
	static int64_t t23 = 6706LL;

	t23 = ((x113|(x114%x115))*x116);

	if (t23 != 32553LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x117 = UINT16_MAX;
	static int8_t x119 = -1;
	volatile int8_t x120 = INT8_MAX;

	t24 = ((x117|(x118%x119))*x120);

	if (t24 != 3781854101377LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x127 = UINT16_MAX;
	int16_t x128 = -14950;
	int32_t t25 = 36958;

	t25 = ((x125|(x126%x127))*x128);

	if (t25 != 14950) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x130 = INT8_MAX;
	static int16_t x131 = 725;
	volatile uint16_t x132 = UINT16_MAX;
	static int32_t t26 = -232793;

	t26 = ((x129|(x130%x131))*x132);

	if (t26 != 8322945) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = -1025504;
	int64_t x134 = -1LL;
	uint64_t x135 = UINT64_MAX;

	t27 = ((x133|(x134%x135))*x136);

	if (t27 != 18446743970994045472LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x140 = UINT16_MAX;

	t28 = ((x137|(x138%x139))*x140);

	if (t28 != 50265345LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = 0;
	int64_t x151 = INT64_MAX;
	static int32_t x152 = 6334;
	static int64_t t29 = -3417LL;

	t29 = ((x149|(x150%x151))*x152);

	if (t29 != 13602161420098LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x153 = UINT16_MAX;
	static volatile int16_t x154 = 9345;
	int32_t x155 = INT32_MIN;
	static int16_t x156 = -1;
	int32_t t30 = -696234;

	t30 = ((x153|(x154%x155))*x156);

	if (t30 != -65535) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x157 = 8U;
	int8_t x159 = -1;
	volatile int32_t t31 = 1009949;

	t31 = ((x157|(x158%x159))*x160);

	if (t31 != 328) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x161 = INT16_MIN;
	static int64_t x162 = INT64_MAX;
	int8_t x164 = INT8_MIN;

	t32 = ((x161|(x162%x163))*x164);

	if (t32 != 4193408LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x170 = 28U;
	uint32_t x172 = 124788793U;
	uint32_t t33 = 450U;

	t33 = ((x169|(x170%x171))*x172);

	if (t33 != 4170178503U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x173 = -15441923;
	volatile int64_t x174 = INT64_MIN;
	static int32_t x175 = -19660273;
	int32_t x176 = -3;

	t34 = ((x173|(x174%x175))*x176);

	if (t34 != 14573571LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = INT16_MAX;
	static uint64_t x182 = UINT64_MAX;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t35 = 8304469931198221687LLU;

	t35 = ((x181|(x182%x183))*x184);

	if (t35 != 32768LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x191 = -1LL;
	uint16_t x192 = 1U;
	int64_t t36 = -2877395343LL;

	t36 = ((x189|(x190%x191))*x192);

	if (t36 != 114LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x196 = INT16_MIN;
	static uint32_t t37 = 250193U;

	t37 = ((x193|(x194%x195))*x196);

	if (t37 != 1207861248U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x197 = UINT32_MAX;
	int64_t x198 = INT64_MIN;
	int8_t x199 = 1;
	int64_t t38 = 13562683998LL;

	t38 = ((x197|(x198%x199))*x200);

	if (t38 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x201 = 28U;
	static volatile int32_t x202 = -1;
	static int64_t x203 = 2063LL;
	int16_t x204 = INT16_MAX;
	volatile int64_t t39 = 185360LL;

	t39 = ((x201|(x202%x203))*x204);

	if (t39 != -32767LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x205 = -6;
	int16_t x206 = INT16_MAX;
	static volatile int8_t x207 = -1;
	static int16_t x208 = -1;
	volatile int32_t t40 = -431807808;

	t40 = ((x205|(x206%x207))*x208);

	if (t40 != 6) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = INT64_MAX;
	uint32_t x210 = 473766U;
	static int8_t x211 = INT8_MIN;
	static uint64_t x212 = 4281441895LLU;
	static volatile uint64_t t41 = 3187616853LLU;

	t41 = ((x209|(x210%x211))*x212);

	if (t41 != 9223372032573333913LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x213 = -13;
	int32_t x215 = INT32_MAX;
	volatile int64_t x216 = -237204259219434LL;
	static volatile int64_t t42 = -229509348032LL;

	t42 = ((x213|(x214%x215))*x216);

	if (t42 != 237204259219434LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x217 = -1;
	int32_t x218 = INT32_MIN;
	volatile uint32_t x219 = 1532440U;
	uint64_t x220 = 1796461306164LLU;
	volatile uint64_t t43 = 9486238LLU;

	t43 = ((x217|(x218%x219))*x220);

	if (t43 != 5003533896769330892LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = -1;
	int64_t x222 = 3804755LL;
	volatile uint16_t x223 = 6503U;
	volatile uint8_t x224 = 10U;

	t44 = ((x221|(x222%x223))*x224);

	if (t44 != -10LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x225 = INT16_MAX;
	volatile uint32_t x227 = 301865U;
	int8_t x228 = 18;

	t45 = ((x225|(x226%x227))*x228);

	if (t45 != 589806U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x230 = -1;
	int64_t x231 = INT64_MAX;
	int16_t x232 = INT16_MAX;
	volatile int64_t t46 = 187361157298434199LL;

	t46 = ((x229|(x230%x231))*x232);

	if (t46 != -32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x238 = 5;
	uint64_t x239 = 198996518LLU;

	t47 = ((x237|(x238%x239))*x240);

	if (t47 != 262031086261512251LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x245 = 4U;
	volatile int64_t x246 = 14332690586210LL;
	uint64_t x247 = 368524LLU;
	int16_t x248 = -183;

	t48 = ((x245|(x246%x247))*x248);

	if (t48 != 18446744073660483094LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x249 = -19349455LL;
	volatile int32_t x250 = INT32_MIN;
	static uint64_t x251 = 1514474LLU;
	int32_t x252 = -43889;
	uint64_t t49 = 52461LLU;

	t49 = ((x249|(x250%x251))*x252);

	if (t49 != 843405213531LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = INT8_MAX;
	int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MIN;
	static uint16_t x260 = 31391U;
	volatile int32_t t50 = -2;

	t50 = ((x257|(x258%x259))*x260);

	if (t50 != 3986657) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x262 = 13084U;
	int64_t x263 = INT64_MIN;
	int16_t x264 = -1;
	int64_t t51 = -937690269875LL;

	t51 = ((x261|(x262%x263))*x264);

	if (t51 != -13311LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = INT32_MIN;
	volatile int32_t x266 = INT32_MAX;
	int64_t x267 = INT64_MIN;
	static int64_t t52 = 110542888LL;

	t52 = ((x265|(x266%x267))*x268);

	if (t52 != -65535LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x269 = INT32_MIN;
	static volatile int64_t x270 = -110061825LL;
	volatile int32_t x271 = 7;
	int8_t x272 = INT8_MIN;

	t53 = ((x269|(x270%x271))*x272);

	if (t53 != 768LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x273 = -1;
	volatile uint32_t x274 = 2346707U;
	static int16_t x276 = -1;

	t54 = ((x273|(x274%x275))*x276);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x277 = INT8_MAX;
	volatile int8_t x278 = INT8_MIN;
	static volatile int32_t x280 = 1216;
	volatile int32_t t55 = -2;

	t55 = ((x277|(x278%x279))*x280);

	if (t55 != -1216) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x281 = -25LL;
	int16_t x282 = 0;
	uint32_t x283 = UINT32_MAX;
	volatile uint16_t x284 = 1362U;
	volatile int64_t t56 = 520662232081LL;

	t56 = ((x281|(x282%x283))*x284);

	if (t56 != -34050LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x289 = UINT16_MAX;
	volatile int16_t x290 = -1;
	uint32_t x291 = 13155U;
	volatile uint64_t t57 = 27777790LLU;

	t57 = ((x289|(x290%x291))*x292);

	if (t57 != 4329958870123278196LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x297 = INT64_MIN;
	static int32_t x298 = INT32_MIN;
	volatile int32_t x299 = -107692926;
	static int8_t x300 = -1;
	static volatile int64_t t58 = 381431392473454LL;

	t58 = ((x297|(x298%x299))*x300);

	if (t58 != 101318054LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x301 = INT64_MAX;
	static int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MAX;
	uint16_t x304 = 67U;
	static int64_t t59 = 28784LL;

	t59 = ((x301|(x302%x303))*x304);

	if (t59 != -67LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x306 = 1442;
	uint16_t x308 = UINT16_MAX;

	t60 = ((x305|(x306%x307))*x308);

	if (t60 != -786420) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x309 = INT8_MAX;
	uint16_t x310 = UINT16_MAX;
	volatile uint32_t x312 = UINT32_MAX;
	static uint32_t t61 = 14197284U;

	t61 = ((x309|(x310%x311))*x312);

	if (t61 != 4294967169U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x313 = 11697U;
	volatile uint32_t x314 = 2U;
	int16_t x315 = INT16_MAX;
	volatile uint64_t x316 = 624245705746526LLU;

	t62 = ((x313|(x314%x315))*x316);

	if (t62 != 7303050511528607674LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x321 = 261494197U;
	int64_t x322 = -1LL;
	uint32_t x323 = 585154455U;
	volatile uint64_t x324 = 157040746LLU;
	static volatile uint64_t t63 = 138164737834935LLU;

	t63 = ((x321|(x322%x323))*x324);

	if (t63 != 18446744073552510870LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x325 = 15U;
	volatile uint64_t x326 = 211287365922LLU;
	volatile int64_t x327 = -1LL;
	int16_t x328 = -18;
	uint64_t t64 = 6880657636261976LLU;

	t64 = ((x325|(x326%x327))*x328);

	if (t64 != 18446740270536964786LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x329 = INT64_MAX;
	static int8_t x330 = 5;
	uint8_t x331 = 4U;
	static volatile uint64_t t65 = 10469566838LLU;

	t65 = ((x329|(x330%x331))*x332);

	if (t65 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = -265356480;
	int8_t x334 = INT8_MAX;
	volatile int64_t x335 = 484LL;
	int16_t x336 = INT16_MAX;
	int64_t t66 = 1023570LL;

	t66 = ((x333|(x334%x335))*x336);

	if (t66 != -8694933715839LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x337 = -151;
	uint32_t x338 = 860681966U;
	int32_t x340 = INT32_MIN;
	volatile uint32_t t67 = 52287U;

	t67 = ((x337|(x338%x339))*x340);

	if (t67 != 2147483648U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x341 = UINT64_MAX;
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = ((x341|(x342%x343))*x344);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x349 = -1LL;
	volatile int32_t x350 = 246422431;
	volatile int64_t x351 = 152976395LL;
	int16_t x352 = INT16_MAX;

	t69 = ((x349|(x350%x351))*x352);

	if (t69 != -32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x358 = UINT32_MAX;
	volatile int8_t x359 = INT8_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile uint64_t t70 = 272429177706200LLU;

	t70 = ((x357|(x358%x359))*x360);

	if (t70 != 8791798052865LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int32_t x362 = -54;
	volatile uint64_t t71 = 10300800952LLU;

	t71 = ((x361|(x362%x363))*x364);

	if (t71 != 128LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x365 = 291U;
	volatile uint16_t x366 = 1651U;
	static int16_t x368 = -2;
	volatile int32_t t72 = -1;

	t72 = ((x365|(x366%x367))*x368);

	if (t72 != -582) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x373 = -28741;
	uint16_t x374 = 11U;
	uint64_t x375 = 2646385927616830LLU;
	int8_t x376 = -1;
	static uint64_t t73 = 56457706LLU;

	t73 = ((x373|(x374%x375))*x376);

	if (t73 != 28741LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x377 = 1597330149LL;
	int8_t x378 = INT8_MAX;
	uint64_t x379 = UINT64_MAX;

	t74 = ((x377|(x378%x379))*x380);

	if (t74 != 18446744072112221441LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x385 = -1LL;
	uint16_t x386 = UINT16_MAX;
	uint16_t x388 = 11U;
	int64_t t75 = 86762079LL;

	t75 = ((x385|(x386%x387))*x388);

	if (t75 != -11LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x389 = 1155;
	uint64_t x390 = UINT64_MAX;
	volatile int64_t x391 = INT64_MAX;
	int16_t x392 = -1;
	uint64_t t76 = 12255LLU;

	t76 = ((x389|(x390%x391))*x392);

	if (t76 != 18446744073709550461LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x394 = -1;
	int64_t x395 = INT64_MIN;
	uint32_t x396 = 339U;
	int64_t t77 = -26754LL;

	t77 = ((x393|(x394%x395))*x396);

	if (t77 != -339LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x397 = 554U;
	int8_t x398 = INT8_MIN;
	uint16_t x399 = UINT16_MAX;
	uint16_t x400 = 7522U;
	volatile int32_t t78 = 5261375;

	t78 = ((x397|(x398%x399))*x400);

	if (t78 != -646892) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x401 = -1;
	volatile int64_t x402 = -253686LL;
	uint32_t x403 = 38400U;
	int64_t x404 = INT64_MAX;
	volatile int64_t t79 = 942203442384577LL;

	t79 = ((x401|(x402%x403))*x404);

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x405 = -7;
	int64_t x406 = INT64_MAX;
	int8_t x407 = -1;
	volatile int64_t t80 = -8004133810413LL;

	t80 = ((x405|(x406%x407))*x408);

	if (t80 != -6916LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x409 = 9;
	int64_t x410 = INT64_MIN;
	int32_t x411 = 55565242;
	static volatile uint16_t x412 = UINT16_MAX;

	t81 = ((x409|(x410%x411))*x412);

	if (t81 != -3460565123865LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x413 = UINT8_MAX;
	int8_t x414 = INT8_MIN;
	volatile uint8_t x415 = 10U;
	int64_t x416 = 6893956748LL;
	static volatile int64_t t82 = -54LL;

	t82 = ((x413|(x414%x415))*x416);

	if (t82 != -6893956748LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x417 = -8052514LL;
	int32_t x418 = INT32_MIN;
	int8_t x419 = INT8_MIN;
	int64_t t83 = 18718LL;

	t83 = ((x417|(x418%x419))*x420);

	if (t83 != -87329514330LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x422 = 874709187;
	uint64_t x423 = 388154066209LLU;
	uint64_t t84 = 87LLU;

	t84 = ((x421|(x422%x423))*x424);

	if (t84 != 18446744072834019381LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x426 = 1U;
	int64_t x427 = 204447642119LL;

	t85 = ((x425|(x426%x427))*x428);

	if (t85 != 952133230323LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x430 = 39U;
	static int32_t x431 = INT32_MIN;
	volatile int32_t t86 = 114645960;

	t86 = ((x429|(x430%x431))*x432);

	if (t86 != 58496) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x433 = INT64_MIN;
	volatile int16_t x434 = INT16_MAX;
	volatile int16_t x436 = -1;
	volatile int64_t t87 = 563368806829LL;

	t87 = ((x433|(x434%x435))*x436);

	if (t87 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x437 = UINT64_MAX;
	static volatile int32_t x439 = INT32_MAX;
	static volatile int64_t x440 = -24LL;
	volatile uint64_t t88 = 2519269024583LLU;

	t88 = ((x437|(x438%x439))*x440);

	if (t88 != 24LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x451 = UINT64_MAX;
	int16_t x452 = INT16_MIN;
	uint64_t t89 = 322537LLU;

	t89 = ((x449|(x450%x451))*x452);

	if (t89 != 1073741824LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x457 = INT8_MIN;
	int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MAX;
	static int64_t x460 = 23101LL;

	t90 = ((x457|(x458%x459))*x460);

	if (t90 != -2956928LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x465 = 418141785U;
	volatile int64_t x466 = INT64_MIN;
	uint32_t x467 = 913248873U;
	volatile int64_t t91 = 4LL;

	t91 = ((x465|(x466%x467))*x468);

	if (t91 != 72286582366797824LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x469 = -6LL;
	static int64_t x470 = -1LL;
	int8_t x471 = INT8_MIN;
	volatile int8_t x472 = -1;
	int64_t t92 = -69921LL;

	t92 = ((x469|(x470%x471))*x472);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x474 = INT32_MIN;
	static int8_t x475 = 14;
	int16_t x476 = INT16_MAX;
	int32_t t93 = 15;

	t93 = ((x473|(x474%x475))*x476);

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x477 = UINT64_MAX;
	int8_t x478 = -49;
	static int16_t x479 = INT16_MAX;
	volatile uint64_t t94 = 1288817039973770LLU;

	t94 = ((x477|(x478%x479))*x480);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x481 = UINT16_MAX;
	int8_t x482 = -1;
	volatile int8_t x484 = INT8_MAX;
	static volatile int32_t t95 = 791;

	t95 = ((x481|(x482%x483))*x484);

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x485 = INT16_MAX;
	int8_t x487 = -1;
	static int64_t t96 = -32LL;

	t96 = ((x485|(x486%x487))*x488);

	if (t96 != -70366596694016LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x493 = -1;
	static volatile int8_t x496 = INT8_MAX;

	t97 = ((x493|(x494%x495))*x496);

	if (t97 != -127LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x501 = INT8_MIN;
	uint8_t x502 = UINT8_MAX;
	static int8_t x504 = -1;
	int64_t t98 = -2991622273345LL;

	t98 = ((x501|(x502%x503))*x504);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x506 = 12U;
	volatile uint64_t x507 = 935855949420541LLU;
	int16_t x508 = INT16_MIN;
	volatile uint64_t t99 = 4LLU;

	t99 = ((x505|(x506%x507))*x508);

	if (t99 != 70368743784448LLU) { NG(); } else { ; }
	
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

