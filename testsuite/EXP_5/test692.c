#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 7503LLU;
int64_t x3 = INT64_MAX;
volatile uint16_t x6 = UINT16_MAX;
uint8_t x7 = UINT8_MAX;
volatile uint32_t t3 = 34U;
int8_t x21 = -1;
int64_t x22 = INT64_MIN;
volatile uint64_t t7 = 2278LLU;
uint16_t x34 = 1U;
int64_t x42 = INT64_MAX;
int16_t x43 = 3908;
uint64_t t9 = 45143540933LLU;
volatile uint8_t x49 = UINT8_MAX;
volatile uint64_t x51 = UINT64_MAX;
static uint8_t x64 = 6U;
uint64_t t14 = 1115312701540232849LLU;
volatile int32_t x73 = INT32_MIN;
volatile int16_t x77 = 221;
volatile int64_t x78 = INT64_MIN;
static volatile int32_t t17 = -28837306;
uint8_t x85 = 8U;
static volatile uint64_t t20 = 4037520520979553028LLU;
uint16_t x103 = UINT16_MAX;
int8_t x109 = 1;
int16_t x117 = INT16_MIN;
int32_t x119 = -1;
volatile int64_t x121 = -380337906LL;
int8_t x123 = 4;
uint32_t x124 = 233423U;
int32_t x130 = INT32_MIN;
int16_t x131 = INT16_MIN;
volatile uint64_t t27 = UINT64_MAX;
uint16_t x143 = UINT16_MAX;
volatile uint32_t t31 = 1846822289U;
int16_t x150 = -24;
uint64_t x152 = 7377LLU;
static int8_t x155 = INT8_MAX;
uint64_t x156 = 98251603764LLU;
int32_t x168 = INT32_MAX;
int32_t x170 = 43546;
int8_t x176 = INT8_MAX;
int64_t x177 = 25576708229310868LL;
uint64_t t37 = 13184LLU;
volatile int8_t x184 = 1;
volatile uint64_t t38 = 204LLU;
volatile uint16_t x185 = 8U;
volatile int16_t x186 = INT16_MAX;
int64_t x195 = INT64_MIN;
uint32_t x198 = 4U;
volatile uint32_t t42 = 1390955U;
volatile int64_t t43 = 0LL;
int16_t x205 = -1;
static int32_t x207 = 1;
int8_t x220 = INT8_MIN;
int8_t x227 = -1;
static int16_t x234 = INT16_MIN;
volatile uint32_t t47 = 299927630U;
int8_t x241 = INT8_MAX;
uint8_t x243 = 1U;
int8_t x247 = 6;
int64_t x249 = -658LL;
uint16_t x255 = 435U;
int32_t x256 = INT32_MIN;
int32_t x281 = -1;
uint32_t x283 = UINT32_MAX;
static uint16_t x285 = 453U;
volatile int64_t x288 = -1LL;
uint64_t t58 = 52LLU;
uint64_t x293 = 1925624349345623LLU;
int8_t x294 = 1;
static volatile int8_t x303 = -1;
uint64_t x304 = 6LLU;
uint64_t t61 = 529LLU;
volatile int32_t x312 = INT32_MAX;
uint64_t t66 = 32063790LLU;
int32_t x329 = -1;
volatile int16_t x330 = INT16_MIN;
static volatile int16_t x331 = INT16_MIN;
volatile int32_t x334 = 6;
int8_t x355 = -1;
uint16_t x362 = UINT16_MAX;
int64_t x366 = -1505585404LL;
static volatile int64_t t74 = -4069712284LL;
int8_t x372 = INT8_MIN;
uint16_t x385 = 389U;
int32_t x390 = -136;
int32_t x394 = -5;
int64_t x395 = -1481708881LL;
int32_t x399 = 1;
static int32_t x406 = INT32_MIN;
volatile uint32_t t81 = 39U;
volatile int32_t x409 = INT32_MIN;
volatile uint16_t x411 = 32200U;
volatile int64_t x426 = INT64_MIN;
volatile int32_t t86 = 5479;
static volatile uint32_t x436 = UINT32_MAX;
static uint16_t x446 = 7U;
int32_t t89 = 10;
volatile uint16_t x463 = 1091U;
int32_t x475 = INT32_MIN;
volatile int8_t x483 = INT8_MIN;
uint32_t t93 = 218780371U;
volatile int8_t x492 = -20;
volatile uint32_t t95 = 15265U;
int8_t x500 = -5;
volatile int16_t x503 = INT16_MIN;
static uint32_t x506 = 101U;
static int16_t x509 = INT16_MIN;


