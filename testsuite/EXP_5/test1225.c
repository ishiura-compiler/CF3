#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -2;
volatile uint8_t x9 = 10U;
int64_t x12 = INT64_MAX;
int16_t x16 = 7974;
int32_t t3 = -3645;
int64_t x22 = INT64_MIN;
volatile int32_t t5 = 137357705;
int8_t x32 = -1;
int8_t x33 = INT8_MIN;
static volatile int64_t x41 = INT64_MIN;
static int64_t x43 = -1LL;
volatile uint8_t x48 = 10U;
volatile int32_t t11 = -111571;
static volatile int8_t x57 = INT8_MIN;
static uint64_t x60 = 1231343763738502384LLU;
int8_t x64 = -7;
static volatile int16_t x67 = INT16_MIN;
uint64_t t16 = 6114667398LLU;
int8_t x76 = 1;
static int64_t x83 = INT64_MIN;
uint64_t x91 = 24521107LLU;
int16_t x96 = -1;
int64_t x105 = INT64_MAX;
uint64_t x111 = UINT64_MAX;
volatile int32_t t26 = -122992105;
volatile int32_t t28 = 272728185;
volatile int8_t x128 = INT8_MIN;
static int8_t x130 = INT8_MIN;
uint64_t x131 = 486LLU;
uint8_t x135 = UINT8_MAX;
int32_t x139 = -9189;
volatile uint16_t x142 = 11U;
int32_t x145 = INT32_MAX;
uint8_t x151 = 13U;
static uint32_t x158 = UINT32_MAX;
int32_t x163 = 611;
int16_t x164 = INT16_MIN;
int64_t x168 = -1270955650304200506LL;
uint16_t x170 = 3467U;
int64_t t39 = 1688635722252978LL;
int16_t x180 = -91;
volatile int32_t t41 = -34295;
volatile int16_t x182 = INT16_MAX;
uint32_t x186 = 31471U;
int64_t x187 = INT64_MIN;
uint32_t x190 = 166927391U;
static int64_t t45 = 85LL;
int8_t x199 = 22;
uint32_t x202 = 3671615U;
volatile int16_t x203 = INT16_MIN;
uint32_t x212 = UINT32_MAX;
int16_t x216 = INT16_MIN;
volatile int64_t x218 = 49297929591LL;
volatile uint32_t x224 = 110632619U;
int64_t x226 = -468860713953585143LL;
volatile int64_t t53 = 6846495447LL;
int64_t x242 = INT64_MIN;
int8_t x248 = 17;
volatile int16_t x251 = 7817;
static int32_t t58 = 1;
int32_t t59 = 321900;
uint32_t x260 = 18U;
int8_t x265 = INT8_MAX;
uint8_t x266 = 1U;
int64_t x267 = -1LL;
volatile int64_t t62 = -103052874LL;
int8_t x271 = INT8_MIN;
static uint32_t x275 = 31001U;
int64_t t64 = 48LL;
uint8_t x288 = UINT8_MAX;
int64_t x293 = -149341296616186LL;
static int16_t x305 = INT16_MIN;
static int16_t x307 = 1;
static uint16_t x320 = 19394U;
volatile int32_t t75 = 7299725;
static int8_t x325 = -11;
int8_t x330 = 6;
int16_t x335 = 15978;
uint16_t x337 = 1461U;
uint64_t x341 = UINT64_MAX;
int32_t x343 = -1;
uint64_t t80 = 546064618171544130LLU;
static uint8_t x345 = 1U;
uint64_t x348 = 29LLU;
volatile int32_t x349 = INT32_MIN;
volatile int8_t x359 = -1;
int64_t x361 = 662LL;
int32_t t88 = 6386328;
uint64_t x381 = 1115716455332924236LLU;
static int16_t x383 = INT16_MIN;
int8_t x384 = INT8_MAX;
volatile int8_t x396 = -1;
int8_t x397 = INT8_MAX;
static int8_t x404 = INT8_MIN;
int32_t t94 = -1456626;
uint64_t x405 = 2969530158LLU;
int16_t x414 = -1;
volatile int64_t t98 = 846LL;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint32_t x2 = 3510050U;
	uint16_t x3 = 57U;
	int8_t x4 = 1;

	t0 = (x1*((x2==x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MIN;
	static volatile int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = -16;

	t1 = (x5*((x6==x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = INT64_MIN;
	int8_t x11 = 3;
	static volatile int64_t t2 = -2635153223LL;

	t2 = (x9*((x10==x11)/x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 35U;
	uint32_t x14 = UINT32_MAX;
	int16_t x15 = 1;

	t3 = (x13*((x14==x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 6697;
	static uint32_t x18 = 5517625U;
	uint8_t x19 = UINT8_MAX;
	volatile int64_t x20 = -1LL;
	int64_t t4 = 895417LL;

	t4 = (x17*((x18==x19)/x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 2198U;
	int8_t x23 = 31;
	int16_t x24 = INT16_MAX;

	t5 = (x21*((x22==x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	static int64_t x26 = INT64_MIN;
	int64_t x27 = -1LL;
	int16_t x28 = INT16_MIN;
	static uint32_t t6 = 385U;

	t6 = (x25*((x26==x27)/x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 4U;
	uint64_t x30 = UINT64_MAX;
	uint8_t x31 = 55U;
	volatile int32_t t7 = 223454196;

	t7 = (x29*((x30==x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = -1;
	int8_t x35 = INT8_MIN;
	volatile int64_t x36 = 3686417234LL;
	int64_t t8 = -1649218187LL;

	t8 = (x33*((x34==x35)/x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int64_t x38 = INT64_MIN;
	int32_t x39 = -156;
	int16_t x40 = INT16_MIN;
	volatile int64_t t9 = 573573212181116235LL;

	t9 = (x37*((x38==x39)/x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x42 = 21U;
	uint32_t x44 = 88U;
	static volatile int64_t t10 = 408966781613196114LL;

	t10 = (x41*((x42==x43)/x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int32_t x46 = INT32_MAX;
	int32_t x47 = INT32_MIN;

	t11 = (x45*((x46==x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	uint16_t x50 = 167U;
	int32_t x51 = INT32_MAX;
	int8_t x52 = INT8_MIN;
	volatile int64_t t12 = 697241LL;

	t12 = (x49*((x50==x51)/x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x58 = 0;
	int16_t x59 = 12;
	uint64_t t13 = 2808778431303LLU;

	t13 = (x57*((x58==x59)/x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x61 = 3281U;
	int64_t x62 = -34061517184136LL;
	int64_t x63 = 507893866910979LL;
	static int32_t t14 = 339;

	t14 = (x61*((x62==x63)/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = 11LLU;
	static int32_t x66 = INT32_MAX;
	int16_t x68 = -28;
	volatile uint64_t t15 = 1040793929LLU;

	t15 = (x65*((x66==x67)/x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 12U;
	uint64_t x70 = 21558039014LLU;
	uint8_t x71 = 0U;
	uint64_t x72 = 165320942217516LLU;

	t16 = (x69*((x70==x71)/x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MIN;
	int32_t x75 = -1;
	int32_t t17 = 190663;

	t17 = (x73*((x74==x75)/x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	uint16_t x78 = UINT16_MAX;
	volatile int8_t x79 = -3;
	int32_t x80 = INT32_MAX;
	int32_t t18 = -90823;

	t18 = (x77*((x78==x79)/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x81 = UINT64_MAX;
	static volatile int16_t x82 = -1;
	int32_t x84 = INT32_MAX;
	static uint64_t t19 = 11027468LLU;

	t19 = (x81*((x82==x83)/x84));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 208653U;
	static uint64_t x86 = UINT64_MAX;
	volatile uint8_t x87 = 90U;
	volatile int64_t x88 = -1LL;
	int64_t t20 = -830LL;

	t20 = (x85*((x86==x87)/x88));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x89 = UINT32_MAX;
	static int32_t x90 = INT32_MAX;
	volatile int8_t x92 = INT8_MIN;
	volatile uint32_t t21 = 0U;

	t21 = (x89*((x90==x91)/x92));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = 0;
	static int64_t x94 = 92320649089LL;
	volatile int8_t x95 = INT8_MAX;
	static int32_t t22 = 256273;

	t22 = (x93*((x94==x95)/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 17LLU;
	uint32_t x102 = 8090U;
	int16_t x103 = INT16_MAX;
	volatile int32_t x104 = INT32_MAX;
	volatile uint64_t t23 = 9533967528306206LLU;

	t23 = (x101*((x102==x103)/x104));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x106 = 15479285;
	uint64_t x107 = UINT64_MAX;
	volatile int32_t x108 = INT32_MIN;
	int64_t t24 = 9895545495LL;

	t24 = (x105*((x106==x107)/x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MIN;
	uint32_t x112 = 3608U;
	static uint32_t t25 = 1093161U;

	t25 = (x109*((x110==x111)/x112));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = UINT8_MAX;
	volatile int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MIN;

	t26 = (x113*((x114==x115)/x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 4026155;
	volatile uint32_t x118 = UINT32_MAX;
	volatile int16_t x119 = -1;
	int8_t x120 = INT8_MIN;
	static int32_t t27 = -177944;

	t27 = (x117*((x118==x119)/x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = 87358;
	int8_t x122 = -1;
	volatile int64_t x123 = -253933770LL;
	int16_t x124 = 1;

	t28 = (x121*((x122==x123)/x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	volatile int32_t x126 = INT32_MAX;
	volatile int16_t x127 = 1;
	static int64_t t29 = -47640380945819LL;

	t29 = (x125*((x126==x127)/x128));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x132 = 45268792057501LL;
	volatile int64_t t30 = 58637060999LL;

	t30 = (x129*((x130==x131)/x132));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = UINT16_MAX;
	int16_t x134 = INT16_MIN;
	static uint32_t x136 = 197551037U;
	uint32_t t31 = 5738U;

	t31 = (x133*((x134==x135)/x136));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = 210375LL;
	static uint32_t x138 = 15U;
	uint32_t x140 = 6203193U;
	int64_t t32 = 41LL;

	t32 = (x137*((x138==x139)/x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MIN;
	uint16_t x143 = UINT16_MAX;
	int32_t x144 = 13440517;
	static int32_t t33 = -50;

	t33 = (x141*((x142==x143)/x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x146 = 35;
	volatile int16_t x147 = INT16_MAX;
	uint64_t x148 = 108353609LLU;
	uint64_t t34 = 53233256760617LLU;

	t34 = (x145*((x146==x147)/x148));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MAX;
	uint8_t x150 = 12U;
	int64_t x152 = INT64_MIN;
	int64_t t35 = -22784374LL;

	t35 = (x149*((x150==x151)/x152));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MAX;
	int8_t x159 = 0;
	static int32_t x160 = INT32_MIN;
	static volatile int64_t t36 = 1048628021481120LL;

	t36 = (x157*((x158==x159)/x160));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MAX;
	int32_t t37 = 1866097;

	t37 = (x161*((x162==x163)/x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = 132LL;
	static int8_t x167 = -1;
	int64_t t38 = -1087986298164980518LL;

	t38 = (x165*((x166==x167)/x168));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = -1LL;
	uint32_t x171 = 38831514U;
	int32_t x172 = 2816;

	t39 = (x169*((x170==x171)/x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x173 = INT64_MIN;
	int8_t x174 = 3;
	int32_t x175 = INT32_MAX;
	volatile int16_t x176 = -1;
	volatile int64_t t40 = 230231954314LL;

	t40 = (x173*((x174==x175)/x176));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = 219959;
	int64_t x179 = INT64_MAX;

	t41 = (x177*((x178==x179)/x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x181 = INT32_MIN;
	static volatile uint16_t x183 = 20U;
	int64_t x184 = -364083LL;
	volatile int64_t t42 = -142916862559299LL;

	t42 = (x181*((x182==x183)/x184));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x185 = INT8_MAX;
	uint8_t x188 = 1U;
	static int32_t t43 = -3490301;

	t43 = (x185*((x186==x187)/x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = INT8_MAX;
	volatile int16_t x191 = -1;
	int32_t x192 = INT32_MAX;
	int32_t t44 = -278550;

	t44 = (x189*((x190==x191)/x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x193 = INT64_MIN;
	volatile int32_t x194 = INT32_MAX;
	int64_t x195 = INT64_MIN;
	uint32_t x196 = 161U;

	t45 = (x193*((x194==x195)/x196));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = UINT32_MAX;
	int32_t x198 = -1;
	int32_t x200 = INT32_MIN;
	uint32_t t46 = 48U;

	t46 = (x197*((x198==x199)/x200));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	static uint8_t x204 = 3U;
	volatile int32_t t47 = 189179365;

	t47 = (x201*((x202==x203)/x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = INT32_MIN;
	volatile int64_t x210 = INT64_MIN;
	static volatile int8_t x211 = -1;
	volatile uint32_t t48 = 9213U;

	t48 = (x209*((x210==x211)/x212));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x213 = 0U;
	int8_t x214 = INT8_MAX;
	uint32_t x215 = 89965U;
	uint32_t t49 = 932809783U;

	t49 = (x213*((x214==x215)/x216));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x217 = INT64_MIN;
	int8_t x219 = INT8_MIN;
	int64_t x220 = 2563734676643LL;
	volatile int64_t t50 = 4363709304LL;

	t50 = (x217*((x218==x219)/x220));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MIN;
	volatile int32_t x222 = -621;
	int16_t x223 = 2690;
	uint32_t t51 = 151204U;

	t51 = (x221*((x222==x223)/x224));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = UINT16_MAX;
	volatile int32_t x227 = INT32_MIN;
	uint64_t x228 = 3487010713574474LLU;
	uint64_t t52 = 1LLU;

	t52 = (x225*((x226==x227)/x228));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = 1861619149005217773LL;
	volatile uint64_t x230 = 133531810644909524LLU;
	uint32_t x231 = 0U;
	int32_t x232 = -1;

	t53 = (x229*((x230==x231)/x232));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x233 = 1875U;
	static int16_t x234 = -1;
	uint32_t x235 = UINT32_MAX;
	uint32_t x236 = UINT32_MAX;
	uint32_t t54 = 127U;

	t54 = (x233*((x234==x235)/x236));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x237 = UINT8_MAX;
	int32_t x238 = 572;
	int8_t x239 = INT8_MIN;
	uint8_t x240 = 45U;
	int32_t t55 = -97961;

	t55 = (x237*((x238==x239)/x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x241 = -1;
	static uint16_t x243 = UINT16_MAX;
	volatile int16_t x244 = INT16_MAX;
	int32_t t56 = 30303142;

	t56 = (x241*((x242==x243)/x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x245 = 1892359048708868LLU;
	volatile uint32_t x246 = 694U;
	uint64_t x247 = 212460030018111LLU;
	volatile uint64_t t57 = 548445421LLU;

	t57 = (x245*((x246==x247)/x248));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x249 = 0U;
	volatile int8_t x250 = -1;
	volatile int8_t x252 = 3;

	t58 = (x249*((x250==x251)/x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = 50;
	uint8_t x254 = 3U;
	int16_t x255 = 1355;
	static uint16_t x256 = UINT16_MAX;

	t59 = (x253*((x254==x255)/x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MAX;
	uint8_t x259 = 61U;
	volatile uint32_t t60 = 21U;

	t60 = (x257*((x258==x259)/x260));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x261 = 0;
	int64_t x262 = INT64_MIN;
	volatile int32_t x263 = INT32_MIN;
	volatile uint8_t x264 = 4U;
	volatile int32_t t61 = -32449;

	t61 = (x261*((x262==x263)/x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x268 = 521LL;

	t62 = (x265*((x266==x267)/x268));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = -3;
	int32_t x272 = 2449;
	int64_t t63 = 5151850208632LL;

	t63 = (x269*((x270==x271)/x272));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MIN;
	uint8_t x274 = 0U;
	static int8_t x276 = -1;

	t64 = (x273*((x274==x275)/x276));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = -1;
	volatile int8_t x278 = -2;
	static int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MIN;
	volatile int64_t t65 = 815259LL;

	t65 = (x277*((x278==x279)/x280));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = UINT32_MAX;
	static int64_t x282 = -5026192357LL;
	int64_t x283 = -1LL;
	uint8_t x284 = UINT8_MAX;
	uint32_t t66 = 628257569U;

	t66 = (x281*((x282==x283)/x284));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = 1;
	static int8_t x286 = -1;
	int32_t x287 = INT32_MAX;
	static volatile int32_t t67 = -4;

	t67 = (x285*((x286==x287)/x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x289 = UINT64_MAX;
	uint64_t x290 = 91314987LLU;
	static uint16_t x291 = UINT16_MAX;
	uint32_t x292 = 2719131U;
	uint64_t t68 = 57946LLU;

	t68 = (x289*((x290==x291)/x292));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x294 = 1LL;
	uint8_t x295 = 31U;
	volatile int16_t x296 = INT16_MAX;
	int64_t t69 = -851LL;

	t69 = (x293*((x294==x295)/x296));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x297 = UINT8_MAX;
	int16_t x298 = 1;
	int64_t x299 = -1LL;
	static int32_t x300 = -1;
	volatile int32_t t70 = 832;

	t70 = (x297*((x298==x299)/x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x301 = -1;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = INT64_MIN;
	uint32_t x304 = 56699U;
	volatile uint32_t t71 = 175179077U;

	t71 = (x301*((x302==x303)/x304));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x306 = INT8_MIN;
	static int32_t x308 = INT32_MIN;
	int32_t t72 = -112610;

	t72 = (x305*((x306==x307)/x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int64_t x314 = -1LL;
	int8_t x315 = INT8_MAX;
	uint32_t x316 = 15460U;
	static uint32_t t73 = 2573063U;

	t73 = (x313*((x314==x315)/x316));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = 113490;
	volatile int8_t x318 = INT8_MAX;
	int8_t x319 = INT8_MIN;
	int32_t t74 = 0;

	t74 = (x317*((x318==x319)/x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = -121;
	uint32_t x322 = 3876371U;
	volatile uint64_t x323 = 5LLU;
	uint16_t x324 = UINT16_MAX;

	t75 = (x321*((x322==x323)/x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x326 = INT64_MIN;
	uint16_t x327 = 809U;
	int16_t x328 = INT16_MIN;
	static volatile int32_t t76 = 103;

	t76 = (x325*((x326==x327)/x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x329 = 223U;
	int16_t x331 = INT16_MIN;
	uint16_t x332 = 12695U;
	volatile int32_t t77 = -1385;

	t77 = (x329*((x330==x331)/x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x333 = -1;
	static uint16_t x334 = 19U;
	int64_t x336 = INT64_MIN;
	int64_t t78 = -343851787217256LL;

	t78 = (x333*((x334==x335)/x336));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x338 = INT16_MIN;
	uint8_t x339 = 26U;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t79 = 1767221339121668981LLU;

	t79 = (x337*((x338==x339)/x340));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x342 = INT8_MIN;
	static uint16_t x344 = 1253U;

	t80 = (x341*((x342==x343)/x344));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x346 = 954325094667LLU;
	int16_t x347 = INT16_MIN;
	uint64_t t81 = 135904LLU;

	t81 = (x345*((x346==x347)/x348));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x350 = -132648;
	int16_t x351 = INT16_MIN;
	uint64_t x352 = UINT64_MAX;
	uint64_t t82 = 238268858LLU;

	t82 = (x349*((x350==x351)/x352));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x353 = 1;
	static int32_t x354 = 135;
	uint8_t x355 = 11U;
	int16_t x356 = INT16_MIN;
	int32_t t83 = -362932;

	t83 = (x353*((x354==x355)/x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = -191;
	int8_t x358 = INT8_MAX;
	volatile uint32_t x360 = 2473U;
	uint32_t t84 = 4031745U;

	t84 = (x357*((x358==x359)/x360));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x362 = INT64_MIN;
	volatile uint16_t x363 = UINT16_MAX;
	static int64_t x364 = INT64_MIN;
	static int64_t t85 = -88201575392654132LL;

	t85 = (x361*((x362==x363)/x364));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = -1;
	static int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MIN;
	volatile int32_t t86 = -131954;

	t86 = (x369*((x370==x371)/x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x373 = UINT8_MAX;
	int16_t x374 = 2177;
	int8_t x375 = INT8_MAX;
	static int8_t x376 = 9;
	int32_t t87 = -21782154;

	t87 = (x373*((x374==x375)/x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x377 = 151433432;
	int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -806;

	t88 = (x377*((x378==x379)/x380));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x382 = INT8_MIN;
	uint64_t t89 = 240LLU;

	t89 = (x381*((x382==x383)/x384));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x385 = -1LL;
	static volatile uint16_t x386 = UINT16_MAX;
	volatile uint16_t x387 = UINT16_MAX;
	uint16_t x388 = UINT16_MAX;
	int64_t t90 = 617568083740544458LL;

	t90 = (x385*((x386==x387)/x388));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x389 = INT8_MAX;
	uint32_t x390 = 121288U;
	volatile uint64_t x391 = UINT64_MAX;
	int16_t x392 = -123;
	int32_t t91 = -2059005;

	t91 = (x389*((x390==x391)/x392));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x393 = 1U;
	volatile int32_t x394 = INT32_MIN;
	uint32_t x395 = 3U;
	int32_t t92 = -43;

	t92 = (x393*((x394==x395)/x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x398 = 35;
	int32_t x399 = INT32_MAX;
	int8_t x400 = 6;
	volatile int32_t t93 = -1458729;

	t93 = (x397*((x398==x399)/x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = -1;
	int32_t x402 = INT32_MAX;
	uint8_t x403 = UINT8_MAX;

	t94 = (x401*((x402==x403)/x404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x406 = 45122357LLU;
	volatile int64_t x407 = -13122937LL;
	uint32_t x408 = 9U;
	volatile uint64_t t95 = 9367LLU;

	t95 = (x405*((x406==x407)/x408));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = -3677;
	uint32_t x410 = 7U;
	volatile int16_t x411 = INT16_MIN;
	volatile uint64_t x412 = 107266162317LLU;
	uint64_t t96 = 5271131071LLU;

	t96 = (x409*((x410==x411)/x412));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x413 = UINT64_MAX;
	static int16_t x415 = -1;
	static volatile uint64_t x416 = 2568929545954743892LLU;
	uint64_t t97 = 8065220LLU;

	t97 = (x413*((x414==x415)/x416));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = INT64_MIN;
	static volatile int32_t x418 = INT32_MIN;
	static int16_t x419 = INT16_MIN;
	volatile uint8_t x420 = 24U;

	t98 = (x417*((x418==x419)/x420));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = 0;
	uint8_t x422 = UINT8_MAX;
	int8_t x423 = INT8_MIN;
	volatile int32_t x424 = -1;
	volatile int32_t t99 = 0;

	t99 = (x421*((x422==x423)/x424));

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

