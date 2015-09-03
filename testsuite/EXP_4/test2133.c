#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -2015537;
int32_t x5 = 188924;
uint32_t x9 = UINT32_MAX;
int8_t x11 = INT8_MIN;
static uint32_t x19 = 15U;
volatile int16_t x24 = -1;
volatile int32_t t6 = 100;
volatile uint64_t x29 = 433128LLU;
volatile uint64_t t7 = 473061874741425LLU;
volatile uint32_t t9 = UINT32_MAX;
volatile int32_t x42 = 2160;
uint64_t x48 = 846189LLU;
volatile uint8_t x49 = 6U;
static int64_t x50 = -1LL;
int64_t x53 = INT64_MIN;
int64_t t13 = 1LL;
int8_t x57 = 2;
int32_t x58 = INT32_MAX;
uint64_t t15 = 27900LLU;
int32_t x65 = INT32_MIN;
uint64_t x67 = UINT64_MAX;
uint8_t x68 = UINT8_MAX;
int8_t x70 = INT8_MAX;
int32_t x74 = -1;
static volatile int32_t x82 = INT32_MIN;
volatile int32_t x92 = INT32_MIN;
volatile int32_t t23 = 588085362;
volatile uint64_t x98 = UINT64_MAX;
static volatile int32_t t24 = 807559;
uint8_t x106 = UINT8_MAX;
uint64_t x111 = 188058LLU;
int16_t x116 = 47;
static int32_t x123 = INT32_MIN;
uint8_t x127 = UINT8_MAX;
volatile int8_t x134 = -1;
static volatile int32_t x136 = INT32_MIN;
volatile int64_t x139 = INT64_MIN;
volatile int8_t x141 = INT8_MIN;
volatile int64_t t36 = INT64_MIN;
int32_t x155 = 3719073;
uint64_t t38 = 524LLU;
int64_t x172 = 2948349832LL;
int8_t x175 = INT8_MIN;
volatile int32_t t44 = -17416;
int32_t x186 = INT32_MIN;
volatile int16_t x187 = -1;
static int32_t t46 = -4;
uint8_t x198 = UINT8_MAX;
volatile int32_t t48 = 360;
static volatile int16_t x201 = 135;
static volatile uint64_t t50 = 2142387LLU;
uint64_t x214 = 1520857LLU;
int16_t x215 = 1798;
int32_t x218 = INT32_MIN;
volatile int16_t x221 = INT16_MIN;
static volatile int8_t x223 = -1;
static int16_t x226 = INT16_MIN;
int8_t x233 = INT8_MIN;
static volatile int64_t x249 = -1LL;
uint64_t x254 = 3914153287LLU;
volatile int64_t t59 = 195802753915269549LL;
int16_t x272 = INT16_MIN;
static int16_t x280 = INT16_MAX;
int16_t x281 = 2080;
uint16_t x293 = 28085U;
volatile int64_t x294 = INT64_MIN;
volatile int32_t t69 = -15549159;
int8_t x308 = INT8_MIN;
int32_t x314 = INT32_MAX;
static uint8_t x316 = 6U;
int32_t t73 = INT32_MIN;
int64_t x318 = INT64_MIN;
int64_t x326 = INT64_MIN;
uint8_t x327 = 2U;
int64_t t77 = -300LL;
int16_t x335 = -1;
int32_t x336 = -236;
volatile int32_t t79 = 1891556;
int32_t x341 = INT32_MAX;
int32_t x348 = INT32_MIN;
int32_t x349 = INT32_MIN;
static int64_t x351 = INT64_MIN;
int16_t x356 = INT16_MIN;
uint16_t x361 = 1U;
static uint8_t x368 = 84U;
uint64_t x373 = UINT64_MAX;
volatile uint64_t t88 = UINT64_MAX;
int32_t x385 = -123699765;
int16_t x389 = INT16_MAX;
int32_t t92 = -64893;
uint8_t x396 = 7U;
int8_t x397 = -1;
static int8_t x399 = INT8_MIN;
int16_t x410 = INT16_MIN;
volatile int32_t t97 = -754;
static int8_t x416 = 3;
uint32_t x417 = 115432U;
int8_t x418 = INT8_MIN;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	static volatile int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MAX;
	uint16_t x4 = 22U;

	t0 = (x1+(x2<(x3^x4)));

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x6 = -748510LL;
	static int32_t x7 = INT32_MAX;
	int32_t x8 = INT32_MAX;
	int32_t t1 = -27336333;

	t1 = (x5+(x6<(x7^x8)));

	if (t1 != 188925) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = 1412412449LLU;
	volatile uint32_t x12 = 30530U;
	uint32_t t2 = 3U;

	t2 = (x9+(x10<(x11^x12)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 5;
	int32_t x14 = 517873;
	uint32_t x15 = 25118U;
	uint16_t x16 = 3U;
	int32_t t3 = -61;

	t3 = (x13+(x14<(x15^x16)));

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	int16_t x18 = INT16_MIN;
	static volatile int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -1;

	t4 = (x17+(x18<(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MIN;
	int32_t t5 = 2;

	t5 = (x21+(x22<(x23^x24)));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	volatile int8_t x26 = INT8_MAX;
	uint64_t x27 = 1984289420LLU;
	static int8_t x28 = INT8_MIN;

	t6 = (x25+(x26<(x27^x28)));

	if (t6 != 65536) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = -2;
	int64_t x31 = -3060449006131381LL;
	static uint64_t x32 = UINT64_MAX;

	t7 = (x29+(x30<(x31^x32)));

	if (t7 != 433128LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 1;
	volatile int16_t x34 = 2;
	uint16_t x35 = UINT16_MAX;
	static int32_t x36 = -1;
	int32_t t8 = -2988;

	t8 = (x33+(x34<(x35^x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = UINT32_MAX;
	volatile uint16_t x38 = 1U;
	static int64_t x39 = INT64_MAX;
	static int8_t x40 = INT8_MIN;

	t9 = (x37+(x38<(x39^x40)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	volatile int8_t x43 = -1;
	static volatile int64_t x44 = -1LL;
	int32_t t10 = -6519755;

	t10 = (x41+(x42<(x43^x44)));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 1212;
	int8_t x46 = 62;
	uint64_t x47 = 3119943191563LLU;
	int32_t t11 = -38449;

	t11 = (x45+(x46<(x47^x48)));

	if (t11 != 1213) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x51 = -1;
	volatile int8_t x52 = -1;
	int32_t t12 = -1838148;

	t12 = (x49+(x50<(x51^x52)));

	if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x54 = INT64_MIN;
	uint16_t x55 = 1U;
	static int16_t x56 = -441;

	t13 = (x53+(x54<(x55^x56)));

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x59 = -1LL;
	int64_t x60 = -1LL;
	int32_t t14 = -13306;

	t14 = (x57+(x58<(x59^x60)));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int64_t x62 = INT64_MIN;
	uint32_t x63 = 2391951U;
	volatile int32_t x64 = 881684981;

	t15 = (x61+(x62<(x63^x64)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -4028;
	int32_t t16 = 987;

	t16 = (x65+(x66<(x67^x68)));

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x69 = 266645471U;
	uint64_t x71 = 21LLU;
	uint64_t x72 = 9540744037614206LLU;
	volatile uint32_t t17 = 7518994U;

	t17 = (x69+(x70<(x71^x72)));

	if (t17 != 266645472U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	static uint16_t x75 = 1543U;
	int16_t x76 = INT16_MIN;
	int32_t t18 = -111985;

	t18 = (x73+(x74<(x75^x76)));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 6004180672406030864LLU;
	volatile int16_t x78 = INT16_MIN;
	volatile uint16_t x79 = 5499U;
	volatile uint64_t x80 = 465552378531125LLU;
	volatile uint64_t t19 = 43808262576825126LLU;

	t19 = (x77+(x78<(x79^x80)));

	if (t19 != 6004180672406030864LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 11099320U;
	uint16_t x83 = 10U;
	int8_t x84 = INT8_MAX;
	volatile uint32_t t20 = 1409745379U;

	t20 = (x81+(x82<(x83^x84)));

	if (t20 != 11099321U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	static int8_t x86 = INT8_MIN;
	static int64_t x87 = INT64_MAX;
	volatile int32_t x88 = -1;
	volatile int64_t t21 = INT64_MAX;

	t21 = (x85+(x86<(x87^x88)));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 15;
	uint64_t x90 = 63211264231208440LLU;
	int16_t x91 = INT16_MAX;
	volatile int32_t t22 = 263850178;

	t22 = (x89+(x90<(x91^x92)));

	if (t22 != 16) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 9U;
	static int64_t x94 = 3758026039LL;
	int32_t x95 = INT32_MIN;
	int16_t x96 = -5;

	t23 = (x93+(x94<(x95^x96)));

	if (t23 != 9) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 75U;
	volatile int16_t x99 = -1487;
	volatile int16_t x100 = INT16_MIN;

	t24 = (x97+(x98<(x99^x100)));

	if (t24 != 75) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -399201428816LL;
	volatile int64_t x102 = -223089765401682LL;
	uint8_t x103 = 4U;
	static uint8_t x104 = 0U;
	volatile int64_t t25 = 251008441034LL;

	t25 = (x101+(x102<(x103^x104)));

	if (t25 != -399201428815LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 5;
	static int64_t x107 = INT64_MAX;
	int64_t x108 = -1LL;
	static int32_t t26 = -8;

	t26 = (x105+(x106<(x107^x108)));

	if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = UINT8_MAX;
	int64_t x110 = -2018008820727533628LL;
	static uint16_t x112 = 1U;
	int32_t t27 = 146138863;

	t27 = (x109+(x110<(x111^x112)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int16_t x114 = INT16_MAX;
	int64_t x115 = INT64_MAX;
	int32_t t28 = -5;

	t28 = (x113+(x114<(x115^x116)));

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = 1U;
	volatile uint8_t x118 = UINT8_MAX;
	volatile uint8_t x119 = 20U;
	volatile int8_t x120 = INT8_MIN;
	static volatile uint32_t t29 = 54U;

	t29 = (x117+(x118<(x119^x120)));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	volatile uint32_t x122 = 1303840768U;
	volatile int8_t x124 = INT8_MIN;
	static int32_t t30 = 464895;

	t30 = (x121+(x122<(x123^x124)));

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	int8_t x126 = -1;
	uint16_t x128 = 214U;
	int32_t t31 = -44138;

	t31 = (x125+(x126<(x127^x128)));

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x129 = -3615LL;
	static int32_t x130 = -1;
	int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MIN;
	int64_t t32 = 3333LL;

	t32 = (x129+(x130<(x131^x132)));

	if (t32 != -3615LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -10;
	int8_t x135 = INT8_MIN;
	int32_t t33 = 53237;

	t33 = (x133+(x134<(x135^x136)));

	if (t33 != -9) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 15;
	uint16_t x138 = 14U;
	uint64_t x140 = UINT64_MAX;
	int32_t t34 = -3924;

	t34 = (x137+(x138<(x139^x140)));

	if (t34 != 16) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = 11;
	int32_t x143 = INT32_MIN;
	uint16_t x144 = 839U;
	volatile int32_t t35 = 315;

	t35 = (x141+(x142<(x143^x144)));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MIN;
	static volatile uint32_t x146 = UINT32_MAX;
	int64_t x147 = -1LL;
	static int32_t x148 = INT32_MIN;

	t36 = (x145+(x146<(x147^x148)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	uint8_t x150 = UINT8_MAX;
	volatile int8_t x151 = 10;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 2960;

	t37 = (x149+(x150<(x151^x152)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 17077689256LLU;
	uint16_t x154 = 3U;
	int64_t x156 = INT64_MAX;

	t38 = (x153+(x154<(x155^x156)));

	if (t38 != 17077689257LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	static volatile int8_t x158 = -1;
	volatile int32_t x159 = 1;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x157+(x158<(x159^x160)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -781568416;
	static int64_t x162 = INT64_MIN;
	static uint32_t x163 = 547893U;
	uint64_t x164 = UINT64_MAX;
	volatile int32_t t40 = -838240;

	t40 = (x161+(x162<(x163^x164)));

	if (t40 != -781568415) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x169 = -1;
	volatile int64_t x170 = INT64_MIN;
	uint16_t x171 = 23U;
	int32_t t41 = 26369139;

	t41 = (x169+(x170<(x171^x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x173 = 1928969U;
	static int16_t x174 = -1;
	uint16_t x176 = 3U;
	static uint32_t t42 = 411U;

	t42 = (x173+(x174<(x175^x176)));

	if (t42 != 1928969U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MIN;
	static int64_t x178 = -1LL;
	uint64_t x179 = 28975860189LLU;
	uint16_t x180 = 5U;
	volatile int32_t t43 = 896;

	t43 = (x177+(x178<(x179^x180)));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = -14267;
	int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MAX;

	t44 = (x181+(x182<(x183^x184)));

	if (t44 != -14267) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = UINT8_MAX;
	int64_t x188 = 7039LL;
	int32_t t45 = 1;

	t45 = (x185+(x186<(x187^x188)));

	if (t45 != 256) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x189 = 69U;
	volatile uint16_t x190 = UINT16_MAX;
	int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MIN;

	t46 = (x189+(x190<(x191^x192)));

	if (t46 != 70) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = -1;
	int16_t x195 = INT16_MIN;
	int8_t x196 = 27;
	static volatile int32_t t47 = -6313986;

	t47 = (x193+(x194<(x195^x196)));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	uint32_t x199 = 32U;
	int64_t x200 = 37621220940494198LL;

	t48 = (x197+(x198<(x199^x200)));

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x202 = UINT8_MAX;
	uint16_t x203 = 258U;
	int32_t x204 = INT32_MAX;
	volatile int32_t t49 = 1;

	t49 = (x201+(x202<(x203^x204)));

	if (t49 != 136) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = 18246036415LLU;
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MAX;
	int8_t x208 = INT8_MAX;

	t50 = (x205+(x206<(x207^x208)));

	if (t50 != 18246036416LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = 1;
	uint32_t x210 = 4U;
	static uint8_t x211 = UINT8_MAX;
	int32_t x212 = INT32_MIN;
	int32_t t51 = -2958;

	t51 = (x209+(x210<(x211^x212)));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = 83U;
	volatile uint32_t x216 = 7U;
	volatile int32_t t52 = -117462;

	t52 = (x213+(x214<(x215^x216)));

	if (t52 != 83) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x217 = INT64_MIN;
	static uint32_t x219 = 31423U;
	int8_t x220 = -1;
	volatile int64_t t53 = -8075502329LL;

	t53 = (x217+(x218<(x219^x220)));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x222 = -490458;
	volatile int16_t x224 = INT16_MAX;
	volatile int32_t t54 = -45;

	t54 = (x221+(x222<(x223^x224)));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x225 = UINT8_MAX;
	uint8_t x227 = UINT8_MAX;
	int16_t x228 = INT16_MIN;
	static int32_t t55 = 574519;

	t55 = (x225+(x226<(x227^x228)));

	if (t55 != 256) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x234 = UINT64_MAX;
	static int64_t x235 = INT64_MIN;
	volatile int64_t x236 = INT64_MIN;
	volatile int32_t t56 = -3205;

	t56 = (x233+(x234<(x235^x236)));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x245 = -25LL;
	static uint32_t x246 = 15657U;
	int32_t x247 = INT32_MAX;
	int64_t x248 = INT64_MIN;
	volatile int64_t t57 = -32767509129536LL;

	t57 = (x245+(x246<(x247^x248)));

	if (t57 != -25LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x250 = -1LL;
	int64_t x251 = INT64_MIN;
	volatile uint64_t x252 = 2330547897509833860LLU;
	int64_t t58 = -80LL;

	t58 = (x249+(x250<(x251^x252)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x253 = -1LL;
	static uint64_t x255 = 449961709213230LLU;
	static int16_t x256 = INT16_MIN;

	t59 = (x253+(x254<(x255^x256)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = 51957LLU;
	int16_t x258 = INT16_MIN;
	static volatile uint32_t x259 = 957U;
	volatile int32_t x260 = INT32_MAX;
	uint64_t t60 = 1347044846737499LLU;

	t60 = (x257+(x258<(x259^x260)));

	if (t60 != 51957LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x261 = 31U;
	uint64_t x262 = 305513976349962LLU;
	volatile uint8_t x263 = 8U;
	uint32_t x264 = 0U;
	int32_t t61 = 35;

	t61 = (x261+(x262<(x263^x264)));

	if (t61 != 31) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x269 = 768834U;
	volatile int64_t x270 = INT64_MAX;
	int64_t x271 = INT64_MAX;
	uint32_t t62 = 1980U;

	t62 = (x269+(x270<(x271^x272)));

	if (t62 != 768834U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = 892U;
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	uint8_t x276 = 82U;
	uint32_t t63 = 96U;

	t63 = (x273+(x274<(x275^x276)));

	if (t63 != 893U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x277 = -1LL;
	volatile int32_t x278 = -7316257;
	static int32_t x279 = 1057;
	int64_t t64 = 7299LL;

	t64 = (x277+(x278<(x279^x280)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x282 = 8091232LL;
	static int32_t x283 = -1;
	uint64_t x284 = 1981144LLU;
	static int32_t t65 = -8912228;

	t65 = (x281+(x282<(x283^x284)));

	if (t65 != 2081) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = 0;
	uint16_t x286 = UINT16_MAX;
	uint8_t x287 = UINT8_MAX;
	int64_t x288 = INT64_MIN;
	volatile int32_t t66 = -201762913;

	t66 = (x285+(x286<(x287^x288)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = 1990418LLU;
	volatile uint32_t x290 = 2U;
	uint64_t x291 = UINT64_MAX;
	int8_t x292 = INT8_MIN;
	volatile uint64_t t67 = 4820419435LLU;

	t67 = (x289+(x290<(x291^x292)));

	if (t67 != 1990419LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x295 = 0;
	int32_t x296 = 466623;
	volatile int32_t t68 = 1793;

	t68 = (x293+(x294<(x295^x296)));

	if (t68 != 28086) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = 17;
	volatile uint64_t x299 = 2944253449LLU;
	uint32_t x300 = 266338892U;

	t69 = (x297+(x298<(x299^x300)));

	if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = 41;
	int16_t x302 = -1;
	uint16_t x303 = UINT16_MAX;
	int32_t x304 = -14066;
	static volatile int32_t t70 = -718283945;

	t70 = (x301+(x302<(x303^x304)));

	if (t70 != 41) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = UINT16_MAX;
	int8_t x306 = INT8_MAX;
	int64_t x307 = -4902289491LL;
	int32_t t71 = 49473;

	t71 = (x305+(x306<(x307^x308)));

	if (t71 != 65536) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x309 = 4889201559322017160LLU;
	int64_t x310 = INT64_MIN;
	static uint8_t x311 = 1U;
	uint64_t x312 = UINT64_MAX;
	static volatile uint64_t t72 = 0LLU;

	t72 = (x309+(x310<(x311^x312)));

	if (t72 != 4889201559322017161LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = INT32_MIN;
	static int16_t x315 = INT16_MIN;

	t73 = (x313+(x314<(x315^x316)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x317 = -2401LL;
	static uint32_t x319 = UINT32_MAX;
	int8_t x320 = INT8_MAX;
	int64_t t74 = -254576LL;

	t74 = (x317+(x318<(x319^x320)));

	if (t74 != -2400LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = -15060;
	uint16_t x322 = 16146U;
	volatile int32_t x323 = 488076784;
	uint64_t x324 = 17533348054LLU;
	volatile int32_t t75 = 177498;

	t75 = (x321+(x322<(x323^x324)));

	if (t75 != -15059) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x325 = -809;
	int64_t x328 = INT64_MIN;
	volatile int32_t t76 = -2272492;

	t76 = (x325+(x326<(x327^x328)));

	if (t76 != -808) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = INT64_MIN;
	static int8_t x330 = -7;
	int32_t x331 = -1;
	volatile int16_t x332 = -55;

	t77 = (x329+(x330<(x331^x332)));

	if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x333 = UINT8_MAX;
	uint32_t x334 = 3946751U;
	int32_t t78 = -321692;

	t78 = (x333+(x334<(x335^x336)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x337 = 23U;
	uint32_t x338 = 548U;
	int32_t x339 = -1;
	int8_t x340 = INT8_MAX;

	t79 = (x337+(x338<(x339^x340)));

	if (t79 != 24) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x342 = UINT32_MAX;
	uint32_t x343 = 0U;
	static int8_t x344 = -15;
	volatile int32_t t80 = INT32_MAX;

	t80 = (x341+(x342<(x343^x344)));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x345 = 5870LL;
	volatile uint64_t x346 = UINT64_MAX;
	static uint8_t x347 = 4U;
	int64_t t81 = 10753590774299LL;

	t81 = (x345+(x346<(x347^x348)));

	if (t81 != 5870LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x350 = INT64_MIN;
	int64_t x352 = -140972511043678455LL;
	static volatile int32_t t82 = 1;

	t82 = (x349+(x350<(x351^x352)));

	if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MIN;
	volatile uint32_t x354 = UINT32_MAX;
	int8_t x355 = INT8_MIN;
	volatile int32_t t83 = INT32_MIN;

	t83 = (x353+(x354<(x355^x356)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = INT16_MAX;
	int16_t x358 = -1782;
	int32_t x359 = -1;
	volatile int64_t x360 = -12397749274LL;
	volatile int32_t t84 = 98;

	t84 = (x357+(x358<(x359^x360)));

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x362 = INT16_MAX;
	uint32_t x363 = 422U;
	volatile int8_t x364 = INT8_MIN;
	static volatile int32_t t85 = -938524260;

	t85 = (x361+(x362<(x363^x364)));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x365 = 15U;
	static int64_t x366 = INT64_MAX;
	static uint8_t x367 = UINT8_MAX;
	uint32_t t86 = 7U;

	t86 = (x365+(x366<(x367^x368)));

	if (t86 != 15U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x369 = 319894724;
	uint64_t x370 = UINT64_MAX;
	uint64_t x371 = 5510734LLU;
	static int32_t x372 = INT32_MAX;
	int32_t t87 = 10836012;

	t87 = (x369+(x370<(x371^x372)));

	if (t87 != 319894724) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x374 = 424112604273610LL;
	static volatile int16_t x375 = INT16_MIN;
	int16_t x376 = -1;

	t88 = (x373+(x374<(x375^x376)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = UINT16_MAX;
	volatile uint32_t x378 = UINT32_MAX;
	volatile uint16_t x379 = 3U;
	int64_t x380 = -1132650274LL;
	int32_t t89 = 15071676;

	t89 = (x377+(x378<(x379^x380)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = INT16_MAX;
	static int64_t x382 = 0LL;
	int16_t x383 = -1;
	int32_t x384 = INT32_MIN;
	int32_t t90 = -524962;

	t90 = (x381+(x382<(x383^x384)));

	if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x386 = INT32_MIN;
	static volatile int64_t x387 = INT64_MAX;
	int64_t x388 = INT64_MIN;
	static volatile int32_t t91 = -114940;

	t91 = (x385+(x386<(x387^x388)));

	if (t91 != -123699764) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x390 = 4033LL;
	volatile uint8_t x391 = 84U;
	static int16_t x392 = INT16_MIN;

	t92 = (x389+(x390<(x391^x392)));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MIN;
	volatile int8_t x394 = -22;
	uint64_t x395 = 2420820927451069LLU;
	int64_t t93 = INT64_MIN;

	t93 = (x393+(x394<(x395^x396)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x398 = INT16_MIN;
	uint64_t x400 = 33102925514893LLU;
	volatile int32_t t94 = 2373;

	t94 = (x397+(x398<(x399^x400)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MAX;
	int64_t x402 = 32242319LL;
	volatile int8_t x403 = -5;
	int64_t x404 = 1LL;
	volatile int32_t t95 = -424767305;

	t95 = (x401+(x402<(x403^x404)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = -1;
	uint32_t x406 = 75U;
	volatile uint32_t x407 = 14717U;
	int32_t x408 = INT32_MIN;
	static int32_t t96 = 1022;

	t96 = (x405+(x406<(x407^x408)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = -2865;
	static int64_t x411 = -1LL;
	uint64_t x412 = UINT64_MAX;

	t97 = (x409+(x410<(x411^x412)));

	if (t97 != -2865) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = -1LL;
	volatile uint8_t x414 = 2U;
	int16_t x415 = INT16_MAX;
	int64_t t98 = -126224766273536LL;

	t98 = (x413+(x414<(x415^x416)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x419 = -1;
	int8_t x420 = 2;
	volatile uint32_t t99 = 1378104947U;

	t99 = (x417+(x418<(x419^x420)));

	if (t99 != 115433U) { NG(); } else { ; }
	
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

