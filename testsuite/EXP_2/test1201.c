#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
static int8_t x10 = -41;
volatile uint32_t x15 = UINT32_MAX;
uint64_t x16 = 111889660057LLU;
uint64_t x22 = 67683125LLU;
static volatile int8_t x25 = 1;
uint16_t x45 = UINT16_MAX;
int16_t x49 = INT16_MIN;
volatile int16_t x50 = INT16_MIN;
static int32_t x55 = INT32_MAX;
int32_t x62 = INT32_MIN;
uint64_t t13 = 297078012153809548LLU;
int64_t x68 = 3342LL;
int32_t x69 = INT32_MAX;
uint16_t x74 = UINT16_MAX;
static int16_t x75 = -1;
uint16_t x76 = 12U;
volatile int64_t x77 = 1LL;
uint8_t x78 = 52U;
static uint8_t x89 = 0U;
uint16_t x93 = UINT16_MAX;
int64_t t21 = -3118742081399210827LL;
int8_t x104 = INT8_MAX;
int64_t x109 = 17057683408418LL;
volatile uint8_t x110 = 0U;
static int32_t x115 = INT32_MIN;
volatile int64_t x118 = INT64_MIN;
volatile int32_t t27 = 1;
volatile int64_t x121 = 13017015473825LL;
int16_t x122 = INT16_MIN;
volatile int16_t x129 = -1;
int64_t x139 = 2368893LL;
uint32_t t32 = 6737268U;
int16_t x147 = 9079;
static volatile uint32_t x155 = UINT32_MAX;
volatile int32_t t35 = 3531737;
uint64_t x157 = 61269176LLU;
int16_t x162 = 3;
int64_t x172 = INT64_MAX;
static int64_t t40 = -2251414729671291735LL;
volatile uint64_t t42 = 423741LLU;
int64_t x186 = 8292810403471105LL;
int32_t x191 = INT32_MIN;
volatile uint32_t x192 = UINT32_MAX;
uint8_t x195 = UINT8_MAX;
int16_t x196 = 6529;
int8_t x199 = -2;
uint64_t t47 = 187LLU;
int8_t x218 = 5;
int16_t x224 = -4;
static int32_t x233 = INT32_MAX;
uint32_t x234 = 7962U;
int32_t x238 = -1;
volatile uint32_t x245 = 775962001U;
int8_t x246 = -12;
uint8_t x250 = 107U;
static int64_t x260 = INT64_MAX;
int64_t t60 = 17LL;
static int32_t x265 = INT32_MIN;
static uint64_t x266 = 58290674658LLU;
int64_t x267 = 2LL;
static int32_t t61 = -95;
static uint32_t x272 = 6U;
int32_t t63 = 73168871;
static volatile int32_t x286 = -47;
int64_t x287 = -1LL;
static int32_t x289 = -1;
uint64_t x291 = 35801636025LLU;
static volatile uint8_t x293 = 0U;
uint64_t x304 = 1821717915LLU;
volatile int16_t x311 = 7709;
int16_t x314 = INT16_MIN;
static uint32_t x318 = 6695627U;
int64_t x323 = 86124LL;
uint32_t x326 = 3U;
int16_t x347 = INT16_MAX;
static int8_t x357 = INT8_MIN;
volatile uint64_t x364 = 1452LLU;
static volatile uint64_t t85 = 29785LLU;
volatile uint32_t x367 = 2591027U;
volatile uint64_t x370 = 241093014168370LLU;
uint8_t x372 = 3U;
uint16_t x374 = 12U;
int32_t t88 = 14125176;
uint64_t x379 = UINT64_MAX;
static uint8_t x380 = 1U;
int8_t x387 = -26;
volatile int64_t t91 = 93LL;
uint32_t x392 = 21854U;
int64_t t92 = 18207LL;
static int64_t t94 = -419805409967LL;
uint16_t x401 = 540U;
static uint8_t x404 = UINT8_MAX;
static int32_t x417 = INT32_MIN;
uint32_t x419 = 534279524U;


