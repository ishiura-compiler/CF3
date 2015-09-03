#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = -29;
int8_t x2 = 1;
static int16_t x8 = INT16_MIN;
volatile int64_t t1 = 0LL;
uint64_t x17 = 64041029501468LLU;
uint64_t x22 = 5270539LLU;
int64_t x38 = INT64_MIN;
volatile int16_t x45 = INT16_MIN;
uint32_t x48 = 1U;
uint8_t x64 = 30U;
static uint32_t t16 = 366825U;
static volatile int16_t x78 = INT16_MAX;
int8_t x80 = -1;
static uint32_t x87 = UINT32_MAX;
int32_t x88 = 0;
uint64_t x94 = 13265645LLU;
volatile int16_t x106 = -482;
static volatile uint64_t t23 = 14LLU;
static volatile int64_t t24 = -5425302LL;
int16_t x115 = 18;
uint16_t x119 = 2567U;
int8_t x120 = 0;
int8_t x125 = INT8_MAX;
int16_t x126 = 15951;
volatile int8_t x139 = INT8_MIN;
static volatile int64_t x143 = 1605588LL;
int16_t x147 = INT16_MIN;
uint8_t x148 = UINT8_MAX;
volatile uint32_t x165 = 0U;
uint64_t x185 = 2975610LLU;
uint64_t x189 = 100LLU;
int8_t x200 = -1;
static volatile int16_t x204 = INT16_MAX;
volatile uint64_t t44 = 212672504LLU;
static uint64_t x222 = 340559879899449418LLU;
int16_t x223 = 133;
int32_t x231 = -1;
static int32_t x232 = -9986;
volatile int8_t x235 = INT8_MIN;
uint8_t x241 = 9U;
int8_t x248 = INT8_MAX;
static volatile int64_t x251 = INT64_MIN;
static int16_t x255 = INT16_MIN;
volatile int32_t t53 = 11004;
uint64_t x263 = 2091407126838LLU;
volatile int8_t x283 = INT8_MIN;
volatile uint8_t x284 = 1U;
static int8_t x291 = -1;
uint16_t x294 = 32325U;
int8_t x296 = INT8_MIN;
volatile int64_t t62 = -3LL;
uint8_t x300 = UINT8_MAX;
uint8_t x306 = UINT8_MAX;
int8_t x308 = -62;
static uint32_t x317 = UINT32_MAX;
static volatile uint32_t x327 = 7867215U;
int64_t x329 = INT64_MIN;
int32_t x333 = INT32_MIN;
uint64_t x335 = UINT64_MAX;
static volatile int32_t x336 = INT32_MIN;
int64_t x338 = INT64_MIN;
volatile int64_t t72 = -404609925LL;
uint8_t x341 = 1U;
static volatile int16_t x356 = -1;
volatile int32_t t75 = 12162932;
int16_t x363 = 46;
uint8_t x368 = 0U;
static uint16_t x377 = 769U;
volatile int64_t t81 = 34685148147817LL;
volatile int16_t x387 = INT16_MIN;
static uint32_t x388 = 6829094U;
int64_t x389 = -2348334LL;
volatile uint16_t x392 = UINT16_MAX;
static int16_t x407 = -762;
static int8_t x417 = -1;
uint32_t x423 = UINT32_MAX;
int16_t x425 = 10;
uint32_t t92 = 17601U;
static volatile int32_t x436 = INT32_MIN;
uint64_t t94 = 141188LLU;
static int32_t t95 = -1;
int8_t x445 = 6;
int16_t x447 = -1;
volatile uint8_t x448 = 1U;
uint64_t t97 = 2567266817560LLU;


