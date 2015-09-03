#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = UINT64_MAX;
int64_t x7 = 4398667725LL;
volatile uint8_t x8 = UINT8_MAX;
int16_t x10 = INT16_MIN;
int32_t t2 = 1;
int16_t x17 = INT16_MIN;
uint64_t x20 = 8861896931128790375LLU;
volatile int8_t x36 = INT8_MIN;
int32_t t8 = 6523308;
static int8_t x41 = -15;
static volatile int32_t x45 = -625283;
volatile int8_t x52 = -1;
int8_t x58 = 10;
static int64_t t13 = 56568969575406317LL;
uint16_t x67 = UINT16_MAX;
static uint64_t x70 = UINT64_MAX;
static int16_t x71 = INT16_MAX;
int16_t x75 = -1;
int32_t x77 = 10465919;
int16_t x81 = 7;
uint8_t x87 = 23U;
volatile uint64_t t20 = 2LLU;
int32_t x91 = INT32_MIN;
int8_t x92 = 3;
int16_t x96 = -1;
uint64_t t22 = 119327LLU;
int8_t x98 = INT8_MIN;
volatile uint64_t x99 = 10450367532266LLU;
uint64_t x101 = 8722996LLU;
int32_t x105 = 2;
int16_t x111 = -1;
volatile int8_t x112 = -1;
int64_t t26 = -108120427421751431LL;
uint32_t x137 = 3U;
static int8_t x140 = INT8_MAX;
static uint32_t x147 = 14162193U;
static volatile uint64_t t36 = 6407291LLU;
volatile uint32_t t37 = 7412989U;
int64_t x164 = 1054310540LL;
uint64_t x170 = 16LLU;
volatile int32_t x173 = 31674;
static int64_t x179 = INT64_MAX;
uint32_t x180 = UINT32_MAX;
static int8_t x182 = -26;
int32_t x183 = INT32_MIN;
static int16_t x190 = -1;
uint64_t x193 = 54918528278243LLU;
static volatile uint8_t x194 = 17U;
int8_t x196 = INT8_MIN;
static volatile uint64_t t45 = 4220738392598550LLU;
uint64_t x197 = 573551813535910436LLU;
static volatile uint8_t x199 = UINT8_MAX;
int32_t x204 = INT32_MIN;
int32_t t47 = 3903;
static uint16_t x221 = 443U;
int8_t x223 = 37;
int32_t x229 = INT32_MAX;
int64_t x235 = INT64_MIN;
int64_t x236 = -7LL;
int32_t x245 = -883522;
uint64_t x259 = UINT64_MAX;
int8_t x261 = INT8_MIN;
uint32_t x263 = 31283216U;
uint32_t x266 = 9652U;
static int16_t x267 = 479;
int16_t x268 = INT16_MIN;
int32_t x269 = INT32_MIN;
uint32_t x283 = UINT32_MAX;
int16_t x286 = INT16_MIN;
static volatile uint32_t x288 = 55U;
volatile int8_t x289 = INT8_MIN;
int8_t x292 = INT8_MAX;
int32_t t67 = 958186255;
uint32_t x321 = 76871388U;
int64_t x337 = INT64_MIN;
volatile uint8_t x339 = 1U;
static volatile uint8_t x342 = 2U;
uint64_t x348 = UINT64_MAX;
static int8_t x349 = INT8_MIN;
int8_t x356 = INT8_MAX;
int32_t t81 = 1062681694;
uint8_t x358 = UINT8_MAX;
uint32_t t84 = 8224106U;
int8_t x374 = INT8_MIN;
volatile int64_t t86 = 33659535259108550LL;
int64_t x382 = -1LL;
uint8_t x389 = 5U;
int32_t t89 = -10524420;
int16_t x393 = INT16_MIN;
static int32_t x398 = 20;
int64_t x400 = -1LL;
volatile int32_t t91 = -6;
volatile int32_t t92 = 12326;
volatile int16_t x410 = INT16_MIN;
static int64_t x417 = INT64_MIN;
int64_t t96 = 3484154908144602LL;
static volatile uint32_t x428 = UINT32_MAX;
uint32_t x429 = 1162016U;
volatile uint32_t t99 = 2706667U;


