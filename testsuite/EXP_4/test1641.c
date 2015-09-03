#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x17 = INT8_MIN;
static int32_t x26 = INT32_MAX;
static int8_t x28 = 6;
volatile int32_t t7 = 972;
uint32_t x39 = UINT32_MAX;
static uint64_t x45 = 169LLU;
volatile int16_t x47 = INT16_MIN;
static int32_t t14 = -120174;
volatile int16_t x68 = INT16_MAX;
uint64_t x73 = 203585864LLU;
int16_t x77 = INT16_MIN;
static uint16_t x79 = 1U;
int16_t x83 = INT16_MIN;
volatile int32_t t22 = -6;
uint32_t x93 = 1873032637U;
static int32_t x97 = INT32_MAX;
volatile int8_t x98 = INT8_MIN;
int8_t x99 = INT8_MIN;
uint8_t x102 = 6U;
uint8_t x110 = 6U;
volatile int32_t t27 = 293621;
int64_t x113 = 8522845LL;
volatile int32_t x122 = INT32_MIN;
static int8_t x124 = INT8_MIN;
volatile uint32_t x126 = 2U;
static int64_t x127 = 2LL;
volatile int64_t x130 = INT64_MAX;
volatile uint16_t x135 = UINT16_MAX;
int32_t t34 = 3928003;
static volatile int64_t x141 = 2095290LL;
static volatile int64_t t35 = -687276591065920431LL;
int32_t x145 = -1;
static volatile uint16_t x149 = 4003U;
static uint16_t x159 = UINT16_MAX;
int32_t t39 = 65;
volatile uint64_t t40 = 43LLU;
static volatile int8_t x176 = -1;
int16_t x189 = INT16_MIN;
int16_t x197 = -8;
uint32_t x214 = 6693959U;
int8_t x215 = INT8_MAX;
static volatile uint8_t x222 = 15U;
int16_t x224 = 199;
int64_t x232 = INT64_MIN;
int16_t x236 = 449;
static int64_t x243 = -1LL;
int64_t x246 = -1LL;
static int32_t t61 = -11648;
uint16_t x255 = 96U;
int32_t t64 = -3133589;
volatile int64_t x265 = -62720262055LL;
int64_t x269 = 93348106LL;
static int16_t x272 = INT16_MIN;
uint16_t x275 = UINT16_MAX;
volatile int64_t x277 = INT64_MIN;
static uint64_t x281 = UINT64_MAX;
static int64_t x290 = INT64_MIN;
int16_t x293 = 37;
static volatile int64_t x294 = INT64_MIN;
int8_t x308 = INT8_MIN;
uint16_t x309 = 1871U;
int32_t t77 = -1964;
int8_t x316 = -1;
static uint32_t x326 = 1111690U;
int16_t x328 = -3;
int32_t t81 = 13332912;
uint16_t x330 = UINT16_MAX;
uint8_t x333 = UINT8_MAX;
static int8_t x339 = -1;
static int64_t x350 = -1LL;
int32_t x351 = INT32_MAX;
uint8_t x355 = 58U;
int64_t x358 = INT64_MIN;
uint64_t x366 = 8644LLU;
int32_t t91 = 1123;
int64_t t94 = 20172458804916580LL;
int32_t x384 = 2;
int64_t x388 = INT64_MIN;
uint64_t t96 = 323314478932590140LLU;
int32_t x391 = INT32_MAX;
static uint16_t x394 = 5U;
volatile int64_t x395 = INT64_MIN;


