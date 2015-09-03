#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = INT8_MIN;
int16_t x3 = INT16_MIN;
uint32_t x4 = 151252U;
uint16_t x5 = 1583U;
int16_t x6 = 4267;
uint16_t x8 = 107U;
volatile int32_t x11 = INT32_MIN;
static int8_t x14 = INT8_MAX;
uint8_t x15 = UINT8_MAX;
volatile int32_t t3 = 207408;
int16_t x20 = -1;
int16_t x31 = -1;
volatile uint16_t x32 = 0U;
int32_t t8 = 107711;
int16_t x48 = INT16_MIN;
uint64_t t10 = 4932311354606938LLU;
uint8_t x57 = 7U;
uint16_t x62 = UINT16_MAX;
int8_t x63 = INT8_MIN;
uint8_t x75 = 10U;
int8_t x76 = 23;
uint64_t x78 = 7197884137LLU;
static volatile uint16_t x79 = 413U;
uint64_t t15 = 17LLU;
static volatile int16_t x83 = -1;
int64_t x88 = 426LL;
uint32_t x93 = UINT32_MAX;
int8_t x109 = INT8_MIN;
static uint64_t x112 = UINT64_MAX;
static int8_t x118 = INT8_MIN;
int32_t x119 = -1;
uint32_t t22 = 40U;
static int8_t x123 = INT8_MIN;
uint32_t x129 = 13496302U;
int8_t x130 = -2;
volatile int8_t x132 = INT8_MIN;
uint16_t x142 = UINT16_MAX;
static uint16_t x143 = 46U;
uint64_t x145 = 198173512472901LLU;
uint8_t x157 = 46U;
uint64_t x168 = 65861870765203996LLU;
int16_t x169 = -2912;
int32_t t32 = -618548;
int64_t x173 = INT64_MAX;
volatile int16_t x175 = -1;
int16_t x179 = 6;
volatile int16_t x180 = INT16_MIN;
static volatile int32_t t34 = -6798;
uint16_t x181 = UINT16_MAX;
volatile uint32_t t35 = 69402423U;
int8_t x186 = INT8_MIN;
int32_t x187 = INT32_MIN;
static volatile uint32_t t36 = 117700U;
volatile uint32_t t37 = 23U;
uint32_t x193 = 2059456U;
int16_t x195 = 69;
static uint32_t x201 = 181538U;
static volatile int32_t x211 = -14914982;
uint8_t x217 = UINT8_MAX;
int16_t x225 = -1;
int8_t x232 = -1;
int32_t x238 = INT32_MIN;
int16_t x244 = INT16_MIN;
static int32_t x260 = INT32_MAX;
int16_t x264 = INT16_MIN;
int16_t x279 = 622;
uint32_t x280 = 823839U;
volatile int32_t t53 = -3531;
int16_t x286 = INT16_MIN;
static volatile int64_t t54 = 501LL;
uint64_t t55 = 286017LLU;
int16_t x300 = -1;
int32_t t59 = 2517;
int8_t x326 = -1;
int64_t x328 = INT64_MIN;
uint32_t x330 = UINT32_MAX;
uint64_t t63 = 581LLU;
int16_t x340 = -80;
int16_t x357 = 5585;
static int32_t t65 = -1102705;
static volatile uint32_t x377 = UINT32_MAX;
uint8_t x390 = 5U;
static volatile uint64_t t70 = 2209548479552597LLU;
volatile uint32_t x395 = 21U;
int64_t t72 = -360893231LL;
int32_t x401 = INT32_MIN;
int32_t t74 = -1502;
volatile int16_t x416 = -1;
int8_t x418 = -1;
int8_t x419 = INT8_MIN;
int8_t x430 = INT8_MAX;
int8_t x442 = INT8_MIN;
int8_t x448 = INT8_MIN;
uint8_t x454 = 9U;
int32_t x470 = -1;
uint64_t x471 = UINT64_MAX;
static int8_t x473 = INT8_MIN;
uint32_t t84 = 64031028U;
uint32_t x477 = 19966230U;
int32_t x478 = -64;
int64_t x495 = -1LL;
int32_t t88 = -1;
volatile int8_t x504 = INT8_MIN;
volatile uint64_t t90 = 14LLU;
uint64_t x516 = 19147752478324509LLU;
uint32_t x519 = 6180282U;
uint32_t t93 = 170921594U;
volatile int8_t x532 = -1;
static uint64_t x538 = 4512184285976104612LLU;
static int32_t x544 = INT32_MAX;
uint32_t t99 = 1198769496U;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	volatile uint32_t t0 = 424U;

	t0 = (((x1*x2)+x3)+x4);

	if (t0 != 102228U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x7 = INT64_MIN;
	int64_t t1 = -64497357LL;

	t1 = (((x5*x6)+x7)+x8);

	if (t1 != -9223372036848021040LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	volatile int64_t x10 = INT64_MAX;
	uint64_t x12 = 1790789LLU;
	uint64_t t2 = 7LLU;

	t2 = (((x9*x10)+x11)+x12);

	if (t2 != 9223372034709082950LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	int16_t x16 = -494;

	t3 = (((x13*x14)+x15)+x16);

	if (t3 != -366) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = INT16_MAX;
	volatile uint64_t x18 = UINT64_MAX;
	static int16_t x19 = INT16_MAX;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (((x17*x18)+x19)+x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	int8_t x22 = INT8_MIN;
	uint16_t x23 = 3U;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 17;

	t5 = (((x21*x22)+x23)+x24);

	if (t5 != -125) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 764U;
	uint16_t x26 = UINT16_MAX;
	static uint8_t x27 = UINT8_MAX;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 18;

	t6 = (((x25*x26)+x27)+x28);

	if (t6 != 50036227) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = 8030766660542041LL;
	volatile int16_t x30 = 6;
	static int64_t t7 = 10353LL;

	t7 = (((x29*x30)+x31)+x32);

	if (t7 != 48184599963252245LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile uint8_t x34 = UINT8_MAX;
	int8_t x35 = -2;
	static int16_t x36 = INT16_MAX;

	t8 = (((x33*x34)+x35)+x36);

	if (t8 != 125) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = 1;
	int16_t x42 = -1;
	int64_t x43 = 16609741LL;
	int32_t x44 = -4;
	static int64_t t9 = 70310608103185LL;

	t9 = (((x41*x42)+x43)+x44);

	if (t9 != 16609736LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x45 = 0U;
	int16_t x46 = -1;
	uint64_t x47 = UINT64_MAX;

	t10 = (((x45*x46)+x47)+x48);

	if (t10 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 18;
	int8_t x50 = -1;
	static int16_t x51 = INT16_MIN;
	int64_t x52 = -1LL;
	volatile int64_t t11 = 38812587LL;

	t11 = (((x49*x50)+x51)+x52);

	if (t11 != -32787LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x58 = 69;
	volatile int64_t x59 = -1LL;
	int8_t x60 = -1;
	volatile int64_t t12 = -254841227LL;

	t12 = (((x57*x58)+x59)+x60);

	if (t12 != 481LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = 3052LL;
	static int64_t x64 = -114996952780LL;
	int64_t t13 = 5005250869805LL;

	t13 = (((x61*x62)+x63)+x64);

	if (t13 != -114796940088LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x73 = UINT64_MAX;
	static uint8_t x74 = UINT8_MAX;
	volatile uint64_t t14 = 63325252632668882LLU;

	t14 = (((x73*x74)+x75)+x76);

	if (t14 != 18446744073709551394LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = INT16_MIN;
	uint64_t x80 = 15137426495884LLU;

	t15 = (((x77*x78)+x79)+x80);

	if (t15 != 18446523350868646697LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MIN;
	volatile int8_t x84 = INT8_MIN;
	static int32_t t16 = -3677113;

	t16 = (((x81*x82)+x83)+x84);

	if (t16 != -2147451009) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x85 = -1;
	volatile uint8_t x86 = 1U;
	static uint8_t x87 = 7U;
	volatile int64_t t17 = 5856379LL;

	t17 = (((x85*x86)+x87)+x88);

	if (t17 != 432LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x94 = 0;
	uint32_t x95 = 1U;
	static int32_t x96 = 25352;
	volatile uint32_t t18 = 11775U;

	t18 = (((x93*x94)+x95)+x96);

	if (t18 != 25353U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = UINT64_MAX;
	uint8_t x98 = 18U;
	int8_t x99 = INT8_MAX;
	volatile int16_t x100 = 0;
	uint64_t t19 = 7LLU;

	t19 = (((x97*x98)+x99)+x100);

	if (t19 != 109LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = INT32_MAX;
	static volatile uint32_t x106 = UINT32_MAX;
	int8_t x107 = INT8_MIN;
	static uint32_t x108 = 100U;
	volatile uint32_t t20 = 2021445U;

	t20 = (((x105*x106)+x107)+x108);

	if (t20 != 2147483621U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x110 = 30892256LLU;
	volatile int8_t x111 = -1;
	uint64_t t21 = 133832LLU;

	t21 = (((x109*x110)+x111)+x112);

	if (t21 != 18446744069755342846LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = -15858;
	uint32_t x120 = UINT32_MAX;

	t22 = (((x117*x118)+x119)+x120);

	if (t22 != 2029822U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x121 = 31U;
	volatile int8_t x122 = -9;
	uint16_t x124 = 11U;
	int32_t t23 = 273393553;

	t23 = (((x121*x122)+x123)+x124);

	if (t23 != -396) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x131 = INT32_MIN;
	static uint32_t t24 = 5622991U;

	t24 = (((x129*x130)+x131)+x132);

	if (t24 != 2120490916U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = 356LLU;
	int64_t x134 = INT64_MAX;
	int16_t x135 = -2;
	volatile uint32_t x136 = UINT32_MAX;
	volatile uint64_t t25 = 48243LLU;

	t25 = (((x133*x134)+x135)+x136);

	if (t25 != 4294966937LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = -1LL;
	int16_t x144 = INT16_MIN;
	int64_t t26 = 66934073851212313LL;

	t26 = (((x141*x142)+x143)+x144);

	if (t26 != -98257LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x146 = 315194U;
	int8_t x147 = INT8_MIN;
	int64_t x148 = -12LL;
	volatile uint64_t t27 = 183824LLU;

	t27 = (((x145*x146)+x147)+x148);

	if (t27 != 7122869869254902806LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x149 = UINT32_MAX;
	int16_t x150 = -1;
	volatile uint32_t x151 = UINT32_MAX;
	int16_t x152 = -6;
	uint32_t t28 = 18U;

	t28 = (((x149*x150)+x151)+x152);

	if (t28 != 4294967290U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x153 = 24LLU;
	volatile int16_t x154 = INT16_MIN;
	volatile int8_t x155 = -1;
	static volatile int8_t x156 = -17;
	volatile uint64_t t29 = 5980721941618804680LLU;

	t29 = (((x153*x154)+x155)+x156);

	if (t29 != 18446744073708765166LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x158 = -23;
	static int16_t x159 = INT16_MIN;
	static uint64_t x160 = UINT64_MAX;
	volatile uint64_t t30 = 2655672830LLU;

	t30 = (((x157*x158)+x159)+x160);

	if (t30 != 18446744073709517789LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x165 = INT16_MAX;
	int8_t x166 = INT8_MAX;
	int32_t x167 = INT32_MIN;
	static uint64_t t31 = 34064074956882LLU;

	t31 = (((x165*x166)+x167)+x168);

	if (t31 != 65861868621881757LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x170 = -1;
	uint16_t x171 = 496U;
	uint16_t x172 = UINT16_MAX;

	t32 = (((x169*x170)+x171)+x172);

	if (t32 != 68943) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x174 = UINT64_MAX;
	int32_t x176 = 11;
	volatile uint64_t t33 = 247215863215820760LLU;

	t33 = (((x173*x174)+x175)+x176);

	if (t33 != 9223372036854775819LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = -1;
	volatile int8_t x178 = 0;

	t34 = (((x177*x178)+x179)+x180);

	if (t34 != -32762) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x182 = INT8_MIN;
	uint32_t x183 = 225570814U;
	int8_t x184 = 3;

	t35 = (((x181*x182)+x183)+x184);

	if (t35 != 217182337U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x185 = INT8_MIN;
	uint32_t x188 = UINT32_MAX;

	t36 = (((x185*x186)+x187)+x188);

	if (t36 != 2147500031U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x189 = -189;
	int8_t x190 = -57;
	int8_t x191 = 14;
	uint32_t x192 = 66060717U;

	t37 = (((x189*x190)+x191)+x192);

	if (t37 != 66071504U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x194 = 26U;
	int16_t x196 = INT16_MIN;
	uint32_t t38 = 36U;

	t38 = (((x193*x194)+x195)+x196);

	if (t38 != 53513157U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x202 = 6;
	int16_t x203 = INT16_MIN;
	uint64_t x204 = 4198985891542305LLU;
	volatile uint64_t t39 = 7323LLU;

	t39 = (((x201*x202)+x203)+x204);

	if (t39 != 4198985892598765LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x210 = UINT64_MAX;
	int16_t x212 = INT16_MAX;
	volatile uint64_t t40 = 8811LLU;

	t40 = (((x209*x210)+x211)+x212);

	if (t40 != 18446744073694669529LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x218 = INT16_MIN;
	volatile int8_t x219 = 11;
	int32_t x220 = 941;
	int32_t t41 = -17096;

	t41 = (((x217*x218)+x219)+x220);

	if (t41 != -8354888) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MAX;
	int32_t x224 = 284694180;
	static volatile int32_t t42 = 850;

	t42 = (((x221*x222)+x223)+x224);

	if (t42 != 280532771) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x226 = 45768171305593LL;
	int64_t x227 = -1LL;
	static uint64_t x228 = UINT64_MAX;
	static uint64_t t43 = 218423407689181LLU;

	t43 = (((x225*x226)+x227)+x228);

	if (t43 != 18446698305538246021LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x229 = 35795036749LLU;
	int64_t x230 = INT64_MAX;
	int16_t x231 = INT16_MAX;
	uint64_t t44 = 1412937225009LLU;

	t44 = (((x229*x230)+x231)+x232);

	if (t44 != 9223372001059771825LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MIN;
	int8_t x235 = -1;
	static int32_t x236 = -42979;
	volatile int32_t t45 = -750;

	t45 = (((x233*x234)+x235)+x236);

	if (t45 != 4151324) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x237 = 234442U;
	volatile int16_t x239 = -1;
	int64_t x240 = -1LL;
	static volatile int64_t t46 = 2088718LL;

	t46 = (((x237*x238)+x239)+x240);

	if (t46 != 4294967294LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x241 = INT16_MAX;
	uint16_t x242 = UINT16_MAX;
	uint16_t x243 = UINT16_MAX;
	static int32_t t47 = -4803362;

	t47 = (((x241*x242)+x243)+x244);

	if (t47 != 2147418112) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x245 = -1;
	int32_t x246 = 42704;
	uint32_t x247 = UINT32_MAX;
	static uint32_t x248 = UINT32_MAX;
	uint32_t t48 = 9548U;

	t48 = (((x245*x246)+x247)+x248);

	if (t48 != 4294924590U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x253 = UINT16_MAX;
	int8_t x254 = INT8_MIN;
	static uint64_t x255 = UINT64_MAX;
	volatile int32_t x256 = INT32_MIN;
	uint64_t t49 = 10710412907933LLU;

	t49 = (((x253*x254)+x255)+x256);

	if (t49 != 18446744071553679487LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = INT8_MAX;
	static volatile int8_t x258 = -1;
	volatile uint32_t x259 = UINT32_MAX;
	volatile uint32_t t50 = 4126111U;

	t50 = (((x257*x258)+x259)+x260);

	if (t50 != 2147483519U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x261 = UINT32_MAX;
	static int16_t x262 = -1;
	uint16_t x263 = 9U;
	volatile uint32_t t51 = 3845911U;

	t51 = (((x261*x262)+x263)+x264);

	if (t51 != 4294934538U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int32_t x278 = INT32_MAX;
	uint32_t t52 = 65720658U;

	t52 = (((x277*x278)+x279)+x280);

	if (t52 != 2148308110U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x281 = INT8_MIN;
	static int8_t x282 = INT8_MAX;
	uint8_t x283 = UINT8_MAX;
	static int32_t x284 = -1;

	t53 = (((x281*x282)+x283)+x284);

	if (t53 != -16002) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x285 = -1LL;
	uint32_t x287 = 65065453U;
	volatile int64_t x288 = 2312LL;

	t54 = (((x285*x286)+x287)+x288);

	if (t54 != 65100533LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x293 = UINT8_MAX;
	volatile uint8_t x294 = 4U;
	uint64_t x295 = 2922LLU;
	volatile int8_t x296 = INT8_MIN;

	t55 = (((x293*x294)+x295)+x296);

	if (t55 != 3814LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x297 = 132373367LLU;
	int16_t x298 = INT16_MAX;
	uint64_t x299 = 116647015015LLU;
	volatile uint64_t t56 = 502158LLU;

	t56 = (((x297*x298)+x299)+x300);

	if (t56 != 4454125131503LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x301 = 1U;
	uint64_t x302 = 23929521LLU;
	volatile int16_t x303 = INT16_MAX;
	int8_t x304 = -1;
	uint64_t t57 = 4LLU;

	t57 = (((x301*x302)+x303)+x304);

	if (t57 != 23962287LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x305 = 9951U;
	volatile int32_t x306 = 198;
	static int16_t x307 = INT16_MIN;
	static int32_t x308 = INT32_MIN;
	volatile int32_t t58 = 30499;

	t58 = (((x305*x306)+x307)+x308);

	if (t58 != -2145546118) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x317 = 9;
	int8_t x318 = -1;
	static uint8_t x319 = 0U;
	int8_t x320 = -1;

	t59 = (((x317*x318)+x319)+x320);

	if (t59 != -10) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x321 = 476U;
	volatile uint32_t x322 = UINT32_MAX;
	uint16_t x323 = 190U;
	int8_t x324 = INT8_MIN;
	uint32_t t60 = 272966U;

	t60 = (((x321*x322)+x323)+x324);

	if (t60 != 4294966882U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x325 = -127249215LL;
	volatile int16_t x327 = INT16_MIN;
	volatile int64_t t61 = 3579101204213LL;

	t61 = (((x325*x326)+x327)+x328);

	if (t61 != -9223372036727559361LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x329 = -10LL;
	int16_t x331 = 6;
	int32_t x332 = -18;
	int64_t t62 = 1LL;

	t62 = (((x329*x330)+x331)+x332);

	if (t62 != -42949672962LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x333 = 368U;
	int16_t x334 = -1;
	uint64_t x335 = UINT64_MAX;
	volatile uint8_t x336 = UINT8_MAX;

	t63 = (((x333*x334)+x335)+x336);

	if (t63 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x337 = INT8_MIN;
	static int32_t x338 = -1;
	uint32_t x339 = 189851U;
	uint32_t t64 = 1136U;

	t64 = (((x337*x338)+x339)+x340);

	if (t64 != 189899U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x358 = 0;
	uint8_t x359 = 8U;
	static int8_t x360 = INT8_MAX;

	t65 = (((x357*x358)+x359)+x360);

	if (t65 != 135) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x361 = 0;
	uint8_t x362 = 0U;
	int16_t x363 = -1;
	int16_t x364 = -1;
	int32_t t66 = 1;

	t66 = (((x361*x362)+x363)+x364);

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x365 = -1;
	uint8_t x366 = UINT8_MAX;
	int32_t x367 = -1649242;
	static int64_t x368 = -1LL;
	volatile int64_t t67 = 165180914949262585LL;

	t67 = (((x365*x366)+x367)+x368);

	if (t67 != -1649498LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x373 = 0U;
	int16_t x374 = -799;
	int16_t x375 = 0;
	uint16_t x376 = UINT16_MAX;
	static volatile int32_t t68 = 248912;

	t68 = (((x373*x374)+x375)+x376);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x378 = -783494839;
	uint16_t x379 = UINT16_MAX;
	uint8_t x380 = 22U;
	volatile uint32_t t69 = 1117U;

	t69 = (((x377*x378)+x379)+x380);

	if (t69 != 783560396U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x389 = 21U;
	uint64_t x391 = 341870772928LLU;
	int16_t x392 = INT16_MIN;

	t70 = (((x389*x390)+x391)+x392);

	if (t70 != 341870740265LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x393 = 2U;
	uint8_t x394 = UINT8_MAX;
	uint8_t x396 = UINT8_MAX;
	static volatile uint32_t t71 = 386921U;

	t71 = (((x393*x394)+x395)+x396);

	if (t71 != 786U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x397 = -1;
	volatile int64_t x398 = -1LL;
	int8_t x399 = INT8_MIN;
	int64_t x400 = -1LL;

	t72 = (((x397*x398)+x399)+x400);

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x402 = UINT32_MAX;
	volatile int64_t x403 = -1LL;
	uint8_t x404 = 0U;
	volatile int64_t t73 = -89706007LL;

	t73 = (((x401*x402)+x403)+x404);

	if (t73 != 2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x409 = 0U;
	int32_t x410 = -1;
	static volatile int16_t x411 = -1;
	int32_t x412 = -1;

	t74 = (((x409*x410)+x411)+x412);

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x413 = INT32_MAX;
	int32_t x414 = -1;
	int16_t x415 = INT16_MAX;
	volatile int32_t t75 = 197098;

	t75 = (((x413*x414)+x415)+x416);

	if (t75 != -2147450881) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x417 = 61400U;
	uint64_t x420 = 2121050868667746LLU;
	uint64_t t76 = 228LLU;

	t76 = (((x417*x418)+x419)+x420);

	if (t76 != 2121055163573514LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x429 = 15428761638711829LLU;
	static uint8_t x431 = 1U;
	int16_t x432 = 2999;
	uint64_t t77 = 4107220LLU;

	t77 = (((x429*x430)+x431)+x432);

	if (t77 != 1959452728116405283LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x441 = -1041;
	int32_t x443 = INT32_MIN;
	static int8_t x444 = -9;
	int32_t t78 = 1;

	t78 = (((x441*x442)+x443)+x444);

	if (t78 != -2147350409) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x445 = INT16_MAX;
	int8_t x446 = INT8_MIN;
	int64_t x447 = -1LL;
	static volatile int64_t t79 = 1LL;

	t79 = (((x445*x446)+x447)+x448);

	if (t79 != -4194305LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x449 = INT16_MIN;
	volatile int16_t x450 = -1;
	uint32_t x451 = 7526U;
	int8_t x452 = -1;
	volatile uint32_t t80 = 182U;

	t80 = (((x449*x450)+x451)+x452);

	if (t80 != 40293U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x453 = INT16_MIN;
	int8_t x455 = -1;
	uint64_t x456 = 194074150892569384LLU;
	static uint64_t t81 = 104799LLU;

	t81 = (((x453*x454)+x455)+x456);

	if (t81 != 194074150892274471LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x465 = UINT64_MAX;
	uint32_t x466 = 2482U;
	volatile int64_t x467 = -1268521LL;
	uint64_t x468 = 2559161089LLU;
	volatile uint64_t t82 = 18394980329879154LLU;

	t82 = (((x465*x466)+x467)+x468);

	if (t82 != 2557890086LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x469 = INT64_MAX;
	int8_t x472 = INT8_MAX;
	static volatile uint64_t t83 = 1LLU;

	t83 = (((x469*x470)+x471)+x472);

	if (t83 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x474 = 128551U;
	volatile int16_t x475 = INT16_MIN;
	uint16_t x476 = UINT16_MAX;

	t84 = (((x473*x474)+x475)+x476);

	if (t84 != 4278545535U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x479 = INT32_MIN;
	volatile int32_t x480 = 43;
	volatile uint32_t t85 = 1716940541U;

	t85 = (((x477*x478)+x479)+x480);

	if (t85 != 869644971U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x485 = 14798U;
	static int32_t x486 = 5;
	int8_t x487 = -6;
	int32_t x488 = -463004;
	volatile uint32_t t86 = 206273U;

	t86 = (((x485*x486)+x487)+x488);

	if (t86 != 4294578276U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x493 = INT64_MIN;
	static uint64_t x494 = 1819214149LLU;
	volatile int32_t x496 = INT32_MAX;
	uint64_t t87 = 839911341215633LLU;

	t87 = (((x493*x494)+x495)+x496);

	if (t87 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x497 = INT8_MAX;
	volatile int8_t x498 = INT8_MAX;
	int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MIN;

	t88 = (((x497*x498)+x499)+x500);

	if (t88 != 15873) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x501 = INT16_MIN;
	uint16_t x502 = 6U;
	static int32_t x503 = -1;
	int32_t t89 = -314586;

	t89 = (((x501*x502)+x503)+x504);

	if (t89 != -196737) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x505 = 5U;
	int32_t x506 = -1;
	uint32_t x507 = 2U;
	uint64_t x508 = UINT64_MAX;

	t90 = (((x505*x506)+x507)+x508);

	if (t90 != 4294967292LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x509 = -1;
	uint32_t x510 = 17U;
	int8_t x511 = INT8_MIN;
	static volatile int64_t x512 = -2LL;
	int64_t t91 = 0LL;

	t91 = (((x509*x510)+x511)+x512);

	if (t91 != 4294967149LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x513 = INT8_MAX;
	uint64_t x514 = 20905198695LLU;
	static int16_t x515 = INT16_MAX;
	volatile uint64_t t92 = 852118511684231LLU;

	t92 = (((x513*x514)+x515)+x516);

	if (t92 != 19150407438591541LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x517 = 931;
	uint32_t x518 = UINT32_MAX;
	int16_t x520 = INT16_MIN;

	t93 = (((x517*x518)+x519)+x520);

	if (t93 != 6146583U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x521 = -1LL;
	int64_t x522 = -1LL;
	int16_t x523 = 54;
	int32_t x524 = INT32_MIN;
	volatile int64_t t94 = -237612825733311LL;

	t94 = (((x521*x522)+x523)+x524);

	if (t94 != -2147483593LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x525 = 14407759949715LL;
	int16_t x526 = INT16_MAX;
	static volatile uint64_t x527 = 1082508787961684LLU;
	int32_t x528 = 5;
	volatile uint64_t t95 = 15397267LLU;

	t95 = (((x525*x526)+x527)+x528);

	if (t95 != 473181579060273094LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x529 = INT8_MIN;
	uint16_t x530 = 1U;
	int64_t x531 = -1LL;
	int64_t t96 = -256088191081009LL;

	t96 = (((x529*x530)+x531)+x532);

	if (t96 != -130LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x533 = -1;
	volatile uint16_t x534 = 46U;
	static uint32_t x535 = 872943418U;
	int32_t x536 = INT32_MAX;
	static uint32_t t97 = 25609U;

	t97 = (((x533*x534)+x535)+x536);

	if (t97 != 3020427019U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x537 = 8U;
	int16_t x539 = 837;
	uint64_t x540 = 1098682645502LLU;
	uint64_t t98 = 3LLU;

	t98 = (((x537*x538)+x539)+x540);

	if (t98 != 17650731312781931619LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x541 = INT8_MIN;
	int8_t x542 = INT8_MIN;
	static volatile uint32_t x543 = 10U;

	t99 = (((x541*x542)+x543)+x544);

	if (t99 != 2147500041U) { NG(); } else { ; }
	
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

