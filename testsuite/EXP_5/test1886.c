#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x5 = UINT16_MAX;
volatile int64_t x13 = 9789LL;
int32_t x19 = -175;
int8_t x31 = INT8_MAX;
uint8_t x33 = 44U;
volatile int64_t x39 = 45594156089LL;
uint64_t t6 = 326115LLU;
uint16_t x49 = UINT16_MAX;
uint8_t x53 = UINT8_MAX;
static uint8_t x55 = 15U;
int8_t x57 = INT8_MIN;
uint32_t x58 = 147197U;
uint16_t x71 = UINT16_MAX;
static volatile int8_t x81 = 1;
uint8_t x94 = UINT8_MAX;
int16_t x103 = INT16_MIN;
int8_t x107 = INT8_MAX;
volatile int16_t x118 = INT16_MIN;
static int32_t x119 = 15;
int16_t x120 = 0;
int16_t x130 = INT16_MIN;
volatile uint64_t t23 = 21843186279293LLU;
uint64_t t24 = 8819154060573LLU;
static int16_t x140 = INT16_MIN;
uint16_t x147 = UINT16_MAX;
int64_t t27 = 19484846905LL;
volatile uint32_t x152 = 676U;
int16_t x156 = -1851;
int64_t x164 = -1LL;
uint32_t x165 = 59U;
volatile int16_t x171 = -1;
int64_t x183 = INT64_MIN;
int64_t t36 = -4869163448840LL;
uint64_t x191 = UINT64_MAX;
static uint64_t t37 = 28990266037916LLU;
int16_t x194 = INT16_MIN;
volatile int32_t t38 = -71840793;
volatile int32_t t40 = 1;
int8_t x212 = INT8_MIN;
volatile uint64_t t42 = 190LLU;
static int32_t x218 = -1;
volatile int8_t x225 = INT8_MIN;
volatile uint8_t x232 = 14U;
static volatile uint32_t t45 = 1911976U;
int8_t x241 = 53;
static int32_t x243 = INT32_MIN;
int8_t x250 = INT8_MIN;
static uint8_t x256 = 26U;
int32_t x258 = INT32_MAX;
int8_t x261 = INT8_MIN;
int64_t x264 = -14670994562LL;
volatile uint64_t t51 = 163545721039042LLU;
int32_t x279 = INT32_MIN;
int8_t x289 = INT8_MIN;
static uint64_t t57 = 2999975LLU;
uint32_t x298 = 198397733U;
static uint32_t x299 = 33138371U;
volatile int32_t x309 = INT32_MIN;
int64_t t60 = 31355022411LL;
int32_t x322 = INT32_MIN;
volatile uint32_t t62 = 1U;
static volatile int8_t x327 = INT8_MAX;
uint16_t x334 = UINT16_MAX;
int16_t x335 = -4;
int32_t x342 = INT32_MIN;
int8_t x347 = INT8_MIN;
static volatile uint16_t x348 = UINT16_MAX;
volatile uint8_t x351 = 4U;
static int8_t x355 = INT8_MIN;
static volatile int64_t t69 = INT64_MIN;
static int64_t x359 = 26639655506LL;
volatile int32_t x361 = INT32_MIN;
int16_t x363 = -1;
volatile int32_t t71 = INT32_MIN;
volatile int16_t x369 = 287;
static int16_t x371 = -1769;
volatile int16_t x378 = INT16_MIN;
uint8_t x380 = 3U;
int64_t x381 = -298502406845LL;
static uint8_t x382 = 1U;
int32_t x389 = INT32_MIN;
volatile int32_t x399 = 20;
int16_t x400 = 5;
uint64_t t78 = 1596709103LLU;
int16_t x402 = -865;
uint16_t x404 = UINT16_MAX;
volatile int64_t t80 = INT64_MIN;
static int64_t x410 = -16508601970243185LL;
int64_t t81 = -1LL;
int16_t x417 = -1;
uint8_t x423 = UINT8_MAX;
int64_t t83 = 63LL;
int32_t x427 = INT32_MAX;
int16_t x430 = INT16_MIN;
volatile int32_t x433 = 212171132;
uint64_t x441 = UINT64_MAX;
static int8_t x444 = INT8_MIN;
uint64_t t88 = 7045554876071772LLU;
int32_t x453 = -1;
int8_t x461 = 30;
int8_t x465 = -5;
volatile uint16_t x466 = 3442U;
int8_t x470 = -1;
uint8_t x471 = 16U;
int16_t x491 = INT16_MIN;
int32_t x493 = 10;
int16_t x494 = INT16_MIN;
static volatile int8_t x495 = 1;