void f0(void) {
	volatile int16_t x2 = INT16_MAX;
	int64_t x4 = 2560LL;
	volatile uint64_t t0 = 112260LLU;

	t0 = (x1*((x2%x3)-x4));

	if (t0 != 226643121LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int64_t x8 = 7LL;
	int64_t t1 = -24825LL;

	t1 = (x5*((x6%x7)-x8));

	if (t1 != 229376LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 10027573958681LL;
	int64_t x10 = INT64_MIN;
	uint16_t x11 = 33U;
	int8_t x12 = -1;
	volatile int64_t t2 = 124LL;

	t2 = (x9*((x10%x11)-x12));

	if (t2 != -70193017710767LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = 2999182U;
	int8_t x14 = -1;
	int32_t x15 = INT32_MIN;
	volatile uint32_t x16 = UINT32_MAX;

	t3 = (x13*((x14%x15)-x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	int8_t x18 = -9;
	int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;
	volatile uint64_t t4 = 77928897225397798LLU;

	t4 = (x17*((x18%x19)-x20));

	if (t4 != 18446744073709518857LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x23 = -79500470638989060LL;
	int32_t x24 = INT32_MIN;
	volatile int64_t t5 = 976118LL;

	t5 = (x21*((x22%x23)-x24));

	if (t5 != 1317440584561200LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 1;
	static volatile int64_t x26 = -1LL;
	int8_t x27 = INT8_MIN;
	volatile int32_t x28 = INT32_MAX;
	volatile int64_t t6 = -3907098476836LL;

	t6 = (x25*((x26%x27)-x28));

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = 75797054163528LL;
	int16_t x30 = INT16_MAX;
	uint32_t x31 = 589074U;
	uint64_t x32 = UINT64_MAX;

	t7 = (x29*((x30%x31)-x32));

	if (t7 != 2483717870830485504LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 0;
	static int32_t x35 = -14672922;
	volatile int8_t x36 = INT8_MAX;
	volatile int32_t t8 = -24024243;

	t8 = (x33*((x34%x35)-x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 8504471LLU;
	volatile uint16_t x44 = 1458U;

	t9 = (x41*((x42%x43)-x44));

	if (t9 != 2525827887LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 30U;
	static uint16_t x46 = 7266U;
	volatile uint32_t x47 = 162155U;
	int32_t x48 = -1;
	volatile uint32_t t10 = 7766U;

	t10 = (x45*((x46%x47)-x48));

	if (t10 != 218010U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MIN;
	uint16_t x52 = 39U;
	static uint64_t t11 = 1415833269LLU;

	t11 = (x49*((x50%x51)-x52));

	if (t11 != 18446744073709509031LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x61 = INT32_MIN;
	volatile int16_t x62 = 0;
	uint32_t x63 = 58U;
	static volatile uint32_t t12 = 121625831U;

	t12 = (x61*((x62%x63)-x64));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 201991666193257LLU;
	uint32_t x66 = UINT32_MAX;
	int32_t x67 = -6914980;
	int16_t x68 = INT16_MIN;
	volatile uint64_t t13 = 70114102232742293LLU;

	t13 = (x65*((x66%x67)-x68));

	if (t13 != 1434443217276819163LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 297U;
	uint64_t x70 = 424LLU;
	int16_t x71 = 3629;
	static int64_t x72 = 2LL;

	t14 = (x69*((x70%x71)-x72));

	if (t14 != 125334LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = 218000LL;
	int32_t x75 = INT32_MIN;
	int16_t x76 = -1;
	static volatile int64_t t15 = 86587112LL;

	t15 = (x73*((x74%x75)-x76));

	if (t15 != -468153582747648LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x79 = -1;
	uint16_t x80 = UINT16_MAX;
	static volatile int64_t t16 = 28726LL;

	t16 = (x77*((x78%x79)-x80));

	if (t16 != -14483235LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = -1;
	static volatile uint16_t x83 = 33U;
	int8_t x84 = -1;

	t17 = (x81*((x82%x83)-x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x86 = -1LL;
	uint16_t x87 = 19U;
	static int16_t x88 = -811;
	volatile int64_t t18 = -127455235LL;

	t18 = (x85*((x86%x87)-x88));

	if (t18 != 6480LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	volatile int32_t x90 = 1;
	uint64_t x91 = UINT64_MAX;
	static int32_t x92 = INT32_MIN;
	volatile uint64_t t19 = 182908691LLU;

	t19 = (x89*((x90%x91)-x92));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x93 = 3120U;
	int8_t x94 = 1;
	static int64_t x95 = INT64_MIN;
	volatile uint64_t x96 = 3570527397758722LLU;

	t20 = (x93*((x94%x95)-x96));

	if (t20 != 7306698592702342096LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = INT64_MIN;
	int32_t x102 = INT32_MIN;
	uint64_t x104 = UINT64_MAX;
	uint64_t t21 = 20632677189LLU;

	t21 = (x101*((x102%x103)-x104));

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = UINT32_MAX;
	static uint8_t x106 = UINT8_MAX;
	int16_t x107 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;
	uint32_t t22 = 55951338U;

	t22 = (x105*((x106%x107)-x108));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = 1;
	static int64_t x111 = INT64_MIN;
	static int32_t x112 = -2463224;
	volatile int64_t t23 = 1701LL;

	t23 = (x109*((x110%x111)-x112));

	if (t23 != 2463225LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x118 = UINT32_MAX;
	static uint8_t x120 = UINT8_MAX;
	volatile uint32_t t24 = 379233345U;

	t24 = (x117*((x118%x119)-x120));

	if (t24 != 8355840U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x122 = -1;
	int64_t t25 = 100548468LL;

	t25 = (x121*((x122%x123)-x124));

	if (t25 != -1633450087703752032LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 3243287970859145LLU;
	volatile uint8_t x126 = UINT8_MAX;
	int8_t x127 = INT8_MAX;
	int64_t x128 = 293868361552492564LL;
	uint64_t t26 = 412310940200875192LLU;

	t26 = (x125*((x126%x127)-x128));

	if (t26 != 15301835182424122837LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x129 = UINT64_MAX;
	uint64_t x132 = UINT64_MAX;

	t27 = (x129*((x130%x131)-x132));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x133 = 6U;
	int32_t x134 = INT32_MAX;
	uint32_t x135 = 1U;
	int16_t x136 = 1;
	volatile uint32_t t28 = 192824U;

	t28 = (x133*((x134%x135)-x136));

	if (t28 != 4294967290U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x137 = 16U;
	int64_t x138 = INT64_MAX;
	uint16_t x139 = 14U;
	int16_t x140 = INT16_MIN;
	volatile int64_t t29 = 65328217LL;

	t29 = (x137*((x138%x139)-x140));

	if (t29 != 524400LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = 10654296U;
	uint16_t x142 = 1705U;
	static volatile int8_t x144 = 6;
	volatile uint32_t t30 = 220089U;

	t30 = (x141*((x142%x143)-x144));

	if (t30 != 921779720U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = 3796224U;
	int16_t x146 = -2668;
	volatile uint16_t x147 = 9588U;
	uint32_t x148 = 0U;

	t31 = (x145*((x146%x147)-x148));

	if (t31 != 2756576256U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MIN;
	uint32_t x151 = UINT32_MAX;
	uint64_t t32 = 8791297336494LLU;

	t32 = (x149*((x150%x151)-x152));

	if (t32 != 18446603336463712256LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x153 = INT32_MIN;
	volatile int16_t x154 = -27;
	volatile uint64_t t33 = 0LLU;

	t33 = (x153*((x154%x155)-x156));

	if (t33 != 8079527720142241792LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x165 = 1099241960015LLU;
	static int16_t x166 = INT16_MAX;
	uint16_t x167 = UINT16_MAX;
	uint64_t t34 = 14648298LLU;

	t34 = (x165*((x166%x167)-x168));

	if (t34 != 615127067686043648LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x171 = -1LL;
	volatile int32_t x172 = INT32_MIN;
	volatile int64_t t35 = -5308LL;

	t35 = (x169*((x170%x171)-x172));

	if (t35 != 140735340871680LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x173 = 346U;
	volatile int16_t x174 = -165;
	volatile int32_t x175 = INT32_MIN;
	static uint32_t t36 = 2U;

	t36 = (x173*((x174%x175)-x176));

	if (t36 != 4294866264U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x178 = INT8_MIN;
	volatile uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MIN;

	t37 = (x177*((x178%x179)-x180));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = 664620LLU;
	static int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MAX;

	t38 = (x181*((x182%x183)-x184));

	if (t38 != 18446744073707557756LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x187 = INT16_MAX;
	static int16_t x188 = 10;
	int32_t t39 = -299;

	t39 = (x185*((x186%x187)-x188));

	if (t39 != -80) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = 0LL;
	uint8_t x190 = 20U;
	uint16_t x191 = 7U;
	int8_t x192 = INT8_MIN;
	volatile int64_t t40 = 912LL;

	t40 = (x189*((x190%x191)-x192));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = -1;
	static volatile int32_t x194 = -131292;
	uint16_t x196 = 334U;
	volatile int64_t t41 = 31LL;

	t41 = (x193*((x194%x195)-x196));

	if (t41 != 131626LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x197 = 2U;
	uint8_t x199 = UINT8_MAX;
	int8_t x200 = INT8_MAX;

	t42 = (x197*((x198%x199)-x200));

	if (t42 != 4294967050U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x201 = INT16_MAX;
	volatile int64_t x202 = INT64_MIN;
	uint16_t x203 = 2206U;
	uint32_t x204 = 10U;

	t43 = (x201*((x202%x203)-x204));

	if (t43 != -1376214LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x206 = UINT64_MAX;
	static int16_t x208 = -926;
	static volatile uint64_t t44 = 2038520789LLU;

	t44 = (x205*((x206%x207)-x208));

	if (t44 != 18446744073709550690LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MIN;
	int64_t x218 = INT64_MIN;
	volatile int32_t x219 = -11758;
	volatile int64_t t45 = 1978242589453199LL;

	t45 = (x217*((x218%x219)-x220));

	if (t45 != 63232LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MAX;
	volatile int8_t x228 = 1;
	volatile uint64_t t46 = 75624LLU;

	t46 = (x225*((x226%x227)-x228));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x233 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	uint32_t x236 = UINT32_MAX;

	t47 = (x233*((x234%x235)-x236));

	if (t47 != 4294967168U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x237 = 0;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = -58;
	static int32_t x240 = -1;
	static int32_t t48 = 100;

	t48 = (x237*((x238%x239)-x240));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x242 = -1LL;
	uint64_t x244 = UINT64_MAX;
	uint64_t t49 = 16057517LLU;

	t49 = (x241*((x242%x243)-x244));

	if (t49 != 127LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = INT8_MIN;
	uint32_t x246 = 1104064073U;
	uint32_t x248 = 163254U;
	uint32_t t50 = 337U;

	t50 = (x245*((x246%x247)-x248));

	if (t50 != 20895872U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x250 = 1U;
	static uint32_t x251 = 57327U;
	int32_t x252 = -1;
	static volatile int64_t t51 = -33790309184LL;

	t51 = (x249*((x250%x251)-x252));

	if (t51 != -1316LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x253 = 24U;
	int64_t x254 = -1LL;
	int64_t t52 = 63292634493LL;

	t52 = (x253*((x254%x255)-x256));

	if (t52 != 51539607528LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MIN;
	uint8_t x267 = UINT8_MAX;
	uint8_t x268 = 5U;
	volatile int32_t t53 = 5860;

	t53 = (x265*((x266%x267)-x268));

	if (t53 != 4358144) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x273 = INT32_MIN;
	int64_t x274 = INT64_MAX;
	static uint16_t x275 = 4792U;
	static uint8_t x276 = 0U;
	int64_t t54 = 15121209653579LL;

	t54 = (x273*((x274%x275)-x276));

	if (t54 != -7127498227712LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x277 = -1;
	int16_t x278 = INT16_MAX;
	int32_t x279 = -1;
	uint64_t x280 = UINT64_MAX;
	uint64_t t55 = UINT64_MAX;

	t55 = (x277*((x278%x279)-x280));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x282 = INT8_MIN;
	volatile int64_t x284 = -1LL;
	int64_t t56 = 4LL;

	t56 = (x281*((x282%x283)-x284));

	if (t56 != -4294967169LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x286 = INT32_MIN;
	int32_t x287 = -171;
	static volatile int64_t t57 = -800172712503042LL;

	t57 = (x285*((x286%x287)-x288));

	if (t57 != -69762LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x289 = INT32_MAX;
	uint64_t x290 = 2427883471303LLU;
	int8_t x291 = -1;
	volatile int16_t x292 = INT16_MAX;

	t58 = (x289*((x290%x291)-x292));

	if (t58 != 11858152292096065080LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x295 = INT64_MIN;
	volatile int16_t x296 = -4;
	volatile uint64_t t59 = 120987272LLU;

	t59 = (x293*((x294%x295)-x296));

	if (t59 != 9628121746728115LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x297 = -1LL;
	uint8_t x298 = 2U;
	volatile int32_t x299 = INT32_MAX;
	static int16_t x300 = INT16_MIN;
	int64_t t60 = 242LL;

	t60 = (x297*((x298%x299)-x300));

	if (t60 != -32770LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x301 = 59541835LLU;
	volatile int32_t x302 = INT32_MIN;

	t61 = (x301*((x302%x303)-x304));

	if (t61 != 18446744073352300606LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = INT32_MIN;
	volatile uint64_t x306 = 1842492191837206777LLU;
	int8_t x307 = INT8_MIN;
	static int8_t x308 = INT8_MIN;
	volatile uint64_t t62 = 4919922344308309219LLU;

	t62 = (x305*((x306%x307)-x308));

	if (t62 != 9659767392317734912LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x309 = UINT16_MAX;
	volatile uint32_t x310 = UINT32_MAX;
	volatile uint64_t x311 = 196196964952LLU;
	uint64_t t63 = 6LLU;

	t63 = (x309*((x310%x311)-x312));

	if (t63 != 140735340871680LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	uint16_t x315 = 10190U;
	volatile int64_t x316 = 7LL;
	static int64_t t64 = -115786966077193059LL;

	t64 = (x313*((x314%x315)-x316));

	if (t64 != 17280LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x317 = INT32_MIN;
	int32_t x318 = 256;
	int64_t x319 = INT64_MAX;
	int32_t x320 = INT32_MIN;
	volatile int64_t t65 = -110462974042LL;

	t65 = (x317*((x318%x319)-x320));

	if (t65 != -4611686568183201792LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x321 = INT8_MIN;
	static uint64_t x322 = 1260507887931523509LLU;
	static int8_t x323 = -27;
	static int32_t x324 = -1;

	t66 = (x321*((x322%x323)-x324));

	if (t66 != 4675687008150955264LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x325 = 30556U;
	int16_t x326 = INT16_MAX;
	uint32_t x327 = UINT32_MAX;
	static volatile int32_t x328 = -320;
	uint32_t t67 = 25432793U;

	t67 = (x325*((x326%x327)-x328));

	if (t67 != 1011006372U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x332 = 1221U;
	uint32_t t68 = 582U;

	t68 = (x329*((x330%x331)-x332));

	if (t68 != 1221U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x333 = 2116110719LLU;
	int16_t x335 = INT16_MIN;
	int8_t x336 = -1;
	static volatile uint64_t t69 = 28115LLU;

	t69 = (x333*((x334%x335)-x336));

	if (t69 != 14812775033LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x337 = 160U;
	uint32_t x338 = UINT32_MAX;
	static int64_t x339 = 254491764LL;
	int32_t x340 = -1;
	volatile int64_t t70 = 169908019119LL;

	t70 = (x337*((x338%x339)-x340));

	if (t70 != 35695851520LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x341 = -1;
	int8_t x342 = INT8_MIN;
	uint64_t x343 = 8317597627LLU;
	int32_t x344 = -1;
	static volatile uint64_t t71 = 55466333809380LLU;

	t71 = (x341*((x342%x343)-x344));

	if (t71 != 18446744070797031994LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x353 = -3;
	uint8_t x354 = 30U;
	volatile int32_t x356 = -51073;
	int32_t t72 = 260;

	t72 = (x353*((x354%x355)-x356));

	if (t72 != -153219) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x361 = 38U;
	static int16_t x363 = 266;
	static int8_t x364 = INT8_MAX;
	volatile int32_t t73 = 790242157;

	t73 = (x361*((x362%x363)-x364));

	if (t73 != -1064) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x365 = -1;
	int32_t x367 = -1;
	int16_t x368 = -1;

	t74 = (x365*((x366%x367)-x368));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x369 = UINT8_MAX;
	int16_t x370 = INT16_MAX;
	int8_t x371 = 3;
	int32_t t75 = 195025474;

	t75 = (x369*((x370%x371)-x372));

	if (t75 != 32895) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x381 = INT64_MIN;
	uint64_t x382 = 5244300996LLU;
	int64_t x383 = INT64_MAX;
	uint8_t x384 = 20U;
	uint64_t t76 = 244287LLU;

	t76 = (x381*((x382%x383)-x384));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x386 = INT16_MIN;
	int16_t x387 = -2;
	int32_t x388 = 83470;
	int32_t t77 = -1892;

	t77 = (x385*((x386%x387)-x388));

	if (t77 != -32469830) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x389 = -1;
	int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MIN;
	volatile int64_t t78 = 1449LL;

	t78 = (x389*((x390%x391)-x392));

	if (t78 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x393 = 6363414LLU;
	volatile int8_t x396 = INT8_MIN;
	static volatile uint64_t t79 = 32792103LLU;

	t79 = (x393*((x394%x395)-x396));

	if (t79 != 782699922LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x397 = INT16_MAX;
	int32_t x398 = INT32_MIN;
	static volatile int8_t x400 = INT8_MIN;
	static volatile int32_t t80 = -5709782;

	t80 = (x397*((x398%x399)-x400));

	if (t80 != 4194176) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x405 = INT16_MIN;
	uint32_t x407 = 1U;
	static int16_t x408 = INT16_MIN;

	t81 = (x405*((x406%x407)-x408));

	if (t81 != 3221225472U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x410 = -4219326211LL;
	int16_t x412 = -1;
	static volatile int64_t t82 = 0LL;

	t82 = (x409*((x410%x411)-x412));

	if (t82 != 67452461383680LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x413 = UINT8_MAX;
	int32_t x414 = -22844879;
	int8_t x415 = -1;
	uint8_t x416 = UINT8_MAX;
	int32_t t83 = 3373;

	t83 = (x413*((x414%x415)-x416));

	if (t83 != -65025) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x421 = 0U;
	static int8_t x422 = INT8_MAX;
	int64_t x423 = INT64_MIN;
	volatile int8_t x424 = 7;
	int64_t t84 = 8LL;

	t84 = (x421*((x422%x423)-x424));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x425 = -1LL;
	uint8_t x427 = 24U;
	int8_t x428 = INT8_MAX;
	int64_t t85 = 799376305474179211LL;

	t85 = (x425*((x426%x427)-x428));

	if (t85 != 135LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x429 = INT8_MIN;
	volatile int32_t x430 = -1;
	volatile uint8_t x431 = UINT8_MAX;
	int16_t x432 = INT16_MAX;

	t86 = (x429*((x430%x431)-x432));

	if (t86 != 4194304) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x433 = UINT64_MAX;
	int64_t x434 = -6043950963376LL;
	static int8_t x435 = INT8_MAX;
	volatile uint64_t t87 = 13500575404741294LLU;

	t87 = (x433*((x434%x435)-x436));

	if (t87 != 4294967416LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x445 = 0U;
	uint16_t x447 = UINT16_MAX;
	uint64_t x448 = 133639548LLU;
	uint64_t t88 = 964297152994209892LLU;

	t88 = (x445*((x446%x447)-x448));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x453 = INT8_MIN;
	volatile uint8_t x454 = 20U;
	int16_t x455 = INT16_MIN;
	uint8_t x456 = 9U;

	t89 = (x453*((x454%x455)-x456));

	if (t89 != -1408) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x461 = 0U;
	uint64_t x462 = 15LLU;
	static uint16_t x464 = 119U;
	volatile uint64_t t90 = 656544LLU;

	t90 = (x461*((x462%x463)-x464));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x465 = INT32_MIN;
	int32_t x466 = INT32_MIN;
	int32_t x467 = INT32_MIN;
	int64_t x468 = -1LL;
	volatile int64_t t91 = -26LL;

	t91 = (x465*((x466%x467)-x468));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x473 = INT64_MAX;
	uint16_t x474 = 14951U;
	volatile uint64_t x476 = 159888LLU;
	volatile uint64_t t92 = 1660915267807390LLU;

	t92 = (x473*((x474%x475)-x476));

	if (t92 != 9223372036854920745LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x481 = -1;
	uint32_t x482 = 17U;
	uint32_t x484 = 116264U;

	t93 = (x481*((x482%x483)-x484));

	if (t93 != 116247U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x489 = INT32_MIN;
	uint64_t x490 = 23LLU;
	uint8_t x491 = UINT8_MAX;
	volatile uint64_t t94 = 2LLU;

	t94 = (x489*((x490%x491)-x492));

	if (t94 != 18446743981367754752LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x493 = 26;
	int8_t x494 = INT8_MIN;
	int16_t x495 = 285;
	uint32_t x496 = 2U;

	t95 = (x493*((x494%x495)-x496));

	if (t95 != 4294963916U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x497 = UINT8_MAX;
	int8_t x498 = 4;
	int64_t x499 = 231425713LL;
	volatile int64_t t96 = 29213LL;

	t96 = (x497*((x498%x499)-x500));

	if (t96 != 2295LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x501 = INT8_MIN;
	static int32_t x502 = INT32_MIN;
	int8_t x504 = 0;
	int32_t t97 = 24260493;

	t97 = (x501*((x502%x503)-x504));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x505 = 1U;
	int64_t x507 = -1555LL;
	static int8_t x508 = INT8_MAX;
	volatile int64_t t98 = 17074LL;

	t98 = (x505*((x506%x507)-x508));

	if (t98 != -26LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x510 = -1;
	uint64_t x511 = UINT64_MAX;
	int64_t x512 = 688077757155LL;
	static uint64_t t99 = 6757366844472538623LLU;

	t99 = (x509*((x510%x511)-x512));

	if (t99 != 22546931946455040LLU) { NG(); } else { ; }
	
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