void f0(void) {
	int64_t x3 = -1LL;
	uint16_t x4 = 6U;
	volatile int64_t t0 = -482964428LL;

	t0 = (x1|((x2&x3)*x4));

	if (t0 != -25LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 132384724LL;
	int16_t x6 = 7794;
	int8_t x7 = INT8_MIN;

	t1 = (x5|((x6&x7)*x8));

	if (t1 != -136050732LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	volatile int8_t x10 = -1;
	static volatile uint64_t x11 = 7095064865LLU;
	volatile int64_t x12 = INT64_MIN;
	uint64_t t2 = UINT64_MAX;

	t2 = (x9|((x10&x11)*x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -3689;
	static int64_t x14 = -1LL;
	volatile int8_t x15 = -1;
	volatile int32_t x16 = INT32_MIN;
	volatile int64_t t3 = 257682581790LL;

	t3 = (x13|((x14&x15)*x16));

	if (t3 != -3689LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = -82;
	int8_t x19 = 2;
	static int8_t x20 = -1;
	volatile uint64_t t4 = 233125737928LLU;

	t4 = (x17|((x18&x19)*x20));

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int16_t x23 = 230;
	static int16_t x24 = INT16_MIN;
	volatile uint64_t t5 = 227764719085067990LLU;

	t5 = (x21|((x22&x23)*x24));

	if (t5 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	int8_t x30 = -15;
	uint32_t x31 = 11393U;
	int8_t x32 = INT8_MIN;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = (x29|((x30&x31)*x32));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	int32_t x34 = INT32_MIN;
	static uint16_t x35 = 3U;
	int64_t x36 = -1LL;
	int64_t t7 = 401398311965405164LL;

	t7 = (x33|((x34&x35)*x36));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1318900513439LL;
	static volatile uint64_t x39 = 0LLU;
	static int64_t x40 = 97LL;
	volatile uint64_t t8 = 115LLU;

	t8 = (x37|((x38&x39)*x40));

	if (t8 != 18446742754809038177LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MIN;
	volatile int8_t x43 = INT8_MIN;
	int16_t x44 = -199;
	volatile int32_t t9 = 1;

	t9 = (x41|((x42&x43)*x44));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = -1;
	int8_t x47 = 4;
	uint32_t t10 = 5998850U;

	t10 = (x45|((x46&x47)*x48));

	if (t10 != 4294934532U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 27LLU;
	volatile int32_t x50 = 224119344;
	static int64_t x51 = INT64_MIN;
	volatile int8_t x52 = -1;
	uint64_t t11 = 1492935528022302324LLU;

	t11 = (x49|((x50&x51)*x52));

	if (t11 != 27LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	static volatile int8_t x54 = INT8_MAX;
	uint16_t x55 = UINT16_MAX;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t12 = 84;

	t12 = (x53|((x54&x55)*x56));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = -1;
	static int8_t x59 = INT8_MIN;
	static volatile int16_t x60 = INT16_MIN;
	int32_t t13 = 9736;

	t13 = (x57|((x58&x59)*x60));

	if (t13 != -2143289344) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = -7;
	int64_t x62 = INT64_MAX;
	int64_t x63 = 108627237LL;
	static int64_t t14 = -194914583LL;

	t14 = (x61|((x62&x63)*x64));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -126426;
	int32_t x66 = INT32_MIN;
	uint8_t x67 = 14U;
	int64_t x68 = INT64_MIN;
	int64_t t15 = -350764088666885LL;

	t15 = (x65|((x66&x67)*x68));

	if (t15 != -126426LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = 7857;
	int16_t x70 = 352;
	volatile uint32_t x71 = 67954013U;
	int32_t x72 = INT32_MAX;

	t16 = (x69|((x70&x71)*x72));

	if (t16 != 4294967025U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	static int16_t x74 = 0;
	static int64_t x75 = INT64_MIN;
	static int16_t x76 = 1;
	int64_t t17 = -23261471LL;

	t17 = (x73|((x74&x75)*x76));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x77 = INT64_MIN;
	static volatile uint8_t x79 = 1U;
	int64_t t18 = 2413540323385LL;

	t18 = (x77|((x78&x79)*x80));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	uint16_t x82 = UINT16_MAX;
	int8_t x83 = -14;
	static int16_t x84 = INT16_MAX;
	int32_t t19 = -25206;

	t19 = (x81|((x82&x83)*x84));

	if (t19 != 2147024895) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 489U;
	int32_t x86 = INT32_MIN;
	static uint32_t t20 = 933588204U;

	t20 = (x85|((x86&x87)*x88));

	if (t20 != 489U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = -1;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = 170163955711482LL;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (x93|((x94&x95)*x96));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -7694LL;
	uint32_t x98 = 261133U;
	int32_t x99 = INT32_MIN;
	int8_t x100 = 7;
	int64_t t22 = -43103793LL;

	t22 = (x97|((x98&x99)*x100));

	if (t22 != -7694LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	int64_t x107 = -3740026217660494932LL;
	static volatile uint64_t x108 = 57932990071LLU;

	t23 = (x105|((x106&x107)*x108));

	if (t23 != 15386941985952576404LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MAX;
	static volatile uint32_t x110 = UINT32_MAX;
	int64_t x111 = 560855016736481LL;
	static int32_t x112 = INT32_MAX;

	t24 = (x109|((x110&x111)*x112));

	if (t24 != 2163279715228450815LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = UINT8_MAX;
	volatile int16_t x114 = INT16_MIN;
	static uint64_t x116 = 368908097LLU;
	static volatile uint64_t t25 = 3LLU;

	t25 = (x113|((x114&x115)*x116));

	if (t25 != 255LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = INT16_MAX;
	uint8_t x118 = 3U;
	int32_t t26 = -5084;

	t26 = (x117|((x118&x119)*x120));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MAX;
	uint64_t x122 = 4632LLU;
	int64_t x123 = INT64_MIN;
	uint16_t x124 = UINT16_MAX;
	volatile uint64_t t27 = 66529318LLU;

	t27 = (x121|((x122&x123)*x124));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x127 = INT16_MIN;
	int64_t x128 = INT64_MIN;
	int64_t t28 = -154526957921864LL;

	t28 = (x125|((x126&x127)*x128));

	if (t28 != 127LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x129 = INT64_MAX;
	static volatile int32_t x130 = INT32_MAX;
	int16_t x131 = -1;
	uint32_t x132 = 178144030U;
	int64_t t29 = INT64_MAX;

	t29 = (x129|((x130&x131)*x132));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = -1;
	int8_t x138 = -1;
	static int64_t x140 = 6543030533641LL;
	volatile int64_t t30 = 1033595LL;

	t30 = (x137|((x138&x139)*x140));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MIN;
	int8_t x142 = 1;
	uint32_t x144 = UINT32_MAX;
	static int64_t t31 = -72795LL;

	t31 = (x141|((x142&x143)*x144));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MAX;
	uint64_t x146 = 1068083518LLU;
	uint64_t t32 = 74095606386LLU;

	t32 = (x145|((x146&x147)*x148));

	if (t32 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x153 = 45LLU;
	int32_t x154 = INT32_MIN;
	static int16_t x155 = 4;
	volatile int8_t x156 = -13;
	static uint64_t t33 = 419154272214LLU;

	t33 = (x153|((x154&x155)*x156));

	if (t33 != 45LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x166 = -1LL;
	int8_t x167 = -1;
	uint8_t x168 = 3U;
	volatile int64_t t34 = 2LL;

	t34 = (x165|((x166&x167)*x168));

	if (t34 != -3LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = 0;
	int8_t x170 = -4;
	static int64_t x171 = -1LL;
	volatile uint32_t x172 = 12242U;
	int64_t t35 = 0LL;

	t35 = (x169|((x170&x171)*x172));

	if (t35 != -48968LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x173 = UINT8_MAX;
	int8_t x174 = INT8_MAX;
	uint8_t x175 = 0U;
	int8_t x176 = -1;
	int32_t t36 = -30017;

	t36 = (x173|((x174&x175)*x176));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = 373LLU;
	static int16_t x178 = -610;
	uint8_t x179 = 14U;
	volatile int8_t x180 = INT8_MIN;
	volatile uint64_t t37 = 7775963986382532933LLU;

	t37 = (x177|((x178&x179)*x180));

	if (t37 != 18446744073709549941LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x186 = INT64_MIN;
	uint32_t x187 = UINT32_MAX;
	uint16_t x188 = 6U;
	volatile uint64_t t38 = 15201539170LLU;

	t38 = (x185|((x186&x187)*x188));

	if (t38 != 2975610LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x190 = 0;
	uint32_t x191 = 7U;
	uint32_t x192 = 59243U;
	volatile uint64_t t39 = 1611863898276487264LLU;

	t39 = (x189|((x190&x191)*x192));

	if (t39 != 100LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MAX;
	int32_t x199 = INT32_MAX;
	int32_t t40 = 16523829;

	t40 = (x197|((x198&x199)*x200));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = -913;
	static int32_t x202 = INT32_MIN;
	volatile int16_t x203 = 51;
	static volatile int32_t t41 = -63778;

	t41 = (x201|((x202&x203)*x204));

	if (t41 != -913) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x205 = 1167U;
	int8_t x206 = INT8_MIN;
	static int32_t x207 = INT32_MAX;
	uint64_t x208 = 199LLU;
	uint64_t t42 = 16988834287396LLU;

	t42 = (x205|((x206&x207)*x208));

	if (t42 != 427349220495LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x209 = INT64_MIN;
	uint16_t x210 = 16142U;
	int64_t x211 = -1LL;
	volatile uint8_t x212 = UINT8_MAX;
	int64_t t43 = -27787200981LL;

	t43 = (x209|((x210&x211)*x212));

	if (t43 != -9223372036850659598LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x213 = INT16_MIN;
	uint8_t x214 = 12U;
	static uint64_t x215 = 0LLU;
	uint8_t x216 = 3U;

	t44 = (x213|((x214&x215)*x216));

	if (t44 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x217 = 59;
	volatile int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MIN;
	volatile uint64_t x220 = 671687932LLU;
	static uint64_t t45 = 1026LLU;

	t45 = (x217|((x218&x219)*x220));

	if (t45 != 17004305223180615739LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = INT16_MIN;
	int32_t x224 = -2;
	volatile uint64_t t46 = 232327341145826LLU;

	t46 = (x221|((x222&x223)*x224));

	if (t46 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x225 = 2U;
	uint32_t x226 = UINT32_MAX;
	int64_t x227 = INT64_MIN;
	volatile uint64_t x228 = 1438114065191379LLU;
	static volatile uint64_t t47 = 347332LLU;

	t47 = (x225|((x226&x227)*x228));

	if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x229 = 0;
	uint64_t x230 = 420014946793LLU;
	volatile uint64_t t48 = 312146191LLU;

	t48 = (x229|((x230&x231)*x232));

	if (t48 != 18442549804450876718LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = 13880137LLU;
	int16_t x234 = INT16_MIN;
	int16_t x236 = -1;
	uint64_t t49 = 57021028LLU;

	t49 = (x233|((x234&x235)*x236));

	if (t49 != 13880137LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x242 = UINT64_MAX;
	int64_t x243 = INT64_MIN;
	int64_t x244 = 110LL;
	volatile uint64_t t50 = 3720302LLU;

	t50 = (x241|((x242&x243)*x244));

	if (t50 != 9LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = -1016849;
	static uint8_t x246 = UINT8_MAX;
	uint16_t x247 = 14U;
	static volatile int32_t t51 = 873;

	t51 = (x245|((x246&x247)*x248));

	if (t51 != -1015809) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x249 = INT16_MAX;
	static int64_t x250 = INT64_MAX;
	volatile uint16_t x252 = 5512U;
	volatile int64_t t52 = 171711LL;

	t52 = (x249|((x250&x251)*x252));

	if (t52 != 32767LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x253 = -1;
	int16_t x254 = INT16_MAX;
	int16_t x256 = 17;

	t53 = (x253|((x254&x255)*x256));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x257 = 915789632889568976LLU;
	volatile int64_t x258 = 118065LL;
	uint8_t x259 = 15U;
	int8_t x260 = -1;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (x257|((x258&x259)*x260));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = -524520370;
	static uint32_t x262 = 128U;
	static volatile int32_t x264 = INT32_MAX;
	volatile uint64_t t55 = 1270625102041259342LLU;

	t55 = (x261|((x262&x263)*x264));

	if (t55 != 18446744073185031246LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = INT16_MIN;
	volatile uint16_t x266 = UINT16_MAX;
	int64_t x267 = INT64_MAX;
	uint8_t x268 = 1U;
	static volatile int64_t t56 = -1LL;

	t56 = (x265|((x266&x267)*x268));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x269 = 7333567LLU;
	uint8_t x270 = 2U;
	uint16_t x271 = 15U;
	uint16_t x272 = UINT16_MAX;
	uint64_t t57 = 0LLU;

	t57 = (x269|((x270&x271)*x272));

	if (t57 != 7340031LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = INT16_MIN;
	static uint64_t x274 = UINT64_MAX;
	static int8_t x275 = INT8_MIN;
	volatile int8_t x276 = INT8_MIN;
	static volatile uint64_t t58 = 96LLU;

	t58 = (x273|((x274&x275)*x276));

	if (t58 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = INT8_MIN;
	static int64_t x278 = INT64_MAX;
	uint8_t x279 = 1U;
	int8_t x280 = INT8_MAX;
	int64_t t59 = 6340LL;

	t59 = (x277|((x278&x279)*x280));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = 13070;
	volatile int8_t x282 = 2;
	int32_t t60 = 217430;

	t60 = (x281|((x282&x283)*x284));

	if (t60 != 13070) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x289 = 6U;
	uint8_t x290 = 2U;
	uint8_t x292 = 0U;
	static volatile int32_t t61 = 1409;

	t61 = (x289|((x290&x291)*x292));

	if (t61 != 6) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x293 = 32U;
	int64_t x295 = 993290074367LL;

	t62 = (x293|((x294&x295)*x296));

	if (t62 != -1843808LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x297 = 46U;
	int16_t x298 = -5462;
	uint8_t x299 = UINT8_MAX;
	int32_t t63 = 45;

	t63 = (x297|((x298&x299)*x300));

	if (t63 != 43390) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x301 = INT16_MAX;
	uint32_t x302 = 11288U;
	volatile int32_t x303 = INT32_MAX;
	int16_t x304 = INT16_MAX;
	volatile uint32_t t64 = 47015U;

	t64 = (x301|((x302&x303)*x304));

	if (t64 != 369885183U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x305 = INT32_MIN;
	uint64_t x307 = UINT64_MAX;
	volatile uint64_t t65 = 1LLU;

	t65 = (x305|((x306&x307)*x308));

	if (t65 != 18446744073709535806LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x309 = INT16_MIN;
	uint32_t x310 = 1162U;
	uint64_t x311 = 15LLU;
	volatile int16_t x312 = -1;
	uint64_t t66 = 169LLU;

	t66 = (x309|((x310&x311)*x312));

	if (t66 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = -1;
	int8_t x315 = -1;
	int8_t x316 = 0;
	static volatile int32_t t67 = -1765737;

	t67 = (x313|((x314&x315)*x316));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MIN;
	volatile uint64_t x320 = 6911694641429809028LLU;
	uint64_t t68 = 24LLU;

	t68 = (x317|((x318&x319)*x320));

	if (t68 != 6713726636103041023LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x325 = INT16_MAX;
	static int8_t x326 = 0;
	volatile int16_t x328 = -1;
	volatile uint32_t t69 = 20667U;

	t69 = (x325|((x326&x327)*x328));

	if (t69 != 32767U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x330 = INT32_MIN;
	static uint8_t x331 = 98U;
	int64_t x332 = -2791958531476194932LL;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x329|((x330&x331)*x332));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x334 = 1;
	uint64_t t71 = 11784550125LLU;

	t71 = (x333|((x334&x335)*x336));

	if (t71 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x337 = INT8_MIN;
	static volatile uint8_t x339 = UINT8_MAX;
	int8_t x340 = 2;

	t72 = (x337|((x338&x339)*x340));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x342 = 159212946U;
	static uint16_t x343 = 2U;
	int8_t x344 = 0;
	static uint32_t t73 = 11U;

	t73 = (x341|((x342&x343)*x344));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x345 = 4152;
	uint64_t x346 = UINT64_MAX;
	uint8_t x347 = 3U;
	uint8_t x348 = 3U;
	volatile uint64_t t74 = 50682267LLU;

	t74 = (x345|((x346&x347)*x348));

	if (t74 != 4153LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = -1;
	uint8_t x354 = 66U;
	static int32_t x355 = -32850;

	t75 = (x353|((x354&x355)*x356));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x361 = -1;
	int16_t x362 = INT16_MIN;
	int8_t x364 = INT8_MIN;
	volatile int32_t t76 = -961;

	t76 = (x361|((x362&x363)*x364));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x365 = 13LLU;
	int16_t x366 = INT16_MIN;
	volatile int32_t x367 = INT32_MIN;
	volatile uint64_t t77 = 70722771LLU;

	t77 = (x365|((x366&x367)*x368));

	if (t77 != 13LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x369 = INT16_MIN;
	static int32_t x370 = INT32_MIN;
	uint32_t x371 = 96742335U;
	uint64_t x372 = 2067633088003319890LLU;
	uint64_t t78 = 8554700386112LLU;

	t78 = (x369|((x370&x371)*x372));

	if (t78 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x373 = -1;
	volatile uint8_t x374 = 5U;
	static volatile int64_t x375 = 994468170678346LL;
	int8_t x376 = -1;
	int64_t t79 = 58LL;

	t79 = (x373|((x374&x375)*x376));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x378 = UINT16_MAX;
	int8_t x379 = -1;
	uint32_t x380 = 403U;
	volatile uint32_t t80 = 1423311U;

	t80 = (x377|((x378&x379)*x380));

	if (t80 != 26410861U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x381 = INT32_MIN;
	volatile int32_t x382 = INT32_MAX;
	int64_t x383 = INT64_MAX;
	int8_t x384 = -1;

	t81 = (x381|((x382&x383)*x384));

	if (t81 != -2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = INT32_MAX;
	uint64_t x386 = 6337LLU;
	volatile uint64_t t82 = 82256712522917581LLU;

	t82 = (x385|((x386&x387)*x388));

	if (t82 != 2147483647LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x390 = UINT8_MAX;
	uint8_t x391 = 59U;
	int64_t t83 = 910873795629631LL;

	t83 = (x389|((x390&x391)*x392));

	if (t83 != -65577LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x393 = INT32_MIN;
	uint16_t x394 = 13809U;
	static volatile int16_t x395 = -1;
	static int8_t x396 = 1;
	static int32_t t84 = -19;

	t84 = (x393|((x394&x395)*x396));

	if (t84 != -2147469839) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x397 = -1;
	volatile int64_t x398 = -3332633514453LL;
	uint16_t x399 = UINT16_MAX;
	uint16_t x400 = UINT16_MAX;
	volatile int64_t t85 = -241168LL;

	t85 = (x397|((x398&x399)*x400));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MIN;
	uint8_t x403 = 1U;
	uint64_t x404 = 2536092LLU;
	uint64_t t86 = 116450059551LLU;

	t86 = (x401|((x402&x403)*x404));

	if (t86 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x405 = -1;
	static uint32_t x406 = 374004039U;
	int32_t x408 = -1;
	uint32_t t87 = UINT32_MAX;

	t87 = (x405|((x406&x407)*x408));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x409 = 7U;
	static volatile uint8_t x410 = UINT8_MAX;
	int16_t x411 = INT16_MAX;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t88 = 27LLU;

	t88 = (x409|((x410&x411)*x412));

	if (t88 != 18446744073709551367LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x413 = 794156U;
	int16_t x414 = 631;
	uint8_t x415 = UINT8_MAX;
	uint32_t x416 = UINT32_MAX;
	volatile uint32_t t89 = 2324896U;

	t89 = (x413|((x414&x415)*x416));

	if (t89 != 4294967213U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x418 = -1;
	static int32_t x419 = 4;
	volatile int32_t x420 = 3297;
	static int32_t t90 = 45737713;

	t90 = (x417|((x418&x419)*x420));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = 15;
	uint8_t x424 = UINT8_MAX;
	volatile uint32_t t91 = 105902296U;

	t91 = (x421|((x422&x423)*x424));

	if (t91 != 4294938353U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x426 = 0;
	volatile uint8_t x427 = 7U;
	volatile uint32_t x428 = 14924U;

	t92 = (x425|((x426&x427)*x428));

	if (t92 != 10U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = INT16_MIN;
	uint8_t x430 = 1U;
	int16_t x431 = 1;
	volatile int64_t x432 = INT64_MIN;
	volatile int64_t t93 = 36908162969LL;

	t93 = (x429|((x430&x431)*x432));

	if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x433 = INT32_MAX;
	uint64_t x434 = 106402LLU;
	volatile int32_t x435 = INT32_MIN;

	t94 = (x433|((x434&x435)*x436));

	if (t94 != 2147483647LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x437 = 502539;
	volatile uint8_t x438 = 43U;
	static int16_t x439 = INT16_MIN;
	int8_t x440 = 41;

	t95 = (x437|((x438&x439)*x440));

	if (t95 != 502539) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = INT64_MAX;
	int16_t x442 = INT16_MIN;
	int16_t x443 = 3431;
	volatile int16_t x444 = INT16_MIN;
	volatile int64_t t96 = INT64_MAX;

	t96 = (x441|((x442&x443)*x444));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x446 = 23129825LLU;

	t97 = (x445|((x446&x447)*x448));

	if (t97 != 23129831LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x449 = 1359278;
	int32_t x450 = INT32_MIN;
	uint16_t x451 = UINT16_MAX;
	volatile int64_t x452 = 23950LL;
	int64_t t98 = 0LL;

	t98 = (x449|((x450&x451)*x452));

	if (t98 != 1359278LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x457 = 0;
	int16_t x458 = -1;
	uint32_t x459 = UINT32_MAX;
	static volatile uint16_t x460 = UINT16_MAX;
	volatile uint32_t t99 = 19231U;

	t99 = (x457|((x458&x459)*x460));

	if (t99 != 4294901761U) { NG(); } else { ; }
	
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