void f0(void) {
	uint32_t x1 = 31U;
	uint64_t x2 = 11LLU;
	int32_t x3 = INT32_MIN;
	int16_t x4 = INT16_MIN;
	uint32_t t0 = 20U;

	t0 = ((x1-(x2==x3))%x4);

	if (t0 != 31U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	int32_t x7 = INT32_MIN;
	int32_t x8 = INT32_MIN;
	static int32_t t1 = 1526;

	t1 = ((x5-(x6==x7))%x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	uint32_t x11 = 260156839U;
	int8_t x12 = INT8_MAX;
	int32_t t2 = 34364537;

	t2 = ((x9-(x10==x11))%x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 7U;
	int64_t x14 = -126402704LL;
	volatile uint64_t t3 = 15299445179459431LLU;

	t3 = ((x13-(x14==x15))%x16);

	if (t3 != 7LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int32_t x18 = INT32_MIN;
	volatile int32_t x19 = INT32_MIN;
	int32_t x20 = 1101;
	volatile int32_t t4 = 1;

	t4 = ((x17-(x18==x19))%x20);

	if (t4 != 126) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MAX;
	static int8_t x23 = INT8_MIN;
	uint16_t x24 = UINT16_MAX;
	static int32_t t5 = -858392;

	t5 = ((x21-(x22==x23))%x24);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	int16_t x27 = 7388;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -15981974;

	t6 = ((x25-(x26==x27))%x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x29 = 8U;
	uint16_t x30 = UINT16_MAX;
	volatile int8_t x31 = INT8_MAX;
	static int16_t x32 = INT16_MIN;
	static int32_t t7 = -66;

	t7 = ((x29-(x30==x31))%x32);

	if (t7 != 8) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = 34U;
	static int8_t x38 = INT8_MAX;
	uint8_t x39 = 1U;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t8 = -7963453;

	t8 = ((x37-(x38==x39))%x40);

	if (t8 != 34) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = INT64_MIN;
	volatile uint32_t x42 = 320U;
	int64_t x43 = -1LL;
	int8_t x44 = 16;
	int64_t t9 = 7253505678LL;

	t9 = ((x41-(x42==x43))%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MIN;
	volatile int64_t x48 = INT64_MIN;
	static volatile int64_t t10 = 190437838040LL;

	t10 = ((x45-(x46==x47))%x48);

	if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x51 = INT16_MIN;
	int16_t x52 = -17;
	static volatile int32_t t11 = -1264726;

	t11 = ((x49-(x50==x51))%x52);

	if (t11 != -10) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	int16_t x54 = -1;
	static int8_t x56 = -1;
	volatile int32_t t12 = 141;

	t12 = ((x53-(x54==x55))%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 151245LLU;
	volatile int64_t x63 = -45361978702LL;
	int16_t x64 = 29;

	t13 = ((x61-(x62==x63))%x64);

	if (t13 != 10LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = -16;
	int8_t x67 = INT8_MAX;
	volatile int64_t t14 = -18802892073186075LL;

	t14 = ((x65-(x66==x67))%x68);

	if (t14 != -2690LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x70 = -1;
	uint64_t x71 = 120970346672983701LLU;
	int16_t x72 = 110;
	int32_t t15 = -6265;

	t15 = ((x69-(x70==x71))%x72);

	if (t15 != 67) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MIN;
	volatile int64_t t16 = -127624621697171342LL;

	t16 = ((x73-(x74==x75))%x76);

	if (t16 != -8LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x79 = 3U;
	static int64_t x80 = 1167807LL;
	volatile int64_t t17 = 13LL;

	t17 = ((x77-(x78==x79))%x80);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = 1;
	uint64_t x82 = UINT64_MAX;
	int32_t x83 = -1;
	int32_t x84 = -2873926;
	volatile int32_t t18 = -8002;

	t18 = ((x81-(x82==x83))%x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MAX;
	volatile uint16_t x87 = 18482U;
	uint64_t x88 = 9394890LLU;
	static volatile uint64_t t19 = 16576256080859849LLU;

	t19 = ((x85-(x86==x87))%x88);

	if (t19 != 3724838LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x90 = 8087779731356LLU;
	int16_t x91 = INT16_MAX;
	static volatile int16_t x92 = INT16_MIN;
	int32_t t20 = 903;

	t20 = ((x89-(x90==x91))%x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x94 = -823233600421079833LL;
	static uint64_t x95 = 330589LLU;
	int64_t x96 = INT64_MAX;

	t21 = ((x93-(x94==x95))%x96);

	if (t21 != 65535LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = -1LL;
	int32_t x98 = -46957;
	int64_t x99 = INT64_MAX;
	volatile int8_t x100 = INT8_MIN;
	volatile int64_t t22 = -40978173LL;

	t22 = ((x97-(x98==x99))%x100);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MAX;
	int16_t x102 = INT16_MIN;
	int64_t x103 = 62227LL;
	int32_t t23 = -3873588;

	t23 = ((x101-(x102==x103))%x104);

	if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = -1;
	int32_t x106 = INT32_MIN;
	uint32_t x107 = 3950811U;
	uint32_t x108 = 14703568U;
	volatile uint32_t t24 = 48342U;

	t24 = ((x105-(x106==x107))%x108);

	if (t24 != 1525439U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x111 = INT64_MIN;
	static int16_t x112 = INT16_MIN;
	int64_t t25 = 31606627726LL;

	t25 = ((x109-(x110==x111))%x112);

	if (t25 != 1570LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	uint64_t x114 = UINT64_MAX;
	uint8_t x116 = 26U;
	int32_t t26 = -3952;

	t26 = ((x113-(x114==x115))%x116);

	if (t26 != -8) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x117 = INT32_MIN;
	static int32_t x119 = -27463387;
	volatile int16_t x120 = INT16_MAX;

	t27 = ((x117-(x118==x119))%x120);

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x123 = -1;
	uint16_t x124 = UINT16_MAX;
	volatile int64_t t28 = 1746239839LL;

	t28 = ((x121-(x122==x123))%x124);

	if (t28 != 9485LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = INT16_MIN;
	uint64_t x127 = 285523871091435294LLU;
	int8_t x128 = -1;
	volatile int32_t t29 = -300;

	t29 = ((x125-(x126==x127))%x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x130 = -320154;
	static uint32_t x131 = UINT32_MAX;
	int32_t x132 = -1;
	volatile int32_t t30 = 9352077;

	t30 = ((x129-(x130==x131))%x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = INT64_MAX;
	int16_t x135 = -4781;
	uint32_t x136 = UINT32_MAX;
	uint32_t t31 = 9835U;

	t31 = ((x133-(x134==x135))%x136);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x137 = UINT8_MAX;
	static uint16_t x138 = 209U;
	volatile uint32_t x140 = 29U;

	t32 = ((x137-(x138==x139))%x140);

	if (t32 != 23U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = 28U;
	int8_t x146 = -1;
	static int16_t x148 = -1;
	volatile int32_t t33 = 10086997;

	t33 = ((x145-(x146==x147))%x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MIN;
	volatile int16_t x150 = -14491;
	static uint8_t x151 = UINT8_MAX;
	int64_t x152 = -1LL;
	volatile int64_t t34 = -165159826590387440LL;

	t34 = ((x149-(x150==x151))%x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MAX;
	int32_t x154 = INT32_MAX;
	uint8_t x156 = UINT8_MAX;

	t35 = ((x153-(x154==x155))%x156);

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x158 = -1;
	uint16_t x159 = UINT16_MAX;
	volatile uint64_t x160 = 130695963496LLU;
	static uint64_t t36 = 1588968319664251LLU;

	t36 = ((x157-(x158==x159))%x160);

	if (t36 != 61269176LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = -1;
	int64_t x163 = INT64_MAX;
	int64_t x164 = INT64_MIN;
	volatile int64_t t37 = -1423734393929017985LL;

	t37 = ((x161-(x162==x163))%x164);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = 3319983;
	int32_t x166 = INT32_MIN;
	uint64_t x167 = 1087LLU;
	volatile int8_t x168 = 1;
	int32_t t38 = -38003;

	t38 = ((x165-(x166==x167))%x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	static int16_t x170 = -2;
	volatile int16_t x171 = 1;
	volatile int64_t t39 = 395LL;

	t39 = ((x169-(x170==x171))%x172);

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = -1LL;
	int8_t x174 = -6;
	int16_t x175 = -1;
	int16_t x176 = INT16_MIN;

	t40 = ((x173-(x174==x175))%x176);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = UINT16_MAX;
	uint8_t x178 = 16U;
	int64_t x179 = INT64_MAX;
	int64_t x180 = INT64_MAX;
	volatile int64_t t41 = 68477448276787LL;

	t41 = ((x177-(x178==x179))%x180);

	if (t41 != 65535LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 0LLU;
	int16_t x182 = -1;
	uint64_t x183 = 81178613LLU;
	int16_t x184 = INT16_MIN;

	t42 = ((x181-(x182==x183))%x184);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = INT8_MIN;
	static int64_t x187 = -1047090601LL;
	int8_t x188 = INT8_MIN;
	static int32_t t43 = 5;

	t43 = ((x185-(x186==x187))%x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x189 = 31U;
	int64_t x190 = 9612465100004LL;
	uint32_t t44 = 6602U;

	t44 = ((x189-(x190==x191))%x192);

	if (t44 != 31U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = -63;
	int64_t x194 = 413190875984LL;
	static int32_t t45 = -22;

	t45 = ((x193-(x194==x195))%x196);

	if (t45 != -63) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = UINT8_MAX;
	static uint64_t x198 = 436084851635982LLU;
	static int16_t x200 = 14607;
	int32_t t46 = 4825;

	t46 = ((x197-(x198==x199))%x200);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x201 = 152LL;
	static int8_t x202 = -1;
	uint16_t x203 = 123U;
	volatile uint64_t x204 = 2672609LLU;

	t47 = ((x201-(x202==x203))%x204);

	if (t47 != 152LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = 5LLU;
	volatile uint32_t x206 = 1470236U;
	static int32_t x207 = INT32_MIN;
	int64_t x208 = INT64_MIN;
	uint64_t t48 = 412276463752LLU;

	t48 = ((x205-(x206==x207))%x208);

	if (t48 != 5LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x209 = 1735;
	int8_t x210 = -1;
	volatile uint8_t x211 = UINT8_MAX;
	int16_t x212 = -1;
	volatile int32_t t49 = 4635874;

	t49 = ((x209-(x210==x211))%x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x213 = -1;
	uint8_t x214 = 40U;
	volatile int16_t x215 = INT16_MIN;
	int32_t x216 = INT32_MIN;
	static volatile int32_t t50 = -1505;

	t50 = ((x213-(x214==x215))%x216);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = INT32_MAX;
	int32_t x219 = -2623;
	int32_t x220 = -345;
	volatile int32_t t51 = -98179;

	t51 = ((x217-(x218==x219))%x220);

	if (t51 != 97) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 14U;
	int16_t x222 = -145;
	static uint8_t x223 = 2U;
	static volatile int32_t t52 = 1309;

	t52 = ((x221-(x222==x223))%x224);

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x225 = 1U;
	int64_t x226 = 30285LL;
	uint16_t x227 = 515U;
	int8_t x228 = INT8_MIN;
	volatile uint32_t t53 = 1541U;

	t53 = ((x225-(x226==x227))%x228);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x235 = UINT32_MAX;
	volatile int32_t x236 = INT32_MAX;
	int32_t t54 = 9;

	t54 = ((x233-(x234==x235))%x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x237 = INT8_MAX;
	int8_t x239 = INT8_MAX;
	int32_t x240 = -9274;
	int32_t t55 = -6;

	t55 = ((x237-(x238==x239))%x240);

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = 1752;
	int32_t x242 = INT32_MAX;
	volatile int64_t x243 = INT64_MAX;
	volatile int8_t x244 = INT8_MIN;
	static int32_t t56 = -28537;

	t56 = ((x241-(x242==x243))%x244);

	if (t56 != 88) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x247 = 0U;
	uint64_t x248 = 60067964042LLU;
	volatile uint64_t t57 = 2662945277339331LLU;

	t57 = ((x245-(x246==x247))%x248);

	if (t57 != 775962001LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = -1;
	static int16_t x251 = -10146;
	uint32_t x252 = UINT32_MAX;
	volatile uint32_t t58 = 6U;

	t58 = ((x249-(x250==x251))%x252);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = INT32_MAX;
	volatile uint32_t x254 = 252208057U;
	int8_t x255 = INT8_MIN;
	volatile int32_t x256 = 416696610;
	int32_t t59 = -82621;

	t59 = ((x253-(x254==x255))%x256);

	if (t59 != 64000597) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = 57U;
	uint32_t x258 = 3900284U;
	volatile int16_t x259 = INT16_MAX;

	t60 = ((x257-(x258==x259))%x260);

	if (t60 != 57LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x268 = INT8_MIN;

	t61 = ((x265-(x266==x267))%x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int64_t x270 = 14117162422412LL;
	volatile int64_t x271 = -1LL;
	volatile uint32_t t62 = 4323338U;

	t62 = ((x269-(x270==x271))%x272);

	if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	static uint32_t x275 = 1U;
	int32_t x276 = -140663398;

	t63 = ((x273-(x274==x275))%x276);

	if (t63 != -37532678) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = -862;
	int8_t x278 = -1;
	int64_t x279 = -1LL;
	static uint16_t x280 = 6U;
	volatile int32_t t64 = 13;

	t64 = ((x277-(x278==x279))%x280);

	if (t64 != -5) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = INT64_MIN;
	int16_t x282 = 1535;
	int16_t x283 = 64;
	int64_t x284 = INT64_MIN;
	int64_t t65 = -10862048LL;

	t65 = ((x281-(x282==x283))%x284);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = -1;
	uint8_t x288 = 3U;
	int32_t t66 = 1940252;

	t66 = ((x285-(x286==x287))%x288);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x290 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t67 = -2714038;

	t67 = ((x289-(x290==x291))%x292);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x294 = -4587;
	volatile int32_t x295 = INT32_MIN;
	static int16_t x296 = 7329;
	static volatile int32_t t68 = -4457823;

	t68 = ((x293-(x294==x295))%x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MAX;
	uint8_t x298 = UINT8_MAX;
	volatile int32_t x299 = 980986475;
	uint16_t x300 = UINT16_MAX;
	volatile int64_t t69 = 68547232424383LL;

	t69 = ((x297-(x298==x299))%x300);

	if (t69 != 32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x301 = UINT16_MAX;
	static int64_t x302 = INT64_MAX;
	int32_t x303 = INT32_MIN;
	uint64_t t70 = 13983895LLU;

	t70 = ((x301-(x302==x303))%x304);

	if (t70 != 65535LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x305 = INT16_MIN;
	volatile int16_t x306 = INT16_MIN;
	uint64_t x307 = 89420349152851LLU;
	static int16_t x308 = -2;
	volatile int32_t t71 = 113817556;

	t71 = ((x305-(x306==x307))%x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = INT32_MIN;
	volatile int8_t x310 = -1;
	uint16_t x312 = 1654U;
	volatile int32_t t72 = 48264;

	t72 = ((x309-(x310==x311))%x312);

	if (t72 != -1170) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x313 = INT16_MIN;
	int64_t x315 = INT64_MAX;
	int64_t x316 = INT64_MIN;
	volatile int64_t t73 = -812347168661228884LL;

	t73 = ((x313-(x314==x315))%x316);

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x317 = -1LL;
	int8_t x319 = -56;
	uint8_t x320 = 1U;
	volatile int64_t t74 = 118286946218LL;

	t74 = ((x317-(x318==x319))%x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = -1;
	static uint16_t x322 = UINT16_MAX;
	uint32_t x324 = UINT32_MAX;
	uint32_t t75 = 17U;

	t75 = ((x321-(x322==x323))%x324);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x325 = INT8_MIN;
	static volatile uint64_t x327 = UINT64_MAX;
	uint32_t x328 = 666626U;
	volatile uint32_t t76 = 6U;

	t76 = ((x325-(x326==x327))%x328);

	if (t76 != 562476U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = -213125517LL;
	int8_t x330 = 0;
	int32_t x331 = -1;
	int8_t x332 = -22;
	static int64_t t77 = 1478890484LL;

	t77 = ((x329-(x330==x331))%x332);

	if (t77 != -11LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = INT8_MIN;
	volatile uint64_t x334 = 451143647444LLU;
	uint16_t x335 = 2819U;
	int8_t x336 = -61;
	volatile int32_t t78 = 3428300;

	t78 = ((x333-(x334==x335))%x336);

	if (t78 != -6) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x337 = -2701207095097772771LL;
	volatile int64_t x338 = 7LL;
	uint16_t x339 = 222U;
	volatile uint16_t x340 = 146U;
	static int64_t t79 = 17490277560541447LL;

	t79 = ((x337-(x338==x339))%x340);

	if (t79 != -15LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x341 = 0;
	static volatile int64_t x342 = -3733LL;
	int32_t x343 = -1;
	int32_t x344 = INT32_MIN;
	volatile int32_t t80 = -6;

	t80 = ((x341-(x342==x343))%x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x345 = 3965887092922617LLU;
	static volatile int16_t x346 = INT16_MIN;
	int32_t x348 = INT32_MIN;
	static uint64_t t81 = 6706933714009315413LLU;

	t81 = ((x345-(x346==x347))%x348);

	if (t81 != 3965887092922617LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = INT32_MAX;
	int32_t x350 = 1118;
	volatile int16_t x351 = -1;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t82 = INT32_MAX;

	t82 = ((x349-(x350==x351))%x352);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x353 = INT64_MAX;
	uint16_t x354 = UINT16_MAX;
	static int8_t x355 = 55;
	int32_t x356 = INT32_MAX;
	static int64_t t83 = 1039233422562037782LL;

	t83 = ((x353-(x354==x355))%x356);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x358 = INT16_MAX;
	static int8_t x359 = INT8_MIN;
	volatile int32_t x360 = INT32_MIN;
	int32_t t84 = 15;

	t84 = ((x357-(x358==x359))%x360);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = INT16_MAX;
	uint8_t x362 = 31U;
	static int32_t x363 = INT32_MIN;

	t85 = ((x361-(x362==x363))%x364);

	if (t85 != 823LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = -50576;
	volatile int8_t x368 = INT8_MIN;
	static int64_t t86 = 62LL;

	t86 = ((x365-(x366==x367))%x368);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = 3107;
	int64_t x371 = INT64_MAX;
	static volatile int32_t t87 = -1126;

	t87 = ((x369-(x370==x371))%x372);

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = 965794524;
	int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MIN;

	t88 = ((x373-(x374==x375))%x376);

	if (t88 != 965794524) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x377 = 137944081017645474LLU;
	volatile uint64_t x378 = UINT64_MAX;
	static volatile uint64_t t89 = 13342LLU;

	t89 = ((x377-(x378==x379))%x380);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = 23;
	int64_t x382 = -1LL;
	int8_t x383 = INT8_MIN;
	volatile uint32_t x384 = 3652U;
	volatile uint32_t t90 = 3014802U;

	t90 = ((x381-(x382==x383))%x384);

	if (t90 != 23U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x385 = 905925787446LL;
	int32_t x386 = 114416715;
	int64_t x388 = -1LL;

	t91 = ((x385-(x386==x387))%x388);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = -399409LL;
	int32_t x390 = INT32_MIN;
	int16_t x391 = -15;

	t92 = ((x389-(x390==x391))%x392);

	if (t92 != -6037LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x393 = 2452U;
	int64_t x394 = -1LL;
	volatile int32_t x395 = INT32_MIN;
	int64_t x396 = 31044984197885LL;
	volatile int64_t t93 = 9621533617987LL;

	t93 = ((x393-(x394==x395))%x396);

	if (t93 != 2452LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x397 = -13458893561LL;
	volatile int32_t x398 = INT32_MAX;
	uint64_t x399 = 5219338254LLU;
	int16_t x400 = INT16_MAX;

	t94 = ((x397-(x398==x399))%x400);

	if (t94 != -12146LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x402 = INT8_MIN;
	static uint64_t x403 = UINT64_MAX;
	int32_t t95 = -96;

	t95 = ((x401-(x402==x403))%x404);

	if (t95 != 30) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = -1;
	static int32_t x406 = -1;
	static int32_t x407 = INT32_MIN;
	int8_t x408 = -3;
	int32_t t96 = 280;

	t96 = ((x405-(x406==x407))%x408);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = UINT16_MAX;
	static int32_t x410 = INT32_MIN;
	volatile int8_t x411 = -1;
	static uint64_t x412 = UINT64_MAX;
	uint64_t t97 = 16869LLU;

	t97 = ((x409-(x410==x411))%x412);

	if (t97 != 65535LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x413 = 51;
	uint64_t x414 = UINT64_MAX;
	uint64_t x415 = 11289980213LLU;
	static int32_t x416 = INT32_MIN;
	int32_t t98 = 2447;

	t98 = ((x413-(x414==x415))%x416);

	if (t98 != 51) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x418 = INT64_MIN;
	int32_t x420 = INT32_MAX;
	volatile int32_t t99 = -374;

	t99 = ((x417-(x418==x419))%x420);

	if (t99 != -1) { NG(); } else { ; }
	
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

