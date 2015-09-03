#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = INT64_MAX;
volatile int64_t t3 = 823042852LL;
static volatile int16_t x23 = -1;
uint8_t x35 = 116U;
uint64_t x41 = 3088468520095645LLU;
int32_t x51 = -117;
uint32_t x52 = UINT32_MAX;
static int32_t x59 = -1;
int64_t t13 = -71807432LL;
int8_t x72 = INT8_MIN;
int32_t t18 = 26;
uint32_t x95 = 440U;
static volatile int32_t t22 = 60534;
static int8_t x105 = INT8_MIN;
uint64_t x106 = UINT64_MAX;
volatile int32_t t24 = -1;
static int32_t x118 = -1;
uint16_t x120 = 32U;
uint64_t t28 = 223709965LLU;
uint32_t x141 = 220094088U;
volatile uint32_t t33 = 82U;
int16_t x146 = INT16_MIN;
static uint16_t x150 = 23314U;
int16_t x155 = -1;
volatile int32_t t36 = 6299;
uint8_t x168 = UINT8_MAX;
static uint32_t x169 = 19039071U;
uint32_t t40 = 1954U;
int32_t t41 = -4538;
uint64_t t42 = 4279357722LLU;
int32_t x181 = INT32_MAX;
int8_t x184 = -10;
int32_t x186 = 21;
int16_t x187 = INT16_MIN;
int16_t x189 = 8206;
volatile uint8_t x194 = 60U;
int32_t x195 = INT32_MAX;
volatile int32_t x201 = -117436;
static volatile int32_t t49 = 30060;
int64_t x218 = -53LL;
int8_t x222 = INT8_MIN;
int64_t t53 = INT64_MAX;
int32_t t54 = 45633415;
static volatile uint64_t x229 = 3111961LLU;
int32_t x233 = INT32_MIN;
volatile int32_t x242 = INT32_MIN;
int64_t x244 = INT64_MAX;
int8_t x247 = -1;
volatile uint8_t x248 = 22U;
volatile int64_t t59 = -115852783120037LL;
volatile uint64_t t60 = 830LLU;
int32_t x258 = INT32_MIN;
int16_t x275 = INT16_MIN;
static int8_t x276 = 1;
int64_t x280 = -1LL;
volatile uint64_t t66 = 1LLU;
int16_t x284 = INT16_MIN;
int8_t x292 = INT8_MIN;
int32_t t69 = -23077944;
uint64_t x293 = 218161506LLU;
int16_t x300 = 38;
int8_t x305 = -1;
int32_t t72 = -3010;
volatile int32_t t73 = 53812;
int16_t x313 = INT16_MIN;
int64_t x314 = INT64_MIN;
int32_t x331 = 25;
static volatile int16_t x338 = INT16_MIN;
uint32_t x343 = 933U;
uint32_t x347 = 416869005U;
volatile uint64_t t83 = 7LLU;
uint64_t x353 = 2114791816LLU;
uint16_t x354 = UINT16_MAX;
static uint64_t t84 = 0LLU;
volatile int64_t x358 = -44124871469287LL;
uint32_t x361 = UINT32_MAX;
uint16_t x362 = 1U;
volatile int32_t x363 = -1;
static volatile int32_t t88 = INT32_MIN;
uint16_t x379 = 0U;
volatile uint32_t t91 = 9985523U;
volatile int16_t x387 = INT16_MAX;
int16_t x395 = -1;
static uint32_t t94 = UINT32_MAX;
int32_t t97 = -547449719;
uint8_t x409 = UINT8_MAX;
int16_t x410 = INT16_MIN;
uint8_t x412 = 6U;
static volatile int32_t t98 = -29500810;