void f0(void) {
	int16_t x6 = 33;
	static volatile int64_t x7 = INT64_MIN;
	volatile uint64_t x8 = 1451259690501705938LLU;
	volatile uint64_t t0 = 148397939LLU;

	t0 = (x5+((x6|x7)*x8));

	if (t0 != 10998081639137258257LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MAX;
	static uint8_t x16 = 22U;
	static volatile int64_t t1 = -4700271LL;

	t1 = (x13+((x14|x15)*x16));

	if (t1 != 9767LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x17 = INT16_MIN;
	int64_t x18 = -1LL;
	volatile int8_t x20 = INT8_MIN;
	int64_t t2 = 16404LL;

	t2 = (x17+((x18|x19)*x20));

	if (t2 != -32640LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x29 = INT16_MIN;
	uint16_t x30 = UINT16_MAX;
	uint32_t x32 = UINT32_MAX;
	uint32_t t3 = 516361229U;

	t3 = (x29+((x30|x31)*x32));

	if (t3 != 4294868993U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x34 = 0;
	volatile uint64_t x35 = 26LLU;
	int32_t x36 = -1;
	volatile uint64_t t4 = 2137768655LLU;

	t4 = (x33+((x34|x35)*x36));

	if (t4 != 18LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 6643083LLU;
	volatile int8_t x38 = INT8_MIN;
	uint16_t x40 = 3462U;
	volatile uint64_t t5 = 230LLU;

	t5 = (x37+((x38|x39)*x40));

	if (t5 != 6397281LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = INT32_MIN;
	static int16_t x46 = -1;
	static uint64_t x47 = 7127808403018781365LLU;
	static int32_t x48 = INT32_MAX;

	t6 = (x45+((x46|x47)*x48));

	if (t6 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x50 = -6;
	int16_t x51 = -122;
	static int16_t x52 = INT16_MIN;
	int32_t t7 = -78791308;

	t7 = (x49+((x50|x51)*x52));

	if (t7 != 131071) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x54 = -1LL;
	uint64_t x56 = 5131441352LLU;
	volatile uint64_t t8 = 121358434634160164LLU;

	t8 = (x53+((x54|x55)*x56));

	if (t8 != 18446744068578110519LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x59 = 1U;
	int32_t x60 = INT32_MIN;
	static volatile uint32_t t9 = 1U;

	t9 = (x57+((x58|x59)*x60));

	if (t9 != 2147483520U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x65 = 100683001LLU;
	uint16_t x66 = UINT16_MAX;
	int32_t x67 = INT32_MIN;
	uint32_t x68 = 4959U;
	uint64_t t10 = 101LLU;

	t10 = (x65+((x66|x67)*x68));

	if (t10 != 2573154714LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x69 = INT64_MIN;
	volatile int64_t x70 = INT64_MIN;
	int8_t x72 = -1;
	volatile int64_t t11 = 205350564781210250LL;

	t11 = (x69+((x70|x71)*x72));

	if (t11 != -65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x73 = UINT32_MAX;
	uint32_t x74 = 402184370U;
	int8_t x75 = -1;
	int16_t x76 = INT16_MIN;
	volatile uint32_t t12 = 460370117U;

	t12 = (x73+((x74|x75)*x76));

	if (t12 != 32767U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x82 = UINT32_MAX;
	int32_t x83 = -1;
	uint64_t x84 = 772324752887225LLU;
	volatile uint64_t t13 = 24826989112373LLU;

	t13 = (x81+((x82|x83)*x84));

	if (t13 != 16035435136626717256LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x85 = UINT64_MAX;
	static int32_t x86 = INT32_MIN;
	int32_t x87 = 47;
	uint64_t x88 = 108LLU;
	volatile uint64_t t14 = 2183485174064016717LLU;

	t14 = (x85+((x86|x87)*x88));

	if (t14 != 18446743841781322707LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x89 = 0;
	int16_t x90 = -1;
	volatile uint64_t x91 = UINT64_MAX;
	static int8_t x92 = -2;
	volatile uint64_t t15 = 2LLU;

	t15 = (x89+((x90|x91)*x92));

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x93 = 7;
	volatile uint16_t x95 = UINT16_MAX;
	int32_t x96 = 1292;
	static volatile int32_t t16 = 238;

	t16 = (x93+((x94|x95)*x96));

	if (t16 != 84671227) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = INT32_MAX;
	int16_t x98 = -17;
	volatile uint8_t x99 = UINT8_MAX;
	int64_t x100 = -1LL;
	static int64_t t17 = -7LL;

	t17 = (x97+((x98|x99)*x100));

	if (t17 != 2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x101 = 3;
	static int32_t x102 = INT32_MAX;
	static uint8_t x104 = UINT8_MAX;
	int32_t t18 = 246591802;

	t18 = (x101+((x102|x103)*x104));

	if (t18 != -252) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MIN;
	static volatile int32_t x106 = -1;
	volatile int64_t x108 = -500860LL;
	int64_t t19 = -4311122319LL;

	t19 = (x105+((x106|x107)*x108));

	if (t19 != 468092LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MIN;
	uint32_t x110 = 127U;
	volatile int32_t x111 = INT32_MAX;
	volatile uint64_t x112 = 25046389LLU;
	volatile uint64_t t20 = 484607282082864LLU;

	t20 = (x109+((x110|x111)*x112));

	if (t20 != 53786708646417035LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x117 = 11974;
	volatile int32_t t21 = 109;

	t21 = (x117+((x118|x119)*x120));

	if (t21 != 11974) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 7408U;
	uint64_t x122 = UINT64_MAX;
	static int8_t x123 = INT8_MIN;
	int32_t x124 = INT32_MAX;
	volatile uint64_t t22 = 368457083388LLU;

	t22 = (x121+((x122|x123)*x124));

	if (t22 != 18446744071562075377LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x129 = UINT8_MAX;
	uint64_t x131 = UINT64_MAX;
	int16_t x132 = -478;

	t23 = (x129+((x130|x131)*x132));

	if (t23 != 733LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x133 = INT64_MAX;
	uint64_t x134 = UINT64_MAX;
	int16_t x135 = 733;
	int32_t x136 = -4065;

	t24 = (x133+((x134|x135)*x136));

	if (t24 != 9223372036854779872LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x137 = UINT32_MAX;
	uint8_t x138 = 14U;
	int64_t x139 = 1340986LL;
	int64_t t25 = -622203490LL;

	t25 = (x137+((x138|x139)*x140));

	if (t25 != -39646593025LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x141 = INT64_MIN;
	static int64_t x142 = -1LL;
	int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MIN;
	static int64_t t26 = -8142261574646073LL;

	t26 = (x141+((x142|x143)*x144));

	if (t26 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x145 = 14U;
	static int64_t x146 = INT64_MIN;
	int8_t x148 = 1;

	t27 = (x145+((x146|x147)*x148));

	if (t27 != -9223372036854710259LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int32_t x150 = -1;
	int8_t x151 = INT8_MIN;
	volatile uint64_t t28 = 3122031LLU;

	t28 = (x149+((x150|x151)*x152));

	if (t28 != 4294966619LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x153 = 56LLU;
	volatile int64_t x154 = -46806921LL;
	volatile int8_t x155 = -16;
	volatile uint64_t t29 = 23170263801LLU;

	t29 = (x153+((x154|x155)*x156));

	if (t29 != 16715LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = INT16_MAX;
	int16_t x158 = -10182;
	int64_t x159 = INT64_MIN;
	int16_t x160 = 55;
	volatile int64_t t30 = -1482161861231112249LL;

	t30 = (x157+((x158|x159)*x160));

	if (t30 != -527243LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x161 = INT32_MAX;
	volatile int8_t x162 = INT8_MIN;
	uint8_t x163 = UINT8_MAX;
	int64_t t31 = -1112620LL;

	t31 = (x161+((x162|x163)*x164));

	if (t31 != 2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x166 = UINT8_MAX;
	int64_t x167 = -1LL;
	int16_t x168 = INT16_MAX;
	int64_t t32 = 11885705018121LL;

	t32 = (x165+((x166|x167)*x168));

	if (t32 != -32708LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x169 = UINT32_MAX;
	int8_t x170 = INT8_MIN;
	static int32_t x172 = INT32_MAX;
	static uint32_t t33 = 74U;

	t33 = (x169+((x170|x171)*x172));

	if (t33 != 2147483648U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MAX;
	int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MIN;
	int64_t t34 = 396504372165LL;

	t34 = (x173+((x174|x175)*x176));

	if (t34 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = INT32_MIN;
	static volatile int8_t x178 = -3;
	volatile int64_t x179 = INT64_MAX;
	int8_t x180 = 0;
	volatile int64_t t35 = -845079855139LL;

	t35 = (x177+((x178|x179)*x180));

	if (t35 != -2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = -1;
	int32_t x182 = INT32_MAX;
	int8_t x184 = 1;

	t36 = (x181+((x182|x183)*x184));

	if (t36 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = 3;
	int8_t x190 = INT8_MIN;
	volatile int64_t x192 = INT64_MAX;

	t37 = (x189+((x190|x191)*x192));

	if (t37 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x193 = INT16_MAX;
	static uint8_t x195 = 1U;
	int32_t x196 = -1;

	t38 = (x193+((x194|x195)*x196));

	if (t38 != 65534) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x197 = INT32_MIN;
	uint64_t x198 = UINT64_MAX;
	int64_t x199 = -1LL;
	static int16_t x200 = INT16_MIN;
	volatile uint64_t t39 = 9270003629LLU;

	t39 = (x197+((x198|x199)*x200));

	if (t39 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x205 = 28001U;
	int16_t x206 = INT16_MIN;
	static uint16_t x207 = 24U;
	int8_t x208 = INT8_MIN;

	t40 = (x205+((x206|x207)*x208));

	if (t40 != 4219233) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x209 = -50;
	uint32_t x210 = 910U;
	static volatile uint32_t x211 = UINT32_MAX;
	uint32_t t41 = 9U;

	t41 = (x209+((x210|x211)*x212));

	if (t41 != 78U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x213 = 8U;
	uint64_t x214 = UINT64_MAX;
	static int32_t x215 = -433499;
	int64_t x216 = INT64_MIN;

	t42 = (x213+((x214|x215)*x216));

	if (t42 != 9223372036854775816LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x217 = 13328LL;
	uint64_t x219 = 13LLU;
	int32_t x220 = INT32_MAX;
	uint64_t t43 = 17070644041822696LLU;

	t43 = (x217+((x218|x219)*x220));

	if (t43 != 18446744071562081297LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x226 = INT8_MAX;
	int64_t x227 = 552019270796413LL;
	int32_t x228 = -1425;
	int64_t t44 = -257159509211LL;

	t44 = (x225+((x226|x227)*x228));

	if (t44 != -786627460884891503LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x229 = UINT32_MAX;
	static uint16_t x230 = 2357U;
	int16_t x231 = -673;

	t45 = (x229+((x230|x231)*x232));

	if (t45 != 4294958321U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x233 = 78324168437885LLU;
	volatile int32_t x234 = 199958031;
	uint16_t x235 = 258U;
	int16_t x236 = -1;
	static uint64_t t46 = 110LLU;

	t46 = (x233+((x234|x235)*x236));

	if (t46 != 78323968479598LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x242 = INT16_MIN;
	int64_t x244 = -979LL;
	static volatile int64_t t47 = -1LL;

	t47 = (x241+((x242|x243)*x244));

	if (t47 != 32079925LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x249 = 8313183308LLU;
	uint8_t x251 = 0U;
	uint8_t x252 = 32U;
	volatile uint64_t t48 = 4364282311009LLU;

	t48 = (x249+((x250|x251)*x252));

	if (t48 != 8313179212LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x253 = -1;
	int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MIN;
	volatile int32_t t49 = 14431;

	t49 = (x253+((x254|x255)*x256));

	if (t49 != -3329) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x257 = 23U;
	static int8_t x259 = 6;
	uint32_t x260 = 26529U;
	uint32_t t50 = 522862U;

	t50 = (x257+((x258|x259)*x260));

	if (t50 != 2147457142U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x262 = INT32_MIN;
	uint64_t x263 = 21LLU;

	t51 = (x261+((x262|x263)*x264));

	if (t51 != 13058976539991484630LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x269 = UINT8_MAX;
	uint16_t x270 = 1441U;
	uint32_t x271 = UINT32_MAX;
	static uint8_t x272 = UINT8_MAX;
	volatile uint32_t t52 = 609116719U;

	t52 = (x269+((x270|x271)*x272));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x273 = INT16_MIN;
	volatile uint64_t x274 = 124721222LLU;
	volatile int16_t x275 = 7909;
	uint64_t x276 = 28590839707LLU;
	volatile uint64_t t53 = 1036362236914817762LLU;

	t53 = (x273+((x274|x275)*x276));

	if (t53 != 3565932984918111965LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x277 = 10;
	uint16_t x278 = UINT16_MAX;
	uint64_t x280 = 53785717980421953LLU;
	volatile uint64_t t54 = 0LLU;

	t54 = (x277+((x278|x279)*x280));

	if (t54 != 7636153070892261577LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x281 = 67U;
	int8_t x282 = -1;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = 0LLU;
	static volatile uint64_t t55 = 290LLU;

	t55 = (x281+((x282|x283)*x284));

	if (t55 != 67LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x290 = 45664554685027168LL;
	static int16_t x291 = -15;
	uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t56 = 6460033LLU;

	t56 = (x289+((x290|x291)*x292));

	if (t56 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x293 = UINT64_MAX;
	int8_t x294 = -1;
	uint8_t x295 = 123U;
	uint8_t x296 = UINT8_MAX;

	t57 = (x293+((x294|x295)*x296));

	if (t57 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x297 = -1LL;
	static uint32_t x300 = UINT32_MAX;
	int64_t t58 = 38470797080LL;

	t58 = (x297+((x298|x299)*x300));

	if (t58 != 4093906968LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x301 = INT32_MIN;
	volatile int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MAX;
	int64_t t59 = -184070075365033LL;

	t59 = (x301+((x302|x303)*x304));

	if (t59 != -2147499904LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x310 = INT8_MAX;
	int64_t x311 = 48625927283937LL;
	int16_t x312 = -60;

	t60 = (x309+((x310|x311)*x312));

	if (t60 != -2917557784521668LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x317 = INT8_MAX;
	static uint64_t x318 = UINT64_MAX;
	volatile int8_t x319 = -1;
	volatile int16_t x320 = INT16_MIN;
	uint64_t t61 = 5661294LLU;

	t61 = (x317+((x318|x319)*x320));

	if (t61 != 32895LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x321 = 771679U;
	volatile uint16_t x323 = 823U;
	volatile uint8_t x324 = 0U;

	t62 = (x321+((x322|x323)*x324));

	if (t62 != 771679U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x325 = UINT16_MAX;
	int8_t x326 = 1;
	volatile uint64_t x328 = 435273LLU;
	static volatile uint64_t t63 = 1913LLU;

	t63 = (x325+((x326|x327)*x328));

	if (t63 != 55345206LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x329 = 110463819096LL;
	volatile int64_t x330 = 267800927463753LL;
	int32_t x331 = INT32_MIN;
	int16_t x332 = INT16_MIN;
	static volatile int64_t t64 = 96143543070LL;

	t64 = (x329+((x330|x331)*x332));

	if (t64 != 33562007149912LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x333 = 12899U;
	static uint64_t x336 = 496073LLU;
	volatile uint64_t t65 = 265202693024378131LLU;

	t65 = (x333+((x334|x335)*x336));

	if (t65 != 18446744073709068442LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x341 = 15776307;
	static int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	volatile int32_t t66 = -267382430;

	t66 = (x341+((x342|x343)*x344));

	if (t66 != 19970611) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x345 = -1;
	int8_t x346 = 61;
	static int32_t t67 = -341881135;

	t67 = (x345+((x346|x347)*x348));

	if (t67 != -4390846) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = -1;
	static int8_t x350 = INT8_MAX;
	int16_t x352 = INT16_MIN;
	volatile int32_t t68 = 15;

	t68 = (x349+((x350|x351)*x352));

	if (t68 != -4161537) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x353 = -1;
	int32_t x354 = -1;
	int64_t x356 = INT64_MAX;

	t69 = (x353+((x354|x355)*x356));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x357 = 6LL;
	int32_t x358 = INT32_MAX;
	uint8_t x360 = UINT8_MAX;
	static volatile int64_t t70 = -1305LL;

	t70 = (x357+((x358|x359)*x360));

	if (t70 != 7118908292871LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x362 = -1;
	static int8_t x364 = 0;

	t71 = (x361+((x362|x363)*x364));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x370 = INT32_MIN;
	static volatile int16_t x372 = INT16_MAX;
	volatile int32_t t72 = 193138;

	t72 = (x369+((x370|x371)*x372));

	if (t72 != -57964536) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x373 = 1U;
	int64_t x374 = 793330LL;
	uint16_t x375 = UINT16_MAX;
	static int8_t x376 = -9;
	static int64_t t73 = 505436LL;

	t73 = (x373+((x374|x375)*x376));

	if (t73 != -7667702LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x377 = 76U;
	int8_t x379 = INT8_MIN;
	static int32_t t74 = 129449738;

	t74 = (x377+((x378|x379)*x380));

	if (t74 != -308) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x383 = -93972189;
	uint64_t x384 = 2050501LLU;
	volatile uint64_t t75 = 32262460620239LLU;

	t75 = (x381+((x382|x383)*x384));

	if (t75 != 18446551085139628082LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x385 = 26644261971LLU;
	int32_t x386 = -1;
	volatile int64_t x387 = INT64_MIN;
	static volatile uint16_t x388 = 765U;
	uint64_t t76 = 149LLU;

	t76 = (x385+((x386|x387)*x388));

	if (t76 != 26644261206LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x390 = 104681LLU;
	int32_t x391 = -1;
	int16_t x392 = -1;
	static volatile uint64_t t77 = 70022874408LLU;

	t77 = (x389+((x390|x391)*x392));

	if (t77 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x397 = 4734408542893272LLU;
	volatile int64_t x398 = -1LL;

	t78 = (x397+((x398|x399)*x400));

	if (t78 != 4734408542893267LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x401 = 1140U;
	int8_t x403 = INT8_MAX;
	static int32_t t79 = 191;

	t79 = (x401+((x402|x403)*x404));

	if (t79 != -50395275) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x405 = -1;
	int32_t x406 = -1;
	int16_t x407 = INT16_MIN;
	static int64_t x408 = INT64_MAX;

	t80 = (x405+((x406|x407)*x408));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x409 = 3;
	uint16_t x411 = 12U;
	volatile int8_t x412 = INT8_MIN;

	t81 = (x409+((x410|x411)*x412));

	if (t81 != 2113101052191127683LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x418 = UINT8_MAX;
	int8_t x419 = 0;
	uint64_t x420 = 1476022764LLU;
	uint64_t t82 = 100461196310LLU;

	t82 = (x417+((x418|x419)*x420));

	if (t82 != 376385804819LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x421 = -14048;
	volatile int64_t x422 = -1LL;
	uint16_t x424 = 641U;

	t83 = (x421+((x422|x423)*x424));

	if (t83 != -14689LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x425 = 2690U;
	int32_t x426 = -1;
	int8_t x428 = INT8_MIN;
	volatile int32_t t84 = -7;

	t84 = (x425+((x426|x427)*x428));

	if (t84 != 2818) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x429 = INT32_MAX;
	static volatile int64_t x431 = -186LL;
	uint64_t x432 = 148856LLU;
	volatile uint64_t t85 = 10020819220446339LLU;

	t85 = (x429+((x430|x431)*x432));

	if (t85 != 2119796431LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x434 = 14U;
	static uint8_t x435 = 21U;
	volatile uint32_t x436 = UINT32_MAX;
	volatile uint32_t t86 = 166813U;

	t86 = (x433+((x434|x435)*x436));

	if (t86 != 212171101U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x437 = UINT8_MAX;
	int64_t x438 = 0LL;
	int8_t x439 = -1;
	volatile int64_t x440 = INT64_MAX;
	int64_t t87 = -258240560385924856LL;

	t87 = (x437+((x438|x439)*x440));

	if (t87 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x442 = INT64_MIN;
	int16_t x443 = INT16_MIN;

	t88 = (x441+((x442|x443)*x444));

	if (t88 != 4194303LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x445 = 20;
	int16_t x446 = INT16_MIN;
	int32_t x447 = -172;
	static uint32_t x448 = 49367U;
	uint32_t t89 = 109874583U;

	t89 = (x445+((x446|x447)*x448));

	if (t89 != 4286476192U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x454 = INT32_MAX;
	int16_t x455 = INT16_MAX;
	uint64_t x456 = 966LLU;
	uint64_t t90 = 28485140065LLU;

	t90 = (x453+((x454|x455)*x456));

	if (t90 != 2074469203001LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x457 = INT32_MIN;
	uint64_t x458 = UINT64_MAX;
	uint8_t x459 = 0U;
	volatile uint32_t x460 = 335600281U;
	uint64_t t91 = 939226864LLU;

	t91 = (x457+((x458|x459)*x460));

	if (t91 != 18446744071226467687LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x462 = INT32_MAX;
	int8_t x463 = INT8_MAX;
	static int64_t x464 = -1LL;
	volatile int64_t t92 = 3039071413290LL;

	t92 = (x461+((x462|x463)*x464));

	if (t92 != -2147483617LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x467 = 12693LL;
	int8_t x468 = -1;
	static int64_t t93 = 1LL;

	t93 = (x465+((x466|x467)*x468));

	if (t93 != -15868LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x469 = 50237U;
	static volatile int64_t x472 = INT64_MAX;
	static volatile int64_t t94 = 42323122296LL;

	t94 = (x469+((x470|x471)*x472));

	if (t94 != -9223372036854725570LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x473 = UINT64_MAX;
	static volatile int32_t x474 = INT32_MIN;
	int16_t x475 = -2;
	uint16_t x476 = 19U;
	uint64_t t95 = 3793614275252386LLU;

	t95 = (x473+((x474|x475)*x476));

	if (t95 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x485 = -1;
	volatile int32_t x486 = 194316;
	int64_t x487 = INT64_MIN;
	int8_t x488 = -1;
	volatile int64_t t96 = 955548979721079LL;

	t96 = (x485+((x486|x487)*x488));

	if (t96 != 9223372036854581491LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x489 = UINT8_MAX;
	uint8_t x490 = UINT8_MAX;
	int64_t x492 = -1LL;
	int64_t t97 = -135245470477LL;

	t97 = (x489+((x490|x491)*x492));

	if (t97 != 32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x496 = UINT16_MAX;
	int32_t t98 = 24183732;

	t98 = (x493+((x494|x495)*x496));

	if (t98 != -2147385335) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x497 = UINT64_MAX;
	int32_t x498 = INT32_MAX;
	int16_t x499 = INT16_MIN;
	int32_t x500 = -25872;
	volatile uint64_t t99 = 252657336761584358LLU;

	t99 = (x497+((x498|x499)*x500));

	if (t99 != 25871LLU) { NG(); } else { ; }
	
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