void f0(void) {
	volatile uint64_t x1 = 8259551231116393LLU;
	volatile uint64_t x2 = UINT64_MAX;
	int64_t x3 = INT64_MIN;
	uint64_t x4 = 125027039361416254LLU;
	static uint64_t t0 = 20954165117LLU;

	t0 = (x1*(x2<=(x3<=x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int16_t x6 = INT16_MIN;
	volatile int64_t x7 = INT64_MIN;
	int32_t x8 = -55201;
	uint32_t t1 = UINT32_MAX;

	t1 = (x5*(x6<=(x7<=x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	volatile uint32_t x10 = 486846919U;
	uint8_t x11 = 3U;
	static int8_t x12 = INT8_MAX;
	volatile int32_t t2 = -2620;

	t2 = (x9*(x10<=(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t x14 = INT32_MAX;
	int8_t x15 = INT8_MAX;
	volatile uint16_t x16 = 6116U;
	volatile int32_t t3 = 0;

	t3 = (x13*(x14<=(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 39;
	int16_t x19 = -1;
	static int16_t x20 = INT16_MAX;
	int32_t t4 = -324207;

	t4 = (x17*(x18<=(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MAX;
	volatile int64_t x22 = -333241984447LL;
	int16_t x23 = INT16_MAX;
	volatile int32_t x24 = -1;
	int32_t t5 = INT32_MAX;

	t5 = (x21*(x22<=(x23<=x24)));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 8705880430786750215LLU;
	int8_t x27 = INT8_MAX;
	volatile uint64_t t6 = 2056908524177440288LLU;

	t6 = (x25*(x26<=(x27<=x28)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 33;
	uint64_t x30 = 4177390LLU;
	uint8_t x31 = 0U;
	static int8_t x32 = INT8_MIN;

	t7 = (x29*(x30<=(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 2LLU;
	int32_t x34 = 1;
	uint32_t x35 = UINT32_MAX;
	static int16_t x36 = INT16_MIN;
	uint64_t t8 = 105157518LLU;

	t8 = (x33*(x34<=(x35<=x36)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint16_t x38 = 9U;
	int32_t x40 = -523993116;
	int32_t t9 = 21;

	t9 = (x37*(x38<=(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -437;
	static volatile uint64_t x42 = 298131230065640038LLU;
	volatile uint16_t x43 = UINT16_MAX;
	uint16_t x44 = 7769U;
	int32_t t10 = 787244444;

	t10 = (x41*(x42<=(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = 3889502061513370334LL;
	static int8_t x48 = INT8_MIN;
	volatile uint64_t t11 = 798LLU;

	t11 = (x45*(x46<=(x47<=x48)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MIN;
	uint64_t x52 = 19792740809929LLU;
	static volatile int64_t t12 = 776461532541873290LL;

	t12 = (x49*(x50<=(x51<=x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	static int64_t x54 = -1339659673LL;
	static int64_t x55 = -1LL;
	uint8_t x56 = UINT8_MAX;
	int32_t t13 = 47;

	t13 = (x53*(x54<=(x55<=x56)));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 41;
	static int16_t x58 = 14;
	volatile uint16_t x59 = 16253U;
	uint32_t x60 = 31233887U;

	t14 = (x57*(x58<=(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MIN;
	volatile int32_t x63 = INT32_MIN;
	uint8_t x64 = 70U;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x61*(x62<=(x63<=x64)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int64_t x66 = 3538555LL;
	int32_t x67 = -256366827;
	int32_t t16 = 172552;

	t16 = (x65*(x66<=(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 1U;
	static volatile int8_t x70 = INT8_MIN;
	static int64_t x71 = INT64_MIN;
	int8_t x72 = -1;
	uint32_t t17 = 50369U;

	t17 = (x69*(x70<=(x71<=x72)));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = UINT16_MAX;
	static uint16_t x75 = 6U;
	static int16_t x76 = 404;
	volatile uint64_t t18 = 48740105389098LLU;

	t18 = (x73*(x74<=(x75<=x76)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x78 = INT8_MAX;
	static int8_t x80 = INT8_MAX;
	volatile int32_t t19 = -23428819;

	t19 = (x77*(x78<=(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MIN;
	volatile uint64_t x82 = UINT64_MAX;
	int8_t x84 = -2;
	int32_t t20 = 88817;

	t20 = (x81*(x82<=(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 46U;
	volatile int32_t x86 = INT32_MIN;
	static uint16_t x87 = 3U;
	static int32_t x88 = INT32_MIN;
	int32_t t21 = 128696;

	t21 = (x85*(x86<=(x87<=x88)));

	if (t21 != 46) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 1U;
	static int16_t x90 = -1;
	uint16_t x91 = 1U;
	uint32_t x92 = 52U;

	t22 = (x89*(x90<=(x91<=x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MIN;
	int32_t x95 = 7055;
	int32_t x96 = INT32_MAX;
	volatile uint32_t t23 = 184U;

	t23 = (x93*(x94<=(x95<=x96)));

	if (t23 != 1873032637U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x100 = INT64_MIN;
	int32_t t24 = INT32_MAX;

	t24 = (x97*(x98<=(x99<=x100)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -1LL;
	uint64_t x103 = 3821848791208183LLU;
	int32_t x104 = 60273;
	static int64_t t25 = 289099LL;

	t25 = (x101*(x102<=(x103<=x104)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	uint16_t x106 = 336U;
	int16_t x107 = -9559;
	volatile int32_t x108 = INT32_MIN;
	int32_t t26 = 6827934;

	t26 = (x105*(x106<=(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MAX;
	int64_t x111 = -1LL;
	int16_t x112 = -220;

	t27 = (x109*(x110<=(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x114 = INT8_MIN;
	volatile uint32_t x115 = UINT32_MAX;
	uint8_t x116 = UINT8_MAX;
	volatile int64_t t28 = -30902813797LL;

	t28 = (x113*(x114<=(x115<=x116)));

	if (t28 != 8522845LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -2;
	volatile uint64_t x118 = 3LLU;
	uint32_t x119 = UINT32_MAX;
	int16_t x120 = -44;
	static volatile int32_t t29 = 62446;

	t29 = (x117*(x118<=(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	uint64_t x123 = 112107817148LLU;
	int32_t t30 = 1312;

	t30 = (x121*(x122<=(x123<=x124)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 307059713LLU;
	volatile int64_t x128 = INT64_MAX;
	static volatile uint64_t t31 = 86175979886217037LLU;

	t31 = (x125*(x126<=(x127<=x128)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -598544316536LL;
	int16_t x131 = -1;
	int8_t x132 = -1;
	int64_t t32 = 2LL;

	t32 = (x129*(x130<=(x131<=x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 0;
	static uint32_t x134 = 466U;
	int32_t x136 = -5900;
	int32_t t33 = 7324177;

	t33 = (x133*(x134<=(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 79;
	int64_t x138 = INT64_MIN;
	uint16_t x139 = 22U;
	volatile uint16_t x140 = UINT16_MAX;

	t34 = (x137*(x138<=(x139<=x140)));

	if (t34 != 79) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x142 = 336498U;
	int32_t x143 = -691237892;
	static int32_t x144 = -4;

	t35 = (x141*(x142<=(x143<=x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x146 = UINT32_MAX;
	static uint32_t x147 = 8038U;
	static uint16_t x148 = 387U;
	int32_t t36 = -1732;

	t36 = (x145*(x146<=(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = 3;
	volatile int8_t x151 = 47;
	int16_t x152 = 2;
	volatile int32_t t37 = -120075;

	t37 = (x149*(x150<=(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 38U;
	int16_t x154 = 61;
	int64_t x155 = -1LL;
	uint32_t x156 = UINT32_MAX;
	static volatile int32_t t38 = -23151514;

	t38 = (x153*(x154<=(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 0U;
	int64_t x158 = 58LL;
	int64_t x160 = -1LL;

	t39 = (x157*(x158<=(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 6684563220LLU;
	int8_t x162 = INT8_MIN;
	int64_t x163 = INT64_MIN;
	volatile uint32_t x164 = UINT32_MAX;

	t40 = (x161*(x162<=(x163<=x164)));

	if (t40 != 6684563220LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	static uint16_t x166 = 3U;
	static int32_t x167 = -92022;
	static int64_t x168 = INT64_MIN;
	static volatile int64_t t41 = 27039471292418258LL;

	t41 = (x165*(x166<=(x167<=x168)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	uint32_t x170 = 465513U;
	int16_t x171 = -1;
	uint16_t x172 = 222U;
	volatile int32_t t42 = 1799358;

	t42 = (x169*(x170<=(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int32_t x174 = INT32_MAX;
	int8_t x175 = 1;
	volatile uint32_t t43 = 77U;

	t43 = (x173*(x174<=(x175<=x176)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x177 = 6U;
	int16_t x178 = -1;
	int64_t x179 = INT64_MIN;
	volatile int32_t x180 = -243758503;
	int32_t t44 = 29257;

	t44 = (x177*(x178<=(x179<=x180)));

	if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = -1;
	volatile int32_t x182 = INT32_MIN;
	static uint64_t x183 = 349LLU;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t45 = 468292821;

	t45 = (x181*(x182<=(x183<=x184)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	uint16_t x186 = UINT16_MAX;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = -437;
	volatile int32_t t46 = -174624;

	t46 = (x185*(x186<=(x187<=x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x190 = -3889282394LL;
	int8_t x191 = -30;
	int8_t x192 = -1;
	int32_t t47 = 13161359;

	t47 = (x189*(x190<=(x191<=x192)));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	volatile int64_t x194 = INT64_MIN;
	int16_t x195 = 1;
	static int8_t x196 = -1;
	int32_t t48 = 45525459;

	t48 = (x193*(x194<=(x195<=x196)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = INT64_MIN;
	static int64_t x199 = INT64_MAX;
	volatile int32_t x200 = 19;
	int32_t t49 = 2835;

	t49 = (x197*(x198<=(x199<=x200)));

	if (t49 != -8) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 1U;
	static volatile uint32_t x202 = UINT32_MAX;
	uint8_t x203 = UINT8_MAX;
	int16_t x204 = -1;
	static volatile int32_t t50 = 508243838;

	t50 = (x201*(x202<=(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	volatile int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	uint32_t x208 = 55496542U;
	static int32_t t51 = 201647;

	t51 = (x205*(x206<=(x207<=x208)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 0LLU;
	static volatile uint16_t x210 = 1U;
	int8_t x211 = INT8_MIN;
	volatile uint32_t x212 = 40738U;
	uint64_t t52 = 13907110506LLU;

	t52 = (x209*(x210<=(x211<=x212)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = -1LL;
	volatile int64_t x216 = INT64_MIN;
	static volatile int64_t t53 = -5286944679647LL;

	t53 = (x213*(x214<=(x215<=x216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = 5;
	int8_t x219 = 15;
	uint32_t x220 = 1764797U;
	int32_t t54 = -14956;

	t54 = (x217*(x218<=(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -454;
	volatile int16_t x223 = -1;
	int32_t t55 = -2;

	t55 = (x221*(x222<=(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MAX;
	int8_t x227 = -1;
	uint8_t x228 = 95U;
	volatile int32_t t56 = 14039167;

	t56 = (x225*(x226<=(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = 13294955437418LL;
	int8_t x230 = 0;
	static volatile uint8_t x231 = 0U;
	int64_t t57 = 1144920886512074132LL;

	t57 = (x229*(x230<=(x231<=x232)));

	if (t57 != 13294955437418LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -2790626348LL;
	static int64_t x234 = 1LL;
	int16_t x235 = 1;
	int64_t t58 = -31284LL;

	t58 = (x233*(x234<=(x235<=x236)));

	if (t58 != -2790626348LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int16_t x238 = -1;
	int32_t x239 = INT32_MIN;
	int64_t x240 = -1LL;
	static volatile int32_t t59 = INT32_MIN;

	t59 = (x237*(x238<=(x239<=x240)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = -1LL;
	volatile int16_t x242 = INT16_MIN;
	int64_t x244 = 362930104LL;
	volatile int64_t t60 = 931918378913506LL;

	t60 = (x241*(x242<=(x243<=x244)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	uint32_t x247 = 262253858U;
	uint32_t x248 = UINT32_MAX;

	t61 = (x245*(x246<=(x247<=x248)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x249 = UINT8_MAX;
	volatile int16_t x250 = 2729;
	int64_t x251 = INT64_MAX;
	static uint8_t x252 = UINT8_MAX;
	int32_t t62 = 5579;

	t62 = (x249*(x250<=(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	int16_t x254 = -1;
	int32_t x256 = -2971943;
	uint32_t t63 = UINT32_MAX;

	t63 = (x253*(x254<=(x255<=x256)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x257 = 8U;
	int8_t x258 = -29;
	volatile uint64_t x259 = 17180LLU;
	static volatile int16_t x260 = -1;

	t64 = (x257*(x258<=(x259<=x260)));

	if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -2201;
	static uint16_t x262 = 118U;
	int64_t x263 = -5015530LL;
	uint8_t x264 = 7U;
	volatile int32_t t65 = 1;

	t65 = (x261*(x262<=(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MAX;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MAX;
	int64_t t66 = -1738026LL;

	t66 = (x265*(x266<=(x267<=x268)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x270 = 1002090;
	uint16_t x271 = 0U;
	int64_t t67 = -279904LL;

	t67 = (x269*(x270<=(x271<=x272)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = 202412U;
	int16_t x274 = -1;
	uint16_t x276 = 6070U;
	volatile uint32_t t68 = 2U;

	t68 = (x273*(x274<=(x275<=x276)));

	if (t68 != 202412U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x278 = -1;
	int16_t x279 = INT16_MIN;
	volatile int8_t x280 = INT8_MAX;
	static volatile int64_t t69 = INT64_MIN;

	t69 = (x277*(x278<=(x279<=x280)));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 12U;
	int32_t x283 = -232256402;
	int16_t x284 = INT16_MIN;
	volatile uint64_t t70 = 2LLU;

	t70 = (x281*(x282<=(x283<=x284)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 4631603LL;
	int16_t x286 = INT16_MIN;
	static int64_t x287 = 63954LL;
	volatile int32_t x288 = INT32_MAX;
	volatile int64_t t71 = 244518419136209LL;

	t71 = (x285*(x286<=(x287<=x288)));

	if (t71 != 4631603LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = -1;
	volatile uint16_t x291 = 1250U;
	int8_t x292 = INT8_MIN;
	int32_t t72 = -521772888;

	t72 = (x289*(x290<=(x291<=x292)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x295 = INT64_MAX;
	uint8_t x296 = UINT8_MAX;
	static int32_t t73 = 14693845;

	t73 = (x293*(x294<=(x295<=x296)));

	if (t73 != 37) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 520738010574238536LLU;
	int8_t x298 = 0;
	volatile uint64_t x299 = 356LLU;
	volatile int64_t x300 = 124500LL;
	volatile uint64_t t74 = 13102550177539526LLU;

	t74 = (x297*(x298<=(x299<=x300)));

	if (t74 != 520738010574238536LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = 73;
	static int32_t x302 = INT32_MAX;
	volatile int8_t x303 = INT8_MAX;
	int32_t x304 = 1;
	int32_t t75 = -108;

	t75 = (x301*(x302<=(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 9674U;
	int16_t x306 = -1;
	uint64_t x307 = 8630741430LLU;
	uint32_t t76 = 1021U;

	t76 = (x305*(x306<=(x307<=x308)));

	if (t76 != 9674U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MIN;
	volatile int32_t x311 = -1;
	volatile int16_t x312 = INT16_MIN;

	t77 = (x309*(x310<=(x311<=x312)));

	if (t77 != 1871) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 3;
	uint64_t x314 = 295444386631315827LLU;
	uint16_t x315 = 316U;
	volatile int32_t t78 = -980364;

	t78 = (x313*(x314<=(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MIN;
	uint16_t x318 = 145U;
	int16_t x319 = -1;
	uint8_t x320 = 10U;
	int32_t t79 = 1011118;

	t79 = (x317*(x318<=(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MAX;
	int16_t x322 = INT16_MIN;
	static uint16_t x323 = 17793U;
	int16_t x324 = -1;
	volatile int32_t t80 = INT32_MAX;

	t80 = (x321*(x322<=(x323<=x324)));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = INT8_MIN;
	uint32_t x327 = 2084785U;

	t81 = (x325*(x326<=(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	static uint8_t x331 = UINT8_MAX;
	volatile int32_t x332 = INT32_MAX;
	volatile int32_t t82 = -32419176;

	t82 = (x329*(x330<=(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = 123410;
	int64_t x335 = -112483594LL;
	uint64_t x336 = UINT64_MAX;
	volatile int32_t t83 = -1;

	t83 = (x333*(x334<=(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int32_t x338 = INT32_MIN;
	int32_t x340 = 58073398;
	int64_t t84 = INT64_MIN;

	t84 = (x337*(x338<=(x339<=x340)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int8_t x342 = INT8_MAX;
	int16_t x343 = 46;
	static uint64_t x344 = 35672514281LLU;
	volatile uint32_t t85 = 1998U;

	t85 = (x341*(x342<=(x343<=x344)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x345 = 154U;
	volatile uint8_t x346 = 2U;
	static int32_t x347 = -1;
	uint8_t x348 = UINT8_MAX;
	static int32_t t86 = -32145;

	t86 = (x345*(x346<=(x347<=x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int8_t x352 = INT8_MAX;
	static int32_t t87 = -362;

	t87 = (x349*(x350<=(x351<=x352)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	int64_t x354 = INT64_MIN;
	int32_t x356 = INT32_MIN;
	int32_t t88 = INT32_MAX;

	t88 = (x353*(x354<=(x355<=x356)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	static int8_t x359 = -1;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t89 = 327988;

	t89 = (x357*(x358<=(x359<=x360)));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	volatile int32_t x362 = 1581;
	volatile uint32_t x363 = 96U;
	int8_t x364 = -1;
	volatile int64_t t90 = -4473309981136043677LL;

	t90 = (x361*(x362<=(x363<=x364)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 2285U;
	int16_t x367 = -20;
	int64_t x368 = INT64_MIN;

	t91 = (x365*(x366<=(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 58U;
	volatile int64_t x370 = 93669LL;
	volatile int8_t x371 = INT8_MAX;
	int64_t x372 = -10619622LL;
	int32_t t92 = -3;

	t92 = (x369*(x370<=(x371<=x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	int64_t x374 = INT64_MIN;
	volatile int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MIN;
	static int32_t t93 = INT32_MIN;

	t93 = (x373*(x374<=(x375<=x376)));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	int64_t x378 = INT64_MAX;
	uint64_t x379 = 169380372998196551LLU;
	volatile int16_t x380 = INT16_MAX;

	t94 = (x377*(x378<=(x379<=x380)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	int32_t x382 = INT32_MAX;
	volatile int64_t x383 = INT64_MIN;
	int64_t t95 = -13LL;

	t95 = (x381*(x382<=(x383<=x384)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x385 = UINT64_MAX;
	static uint8_t x386 = 1U;
	int16_t x387 = -1;

	t96 = (x385*(x386<=(x387<=x388)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 171772998;
	static int16_t x390 = INT16_MIN;
	static uint16_t x392 = 49U;
	volatile int32_t t97 = 0;

	t97 = (x389*(x390<=(x391<=x392)));

	if (t97 != 171772998) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = 7U;
	uint32_t x396 = 45774097U;
	volatile int32_t t98 = 323;

	t98 = (x393*(x394<=(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	volatile uint32_t x398 = UINT32_MAX;
	uint64_t x399 = 12825649LLU;
	int64_t x400 = INT64_MIN;
	volatile int32_t t99 = 1194;

	t99 = (x397*(x398<=(x399<=x400)));

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