void f0(void) {
	uint64_t x1 = 198LLU;
	static int32_t x2 = 111442356;
	uint16_t x3 = 4U;
	int64_t x4 = INT64_MIN;
	static volatile uint64_t t0 = 29314LLU;

	t0 = (x1*(x2<(x3%x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -63;
	static int32_t x7 = INT32_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -844;

	t1 = (x5*(x6<(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int8_t x14 = INT8_MIN;
	int16_t x15 = 354;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t2 = 13931;

	t2 = (x13*(x14<(x15%x16)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	static volatile int64_t x18 = INT64_MIN;
	static volatile int8_t x19 = -1;
	int8_t x20 = INT8_MAX;

	t3 = (x17*(x18<(x19%x20)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 9U;
	int16_t x22 = INT16_MIN;
	static volatile int64_t x24 = 1LL;
	static volatile int32_t t4 = 4741835;

	t4 = (x21*(x22<(x23%x24)));

	if (t4 != 9) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	volatile int16_t x26 = INT16_MIN;
	volatile int16_t x27 = INT16_MIN;
	int16_t x28 = -1;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x25*(x26<(x27%x28)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 25U;
	int64_t x30 = INT64_MIN;
	int8_t x31 = 0;
	uint8_t x32 = 38U;
	int32_t t6 = -2;

	t6 = (x29*(x30<(x31%x32)));

	if (t6 != 25) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	uint8_t x34 = 34U;
	int16_t x36 = INT16_MAX;
	volatile int64_t t7 = INT64_MAX;

	t7 = (x33*(x34<(x35%x36)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -31853687782143622LL;
	uint16_t x38 = 3406U;
	uint64_t x39 = 3350986LLU;
	volatile int16_t x40 = -1;
	volatile int64_t t8 = 66548351786902LL;

	t8 = (x37*(x38<(x39%x40)));

	if (t8 != -31853687782143622LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x42 = -1;
	int32_t x43 = 6341214;
	int16_t x44 = INT16_MIN;
	volatile uint64_t t9 = 465LLU;

	t9 = (x41*(x42<(x43%x44)));

	if (t9 != 3088468520095645LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint64_t x46 = UINT64_MAX;
	volatile int32_t x47 = INT32_MIN;
	static volatile int64_t x48 = INT64_MAX;
	volatile int32_t t10 = 152936919;

	t10 = (x45*(x46<(x47%x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = -123325262;
	int16_t x50 = 18;
	volatile int32_t t11 = 17295526;

	t11 = (x49*(x50<(x51%x52)));

	if (t11 != -123325262) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = 59;
	int16_t x54 = 4918;
	volatile int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MAX;
	static int32_t t12 = -29550;

	t12 = (x53*(x54<(x55%x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MAX;
	int8_t x58 = -1;
	int8_t x60 = INT8_MIN;

	t13 = (x57*(x58<(x59%x60)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = -1;
	static int32_t x62 = INT32_MIN;
	uint16_t x63 = 10U;
	int8_t x64 = -4;
	int32_t t14 = -135377;

	t14 = (x61*(x62<(x63%x64)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = UINT8_MAX;
	volatile uint32_t x66 = 138950288U;
	uint32_t x67 = 4085U;
	uint32_t x68 = UINT32_MAX;
	int32_t t15 = 21931;

	t15 = (x65*(x66<(x67%x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	volatile int16_t x70 = -1;
	static int64_t x71 = -18686869292LL;
	int64_t t16 = -1901674157883743LL;

	t16 = (x69*(x70<(x71%x72)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MIN;
	int64_t x74 = 1584895104934LL;
	int32_t x75 = INT32_MAX;
	volatile int64_t x76 = -1LL;
	volatile int32_t t17 = 766153;

	t17 = (x73*(x74<(x75%x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = INT16_MIN;
	uint16_t x82 = 5U;
	volatile uint64_t x83 = UINT64_MAX;
	static int64_t x84 = -13LL;

	t18 = (x81*(x82<(x83%x84)));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = -1;
	uint32_t x86 = 1U;
	static volatile int16_t x87 = INT16_MIN;
	static int32_t x88 = -1;
	volatile int32_t t19 = -5;

	t19 = (x85*(x86<(x87%x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	int16_t x90 = -1;
	int64_t x91 = 1549347LL;
	int16_t x92 = -19;
	volatile int32_t t20 = -952654;

	t20 = (x89*(x90<(x91%x92)));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = UINT32_MAX;
	static int32_t x94 = 594957;
	uint16_t x96 = UINT16_MAX;
	uint32_t t21 = 1487988U;

	t21 = (x93*(x94<(x95%x96)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	int32_t x98 = INT32_MAX;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = -3;

	t22 = (x97*(x98<(x99%x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 0;
	static uint16_t x102 = UINT16_MAX;
	static volatile int32_t x103 = 6951;
	static int32_t x104 = -1496273;
	int32_t t23 = 15;

	t23 = (x101*(x102<(x103%x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x107 = -12492;
	uint16_t x108 = 871U;

	t24 = (x105*(x106<(x107%x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = INT32_MIN;
	uint16_t x110 = 3042U;
	uint32_t x111 = UINT32_MAX;
	static volatile uint16_t x112 = 120U;
	volatile int32_t t25 = -396267;

	t25 = (x109*(x110<(x111%x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = 14U;
	uint16_t x115 = UINT16_MAX;
	int32_t x116 = INT32_MAX;
	uint32_t t26 = UINT32_MAX;

	t26 = (x113*(x114<(x115%x116)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x117 = 5648U;
	int32_t x119 = -520929;
	volatile uint32_t t27 = 41982387U;

	t27 = (x117*(x118<(x119%x120)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 146160858817LLU;
	static uint32_t x122 = UINT32_MAX;
	static int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MAX;

	t28 = (x121*(x122<(x123%x124)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = 7723849308400LL;
	uint32_t x126 = 189947U;
	int8_t x127 = -1;
	volatile int16_t x128 = 7061;
	static int64_t t29 = -876LL;

	t29 = (x125*(x126<(x127%x128)));

	if (t29 != 7723849308400LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 70834250031LLU;
	static int32_t x130 = -1;
	int8_t x131 = INT8_MIN;
	static int8_t x132 = -15;
	static uint64_t t30 = 10596LLU;

	t30 = (x129*(x130<(x131%x132)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -1LL;
	uint16_t x134 = 1U;
	volatile uint16_t x135 = UINT16_MAX;
	uint16_t x136 = UINT16_MAX;
	int64_t t31 = -600219966005504LL;

	t31 = (x133*(x134<(x135%x136)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 4U;
	static int64_t x138 = INT64_MIN;
	int8_t x139 = INT8_MIN;
	volatile uint64_t x140 = 57LLU;
	volatile int32_t t32 = -1863810;

	t32 = (x137*(x138<(x139%x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x142 = 0U;
	int32_t x143 = -1;
	int16_t x144 = -1540;

	t33 = (x141*(x142<(x143%x144)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 34193328381LLU;
	uint32_t x147 = 16119U;
	int8_t x148 = INT8_MAX;
	volatile uint64_t t34 = 10472946LLU;

	t34 = (x145*(x146<(x147%x148)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 2555U;
	int16_t x151 = INT16_MAX;
	static int8_t x152 = 27;
	volatile uint32_t t35 = 1785948U;

	t35 = (x149*(x150<(x151%x152)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x153 = 9U;
	volatile uint64_t x154 = 250LLU;
	uint16_t x156 = 585U;

	t36 = (x153*(x154<(x155%x156)));

	if (t36 != 9) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MIN;
	uint32_t x158 = UINT32_MAX;
	int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	static int32_t t37 = 1;

	t37 = (x157*(x158<(x159%x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = UINT8_MAX;
	uint8_t x162 = 4U;
	uint8_t x163 = UINT8_MAX;
	uint16_t x164 = 1U;
	volatile int32_t t38 = 0;

	t38 = (x161*(x162<(x163%x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x165 = -1;
	uint64_t x166 = 127082434268LLU;
	uint16_t x167 = UINT16_MAX;
	int32_t t39 = -6193;

	t39 = (x165*(x166<(x167%x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x170 = INT32_MIN;
	int16_t x171 = -1;
	int8_t x172 = -1;

	t40 = (x169*(x170<(x171%x172)));

	if (t40 != 19039071U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x173 = INT8_MAX;
	int8_t x174 = -1;
	static int32_t x175 = INT32_MIN;
	uint8_t x176 = 28U;

	t41 = (x173*(x174<(x175%x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 15716064685503326LLU;
	int8_t x178 = INT8_MIN;
	int16_t x179 = INT16_MIN;
	uint8_t x180 = 11U;

	t42 = (x177*(x178<(x179%x180)));

	if (t42 != 15716064685503326LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x182 = 1;
	static uint16_t x183 = 3072U;
	volatile int32_t t43 = INT32_MAX;

	t43 = (x181*(x182<(x183%x184)));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x185 = INT32_MIN;
	int64_t x188 = 698LL;
	volatile int32_t t44 = -41371;

	t44 = (x185*(x186<(x187%x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	uint64_t x192 = 192291LLU;
	volatile int32_t t45 = 11261;

	t45 = (x189*(x190<(x191%x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x193 = INT32_MIN;
	static volatile int32_t x196 = -3248189;
	volatile int32_t t46 = INT32_MIN;

	t46 = (x193*(x194<(x195%x196)));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x197 = INT8_MAX;
	uint8_t x198 = 3U;
	uint16_t x199 = UINT16_MAX;
	volatile int8_t x200 = -1;
	int32_t t47 = 1;

	t47 = (x197*(x198<(x199%x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x202 = 37117193522792650LLU;
	int16_t x203 = INT16_MIN;
	static int32_t x204 = -454;
	int32_t t48 = -264;

	t48 = (x201*(x202<(x203%x204)));

	if (t48 != -117436) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x205 = 1U;
	int64_t x206 = -6889089274647547LL;
	int64_t x207 = INT64_MIN;
	volatile int8_t x208 = INT8_MIN;

	t49 = (x205*(x206<(x207%x208)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -1;
	uint64_t x210 = 9404LLU;
	volatile int32_t x211 = INT32_MAX;
	uint8_t x212 = UINT8_MAX;
	static volatile int32_t t50 = -38917;

	t50 = (x209*(x210<(x211%x212)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x213 = UINT16_MAX;
	int64_t x214 = 226154463236LL;
	volatile int64_t x215 = -1LL;
	int32_t x216 = -18;
	int32_t t51 = -2384673;

	t51 = (x213*(x214<(x215%x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -67;
	volatile int16_t x219 = 12;
	int64_t x220 = INT64_MIN;
	int32_t t52 = -4167;

	t52 = (x217*(x218<(x219%x220)));

	if (t52 != -67) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = INT64_MAX;
	volatile uint16_t x223 = 5U;
	volatile int64_t x224 = INT64_MIN;

	t53 = (x221*(x222<(x223%x224)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x225 = INT16_MAX;
	int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = 116635184LLU;

	t54 = (x225*(x226<(x227%x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x230 = INT16_MIN;
	int16_t x231 = 1;
	int64_t x232 = 2417390LL;
	uint64_t t55 = 6376554739287861892LLU;

	t55 = (x229*(x230<(x231%x232)));

	if (t55 != 3111961LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x234 = INT64_MAX;
	int64_t x235 = -1LL;
	volatile int32_t x236 = INT32_MAX;
	volatile int32_t t56 = -1328;

	t56 = (x233*(x234<(x235%x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 4U;
	static int16_t x238 = INT16_MAX;
	int8_t x239 = INT8_MIN;
	int64_t x240 = INT64_MIN;
	volatile int32_t t57 = 336340790;

	t57 = (x237*(x238<(x239%x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x241 = INT8_MIN;
	int16_t x243 = 6;
	int32_t t58 = -12;

	t58 = (x241*(x242<(x243%x244)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = -511666433809LL;
	uint64_t x246 = 2819LLU;

	t59 = (x245*(x246<(x247%x248)));

	if (t59 != -511666433809LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 36444527468183LLU;
	uint64_t x250 = 19048LLU;
	uint32_t x251 = 85627670U;
	int16_t x252 = INT16_MIN;

	t60 = (x249*(x250<(x251%x252)));

	if (t60 != 36444527468183LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x253 = INT16_MIN;
	static volatile int16_t x254 = -1;
	volatile int32_t x255 = -1;
	uint64_t x256 = 820967619550690LLU;
	volatile int32_t t61 = -23746;

	t61 = (x253*(x254<(x255%x256)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MAX;
	int64_t x259 = INT64_MIN;
	int64_t x260 = -1LL;
	volatile int32_t t62 = 844214;

	t62 = (x257*(x258<(x259%x260)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x261 = -7672953;
	int16_t x262 = 907;
	static int8_t x263 = INT8_MAX;
	int32_t x264 = 1435;
	volatile int32_t t63 = 19;

	t63 = (x261*(x262<(x263%x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x269 = 7557894794LLU;
	static uint64_t x270 = UINT64_MAX;
	int64_t x271 = -15534027996139LL;
	int32_t x272 = 114458668;
	static volatile uint64_t t64 = 1LLU;

	t64 = (x269*(x270<(x271%x272)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x273 = UINT32_MAX;
	int8_t x274 = 2;
	static volatile uint32_t t65 = 1835904U;

	t65 = (x273*(x274<(x275%x276)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x277 = 5807131178LLU;
	volatile int64_t x278 = INT64_MIN;
	int16_t x279 = 0;

	t66 = (x277*(x278<(x279%x280)));

	if (t66 != 5807131178LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	int16_t x282 = INT16_MAX;
	uint8_t x283 = 25U;
	volatile int32_t t67 = -57901715;

	t67 = (x281*(x282<(x283%x284)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x285 = UINT32_MAX;
	volatile int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	int64_t x288 = INT64_MIN;
	uint32_t t68 = UINT32_MAX;

	t68 = (x285*(x286<(x287%x288)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x289 = INT32_MAX;
	int8_t x290 = 1;
	int16_t x291 = INT16_MIN;

	t69 = (x289*(x290<(x291%x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x294 = INT8_MIN;
	int32_t x295 = -27;
	int32_t x296 = -1;
	uint64_t t70 = 960LLU;

	t70 = (x293*(x294<(x295%x296)));

	if (t70 != 218161506LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = 192433440378LL;
	volatile uint64_t x298 = 47694LLU;
	static int8_t x299 = INT8_MIN;
	volatile int64_t t71 = 6710237329132324LL;

	t71 = (x297*(x298<(x299%x300)));

	if (t71 != 192433440378LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x306 = INT64_MAX;
	static int8_t x307 = -14;
	static int16_t x308 = 7;

	t72 = (x305*(x306<(x307%x308)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = INT8_MIN;
	static volatile int8_t x310 = 2;
	static int64_t x311 = INT64_MIN;
	int8_t x312 = -1;

	t73 = (x309*(x310<(x311%x312)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x315 = 1889U;
	int64_t x316 = INT64_MAX;
	volatile int32_t t74 = -1;

	t74 = (x313*(x314<(x315%x316)));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x317 = 7LLU;
	static int64_t x318 = INT64_MIN;
	int8_t x319 = INT8_MIN;
	static int64_t x320 = INT64_MIN;
	static volatile uint64_t t75 = 2462304LLU;

	t75 = (x317*(x318<(x319%x320)));

	if (t75 != 7LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x321 = 56U;
	volatile int16_t x322 = INT16_MIN;
	uint32_t x323 = 1U;
	static int64_t x324 = INT64_MAX;
	volatile int32_t t76 = 18;

	t76 = (x321*(x322<(x323%x324)));

	if (t76 != 56) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = INT32_MIN;
	volatile uint32_t x326 = 617449544U;
	uint8_t x327 = 4U;
	uint32_t x328 = 503766U;
	static volatile int32_t t77 = 2412;

	t77 = (x325*(x326<(x327%x328)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = 6817;
	static volatile uint32_t x330 = 453528393U;
	static int8_t x332 = -1;
	volatile int32_t t78 = 323267843;

	t78 = (x329*(x330<(x331%x332)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x333 = 169U;
	uint16_t x334 = UINT16_MAX;
	static int32_t x335 = -1;
	int64_t x336 = INT64_MIN;
	volatile uint32_t t79 = 17250105U;

	t79 = (x333*(x334<(x335%x336)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x337 = -1;
	static uint8_t x339 = 58U;
	static uint8_t x340 = 1U;
	volatile int32_t t80 = -1;

	t80 = (x337*(x338<(x339%x340)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x342 = INT16_MAX;
	int16_t x344 = -13050;
	int32_t t81 = -7350161;

	t81 = (x341*(x342<(x343%x344)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = INT32_MIN;
	static int8_t x346 = 3;
	volatile int16_t x348 = INT16_MIN;
	int32_t t82 = INT32_MIN;

	t82 = (x345*(x346<(x347%x348)));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x349 = 217815392585038805LLU;
	int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MAX;
	int32_t x352 = -1837035;

	t83 = (x349*(x350<(x351%x352)));

	if (t83 != 217815392585038805LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x355 = UINT64_MAX;
	static int16_t x356 = INT16_MIN;

	t84 = (x353*(x354<(x355%x356)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 50U;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MAX;
	int32_t t85 = 47117;

	t85 = (x357*(x358<(x359%x360)));

	if (t85 != 50) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x364 = 99LL;
	uint32_t t86 = 0U;

	t86 = (x361*(x362<(x363%x364)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = -1;
	uint16_t x366 = UINT16_MAX;
	int64_t x367 = INT64_MIN;
	int8_t x368 = INT8_MIN;
	volatile int32_t t87 = 0;

	t87 = (x365*(x366<(x367%x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	static int32_t x370 = INT32_MIN;
	static int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MAX;

	t88 = (x369*(x370<(x371%x372)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MIN;
	uint16_t x374 = UINT16_MAX;
	static uint32_t x375 = 21U;
	uint32_t x376 = 1079083U;
	static int32_t t89 = -11126379;

	t89 = (x373*(x374<(x375%x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x377 = -1LL;
	static int32_t x378 = INT32_MIN;
	int32_t x380 = INT32_MAX;
	volatile int64_t t90 = -70499812294LL;

	t90 = (x377*(x378<(x379%x380)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = 1569038668U;
	int32_t x382 = -314455505;
	static int32_t x383 = -1425;
	static volatile uint32_t x384 = UINT32_MAX;

	t91 = (x381*(x382<(x383%x384)));

	if (t91 != 1569038668U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = 1LL;
	static volatile int64_t x386 = 165801190LL;
	static volatile int32_t x388 = INT32_MIN;
	int64_t t92 = -1LL;

	t92 = (x385*(x386<(x387%x388)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = 2;
	uint8_t x390 = 6U;
	int16_t x391 = 1528;
	int64_t x392 = INT64_MIN;
	static volatile int32_t t93 = -4;

	t93 = (x389*(x390<(x391%x392)));

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x393 = UINT32_MAX;
	static int64_t x394 = INT64_MIN;
	uint32_t x396 = UINT32_MAX;

	t94 = (x393*(x394<(x395%x396)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = 1;
	volatile int8_t x398 = -11;
	uint16_t x399 = UINT16_MAX;
	static int8_t x400 = 7;
	int32_t t95 = -382;

	t95 = (x397*(x398<(x399%x400)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = INT16_MIN;
	static int32_t x402 = -1;
	int32_t x403 = 5;
	uint64_t x404 = UINT64_MAX;
	int32_t t96 = 53444117;

	t96 = (x401*(x402<(x403%x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MIN;
	static int64_t x406 = INT64_MIN;
	int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MIN;

	t97 = (x405*(x406<(x407%x408)));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x411 = 17603506;

	t98 = (x409*(x410<(x411%x412)));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = 1;
	static int16_t x414 = INT16_MIN;
	int64_t x415 = 63648310958673LL;
	int64_t x416 = -1LL;
	static int32_t t99 = 98259;

	t99 = (x413*(x414<(x415%x416)));

	if (t99 != 1) { NG(); } else { ; }
	
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

