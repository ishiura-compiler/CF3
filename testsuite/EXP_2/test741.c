#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x12 = INT32_MAX;
volatile int8_t x14 = INT8_MIN;
int64_t x15 = INT64_MIN;
static uint64_t x22 = UINT64_MAX;
uint64_t t3 = 22392706LLU;
int16_t x37 = INT16_MIN;
int8_t x42 = 1;
volatile uint8_t x47 = UINT8_MAX;
int16_t x49 = INT16_MAX;
volatile uint64_t t10 = 1LLU;
int64_t t12 = 120LL;
int32_t x72 = INT32_MIN;
int64_t t14 = -2193597664812961622LL;
int32_t x73 = INT32_MIN;
uint32_t x74 = 231U;
volatile uint32_t t17 = 87014U;
volatile int16_t x86 = 213;
volatile int64_t x93 = INT64_MAX;
int8_t x95 = INT8_MIN;
uint32_t x96 = 14334991U;
uint64_t x101 = UINT64_MAX;
int8_t x104 = INT8_MIN;
uint16_t x106 = 46U;
static uint16_t x108 = 932U;
volatile uint64_t t24 = 16123473250026936LLU;
uint64_t x118 = 667808507410835LLU;
volatile int32_t x123 = -3800;
int16_t x125 = INT16_MIN;
int8_t x138 = INT8_MIN;
static volatile int16_t x160 = INT16_MAX;
uint64_t t33 = 1880LLU;
int8_t x165 = -1;
int64_t x179 = INT64_MIN;
int64_t x183 = INT64_MAX;
static uint8_t x189 = 35U;
int8_t x190 = INT8_MAX;
uint16_t x191 = 3U;
volatile uint64_t t41 = 0LLU;
static int16_t x203 = INT16_MIN;
volatile int16_t x218 = INT16_MAX;
static int32_t x226 = -1;
uint64_t t48 = 66LLU;
uint64_t x247 = UINT64_MAX;
static int16_t x251 = INT16_MAX;
int64_t t50 = -65740527735LL;
static int8_t x253 = -18;
int32_t x257 = 364082;
int64_t x260 = -13LL;
volatile int64_t t52 = -12869LL;
int16_t x276 = -1;
int16_t x277 = INT16_MIN;
int16_t x285 = INT16_MIN;
int32_t x289 = 1984;
int32_t x292 = -236;
int16_t x294 = -1;
int8_t x295 = INT8_MIN;
int64_t t59 = -10LL;
static int32_t t60 = 4943006;
static volatile int16_t x312 = 1;
uint16_t x316 = 1U;
volatile int32_t t62 = 2;
int8_t x321 = INT8_MAX;
int32_t x323 = 171609;
int16_t x326 = INT16_MIN;
volatile uint64_t t65 = 428LLU;
uint64_t x329 = UINT64_MAX;
volatile int32_t x332 = -10215;
static volatile uint16_t x337 = 15327U;
int64_t x339 = 9101304LL;
uint16_t x341 = 12U;
uint32_t x344 = 1398U;
uint32_t t69 = 38863U;
uint8_t x346 = UINT8_MAX;
volatile int32_t t70 = -277;
uint64_t t73 = 239425LLU;
uint8_t x367 = 121U;
int32_t x369 = INT32_MIN;
int64_t x371 = -1092LL;
uint64_t t76 = 66389514994268LLU;
volatile uint32_t t77 = 233U;
static volatile uint16_t x385 = 21464U;
uint64_t x400 = UINT64_MAX;
uint64_t x410 = UINT64_MAX;
volatile int64_t x412 = -1LL;
int32_t t81 = INT32_MIN;
volatile int64_t x424 = -131418895795LL;
int64_t t82 = -63230036752580LL;
uint64_t t83 = 10659283367LLU;
static uint8_t x439 = UINT8_MAX;
int8_t x442 = INT8_MIN;
volatile uint8_t x464 = UINT8_MAX;
uint64_t x478 = 926046LLU;
static int32_t x479 = INT32_MAX;
static uint64_t t92 = 138517465LLU;
volatile int32_t x483 = 525;
volatile uint64_t t93 = 3831814825567044LLU;
volatile int64_t t94 = 700646LL;
static int32_t x505 = INT32_MIN;
static int16_t x508 = 331;
int64_t t97 = 49790LL;
int8_t x511 = INT8_MIN;
static int16_t x512 = INT16_MAX;
int64_t x513 = 62LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static uint8_t x2 = 29U;
	int8_t x3 = 3;
	int64_t x4 = INT64_MAX;
	int64_t t0 = 375LL;

	t0 = ((x1%(x2%x3))^x4);

	if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	static int64_t x10 = -1LL;
	int16_t x11 = -6765;
	volatile int64_t t1 = 23453672LL;

	t1 = ((x9%(x10%x11))^x12);

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 128230U;
	volatile int64_t x16 = -1LL;
	volatile int64_t t2 = 8639LL;

	t2 = ((x13%(x14%x15))^x16);

	if (t2 != -103LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = 378349487;
	int16_t x23 = INT16_MIN;
	static int32_t x24 = INT32_MAX;

	t3 = ((x21%(x22%x23))^x24);

	if (t3 != 2147461942LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x25 = -1LL;
	int16_t x26 = INT16_MIN;
	uint16_t x27 = 7U;
	uint64_t x28 = 7215415272804335LLU;
	uint64_t t4 = 1010614181799LLU;

	t4 = ((x25%(x26%x27))^x28);

	if (t4 != 7215415272804335LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = INT16_MIN;
	int64_t x30 = INT64_MIN;
	int64_t x31 = 6262500705926LL;
	uint64_t x32 = UINT64_MAX;
	uint64_t t5 = 2840602798986LLU;

	t5 = ((x29%(x30%x31))^x32);

	if (t5 != 32767LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x38 = UINT64_MAX;
	volatile uint8_t x39 = 88U;
	uint32_t x40 = 12730U;
	static volatile uint64_t t6 = 25LLU;

	t6 = ((x37%(x38%x39))^x40);

	if (t6 != 12722LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 6U;
	int32_t x43 = INT32_MAX;
	uint16_t x44 = UINT16_MAX;
	int32_t t7 = -1801;

	t7 = ((x41%(x42%x43))^x44);

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	int8_t x46 = -1;
	uint64_t x48 = 23LLU;
	volatile uint64_t t8 = 292LLU;

	t8 = ((x45%(x46%x47))^x48);

	if (t8 != 23LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x50 = -13808757277918LL;
	uint16_t x51 = 20U;
	uint64_t x52 = 29LLU;
	volatile uint64_t t9 = 28033411037079LLU;

	t9 = ((x49%(x50%x51))^x52);

	if (t9 != 26LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 148859U;
	uint64_t x54 = 12642061992LLU;
	int64_t x55 = INT64_MAX;
	int64_t x56 = INT64_MAX;

	t10 = ((x53%(x54%x55))^x56);

	if (t10 != 9223372036854626948LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = 28645;
	uint16_t x58 = 1708U;
	static volatile uint16_t x59 = 1406U;
	static int32_t x60 = -371;
	volatile int32_t t11 = -1;

	t11 = ((x57%(x58%x59))^x60);

	if (t11 != -116) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MAX;
	int16_t x62 = -215;
	uint16_t x63 = 4U;
	int8_t x64 = INT8_MAX;

	t12 = ((x61%(x62%x63))^x64);

	if (t12 != 126LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x65 = 116U;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = 685LLU;
	int8_t x68 = INT8_MAX;
	volatile uint64_t t13 = 17057985111218667LLU;

	t13 = ((x65%(x66%x67))^x68);

	if (t13 != 11LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x69 = -4000149;
	uint16_t x70 = 55U;
	int64_t x71 = INT64_MIN;

	t14 = ((x69%(x70%x71))^x72);

	if (t14 != 2147483594LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x75 = 3465249U;
	int64_t x76 = INT64_MIN;
	volatile int64_t t15 = -276LL;

	t15 = ((x73%(x74%x75))^x76);

	if (t15 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	static int32_t x78 = INT32_MIN;
	static int32_t x79 = -47;
	volatile uint64_t x80 = 200225027611LLU;
	uint64_t t16 = 182947005079467354LLU;

	t16 = ((x77%(x78%x79))^x80);

	if (t16 != 18446743873484524003LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x81 = INT32_MIN;
	volatile int32_t x82 = INT32_MIN;
	volatile int8_t x83 = 5;
	uint32_t x84 = UINT32_MAX;

	t17 = ((x81%(x82%x83))^x84);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -1LL;
	int16_t x87 = 15;
	int16_t x88 = 0;
	int64_t t18 = -459637569052LL;

	t18 = ((x85%(x86%x87))^x88);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = UINT8_MAX;
	uint64_t x90 = UINT64_MAX;
	uint32_t x91 = 167U;
	int64_t x92 = INT64_MAX;
	uint64_t t19 = 1141336819092013814LLU;

	t19 = ((x89%(x90%x91))^x92);

	if (t19 != 9223372036854775792LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x94 = 19330U;
	volatile int64_t t20 = -46361603178793LL;

	t20 = ((x93%(x94%x95))^x96);

	if (t20 != 14334990LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x102 = -1;
	int32_t x103 = -60;
	volatile uint64_t t21 = 619503091735LLU;

	t21 = ((x101%(x102%x103))^x104);

	if (t21 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = 9239922U;
	int16_t x107 = INT16_MAX;
	uint32_t t22 = 344751077U;

	t22 = ((x105%(x106%x107))^x108);

	if (t22 != 908U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 1952U;
	int16_t x110 = -1;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = 811003U;
	static volatile int64_t t23 = 64380716LL;

	t23 = ((x109%(x110%x111))^x112);

	if (t23 != 811003LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = 112U;
	uint8_t x114 = 6U;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = UINT64_MAX;

	t24 = ((x113%(x114%x115))^x116);

	if (t24 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x117 = 0;
	uint64_t x119 = 31590259740849710LLU;
	int8_t x120 = INT8_MAX;
	uint64_t t25 = 5098LLU;

	t25 = ((x117%(x118%x119))^x120);

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = 31;
	int8_t x122 = 8;
	int8_t x124 = INT8_MIN;
	volatile int32_t t26 = -519742;

	t26 = ((x121%(x122%x123))^x124);

	if (t26 != -121) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x126 = 7;
	int64_t x127 = -3175633LL;
	uint8_t x128 = 50U;
	int64_t t27 = -1892313918534767LL;

	t27 = ((x125%(x126%x127))^x128);

	if (t27 != -51LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x133 = -1;
	uint64_t x134 = 888LLU;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = 18U;
	uint64_t t28 = 19938799LLU;

	t28 = ((x133%(x134%x135))^x136);

	if (t28 != 141LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = -1;
	static int64_t x139 = 738499LL;
	int32_t x140 = INT32_MAX;
	volatile int64_t t29 = -142470LL;

	t29 = ((x137%(x138%x139))^x140);

	if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x141 = INT64_MIN;
	static volatile int8_t x142 = 18;
	int32_t x143 = INT32_MIN;
	uint32_t x144 = UINT32_MAX;
	int64_t t30 = -11LL;

	t30 = ((x141%(x142%x143))^x144);

	if (t30 != -4294967289LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = 101U;
	static uint8_t x150 = UINT8_MAX;
	uint16_t x151 = 12U;
	int64_t x152 = -1LL;
	static int64_t t31 = 224880424515748LL;

	t31 = ((x149%(x150%x151))^x152);

	if (t31 != -3LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x157 = INT8_MIN;
	volatile int64_t x158 = -1LL;
	uint64_t x159 = 2LLU;
	uint64_t t32 = 2195059148LLU;

	t32 = ((x157%(x158%x159))^x160);

	if (t32 != 32767LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x161 = 78425831067722LLU;
	int16_t x162 = 27;
	static int32_t x163 = 4381613;
	int64_t x164 = INT64_MIN;

	t33 = ((x161%(x162%x163))^x164);

	if (t33 != 9223372036854775825LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x166 = INT64_MIN;
	int32_t x167 = 31736;
	int64_t x168 = INT64_MIN;
	static int64_t t34 = INT64_MAX;

	t34 = ((x165%(x166%x167))^x168);

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x169 = -30817;
	uint16_t x170 = 13944U;
	static int8_t x171 = -51;
	volatile int16_t x172 = INT16_MIN;
	int32_t t35 = -964599353;

	t35 = ((x169%(x170%x171))^x172);

	if (t35 != 32758) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = 1;
	static int64_t x174 = -31397LL;
	static uint8_t x175 = UINT8_MAX;
	static uint64_t x176 = 3189543296670071040LLU;
	uint64_t t36 = 795471932563073376LLU;

	t36 = ((x173%(x174%x175))^x176);

	if (t36 != 3189543296670071041LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x177 = 6443U;
	int16_t x178 = -19;
	int8_t x180 = -1;
	int64_t t37 = 65896LL;

	t37 = ((x177%(x178%x179))^x180);

	if (t37 != -3LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = -3511492505366LL;
	volatile int8_t x184 = INT8_MIN;
	volatile int64_t t38 = 462208787182159443LL;

	t38 = ((x181%(x182%x183))^x184);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = -518;
	int16_t x186 = INT16_MIN;
	int64_t x187 = INT64_MIN;
	int64_t x188 = -1LL;
	volatile int64_t t39 = 141LL;

	t39 = ((x185%(x186%x187))^x188);

	if (t39 != 517LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x192 = 45U;
	volatile int32_t t40 = -25501011;

	t40 = ((x189%(x190%x191))^x192);

	if (t40 != 45) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MAX;
	uint64_t x199 = 6443731786255057LLU;
	int32_t x200 = -1;

	t41 = ((x197%(x198%x199))^x200);

	if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = INT16_MAX;
	static int16_t x202 = INT16_MAX;
	static volatile uint64_t x204 = 211919720LLU;
	uint64_t t42 = 2363204315978LLU;

	t42 = ((x201%(x202%x203))^x204);

	if (t42 != 211919720LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x209 = 90U;
	static int64_t x210 = -1LL;
	int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MIN;
	static int64_t t43 = 892696583730329629LL;

	t43 = ((x209%(x210%x211))^x212);

	if (t43 != -32768LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = 0;
	uint64_t x219 = 14555452982996LLU;
	int64_t x220 = 9499LL;
	uint64_t t44 = 5633344084292661LLU;

	t44 = ((x217%(x218%x219))^x220);

	if (t44 != 9499LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = -5057;
	int64_t x222 = -17982276700LL;
	int16_t x223 = 2250;
	static int16_t x224 = -1;
	volatile int64_t t45 = 17485324693LL;

	t45 = ((x221%(x222%x223))^x224);

	if (t45 != 656LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x225 = UINT8_MAX;
	int64_t x227 = INT64_MIN;
	int8_t x228 = INT8_MIN;
	volatile int64_t t46 = -4320086168312974LL;

	t46 = ((x225%(x226%x227))^x228);

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = 0;
	volatile uint32_t x230 = 3U;
	int64_t x231 = INT64_MIN;
	static int64_t x232 = INT64_MAX;
	static int64_t t47 = INT64_MAX;

	t47 = ((x229%(x230%x231))^x232);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = -1;
	uint64_t x239 = 39189463LLU;
	static int64_t x240 = INT64_MIN;

	t48 = ((x237%(x238%x239))^x240);

	if (t48 != 9223372036856960824LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = -1;
	static int16_t x246 = 237;
	int32_t x248 = 3;
	volatile uint64_t t49 = 103LLU;

	t49 = ((x245%(x246%x247))^x248);

	if (t49 != 130LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x249 = INT64_MAX;
	static uint32_t x250 = 721U;
	volatile uint32_t x252 = UINT32_MAX;

	t50 = ((x249%(x250%x251))^x252);

	if (t50 != 4294966805LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x254 = -25076554959LL;
	int8_t x255 = INT8_MIN;
	static uint32_t x256 = UINT32_MAX;
	int64_t t51 = -17888506698272678LL;

	t51 = ((x253%(x254%x255))^x256);

	if (t51 != -4294967279LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x258 = -1;
	int8_t x259 = -25;

	t52 = ((x257%(x258%x259))^x260);

	if (t52 != -13LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x265 = -184228881LL;
	int64_t x266 = INT64_MAX;
	uint32_t x267 = UINT32_MAX;
	volatile int8_t x268 = INT8_MIN;
	volatile int64_t t53 = 26157565LL;

	t53 = ((x265%(x266%x267))^x268);

	if (t53 != 184228975LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x273 = 9U;
	uint32_t x274 = UINT32_MAX;
	int16_t x275 = -13170;
	volatile uint32_t t54 = 1U;

	t54 = ((x273%(x274%x275))^x276);

	if (t54 != 4294967286U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x278 = UINT16_MAX;
	int16_t x279 = 7376;
	volatile uint16_t x280 = 413U;
	volatile int32_t t55 = 102;

	t55 = ((x277%(x278%x279))^x280);

	if (t55 != -282) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x286 = 21564085316LL;
	int16_t x287 = INT16_MAX;
	volatile int16_t x288 = -1;
	volatile int64_t t56 = 49LL;

	t56 = ((x285%(x286%x287))^x288);

	if (t56 != 8452LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x290 = -392940440;
	uint16_t x291 = 923U;
	volatile int32_t t57 = -7934630;

	t57 = ((x289%(x290%x291))^x292);

	if (t57 != -12) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x293 = INT16_MIN;
	int8_t x296 = -1;
	static int32_t t58 = -119;

	t58 = ((x293%(x294%x295))^x296);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x297 = INT32_MAX;
	int64_t x298 = INT64_MIN;
	uint32_t x299 = 244187U;
	int8_t x300 = INT8_MAX;

	t59 = ((x297%(x298%x299))^x300);

	if (t59 != 74932LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x305 = INT8_MAX;
	int16_t x306 = INT16_MIN;
	uint8_t x307 = UINT8_MAX;
	int8_t x308 = -1;

	t60 = ((x305%(x306%x307))^x308);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x309 = INT16_MIN;
	int64_t x310 = -1401748867975844416LL;
	static int64_t x311 = INT64_MIN;
	int64_t t61 = -43943432LL;

	t61 = ((x309%(x310%x311))^x312);

	if (t61 != -32767LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x313 = 1;
	int16_t x314 = INT16_MIN;
	volatile int32_t x315 = 3979832;

	t62 = ((x313%(x314%x315))^x316);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x317 = 4202168231LLU;
	static int64_t x318 = -1LL;
	int8_t x319 = INT8_MIN;
	static int32_t x320 = INT32_MAX;
	volatile uint64_t t63 = 1294505683LLU;

	t63 = ((x317%(x318%x319))^x320);

	if (t63 != 2240282712LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x322 = -508;
	int8_t x324 = INT8_MAX;
	volatile int32_t t64 = 40920;

	t64 = ((x321%(x322%x323))^x324);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x325 = INT16_MIN;
	uint64_t x327 = UINT64_MAX;
	uint8_t x328 = UINT8_MAX;

	t65 = ((x325%(x326%x327))^x328);

	if (t65 != 255LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x330 = 17;
	int8_t x331 = 11;
	volatile uint64_t t66 = 410LLU;

	t66 = ((x329%(x330%x331))^x332);

	if (t66 != 18446744073709541402LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x333 = UINT8_MAX;
	static int8_t x334 = 1;
	volatile uint8_t x335 = 3U;
	int16_t x336 = INT16_MIN;
	int32_t t67 = -13049;

	t67 = ((x333%(x334%x335))^x336);

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x338 = INT16_MAX;
	uint16_t x340 = 49U;
	int64_t t68 = 531LL;

	t68 = ((x337%(x338%x339))^x340);

	if (t68 != 15342LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x342 = UINT16_MAX;
	int8_t x343 = 7;

	t69 = ((x341%(x342%x343))^x344);

	if (t69 != 1398U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x345 = 22U;
	int8_t x347 = INT8_MAX;
	static int16_t x348 = INT16_MIN;

	t70 = ((x345%(x346%x347))^x348);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x349 = UINT16_MAX;
	static int64_t x350 = INT64_MAX;
	int16_t x351 = 108;
	static uint16_t x352 = 2U;
	volatile int64_t t71 = 161288883700356LL;

	t71 = ((x349%(x350%x351))^x352);

	if (t71 != 46LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x353 = 1016354550591933347LL;
	static int32_t x354 = INT32_MAX;
	static volatile int16_t x355 = INT16_MAX;
	int32_t x356 = INT32_MAX;
	int64_t t72 = -1435LL;

	t72 = ((x353%(x354%x355))^x356);

	if (t72 != 2147483647LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x361 = -1LL;
	uint64_t x362 = 8358662080542LLU;
	int64_t x363 = INT64_MIN;
	int8_t x364 = -1;

	t73 = ((x361%(x362%x363))^x364);

	if (t73 != 18446739704210220342LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x365 = -42;
	uint32_t x366 = 5293253U;
	int32_t x368 = -1;
	static uint32_t t74 = 102642U;

	t74 = ((x365%(x366%x367))^x368);

	if (t74 != 4294967261U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x370 = INT8_MIN;
	int8_t x372 = INT8_MAX;
	static int64_t t75 = 3831370691645978LL;

	t75 = ((x369%(x370%x371))^x372);

	if (t75 != 127LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = INT16_MIN;
	volatile uint64_t x375 = UINT64_MAX;
	static int32_t x376 = -1;

	t76 = ((x373%(x374%x375))^x376);

	if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x377 = 54U;
	int16_t x378 = INT16_MAX;
	uint32_t x379 = 11510U;
	int32_t x380 = -1;

	t77 = ((x377%(x378%x379))^x380);

	if (t77 != 4294967241U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x386 = 35;
	volatile uint16_t x387 = 29U;
	int16_t x388 = -1;
	volatile int32_t t78 = -14;

	t78 = ((x385%(x386%x387))^x388);

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x397 = UINT8_MAX;
	int16_t x398 = -1;
	static int32_t x399 = -1708;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = ((x397%(x398%x399))^x400);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x409 = 38U;
	int64_t x411 = INT64_MAX;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x409%(x410%x411))^x412);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x417 = -351;
	int16_t x418 = -1;
	uint16_t x419 = 14U;
	int32_t x420 = INT32_MIN;

	t81 = ((x417%(x418%x419))^x420);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x421 = INT32_MIN;
	volatile int32_t x422 = 1;
	int64_t x423 = 309836933910122297LL;

	t82 = ((x421%(x422%x423))^x424);

	if (t82 != -131418895795LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x425 = INT16_MAX;
	static uint32_t x426 = UINT32_MAX;
	int16_t x427 = 1900;
	uint64_t x428 = 1301793980798LLU;

	t83 = ((x425%(x426%x427))^x428);

	if (t83 != 1301793980793LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x429 = 18;
	int64_t x430 = INT64_MAX;
	uint32_t x431 = 85U;
	int8_t x432 = -1;
	volatile int64_t t84 = 52535848757207522LL;

	t84 = ((x429%(x430%x431))^x432);

	if (t84 != -19LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x437 = INT16_MAX;
	int64_t x438 = INT64_MIN;
	static int32_t x440 = -79044;
	int64_t t85 = 121451603LL;

	t85 = ((x437%(x438%x439))^x440);

	if (t85 != -79037LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x441 = 633639574828LLU;
	static uint16_t x443 = UINT16_MAX;
	uint32_t x444 = UINT32_MAX;
	static uint64_t t86 = 84399633LLU;

	t86 = ((x441%(x442%x443))^x444);

	if (t86 != 633375777491LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x449 = 7087873379097394LLU;
	uint32_t x450 = UINT32_MAX;
	static int32_t x451 = 198;
	static int16_t x452 = INT16_MAX;
	static uint64_t t87 = 311933935487LLU;

	t87 = ((x449%(x450%x451))^x452);

	if (t87 != 32766LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x453 = 1937U;
	int64_t x454 = INT64_MAX;
	uint64_t x455 = 4423543655092182183LLU;
	volatile int16_t x456 = 1097;
	uint64_t t88 = 1LLU;

	t88 = ((x453%(x454%x455))^x456);

	if (t88 != 984LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x457 = -5106020210LL;
	volatile int32_t x458 = -1;
	int64_t x459 = INT64_MIN;
	int32_t x460 = INT32_MIN;
	volatile int64_t t89 = -34990935416741LL;

	t89 = ((x457%(x458%x459))^x460);

	if (t89 != -2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x461 = 1;
	int32_t x462 = INT32_MIN;
	uint32_t x463 = UINT32_MAX;
	volatile uint32_t t90 = 25365U;

	t90 = ((x461%(x462%x463))^x464);

	if (t90 != 254U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x465 = -1005594839048299LL;
	static uint8_t x466 = UINT8_MAX;
	int16_t x467 = 14;
	int16_t x468 = INT16_MIN;
	int64_t t91 = -32674753871836LL;

	t91 = ((x465%(x466%x467))^x468);

	if (t91 != 32767LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x477 = -1;
	int16_t x480 = -1;

	t92 = ((x477%(x478%x479))^x480);

	if (t92 != 18446744073709422504LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x481 = INT32_MIN;
	uint64_t x482 = 3421LLU;
	static int16_t x484 = INT16_MIN;

	t93 = ((x481%(x482%x483))^x484);

	if (t93 != 18446744073709518868LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x485 = INT64_MIN;
	int16_t x486 = 2;
	int32_t x487 = INT32_MAX;
	uint32_t x488 = 16075U;

	t94 = ((x485%(x486%x487))^x488);

	if (t94 != 16075LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x489 = INT64_MIN;
	int32_t x490 = 71;
	volatile uint32_t x491 = UINT32_MAX;
	volatile int64_t x492 = -1LL;
	volatile int64_t t95 = 800LL;

	t95 = ((x489%(x490%x491))^x492);

	if (t95 != 4LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x501 = 282510429206350781LLU;
	volatile int8_t x502 = INT8_MAX;
	int64_t x503 = INT64_MIN;
	static int8_t x504 = -1;
	uint64_t t96 = 8054500LLU;

	t96 = ((x501%(x502%x503))^x504);

	if (t96 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x506 = -1LL;
	int32_t x507 = INT32_MIN;

	t97 = ((x505%(x506%x507))^x508);

	if (t97 != 331LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x509 = UINT8_MAX;
	volatile int64_t x510 = INT64_MAX;
	volatile int64_t t98 = 414301836248851LL;

	t98 = ((x509%(x510%x511))^x512);

	if (t98 != 32766LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x514 = INT32_MIN;
	volatile uint8_t x515 = UINT8_MAX;
	int64_t x516 = -1LL;
	static volatile int64_t t99 = -65131183357LL;

	t99 = ((x513%(x514%x515))^x516);

	if (t99 != -63LL) { NG(); } else { ; }
	
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

