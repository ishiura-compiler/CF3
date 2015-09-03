#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
volatile int32_t t2 = 1688169;
int8_t x17 = -6;
int32_t x25 = INT32_MIN;
int8_t x26 = -1;
static uint64_t x31 = UINT64_MAX;
static uint32_t x41 = 253320629U;
volatile int64_t x42 = INT64_MAX;
volatile int16_t x46 = INT16_MIN;
volatile int32_t t9 = -262885174;
uint16_t x56 = 5700U;
int32_t x59 = INT32_MIN;
int64_t x60 = -1LL;
volatile int32_t t12 = 19132;
int32_t x61 = 104;
static uint16_t x70 = UINT16_MAX;
volatile uint32_t x83 = UINT32_MAX;
uint64_t x86 = UINT64_MAX;
uint64_t x95 = 705LLU;
uint32_t x97 = 18U;
volatile int32_t t21 = 377;
int32_t t22 = -176385;
int32_t x119 = 31123;
int8_t x133 = -1;
static uint8_t x135 = 4U;
static int16_t x136 = 57;
volatile int32_t t28 = 0;
int64_t x149 = -1LL;
uint32_t x160 = 36685U;
int32_t t31 = 17;
static uint8_t x161 = UINT8_MAX;
static int32_t t33 = -66779858;
uint64_t x174 = 8560805655LLU;
static uint64_t x181 = 22439310145LLU;
uint32_t x197 = 418U;
int8_t x201 = INT8_MAX;
int16_t x209 = -9751;
volatile int8_t x212 = INT8_MIN;
int32_t x217 = -1;
int64_t x224 = INT64_MAX;
int64_t x225 = INT64_MIN;
volatile int16_t x234 = -20;
int16_t x236 = -16;
int32_t t48 = -31971;
static int64_t x237 = INT64_MIN;
static uint8_t x239 = 51U;
static volatile int16_t x262 = INT16_MAX;
uint16_t x275 = UINT16_MAX;
volatile uint64_t x276 = UINT64_MAX;
int8_t x287 = INT8_MAX;
int8_t x288 = -55;
int64_t x292 = -1LL;
static uint64_t x295 = UINT64_MAX;
volatile int8_t x298 = -1;
volatile uint16_t x299 = 24674U;
static volatile int32_t x300 = 91923;
int32_t t61 = 67;
int16_t x301 = INT16_MIN;
static volatile int32_t t62 = -10910;
static int32_t t63 = -3880;
static int64_t x311 = -16900396720975042LL;
static int32_t t64 = 13985;
volatile int32_t t65 = 1;
static volatile uint32_t x317 = 25U;
uint32_t x326 = 1U;
static int16_t x333 = INT16_MIN;
volatile int32_t t68 = 746088548;
static int32_t x341 = INT32_MIN;
static int32_t t69 = -10742;
static int32_t x349 = INT32_MAX;
uint16_t x350 = 63U;
uint64_t x351 = 1904909682LLU;
uint32_t x355 = 120U;
int64_t x357 = -860035305152632330LL;
volatile uint64_t x363 = 120634069130518818LLU;
int32_t t74 = 3638;
uint8_t x374 = 0U;
int32_t t78 = -36944237;
uint16_t x387 = 1424U;
volatile int32_t x388 = 1;
volatile int32_t t79 = -26;
int8_t x390 = 1;
int16_t x391 = 229;
volatile int32_t x392 = INT32_MIN;
volatile int64_t x400 = -1LL;
volatile int32_t t82 = -4536244;
volatile int8_t x402 = INT8_MAX;
static volatile uint32_t x405 = 54U;
static uint64_t x406 = 63LLU;
int32_t x414 = INT32_MIN;
uint16_t x424 = UINT16_MAX;
int64_t x433 = INT64_MIN;
uint8_t x436 = UINT8_MAX;
volatile int32_t t92 = -15800983;
volatile int32_t x455 = -1;
uint32_t x470 = 50270592U;
static volatile int8_t x477 = INT8_MIN;
volatile uint64_t x483 = UINT64_MAX;
uint16_t x484 = 684U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static int8_t x3 = -1;
	static uint32_t x4 = 11831552U;
	volatile int32_t t0 = -417827;

	t0 = (x1<(x2*(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 22681102U;
	static int32_t x10 = -1;
	volatile int8_t x11 = INT8_MIN;
	uint16_t x12 = UINT16_MAX;
	static volatile int32_t t1 = 7872995;

	t1 = (x9<(x10*(x11|x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	static uint8_t x14 = 82U;
	int64_t x15 = -116963105296LL;
	uint8_t x16 = 35U;

	t2 = (x13<(x14*(x15|x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x18 = 0;
	static int64_t x19 = INT64_MIN;
	static int64_t x20 = INT64_MIN;
	static volatile int32_t t3 = 16455408;

	t3 = (x17<(x18*(x19|x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	int16_t x22 = -1;
	static int16_t x23 = INT16_MIN;
	int16_t x24 = -38;
	int32_t t4 = 1;

	t4 = (x21<(x22*(x23|x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x27 = INT8_MIN;
	volatile int8_t x28 = INT8_MIN;
	static volatile int32_t t5 = -20230603;

	t5 = (x25<(x26*(x27|x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = INT32_MIN;
	static int64_t x30 = INT64_MAX;
	static volatile uint16_t x32 = 8U;
	static int32_t t6 = 21;

	t6 = (x29<(x30*(x31|x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	uint16_t x34 = 679U;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MIN;
	volatile int32_t t7 = -3831290;

	t7 = (x33<(x34*(x35|x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x43 = -1;
	int8_t x44 = INT8_MAX;
	int32_t t8 = -28;

	t8 = (x41<(x42*(x43|x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x45 = 4391U;
	int32_t x47 = INT32_MIN;
	static int16_t x48 = -3833;

	t9 = (x45<(x46*(x47|x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	uint32_t x50 = 507319107U;
	uint8_t x51 = 30U;
	uint64_t x52 = 2162352280LLU;
	static int32_t t10 = 5252368;

	t10 = (x49<(x50*(x51|x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 6696;
	int16_t x54 = -211;
	int8_t x55 = 3;
	static volatile int32_t t11 = 1;

	t11 = (x53<(x54*(x55|x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	volatile int16_t x58 = 43;

	t12 = (x57<(x58*(x59|x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = INT16_MIN;
	int8_t x63 = INT8_MAX;
	int32_t x64 = 115;
	volatile int32_t t13 = -951027311;

	t13 = (x61<(x62*(x63|x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MAX;
	int64_t x66 = 53798613264076LL;
	static uint64_t x67 = 829438965764967574LLU;
	int32_t x68 = -13;
	static int32_t t14 = -7;

	t14 = (x65<(x66*(x67|x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 349658U;
	int16_t x71 = -4;
	volatile uint32_t x72 = 110419897U;
	int32_t t15 = -20;

	t15 = (x69<(x70*(x71|x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	uint64_t x74 = 407803049365LLU;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = 1136U;
	static int32_t t16 = 1600;

	t16 = (x73<(x74*(x75|x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MAX;
	static volatile uint16_t x82 = 6U;
	volatile int64_t x84 = -1316485849905LL;
	int32_t t17 = -11;

	t17 = (x81<(x82*(x83|x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = 217739536;
	uint64_t x87 = 159439LLU;
	uint8_t x88 = 30U;
	volatile int32_t t18 = -293002533;

	t18 = (x85<(x86*(x87|x88)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = 7398LL;
	static uint8_t x90 = UINT8_MAX;
	volatile int64_t x91 = -3814LL;
	int64_t x92 = -49LL;
	volatile int32_t t19 = -48;

	t19 = (x89<(x90*(x91|x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -5;
	int64_t x94 = -1LL;
	static volatile int16_t x96 = INT16_MIN;
	int32_t t20 = 266762836;

	t20 = (x93<(x94*(x95|x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x98 = INT8_MIN;
	static volatile uint32_t x99 = UINT32_MAX;
	uint8_t x100 = 0U;

	t21 = (x97<(x98*(x99|x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = -1LL;
	static uint64_t x102 = 116590461433273636LLU;
	int8_t x103 = INT8_MIN;
	uint64_t x104 = 0LLU;

	t22 = (x101<(x102*(x103|x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x113 = INT64_MIN;
	volatile int32_t x114 = 145354;
	uint32_t x115 = UINT32_MAX;
	uint32_t x116 = 1270U;
	volatile int32_t t23 = 2007;

	t23 = (x113<(x114*(x115|x116)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MIN;
	uint32_t x118 = 16655533U;
	volatile int32_t x120 = INT32_MIN;
	volatile int32_t t24 = 11567313;

	t24 = (x117<(x118*(x119|x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MAX;
	int16_t x127 = INT16_MAX;
	static int64_t x128 = -1LL;
	volatile int32_t t25 = -26390;

	t25 = (x125<(x126*(x127|x128)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x129 = 2U;
	static int8_t x130 = -1;
	static int64_t x131 = -52536627447172LL;
	uint16_t x132 = 3400U;
	volatile int32_t t26 = -393765;

	t26 = (x129<(x130*(x131|x132)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x134 = INT16_MIN;
	volatile int32_t t27 = -53342;

	t27 = (x133<(x134*(x135|x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x137 = -1;
	int8_t x138 = -1;
	int16_t x139 = 5807;
	static volatile uint64_t x140 = UINT64_MAX;

	t28 = (x137<(x138*(x139|x140)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x150 = 1;
	uint16_t x151 = 1184U;
	int16_t x152 = -1;
	int32_t t29 = 1361133;

	t29 = (x149<(x150*(x151|x152)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x153 = 32U;
	uint32_t x154 = 400003493U;
	uint8_t x155 = UINT8_MAX;
	volatile int32_t x156 = 1031576;
	static int32_t t30 = -13731150;

	t30 = (x153<(x154*(x155|x156)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x157 = 10551;
	int64_t x158 = 0LL;
	uint32_t x159 = 284U;

	t31 = (x157<(x158*(x159|x160)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x162 = 7782661807154LLU;
	volatile int32_t x163 = -1;
	static volatile int16_t x164 = -1;
	int32_t t32 = 445044635;

	t32 = (x161<(x162*(x163|x164)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x165 = 40U;
	static int64_t x166 = -1LL;
	volatile uint16_t x167 = 31252U;
	int8_t x168 = -1;

	t33 = (x165<(x166*(x167|x168)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x169 = UINT16_MAX;
	uint64_t x170 = 1178010382LLU;
	volatile int64_t x171 = -19131LL;
	int64_t x172 = 74LL;
	int32_t t34 = -119838385;

	t34 = (x169<(x170*(x171|x172)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = INT8_MIN;
	uint64_t x175 = 12524442182LLU;
	uint32_t x176 = UINT32_MAX;
	int32_t t35 = 27322852;

	t35 = (x173<(x174*(x175|x176)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x177 = INT8_MAX;
	uint64_t x178 = 197924LLU;
	int64_t x179 = INT64_MAX;
	int64_t x180 = 530120746848LL;
	volatile int32_t t36 = -88;

	t36 = (x177<(x178*(x179|x180)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x182 = 340601479LLU;
	volatile int64_t x183 = INT64_MIN;
	static volatile int8_t x184 = INT8_MIN;
	volatile int32_t t37 = -1274817;

	t37 = (x181<(x182*(x183|x184)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x193 = INT8_MIN;
	uint8_t x194 = 1U;
	int32_t x195 = -1;
	static int16_t x196 = -3;
	int32_t t38 = -86;

	t38 = (x193<(x194*(x195|x196)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x198 = INT8_MIN;
	int16_t x199 = 7701;
	static volatile int32_t x200 = -1;
	int32_t t39 = -181042;

	t39 = (x197<(x198*(x199|x200)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x202 = INT16_MAX;
	volatile int16_t x203 = -4629;
	uint16_t x204 = 4U;
	static int32_t t40 = 1357;

	t40 = (x201<(x202*(x203|x204)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x205 = 3442466U;
	int8_t x206 = INT8_MAX;
	static int32_t x207 = INT32_MIN;
	volatile int64_t x208 = INT64_MIN;
	static volatile int32_t t41 = -6574220;

	t41 = (x205<(x206*(x207|x208)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x210 = UINT32_MAX;
	int8_t x211 = -6;
	int32_t t42 = -1;

	t42 = (x209<(x210*(x211|x212)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = -6043;
	int64_t x214 = -1LL;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = UINT8_MAX;
	static int32_t t43 = -3;

	t43 = (x213<(x214*(x215|x216)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x218 = 53U;
	uint16_t x219 = 3157U;
	int8_t x220 = 18;
	static int32_t t44 = -4530;

	t44 = (x217<(x218*(x219|x220)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x221 = 19118U;
	uint64_t x222 = UINT64_MAX;
	int32_t x223 = INT32_MAX;
	volatile int32_t t45 = 5393749;

	t45 = (x221<(x222*(x223|x224)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x226 = 0U;
	uint16_t x227 = 182U;
	uint64_t x228 = UINT64_MAX;
	int32_t t46 = 1806;

	t46 = (x225<(x226*(x227|x228)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x229 = 2;
	volatile int64_t x230 = INT64_MIN;
	int32_t x231 = INT32_MIN;
	volatile uint64_t x232 = 8835110082008012LLU;
	int32_t t47 = 416245;

	t47 = (x229<(x230*(x231|x232)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x233 = 294U;
	volatile int64_t x235 = -112178392708LL;

	t48 = (x233<(x234*(x235|x236)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x238 = INT8_MIN;
	static volatile uint16_t x240 = 19262U;
	int32_t t49 = 9400705;

	t49 = (x237<(x238*(x239|x240)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x245 = 191882LL;
	int8_t x246 = -1;
	int64_t x247 = 1917516323LL;
	static uint8_t x248 = UINT8_MAX;
	int32_t t50 = -64;

	t50 = (x245<(x246*(x247|x248)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = 25;
	uint16_t x250 = 0U;
	uint32_t x251 = 113357547U;
	int64_t x252 = -1LL;
	int32_t t51 = -519608;

	t51 = (x249<(x250*(x251|x252)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = 1;
	int64_t x255 = -488119LL;
	int8_t x256 = -1;
	int32_t t52 = -408;

	t52 = (x253<(x254*(x255|x256)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x257 = UINT64_MAX;
	int8_t x258 = INT8_MIN;
	int8_t x259 = 0;
	static int16_t x260 = INT16_MIN;
	static volatile int32_t t53 = -231144;

	t53 = (x257<(x258*(x259|x260)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x261 = 5718U;
	uint32_t x263 = UINT32_MAX;
	int16_t x264 = -1;
	volatile int32_t t54 = -59230929;

	t54 = (x261<(x262*(x263|x264)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x265 = UINT32_MAX;
	int16_t x266 = 396;
	uint64_t x267 = 2725054LLU;
	static int32_t x268 = 736;
	volatile int32_t t55 = 856;

	t55 = (x265<(x266*(x267|x268)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x269 = 13926LLU;
	int64_t x270 = -37203961LL;
	int16_t x271 = INT16_MIN;
	static int8_t x272 = -48;
	int32_t t56 = -48;

	t56 = (x269<(x270*(x271|x272)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = INT64_MAX;
	int16_t x274 = INT16_MAX;
	int32_t t57 = -24;

	t57 = (x273<(x274*(x275|x276)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x285 = INT16_MIN;
	uint64_t x286 = 2004LLU;
	int32_t t58 = 81;

	t58 = (x285<(x286*(x287|x288)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x289 = UINT32_MAX;
	int8_t x290 = INT8_MIN;
	volatile uint32_t x291 = UINT32_MAX;
	static volatile int32_t t59 = -369035;

	t59 = (x289<(x290*(x291|x292)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x293 = 6082U;
	volatile int32_t x294 = -1;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t60 = 43790;

	t60 = (x293<(x294*(x295|x296)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x297 = INT64_MAX;

	t61 = (x297<(x298*(x299|x300)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x302 = 66U;
	int32_t x303 = -18;
	int32_t x304 = INT32_MIN;

	t62 = (x301<(x302*(x303|x304)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = INT8_MAX;
	uint8_t x306 = 2U;
	uint32_t x307 = 106U;
	uint16_t x308 = UINT16_MAX;

	t63 = (x305<(x306*(x307|x308)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x309 = 8301652LLU;
	int32_t x310 = INT32_MAX;
	int16_t x312 = -1;

	t64 = (x309<(x310*(x311|x312)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x313 = INT16_MIN;
	int8_t x314 = INT8_MIN;
	int8_t x315 = -1;
	static volatile int32_t x316 = INT32_MAX;

	t65 = (x313<(x314*(x315|x316)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x318 = -5457;
	int32_t x319 = INT32_MIN;
	int16_t x320 = -1844;
	volatile int32_t t66 = 37773398;

	t66 = (x317<(x318*(x319|x320)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x325 = UINT32_MAX;
	uint16_t x327 = UINT16_MAX;
	uint16_t x328 = 14U;
	int32_t t67 = 665;

	t67 = (x325<(x326*(x327|x328)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x334 = 4604341247997369606LLU;
	uint32_t x335 = UINT32_MAX;
	uint8_t x336 = 0U;

	t68 = (x333<(x334*(x335|x336)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x342 = -1LL;
	static int16_t x343 = INT16_MIN;
	volatile int64_t x344 = INT64_MIN;

	t69 = (x341<(x342*(x343|x344)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x345 = 34U;
	int16_t x346 = -703;
	volatile int8_t x347 = INT8_MAX;
	uint64_t x348 = 2166239797770080851LLU;
	int32_t t70 = 81;

	t70 = (x345<(x346*(x347|x348)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x352 = UINT32_MAX;
	static int32_t t71 = -465791;

	t71 = (x349<(x350*(x351|x352)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x353 = 10LL;
	int32_t x354 = INT32_MIN;
	volatile uint64_t x356 = UINT64_MAX;
	int32_t t72 = 890554;

	t72 = (x353<(x354*(x355|x356)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x358 = INT32_MIN;
	int64_t x359 = 489445395LL;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t73 = 49073;

	t73 = (x357<(x358*(x359|x360)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x361 = 565990359943193213LLU;
	volatile int32_t x362 = INT32_MIN;
	int16_t x364 = 3606;

	t74 = (x361<(x362*(x363|x364)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x365 = 1274;
	volatile int32_t x366 = -12;
	volatile int8_t x367 = INT8_MIN;
	volatile int8_t x368 = INT8_MAX;
	volatile int32_t t75 = 6;

	t75 = (x365<(x366*(x367|x368)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x373 = 3345LLU;
	uint16_t x375 = 1985U;
	uint32_t x376 = UINT32_MAX;
	volatile int32_t t76 = -426211;

	t76 = (x373<(x374*(x375|x376)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x377 = INT8_MAX;
	uint64_t x378 = 52951791560154LLU;
	int8_t x379 = 1;
	int32_t x380 = INT32_MAX;
	volatile int32_t t77 = -46;

	t77 = (x377<(x378*(x379|x380)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x381 = INT16_MIN;
	int16_t x382 = 3354;
	static int64_t x383 = -4LL;
	int64_t x384 = INT64_MIN;

	t78 = (x381<(x382*(x383|x384)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x385 = 389;
	int8_t x386 = -1;

	t79 = (x385<(x386*(x387|x388)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x389 = INT64_MIN;
	volatile int32_t t80 = 4136;

	t80 = (x389<(x390*(x391|x392)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x393 = INT32_MIN;
	static uint8_t x394 = UINT8_MAX;
	static int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	int32_t t81 = 123063;

	t81 = (x393<(x394*(x395|x396)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x397 = -20;
	int16_t x398 = 6459;
	int64_t x399 = INT64_MIN;

	t82 = (x397<(x398*(x399|x400)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x401 = INT32_MIN;
	int8_t x403 = INT8_MAX;
	volatile uint8_t x404 = 5U;
	int32_t t83 = -408694857;

	t83 = (x401<(x402*(x403|x404)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x407 = 0U;
	uint64_t x408 = 194526249LLU;
	static volatile int32_t t84 = 77970;

	t84 = (x405<(x406*(x407|x408)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x413 = INT16_MAX;
	int64_t x415 = -22128201LL;
	int16_t x416 = INT16_MAX;
	int32_t t85 = -441541;

	t85 = (x413<(x414*(x415|x416)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x417 = 0U;
	int16_t x418 = 30;
	uint8_t x419 = 17U;
	volatile uint16_t x420 = UINT16_MAX;
	int32_t t86 = -824847824;

	t86 = (x417<(x418*(x419|x420)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x421 = 1U;
	volatile uint64_t x422 = UINT64_MAX;
	int64_t x423 = INT64_MAX;
	volatile int32_t t87 = 10781;

	t87 = (x421<(x422*(x423|x424)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x425 = 1130250;
	int8_t x426 = INT8_MAX;
	int8_t x427 = INT8_MIN;
	int8_t x428 = 1;
	volatile int32_t t88 = 1925;

	t88 = (x425<(x426*(x427|x428)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x429 = INT16_MIN;
	uint64_t x430 = 21LLU;
	uint64_t x431 = 454LLU;
	volatile int32_t x432 = -1;
	volatile int32_t t89 = 0;

	t89 = (x429<(x430*(x431|x432)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x434 = 107810LLU;
	uint16_t x435 = UINT16_MAX;
	static int32_t t90 = 854247;

	t90 = (x433<(x434*(x435|x436)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x441 = 198U;
	int8_t x442 = 22;
	int8_t x443 = -1;
	int8_t x444 = 38;
	static volatile int32_t t91 = 3024995;

	t91 = (x441<(x442*(x443|x444)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x445 = UINT64_MAX;
	int32_t x446 = -1;
	uint8_t x447 = 107U;
	static int16_t x448 = -1;

	t92 = (x445<(x446*(x447|x448)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x449 = 0U;
	static int8_t x450 = INT8_MAX;
	uint16_t x451 = 1437U;
	int64_t x452 = -340756919465095LL;
	static volatile int32_t t93 = -93431;

	t93 = (x449<(x450*(x451|x452)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x453 = UINT16_MAX;
	int16_t x454 = 2505;
	int32_t x456 = INT32_MAX;
	int32_t t94 = -56124219;

	t94 = (x453<(x454*(x455|x456)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x461 = INT8_MIN;
	volatile uint32_t x462 = 63429278U;
	int8_t x463 = -1;
	int32_t x464 = 628316185;
	int32_t t95 = 6732055;

	t95 = (x461<(x462*(x463|x464)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x465 = 396479796U;
	int32_t x466 = -1;
	uint64_t x467 = 1250986627907707170LLU;
	int8_t x468 = 1;
	volatile int32_t t96 = -3380618;

	t96 = (x465<(x466*(x467|x468)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x469 = 0U;
	int64_t x471 = INT64_MIN;
	static int32_t x472 = INT32_MIN;
	static int32_t t97 = 125688;

	t97 = (x469<(x470*(x471|x472)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x478 = -1974LL;
	int32_t x479 = -1;
	volatile int32_t x480 = -1;
	int32_t t98 = 29;

	t98 = (x477<(x478*(x479|x480)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x481 = INT32_MIN;
	static uint16_t x482 = 1873U;
	static int32_t t99 = 9;

	t99 = (x481<(x482*(x483|x484)));

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

