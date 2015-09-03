#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = INT64_MAX;
volatile int32_t x8 = 16584811;
int32_t t2 = -558542;
int16_t x15 = 357;
int64_t x16 = 0LL;
int32_t x17 = INT32_MIN;
int16_t x22 = -247;
volatile int8_t x26 = -1;
volatile int16_t x27 = INT16_MIN;
volatile int8_t x30 = 1;
uint8_t x32 = 54U;
volatile uint8_t x36 = 4U;
uint64_t x38 = 26LLU;
int32_t x42 = INT32_MIN;
uint16_t x43 = 6U;
int64_t x44 = INT64_MIN;
int32_t x46 = -1;
uint32_t x47 = 321638U;
int64_t x48 = -1LL;
volatile int32_t t12 = -1495;
int32_t x55 = -1;
int64_t x58 = INT64_MAX;
int8_t x67 = -1;
int32_t x75 = 15;
static uint16_t x76 = 781U;
uint32_t x84 = UINT32_MAX;
int32_t x91 = -1;
static int32_t t20 = 155;
int32_t x97 = INT32_MIN;
volatile int32_t x103 = INT32_MIN;
volatile int32_t t23 = -51693;
uint8_t x123 = 9U;
int32_t x128 = 1276;
static int8_t x130 = -1;
int32_t t31 = 14989193;
static int16_t x147 = 9087;
static volatile int8_t x151 = -1;
int64_t x157 = -4524144094776735043LL;
static int32_t x158 = -1978988;
volatile int64_t x165 = INT64_MIN;
int16_t x169 = INT16_MIN;
static int64_t x176 = INT64_MIN;
uint32_t x178 = UINT32_MAX;
int32_t t40 = -1;
volatile int32_t x182 = -1;
volatile int16_t x191 = -1;
volatile int16_t x193 = -1;
int8_t x195 = INT8_MAX;
static int16_t x202 = INT16_MAX;
int64_t x206 = -1LL;
volatile int32_t t47 = 149825821;
static volatile int32_t x212 = -46977442;
int32_t x218 = INT32_MIN;
uint16_t x220 = 30U;
static int32_t t51 = 207014;
int32_t t53 = -280028;
int32_t t55 = 528;
uint8_t x245 = 4U;
uint8_t x247 = UINT8_MAX;
volatile int16_t x256 = -1;
int32_t x261 = 34473821;
uint8_t x273 = 1U;
int16_t x275 = INT16_MIN;
static int8_t x276 = -3;
volatile int32_t t63 = 192055;
volatile int32_t x281 = -25790;
volatile int16_t x282 = INT16_MAX;
int32_t x289 = -1;
int32_t x290 = INT32_MIN;
volatile int16_t x299 = INT16_MIN;
static int32_t t67 = 3;
uint16_t x302 = 22U;
static int32_t x308 = 8711;
int32_t t69 = -1;
uint64_t x313 = 531288528520636LLU;
volatile int8_t x314 = INT8_MIN;
uint64_t x315 = 13165LLU;
uint32_t x323 = 226231U;
volatile uint8_t x347 = 5U;
int16_t x352 = INT16_MIN;
static int16_t x366 = INT16_MAX;
static int32_t t83 = -1;
uint8_t x373 = 23U;
static int64_t x380 = -32246351LL;
uint8_t x383 = UINT8_MAX;
volatile uint64_t x384 = UINT64_MAX;
int32_t t86 = -525332086;
int32_t x385 = INT32_MIN;
int32_t t87 = -2553;
static int32_t x391 = INT32_MIN;
uint32_t x397 = UINT32_MAX;
int16_t x398 = -14767;
uint16_t x399 = 6U;
uint32_t x405 = UINT32_MAX;
int64_t x412 = -1LL;
static volatile int8_t x440 = INT8_MIN;
volatile int32_t t99 = -1841;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static int64_t x2 = INT64_MIN;
	int8_t x3 = INT8_MAX;
	int8_t x4 = 0;
	volatile int32_t t0 = 10924447;

	t0 = (x1<((x2%x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int32_t x6 = -303222;
	int32_t t1 = -132;

	t1 = (x5<((x6%x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 0U;
	static int16_t x10 = INT16_MIN;
	volatile int16_t x11 = INT16_MIN;
	volatile int32_t x12 = -1;

	t2 = (x9<((x10%x11)-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static uint8_t x14 = 1U;
	volatile int32_t t3 = 110373;

	t3 = (x13<((x14%x15)-x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = 0;
	volatile uint64_t x19 = 5LLU;
	static int64_t x20 = -197551624182943869LL;
	static volatile int32_t t4 = -37;

	t4 = (x17<((x18%x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 0U;
	uint64_t x23 = 13186326749LLU;
	int16_t x24 = -1;
	static volatile int32_t t5 = -7;

	t5 = (x21<((x22%x23)-x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MIN;
	static int64_t x28 = -1LL;
	int32_t t6 = -470259;

	t6 = (x25<((x26%x27)-x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 176U;
	int64_t x31 = -1LL;
	int32_t t7 = -50625301;

	t7 = (x29<((x30%x31)-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = UINT8_MAX;
	int32_t x34 = INT32_MIN;
	static int8_t x35 = INT8_MIN;
	volatile int32_t t8 = 941;

	t8 = (x33<((x34%x35)-x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 26U;
	int16_t x39 = -1;
	int32_t x40 = INT32_MIN;
	int32_t t9 = 9818;

	t9 = (x37<((x38%x39)-x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int32_t t10 = -2;

	t10 = (x41<((x42%x43)-x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	int32_t t11 = 259612;

	t11 = (x45<((x46%x47)-x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MAX;
	int64_t x51 = -1LL;
	int8_t x52 = -1;

	t12 = (x49<((x50%x51)-x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = 1;
	static int16_t x54 = INT16_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 66245069;

	t13 = (x53<((x54%x55)-x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 6U;
	static int64_t x59 = -1LL;
	int16_t x60 = INT16_MIN;
	static volatile int32_t t14 = 3;

	t14 = (x57<((x58%x59)-x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 258822LLU;
	static uint64_t x62 = 67057569466139LLU;
	int16_t x63 = INT16_MAX;
	volatile uint32_t x64 = 68U;
	int32_t t15 = -133141587;

	t15 = (x61<((x62%x63)-x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int32_t x66 = INT32_MAX;
	static int64_t x68 = -53LL;
	static int32_t t16 = -1;

	t16 = (x65<((x66%x67)-x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 21592;
	int32_t x74 = INT32_MIN;
	static volatile int32_t t17 = 17339;

	t17 = (x73<((x74%x75)-x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	uint16_t x78 = 0U;
	int16_t x79 = INT16_MIN;
	static volatile int8_t x80 = INT8_MAX;
	int32_t t18 = 26115265;

	t18 = (x77<((x78%x79)-x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	int64_t x82 = -1LL;
	static int32_t x83 = 665;
	int32_t t19 = -17;

	t19 = (x81<((x82%x83)-x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 2045744074263249LLU;
	uint8_t x90 = 32U;
	int8_t x92 = -2;

	t20 = (x89<((x90%x91)-x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = 2;
	uint64_t x94 = 7042098879820927LLU;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MIN;
	volatile int32_t t21 = -186662529;

	t21 = (x93<((x94%x95)-x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x98 = 111U;
	int8_t x99 = INT8_MIN;
	volatile uint16_t x100 = 12U;
	volatile int32_t t22 = 492239762;

	t22 = (x97<((x98%x99)-x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x101 = 1U;
	uint16_t x102 = 13302U;
	int16_t x104 = INT16_MIN;

	t23 = (x101<((x102%x103)-x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	uint32_t x106 = 2200086U;
	int32_t x107 = INT32_MIN;
	static volatile uint8_t x108 = 0U;
	int32_t t24 = 37538034;

	t24 = (x105<((x106%x107)-x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = 2619LL;
	int8_t x110 = INT8_MAX;
	uint8_t x111 = 31U;
	int32_t x112 = INT32_MAX;
	int32_t t25 = 95;

	t25 = (x109<((x110%x111)-x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -1;
	uint32_t x114 = 17381651U;
	static uint64_t x115 = 1058520781465458LLU;
	volatile int8_t x116 = INT8_MIN;
	volatile int32_t t26 = 12873;

	t26 = (x113<((x114%x115)-x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = 6U;
	static int8_t x122 = INT8_MIN;
	volatile int16_t x124 = INT16_MIN;
	int32_t t27 = 3;

	t27 = (x121<((x122%x123)-x124));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x125 = 8U;
	uint32_t x126 = 116U;
	int16_t x127 = 7;
	int32_t t28 = 818078056;

	t28 = (x125<((x126%x127)-x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x129 = UINT32_MAX;
	int32_t x131 = INT32_MAX;
	uint16_t x132 = 6384U;
	static int32_t t29 = 2140425;

	t29 = (x129<((x130%x131)-x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x133 = INT8_MIN;
	volatile int32_t x134 = INT32_MIN;
	static volatile int16_t x135 = INT16_MIN;
	volatile int16_t x136 = INT16_MIN;
	volatile int32_t t30 = -2558498;

	t30 = (x133<((x134%x135)-x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x137 = -9260;
	int32_t x138 = INT32_MIN;
	volatile uint64_t x139 = 84746208318690LLU;
	int8_t x140 = INT8_MIN;

	t31 = (x137<((x138%x139)-x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x141 = INT64_MIN;
	volatile int64_t x142 = -1LL;
	static int8_t x143 = INT8_MIN;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t32 = -32;

	t32 = (x141<((x142%x143)-x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x145 = 11U;
	uint64_t x146 = 1869279915227613LLU;
	int64_t x148 = -1LL;
	volatile int32_t t33 = 470035;

	t33 = (x145<((x146%x147)-x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x149 = 1U;
	int32_t x150 = INT32_MIN;
	volatile int16_t x152 = -1;
	volatile int32_t t34 = 10;

	t34 = (x149<((x150%x151)-x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x159 = -1;
	int16_t x160 = INT16_MAX;
	static volatile int32_t t35 = 0;

	t35 = (x157<((x158%x159)-x160));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MIN;
	uint64_t x162 = 102541423LLU;
	uint8_t x163 = 57U;
	int8_t x164 = -1;
	int32_t t36 = 831;

	t36 = (x161<((x162%x163)-x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x166 = INT64_MIN;
	int32_t x167 = INT32_MAX;
	static int32_t x168 = -1;
	volatile int32_t t37 = 1946;

	t37 = (x165<((x166%x167)-x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x170 = 53;
	int32_t x171 = INT32_MIN;
	static int8_t x172 = 5;
	volatile int32_t t38 = 29;

	t38 = (x169<((x170%x171)-x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MAX;
	uint64_t x174 = 0LLU;
	static int32_t x175 = -101;
	int32_t t39 = -1;

	t39 = (x173<((x174%x175)-x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MAX;
	int64_t x179 = INT64_MIN;
	int32_t x180 = 22957093;

	t40 = (x177<((x178%x179)-x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x181 = 4244592LL;
	static int16_t x183 = -1;
	volatile int32_t x184 = 65679812;
	static int32_t t41 = -383636231;

	t41 = (x181<((x182%x183)-x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x185 = UINT8_MAX;
	volatile int32_t x186 = INT32_MIN;
	static volatile int32_t x187 = -1;
	int8_t x188 = INT8_MAX;
	volatile int32_t t42 = -8;

	t42 = (x185<((x186%x187)-x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = 4611179892LL;
	int16_t x190 = INT16_MAX;
	volatile int16_t x192 = 566;
	volatile int32_t t43 = 1;

	t43 = (x189<((x190%x191)-x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x194 = INT8_MAX;
	uint64_t x196 = 95505303LLU;
	volatile int32_t t44 = 0;

	t44 = (x193<((x194%x195)-x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = 0;
	int16_t x198 = -1;
	int64_t x199 = INT64_MIN;
	uint32_t x200 = 1050U;
	volatile int32_t t45 = 1;

	t45 = (x197<((x198%x199)-x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = 175640974LL;
	uint16_t x203 = 2U;
	int8_t x204 = -1;
	int32_t t46 = -320403;

	t46 = (x201<((x202%x203)-x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = 24;
	uint8_t x207 = 27U;
	volatile int8_t x208 = -8;

	t47 = (x205<((x206%x207)-x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = INT8_MAX;
	static volatile int64_t x210 = INT64_MIN;
	int8_t x211 = -3;
	volatile int32_t t48 = 27;

	t48 = (x209<((x210%x211)-x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MIN;
	uint8_t x216 = 26U;
	volatile int32_t t49 = -33484;

	t49 = (x213<((x214%x215)-x216));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MAX;
	static uint64_t x219 = UINT64_MAX;
	int32_t t50 = 742635;

	t50 = (x217<((x218%x219)-x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x225 = 2145;
	volatile int16_t x226 = 133;
	volatile int16_t x227 = 2;
	int64_t x228 = -1LL;

	t51 = (x225<((x226%x227)-x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x229 = INT64_MAX;
	int8_t x230 = 0;
	uint8_t x231 = 24U;
	int32_t x232 = 2999253;
	int32_t t52 = -1;

	t52 = (x229<((x230%x231)-x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = -14557;
	int64_t x234 = -1LL;
	int32_t x235 = -123637;
	volatile int16_t x236 = -1;

	t53 = (x233<((x234%x235)-x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x237 = -992626102139LL;
	volatile uint8_t x238 = UINT8_MAX;
	static int16_t x239 = INT16_MIN;
	uint16_t x240 = UINT16_MAX;
	static volatile int32_t t54 = -4672;

	t54 = (x237<((x238%x239)-x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = 140795285935617385LLU;
	uint8_t x242 = 0U;
	volatile uint32_t x243 = UINT32_MAX;
	int32_t x244 = -68;

	t55 = (x241<((x242%x243)-x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x246 = INT16_MAX;
	uint32_t x248 = 178U;
	static volatile int32_t t56 = 177987336;

	t56 = (x245<((x246%x247)-x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x249 = 301U;
	uint8_t x250 = 6U;
	int32_t x251 = -1;
	static int32_t x252 = -1;
	int32_t t57 = 78006932;

	t57 = (x249<((x250%x251)-x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = INT8_MAX;
	static volatile int16_t x254 = -5805;
	int32_t x255 = 1516514;
	static volatile int32_t t58 = -6823579;

	t58 = (x253<((x254%x255)-x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x257 = 1;
	volatile int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t59 = 1;

	t59 = (x257<((x258%x259)-x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x262 = -77809925LL;
	int16_t x263 = INT16_MIN;
	int32_t x264 = INT32_MAX;
	volatile int32_t t60 = 0;

	t60 = (x261<((x262%x263)-x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = 217153626LL;
	int32_t x270 = INT32_MIN;
	int32_t x271 = -1;
	uint16_t x272 = 113U;
	int32_t t61 = 495;

	t61 = (x269<((x270%x271)-x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x274 = 12645LL;
	int32_t t62 = -441906642;

	t62 = (x273<((x274%x275)-x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x277 = UINT64_MAX;
	static volatile int16_t x278 = 6966;
	static uint64_t x279 = 551068077903092860LLU;
	int64_t x280 = -440343LL;

	t63 = (x277<((x278%x279)-x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x283 = -1LL;
	int16_t x284 = INT16_MIN;
	int32_t t64 = 161622;

	t64 = (x281<((x282%x283)-x284));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MAX;
	int64_t x287 = INT64_MIN;
	int16_t x288 = -1;
	volatile int32_t t65 = -942886;

	t65 = (x285<((x286%x287)-x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x291 = INT16_MIN;
	uint8_t x292 = UINT8_MAX;
	int32_t t66 = 0;

	t66 = (x289<((x290%x291)-x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = 0;
	uint8_t x300 = 1U;

	t67 = (x297<((x298%x299)-x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = INT64_MIN;
	uint8_t x303 = UINT8_MAX;
	volatile uint32_t x304 = 97U;
	int32_t t68 = 592;

	t68 = (x301<((x302%x303)-x304));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x305 = -13;
	int32_t x306 = INT32_MAX;
	int8_t x307 = -11;

	t69 = (x305<((x306%x307)-x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x309 = 2U;
	uint8_t x310 = 60U;
	uint8_t x311 = 93U;
	uint32_t x312 = 45817U;
	static int32_t t70 = -826;

	t70 = (x309<((x310%x311)-x312));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x316 = 10814U;
	static int32_t t71 = 6256;

	t71 = (x313<((x314%x315)-x316));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x317 = INT32_MIN;
	volatile int8_t x318 = 0;
	volatile uint16_t x319 = UINT16_MAX;
	static uint32_t x320 = UINT32_MAX;
	int32_t t72 = -775269706;

	t72 = (x317<((x318%x319)-x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = INT64_MAX;
	uint16_t x322 = 4477U;
	int8_t x324 = 0;
	volatile int32_t t73 = 15;

	t73 = (x321<((x322%x323)-x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x325 = -1;
	int8_t x326 = INT8_MIN;
	static uint16_t x327 = 67U;
	uint8_t x328 = 3U;
	int32_t t74 = -3917422;

	t74 = (x325<((x326%x327)-x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = 70;
	volatile int64_t x330 = INT64_MIN;
	volatile uint16_t x331 = UINT16_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t75 = -30004248;

	t75 = (x329<((x330%x331)-x332));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x333 = -1;
	static int16_t x334 = 4006;
	int16_t x335 = 5;
	uint64_t x336 = UINT64_MAX;
	volatile int32_t t76 = 3236614;

	t76 = (x333<((x334%x335)-x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x345 = -1;
	int8_t x346 = INT8_MIN;
	volatile int64_t x348 = 12309064177337643LL;
	volatile int32_t t77 = 10078305;

	t77 = (x345<((x346%x347)-x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = INT8_MIN;
	static uint64_t x350 = 1602146217575509LLU;
	volatile int32_t x351 = -502;
	volatile int32_t t78 = 907997;

	t78 = (x349<((x350%x351)-x352));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x353 = INT32_MIN;
	uint16_t x354 = UINT16_MAX;
	volatile int8_t x355 = -11;
	uint64_t x356 = 114555LLU;
	static volatile int32_t t79 = -145946;

	t79 = (x353<((x354%x355)-x356));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int16_t x358 = 1;
	volatile uint8_t x359 = 7U;
	int32_t x360 = -1;
	static volatile int32_t t80 = -22;

	t80 = (x357<((x358%x359)-x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = INT16_MIN;
	static volatile int64_t x362 = 247710783172602LL;
	int16_t x363 = -1;
	static int8_t x364 = INT8_MIN;
	int32_t t81 = -668867058;

	t81 = (x361<((x362%x363)-x364));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = -1;
	int64_t x367 = -1LL;
	static uint8_t x368 = UINT8_MAX;
	volatile int32_t t82 = 1007;

	t82 = (x365<((x366%x367)-x368));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x369 = 7LLU;
	int64_t x370 = INT64_MAX;
	int64_t x371 = 33225500LL;
	int32_t x372 = 0;

	t83 = (x369<((x370%x371)-x372));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x374 = 84948383U;
	static int16_t x375 = -2;
	int8_t x376 = -1;
	static int32_t t84 = 2700;

	t84 = (x373<((x374%x375)-x376));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x377 = -1;
	int32_t x378 = INT32_MAX;
	uint64_t x379 = 51847331635227373LLU;
	static int32_t t85 = -2719091;

	t85 = (x377<((x378%x379)-x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x381 = UINT32_MAX;
	int8_t x382 = -1;

	t86 = (x381<((x382%x383)-x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x386 = INT64_MIN;
	volatile int8_t x387 = INT8_MIN;
	static volatile int16_t x388 = -828;

	t87 = (x385<((x386%x387)-x388));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x389 = INT64_MAX;
	int8_t x390 = -1;
	int32_t x392 = -9533423;
	volatile int32_t t88 = 7518;

	t88 = (x389<((x390%x391)-x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = INT16_MIN;
	int16_t x394 = 576;
	uint16_t x395 = UINT16_MAX;
	static int8_t x396 = -1;
	int32_t t89 = -489683549;

	t89 = (x393<((x394%x395)-x396));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x400 = INT16_MAX;
	static volatile int32_t t90 = 1;

	t90 = (x397<((x398%x399)-x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x401 = 3119LLU;
	volatile int32_t x402 = 113153976;
	int32_t x403 = 47;
	volatile int8_t x404 = INT8_MAX;
	int32_t t91 = 73935;

	t91 = (x401<((x402%x403)-x404));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x406 = UINT16_MAX;
	volatile int16_t x407 = INT16_MAX;
	static uint8_t x408 = UINT8_MAX;
	volatile int32_t t92 = 11461;

	t92 = (x405<((x406%x407)-x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x409 = 1U;
	int16_t x410 = -1;
	volatile int32_t x411 = 12065638;
	volatile int32_t t93 = 327;

	t93 = (x409<((x410%x411)-x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x413 = INT64_MAX;
	uint64_t x414 = UINT64_MAX;
	volatile uint16_t x415 = 15U;
	int32_t x416 = 444851926;
	static volatile int32_t t94 = -8;

	t94 = (x413<((x414%x415)-x416));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MAX;
	uint32_t x418 = 26668U;
	static volatile int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MAX;
	static volatile int32_t t95 = -12227122;

	t95 = (x417<((x418%x419)-x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int8_t x422 = 6;
	int64_t x423 = -1LL;
	int8_t x424 = INT8_MIN;
	static int32_t t96 = -23;

	t96 = (x421<((x422%x423)-x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x429 = INT32_MIN;
	int16_t x430 = INT16_MIN;
	int64_t x431 = INT64_MAX;
	static int16_t x432 = INT16_MAX;
	static int32_t t97 = -138517;

	t97 = (x429<((x430%x431)-x432));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x433 = UINT8_MAX;
	uint16_t x434 = 11U;
	int32_t x435 = -1;
	volatile uint64_t x436 = 3344958LLU;
	int32_t t98 = -29519592;

	t98 = (x433<((x434%x435)-x436));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x437 = INT32_MIN;
	int64_t x438 = INT64_MIN;
	static uint16_t x439 = 1U;

	t99 = (x437<((x438%x439)-x440));

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