void f0(void) {
	volatile int16_t x2 = 322;
	int16_t x3 = INT16_MIN;
	uint8_t x4 = 21U;
	volatile uint64_t t0 = 0LLU;

	t0 = (x1+(x2-(x3<x4)));

	if (t0 != 320LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 3860543481649LLU;
	volatile int8_t x6 = -2;
	volatile uint64_t t1 = 2602LLU;

	t1 = (x5+(x6-(x7<x8)));

	if (t1 != 3860543481647LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 26U;
	int16_t x11 = -9617;
	int32_t x12 = INT32_MIN;

	t2 = (x9+(x10-(x11<x12)));

	if (t2 != -32742) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = UINT32_MAX;
	static uint64_t x14 = 250871615LLU;
	int64_t x15 = -26262LL;
	int16_t x16 = 101;
	volatile uint64_t t3 = 310LLU;

	t3 = (x13+(x14-(x15<x16)));

	if (t3 != 4545838909LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x18 = 1U;
	int8_t x19 = INT8_MAX;
	int32_t t4 = 157;

	t4 = (x17+(x18-(x19<x20)));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MAX;
	int16_t x22 = -345;
	int64_t x23 = INT64_MAX;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = -353137;

	t5 = (x21+(x22-(x23<x24)));

	if (t5 != 2147483302) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint16_t x26 = 20971U;
	volatile int8_t x27 = INT8_MAX;
	static int64_t x28 = INT64_MAX;
	static int32_t t6 = -120;

	t6 = (x25+(x26-(x27<x28)));

	if (t6 != 20969) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 29U;
	static uint16_t x30 = UINT16_MAX;
	static int32_t x31 = INT32_MIN;
	volatile int64_t x32 = INT64_MIN;
	int32_t t7 = -7422;

	t7 = (x29+(x30-(x31<x32)));

	if (t7 != 65564) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int32_t x34 = 432800896;
	uint16_t x35 = 1090U;

	t8 = (x33+(x34-(x35<x36)));

	if (t8 != 432800768) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 3975669LLU;
	int64_t x38 = INT64_MIN;
	int16_t x39 = -1;
	int32_t x40 = INT32_MIN;
	volatile uint64_t t9 = 140191292326097661LLU;

	t9 = (x37+(x38-(x39<x40)));

	if (t9 != 9223372036858751477LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	int32_t x44 = 0;
	int32_t t10 = 5315;

	t10 = (x41+(x42-(x43<x44)));

	if (t10 != -32784) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = 25U;
	volatile int64_t x47 = -13651736735885026LL;
	int64_t x48 = INT64_MIN;
	volatile int32_t t11 = 2;

	t11 = (x45+(x46-(x47<x48)));

	if (t11 != -625258) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int16_t x50 = INT16_MAX;
	int64_t x51 = INT64_MIN;
	static int32_t t12 = -855;

	t12 = (x49+(x50-(x51<x52)));

	if (t12 != 32765) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = -166352199LL;
	uint8_t x59 = UINT8_MAX;
	int32_t x60 = -1;

	t13 = (x57+(x58-(x59<x60)));

	if (t13 != -166352189LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x61 = 29;
	static int32_t x62 = -1;
	uint16_t x63 = 75U;
	int8_t x64 = INT8_MAX;
	int32_t t14 = -24700;

	t14 = (x61+(x62-(x63<x64)));

	if (t14 != 27) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x65 = 3U;
	int16_t x66 = INT16_MIN;
	static int64_t x68 = INT64_MAX;
	volatile uint32_t t15 = 218201743U;

	t15 = (x65+(x66-(x67<x68)));

	if (t15 != 4294934530U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 23U;
	volatile int64_t x72 = -1LL;
	uint64_t t16 = 1LLU;

	t16 = (x69+(x70-(x71<x72)));

	if (t16 != 22LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = INT16_MIN;
	static int64_t x74 = 1026889499727484246LL;
	int16_t x76 = INT16_MIN;
	volatile int64_t t17 = 35LL;

	t17 = (x73+(x74-(x75<x76)));

	if (t17 != 1026889499727451478LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x78 = INT16_MIN;
	int64_t x79 = INT64_MIN;
	int64_t x80 = INT64_MAX;
	volatile int32_t t18 = 285118655;

	t18 = (x77+(x78-(x79<x80)));

	if (t18 != 10433150) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MIN;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t19 = 1;

	t19 = (x81+(x82-(x83<x84)));

	if (t19 != 32773) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 18U;
	uint64_t x86 = UINT64_MAX;
	int64_t x88 = INT64_MAX;

	t20 = (x85+(x86-(x87<x88)));

	if (t20 != 16LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 7U;
	uint8_t x90 = UINT8_MAX;
	static int32_t t21 = 6606;

	t21 = (x89+(x90-(x91<x92)));

	if (t21 != 261) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 3776513667436LLU;
	uint16_t x94 = UINT16_MAX;
	int32_t x95 = -1;

	t22 = (x93+(x94-(x95<x96)));

	if (t22 != 3776513732971LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x97 = 7U;
	int32_t x100 = 27632759;
	static volatile int32_t t23 = 168;

	t23 = (x97+(x98-(x99<x100)));

	if (t23 != -121) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x102 = 10U;
	static int64_t x103 = INT64_MIN;
	int8_t x104 = 35;
	volatile uint64_t t24 = 2832820LLU;

	t24 = (x101+(x102-(x103<x104)));

	if (t24 != 8723005LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x106 = INT32_MIN;
	int32_t x107 = 7017728;
	volatile int16_t x108 = -43;
	volatile int32_t t25 = -3736;

	t25 = (x105+(x106-(x107<x108)));

	if (t25 != -2147483646) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = 71LL;
	int32_t x110 = 108346980;

	t26 = (x109+(x110-(x111<x112)));

	if (t26 != 108347051LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MAX;
	volatile int16_t x115 = 0;
	static volatile int8_t x116 = INT8_MIN;
	int32_t t27 = 2387;

	t27 = (x113+(x114-(x115<x116)));

	if (t27 != 32639) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MAX;
	volatile uint16_t x118 = UINT16_MAX;
	static volatile int16_t x119 = 797;
	volatile uint16_t x120 = 1U;
	static int32_t t28 = -7;

	t28 = (x117+(x118-(x119<x120)));

	if (t28 != 65662) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = 28;
	uint32_t x122 = 1362586U;
	static int32_t x123 = -1;
	int32_t x124 = -1;
	uint32_t t29 = 169625U;

	t29 = (x121+(x122-(x123<x124)));

	if (t29 != 1362614U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x129 = -85763697LL;
	int16_t x130 = -7;
	volatile int8_t x131 = INT8_MAX;
	int8_t x132 = -1;
	volatile int64_t t30 = 58547929727LL;

	t30 = (x129+(x130-(x131<x132)));

	if (t30 != -85763704LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -1LL;
	static int16_t x134 = INT16_MAX;
	static uint16_t x135 = 107U;
	int16_t x136 = INT16_MAX;
	int64_t t31 = -99227773968680LL;

	t31 = (x133+(x134-(x135<x136)));

	if (t31 != 32765LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x138 = -1229793042LL;
	int64_t x139 = 333131846LL;
	volatile int64_t t32 = -13LL;

	t32 = (x137+(x138-(x139<x140)));

	if (t32 != -1229793039LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x141 = 4U;
	int64_t x142 = 0LL;
	volatile int16_t x143 = -1;
	static int16_t x144 = INT16_MAX;
	volatile int64_t t33 = 777783138LL;

	t33 = (x141+(x142-(x143<x144)));

	if (t33 != 3LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x145 = INT8_MIN;
	volatile int8_t x146 = -1;
	uint8_t x148 = 1U;
	volatile int32_t t34 = -16184018;

	t34 = (x145+(x146-(x147<x148)));

	if (t34 != -129) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 12529608949634589LLU;
	volatile int8_t x150 = INT8_MIN;
	uint16_t x151 = 536U;
	int16_t x152 = INT16_MIN;
	volatile uint64_t t35 = 29316634800184085LLU;

	t35 = (x149+(x150-(x151<x152)));

	if (t35 != 12529608949634461LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x154 = 220342429881214LLU;
	int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MAX;

	t36 = (x153+(x154-(x155<x156)));

	if (t36 != 220340282397565LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x157 = 96U;
	int16_t x158 = INT16_MIN;
	uint32_t x159 = UINT32_MAX;
	volatile int8_t x160 = INT8_MIN;

	t37 = (x157+(x158-(x159<x160)));

	if (t37 != 4294934624U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MAX;
	int8_t x162 = INT8_MIN;
	static volatile int8_t x163 = -9;
	volatile int64_t t38 = -111788699242920966LL;

	t38 = (x161+(x162-(x163<x164)));

	if (t38 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 49743U;
	volatile uint32_t x171 = UINT32_MAX;
	static int32_t x172 = -1;
	volatile uint64_t t39 = 1LLU;

	t39 = (x169+(x170-(x171<x172)));

	if (t39 != 49759LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x174 = -1;
	volatile int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MAX;
	int32_t t40 = 16308993;

	t40 = (x173+(x174-(x175<x176)));

	if (t40 != 31672) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = -44;
	uint8_t x178 = 1U;
	volatile int32_t t41 = -200974;

	t41 = (x177+(x178-(x179<x180)));

	if (t41 != -43) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = INT32_MAX;
	uint64_t x184 = 1223999608LLU;
	volatile int32_t t42 = 285;

	t42 = (x181+(x182-(x183<x184)));

	if (t42 != 2147483621) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x185 = UINT64_MAX;
	int16_t x186 = INT16_MIN;
	int64_t x187 = INT64_MAX;
	static int16_t x188 = INT16_MIN;
	uint64_t t43 = 95071LLU;

	t43 = (x185+(x186-(x187<x188)));

	if (t43 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 1U;
	static uint16_t x191 = 7U;
	int8_t x192 = -1;
	volatile int32_t t44 = -22;

	t44 = (x189+(x190-(x191<x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x195 = -1;

	t45 = (x193+(x194-(x195<x196)));

	if (t45 != 54918528278260LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x198 = INT32_MAX;
	volatile uint64_t x200 = 405045783160491189LLU;
	volatile uint64_t t46 = 1906051006358503LLU;

	t46 = (x197+(x198-(x199<x200)));

	if (t46 != 573551815683394082LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 0U;
	int16_t x202 = 9;
	int16_t x203 = INT16_MIN;

	t47 = (x201+(x202-(x203<x204)));

	if (t47 != 9) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x205 = 195363LL;
	int32_t x206 = -125;
	uint64_t x207 = UINT64_MAX;
	uint32_t x208 = UINT32_MAX;
	int64_t t48 = 3969LL;

	t48 = (x205+(x206-(x207<x208)));

	if (t48 != 195238LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MAX;
	static int32_t x211 = 6029063;
	int8_t x212 = INT8_MIN;
	static volatile uint32_t t49 = 14634U;

	t49 = (x209+(x210-(x211<x212)));

	if (t49 != 126U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x213 = -4;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	int32_t t50 = 12723920;

	t50 = (x213+(x214-(x215<x216)));

	if (t50 != 251) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MIN;
	int64_t x218 = 5344LL;
	int64_t x219 = INT64_MAX;
	volatile int8_t x220 = INT8_MIN;
	int64_t t51 = -43662649LL;

	t51 = (x217+(x218-(x219<x220)));

	if (t51 != -9223372036854770464LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x222 = 54926217;
	int64_t x224 = 13620LL;
	int32_t t52 = 0;

	t52 = (x221+(x222-(x223<x224)));

	if (t52 != 54926659) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = -273227824304LL;
	static int16_t x226 = -17;
	static uint32_t x227 = 5U;
	volatile int64_t x228 = -1LL;
	static volatile int64_t t53 = -413955249734394LL;

	t53 = (x225+(x226-(x227<x228)));

	if (t53 != -273227824321LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x230 = -1LL;
	volatile int16_t x231 = -1;
	uint32_t x232 = 667054U;
	volatile int64_t t54 = -930153133026419953LL;

	t54 = (x229+(x230-(x231<x232)));

	if (t54 != 2147483646LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x233 = UINT8_MAX;
	int8_t x234 = INT8_MAX;
	volatile int32_t t55 = -210968;

	t55 = (x233+(x234-(x235<x236)));

	if (t55 != 381) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MIN;
	static int64_t x242 = 25315970161128LL;
	volatile uint64_t x243 = UINT64_MAX;
	int16_t x244 = 84;
	int64_t t56 = -9LL;

	t56 = (x241+(x242-(x243<x244)));

	if (t56 != 25315970128360LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x246 = 108U;
	static int8_t x247 = 1;
	int16_t x248 = 142;
	int32_t t57 = -592;

	t57 = (x245+(x246-(x247<x248)));

	if (t57 != -883415) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MAX;
	static int32_t x250 = INT32_MIN;
	uint8_t x251 = 4U;
	int16_t x252 = -1;
	volatile int32_t t58 = -98;

	t58 = (x249+(x250-(x251<x252)));

	if (t58 != -2147483521) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x253 = 116396783LLU;
	uint8_t x254 = 1U;
	volatile uint16_t x255 = UINT16_MAX;
	static int64_t x256 = -1LL;
	volatile uint64_t t59 = 840777LLU;

	t59 = (x253+(x254-(x255<x256)));

	if (t59 != 116396784LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x257 = 53483LLU;
	int64_t x258 = INT64_MIN;
	int16_t x260 = INT16_MAX;
	static volatile uint64_t t60 = 5053636216136406906LLU;

	t60 = (x257+(x258-(x259<x260)));

	if (t60 != 9223372036854829291LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x262 = UINT64_MAX;
	int16_t x264 = 110;
	uint64_t t61 = 926339772513297079LLU;

	t61 = (x261+(x262-(x263<x264)));

	if (t61 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x265 = INT8_MIN;
	volatile uint32_t t62 = 213720U;

	t62 = (x265+(x266-(x267<x268)));

	if (t62 != 9524U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x270 = UINT32_MAX;
	static uint16_t x271 = UINT16_MAX;
	static int64_t x272 = INT64_MIN;
	volatile uint32_t t63 = 8U;

	t63 = (x269+(x270-(x271<x272)));

	if (t63 != 2147483647U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = INT8_MIN;
	volatile int64_t x278 = -7533527474734043LL;
	int8_t x279 = 31;
	uint64_t x280 = UINT64_MAX;
	int64_t t64 = 1930424546LL;

	t64 = (x277+(x278-(x279<x280)));

	if (t64 != -7533527474734172LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = INT32_MIN;
	volatile int16_t x282 = INT16_MAX;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t65 = -1236;

	t65 = (x281+(x282-(x283<x284)));

	if (t65 != -2147450882) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x285 = 31714U;
	volatile int32_t x287 = INT32_MAX;
	static uint32_t t66 = 326U;

	t66 = (x285+(x286-(x287<x288)));

	if (t66 != 4294966242U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x290 = INT8_MAX;
	int64_t x291 = 5258073792557245LL;

	t67 = (x289+(x290-(x291<x292)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x293 = 5U;
	int16_t x294 = -3;
	static int8_t x295 = INT8_MIN;
	int32_t x296 = -1;
	int32_t t68 = 1;

	t68 = (x293+(x294-(x295<x296)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MAX;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	volatile int64_t t69 = -128152LL;

	t69 = (x301+(x302-(x303<x304)));

	if (t69 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = -1;
	static int16_t x306 = INT16_MIN;
	int16_t x307 = 7;
	volatile uint64_t x308 = 17249344857524LLU;
	volatile int32_t t70 = -11850432;

	t70 = (x305+(x306-(x307<x308)));

	if (t70 != -32770) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x309 = 3U;
	int32_t x310 = -1;
	uint16_t x311 = 1U;
	int16_t x312 = INT16_MIN;
	volatile int32_t t71 = -67644094;

	t71 = (x309+(x310-(x311<x312)));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = 20;
	uint8_t x315 = 14U;
	int8_t x316 = INT8_MAX;
	int64_t t72 = 123090141493605559LL;

	t72 = (x313+(x314-(x315<x316)));

	if (t72 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x317 = INT8_MIN;
	uint16_t x318 = UINT16_MAX;
	int16_t x319 = INT16_MAX;
	uint16_t x320 = 4U;
	int32_t t73 = -751774144;

	t73 = (x317+(x318-(x319<x320)));

	if (t73 != 65407) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x322 = UINT16_MAX;
	static int64_t x323 = INT64_MIN;
	uint64_t x324 = 8674584468026LLU;
	volatile uint32_t t74 = 118554590U;

	t74 = (x321+(x322-(x323<x324)));

	if (t74 != 76936923U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = INT32_MAX;
	int16_t x326 = -1;
	static uint64_t x327 = UINT64_MAX;
	int8_t x328 = INT8_MIN;
	volatile int32_t t75 = 327048;

	t75 = (x325+(x326-(x327<x328)));

	if (t75 != 2147483646) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MAX;
	int16_t x330 = INT16_MIN;
	int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MAX;
	volatile int32_t t76 = -827;

	t76 = (x329+(x330-(x331<x332)));

	if (t76 != 2147450878) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x338 = 5;
	static uint32_t x340 = UINT32_MAX;
	static volatile int64_t t77 = -832604399741879LL;

	t77 = (x337+(x338-(x339<x340)));

	if (t77 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x341 = INT8_MIN;
	uint8_t x343 = 33U;
	static int32_t x344 = INT32_MAX;
	volatile int32_t t78 = -40564;

	t78 = (x341+(x342-(x343<x344)));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x345 = INT8_MAX;
	uint32_t x346 = 247675358U;
	int16_t x347 = INT16_MIN;
	uint32_t t79 = 33824923U;

	t79 = (x345+(x346-(x347<x348)));

	if (t79 != 247675484U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x350 = INT8_MIN;
	int64_t x351 = 126698LL;
	volatile int32_t x352 = -561421;
	int32_t t80 = -27;

	t80 = (x349+(x350-(x351<x352)));

	if (t80 != -256) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x353 = -1;
	int16_t x354 = -1;
	int16_t x355 = INT16_MAX;

	t81 = (x353+(x354-(x355<x356)));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = INT16_MIN;
	uint16_t x359 = 6U;
	int64_t x360 = INT64_MAX;
	int32_t t82 = 5684169;

	t82 = (x357+(x358-(x359<x360)));

	if (t82 != -32514) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = -8;
	volatile int8_t x362 = INT8_MAX;
	uint64_t x363 = UINT64_MAX;
	uint16_t x364 = 16211U;
	int32_t t83 = 4159499;

	t83 = (x361+(x362-(x363<x364)));

	if (t83 != 119) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = -1;
	uint32_t x366 = 953164414U;
	uint8_t x367 = 6U;
	static volatile int32_t x368 = INT32_MIN;

	t84 = (x365+(x366-(x367<x368)));

	if (t84 != 953164413U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x370 = 6LL;
	volatile int8_t x371 = 1;
	int32_t x372 = -67688;
	volatile int64_t t85 = 12478312LL;

	t85 = (x369+(x370-(x371<x372)));

	if (t85 != 4294967301LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = -1LL;
	uint64_t x375 = 28405LLU;
	volatile int64_t x376 = INT64_MAX;

	t86 = (x373+(x374-(x375<x376)));

	if (t86 != -130LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = 0;
	uint8_t x378 = 14U;
	int16_t x379 = -1;
	uint16_t x380 = 54U;
	volatile int32_t t87 = 316661762;

	t87 = (x377+(x378-(x379<x380)));

	if (t87 != 13) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	uint64_t x384 = UINT64_MAX;
	int64_t t88 = 59163960389898882LL;

	t88 = (x381+(x382-(x383<x384)));

	if (t88 != -130LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MAX;
	int32_t x392 = -279;

	t89 = (x389+(x390-(x391<x392)));

	if (t89 != -123) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x394 = INT8_MAX;
	static uint8_t x395 = UINT8_MAX;
	volatile int16_t x396 = -1;
	static volatile int32_t t90 = 11347021;

	t90 = (x393+(x394-(x395<x396)));

	if (t90 != -32641) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = -1;
	volatile uint16_t x399 = 418U;

	t91 = (x397+(x398-(x399<x400)));

	if (t91 != 19) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x401 = 97U;
	volatile uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MIN;
	static volatile uint8_t x404 = 6U;

	t92 = (x401+(x402-(x403<x404)));

	if (t92 != 351) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x405 = -381501082LL;
	uint16_t x406 = 1U;
	volatile uint16_t x407 = UINT16_MAX;
	volatile int16_t x408 = INT16_MIN;
	int64_t t93 = 226822258575626046LL;

	t93 = (x405+(x406-(x407<x408)));

	if (t93 != -381501081LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = 2U;
	static volatile uint64_t x411 = UINT64_MAX;
	volatile int32_t x412 = INT32_MIN;
	static volatile int32_t t94 = 2637852;

	t94 = (x409+(x410-(x411<x412)));

	if (t94 != -32766) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x413 = -1LL;
	uint16_t x414 = UINT16_MAX;
	int64_t x415 = -1LL;
	volatile uint32_t x416 = 1U;
	int64_t t95 = -14219170LL;

	t95 = (x413+(x414-(x415<x416)));

	if (t95 != 65533LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x418 = 91409LL;
	uint32_t x419 = UINT32_MAX;
	static int16_t x420 = -26;

	t96 = (x417+(x418-(x419<x420)));

	if (t96 != -9223372036854684399LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = INT16_MAX;
	uint32_t x423 = 0U;
	uint8_t x424 = 115U;
	int32_t t97 = 504044089;

	t97 = (x421+(x422-(x423<x424)));

	if (t97 != -2147450882) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x425 = -25193;
	int16_t x426 = -1;
	int64_t x427 = -1LL;
	volatile int32_t t98 = 2536;

	t98 = (x425+(x426-(x427<x428)));

	if (t98 != -25195) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x430 = UINT16_MAX;
	int8_t x431 = INT8_MIN;
	int32_t x432 = INT32_MIN;

	t99 = (x429+(x430-(x431<x432)));

	if (t99 != 1227551U) { NG(); } else { ; }
	
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

