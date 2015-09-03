#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int16_t x8 = 0;
uint8_t x23 = 15U;
volatile int8_t x24 = INT8_MIN;
static int16_t x35 = 85;
volatile int32_t t8 = -503995511;
int32_t t9 = -1;
int64_t x41 = INT64_MIN;
int8_t x48 = INT8_MIN;
uint8_t x49 = 4U;
static int8_t x54 = 0;
uint16_t x55 = 1545U;
static uint8_t x56 = UINT8_MAX;
int64_t x59 = -1LL;
volatile int32_t t14 = -37;
int64_t x68 = INT64_MAX;
volatile uint64_t x74 = 164510405889152LLU;
int8_t x75 = 6;
int32_t x87 = -131764;
int8_t x95 = -1;
int64_t x106 = INT64_MIN;
int32_t x113 = 75468;
static int64_t x116 = INT64_MIN;
volatile uint8_t x117 = 22U;
int32_t t30 = -47970;
int32_t x127 = -1;
int16_t x128 = -1;
static int8_t x130 = INT8_MIN;
int32_t x131 = 42;
static int8_t x134 = INT8_MIN;
int64_t x136 = INT64_MIN;
int8_t x139 = 1;
volatile uint32_t x143 = UINT32_MAX;
volatile int32_t t37 = 20;
volatile int32_t t38 = -1;
uint32_t x162 = 3252257U;
int64_t x166 = INT64_MIN;
int8_t x169 = INT8_MIN;
volatile int32_t t42 = 121331731;
uint8_t x177 = UINT8_MAX;
int32_t t45 = 326;
int8_t x188 = INT8_MIN;
int32_t x192 = 4;
volatile uint16_t x198 = UINT16_MAX;
volatile int32_t x199 = 13052085;
int8_t x200 = -8;
uint32_t x203 = 1U;
static volatile int8_t x208 = INT8_MAX;
uint16_t x213 = UINT16_MAX;
int64_t x220 = 260243LL;
volatile int32_t t54 = 410123421;
uint64_t x223 = UINT64_MAX;
uint8_t x231 = 29U;
static uint16_t x238 = UINT16_MAX;
volatile uint16_t x242 = UINT16_MAX;
int64_t x244 = -1LL;
uint8_t x248 = UINT8_MAX;
static int32_t t61 = -36919754;
int32_t x249 = INT32_MAX;
int8_t x253 = -1;
static int64_t x255 = INT64_MAX;
int32_t t63 = 0;
int32_t t67 = 2;
uint8_t x275 = 5U;
static int32_t t68 = 27;
uint8_t x282 = UINT8_MAX;
int16_t x283 = INT16_MAX;
uint16_t x286 = 9U;
int32_t t71 = 1;
int32_t t74 = -149368;
volatile uint64_t x312 = 2538280517076LLU;
static int64_t x313 = INT64_MIN;
int64_t x321 = -6086252240062735LL;
uint64_t x338 = 116461761029335LLU;
int8_t x340 = 0;
int32_t x342 = -2733304;
static int32_t x345 = -46817760;
static uint8_t x347 = UINT8_MAX;
int8_t x357 = INT8_MAX;
uint32_t x358 = 16226849U;
int32_t x359 = INT32_MIN;
volatile int8_t x365 = INT8_MIN;
int32_t t91 = -10;
int16_t x372 = INT16_MIN;
int8_t x373 = -41;
static volatile int64_t x375 = INT64_MAX;
int32_t x376 = -1428;
uint32_t x381 = UINT32_MAX;
uint64_t x383 = UINT64_MAX;
int16_t x388 = 0;
volatile uint32_t x392 = 37U;
int32_t t98 = -7102;
uint16_t x399 = 2257U;


void f0(void) {
	int32_t x1 = 107384;
	int32_t x3 = INT32_MAX;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 1;

	t0 = (x1<=(x2^(x3^x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	volatile int32_t x6 = -5;
	static uint64_t x7 = UINT64_MAX;
	int32_t t1 = 25;

	t1 = (x5<=(x6^(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint16_t x10 = UINT16_MAX;
	int16_t x11 = INT16_MAX;
	int8_t x12 = 3;
	volatile int32_t t2 = 90177;

	t2 = (x9<=(x10^(x11^x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 92782571LL;
	static uint16_t x14 = 8U;
	static volatile int8_t x15 = -7;
	int16_t x16 = -1;
	int32_t t3 = -303319;

	t3 = (x13<=(x14^(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -4;
	int8_t x18 = -1;
	uint16_t x19 = 211U;
	static uint16_t x20 = UINT16_MAX;
	int32_t t4 = -325391;

	t4 = (x17<=(x18^(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	uint16_t x22 = 7U;
	static int32_t t5 = 8440471;

	t5 = (x21<=(x22^(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 56522940563LLU;
	int64_t x26 = INT64_MIN;
	int32_t x27 = -3791;
	volatile int16_t x28 = INT16_MAX;
	int32_t t6 = 4;

	t6 = (x25<=(x26^(x27^x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 6U;
	uint32_t x30 = 39U;
	static int32_t x31 = INT32_MAX;
	static int32_t x32 = 144;
	int32_t t7 = 62;

	t7 = (x29<=(x30^(x31^x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 182963U;
	static uint64_t x34 = 12301853133LLU;
	volatile int64_t x36 = INT64_MIN;

	t8 = (x33<=(x34^(x35^x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 448U;
	uint8_t x38 = UINT8_MAX;
	volatile uint32_t x39 = 5U;
	uint16_t x40 = 97U;

	t9 = (x37<=(x38^(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	volatile int64_t x43 = 2656469825101580LL;
	uint64_t x44 = UINT64_MAX;
	volatile int32_t t10 = -23884008;

	t10 = (x41<=(x42^(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	uint64_t x46 = 587211013156961385LLU;
	static volatile uint16_t x47 = 253U;
	static volatile int32_t t11 = 190;

	t11 = (x45<=(x46^(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = -1;
	volatile uint8_t x51 = 47U;
	uint8_t x52 = 38U;
	volatile int32_t t12 = -247740497;

	t12 = (x49<=(x50^(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int32_t t13 = 301542;

	t13 = (x53<=(x54^(x55^x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 7U;
	uint64_t x58 = 361714LLU;
	int16_t x60 = INT16_MIN;

	t14 = (x57<=(x58^(x59^x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int8_t x62 = 0;
	static uint8_t x63 = UINT8_MAX;
	int32_t x64 = 125594;
	int32_t t15 = 1;

	t15 = (x61<=(x62^(x63^x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MAX;
	volatile int32_t x67 = INT32_MIN;
	int32_t t16 = 14546464;

	t16 = (x65<=(x66^(x67^x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = 50LL;
	int32_t x70 = 55496;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = 225413356LLU;
	volatile int32_t t17 = -2048;

	t17 = (x69<=(x70^(x71^x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -93;
	volatile uint64_t x76 = 40278730028LLU;
	static volatile int32_t t18 = -3;

	t18 = (x73<=(x74^(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 0U;
	volatile uint64_t x78 = 10537133605514990LLU;
	uint16_t x79 = UINT16_MAX;
	uint16_t x80 = UINT16_MAX;
	static int32_t t19 = 35934;

	t19 = (x77<=(x78^(x79^x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x82 = UINT16_MAX;
	uint64_t x83 = UINT64_MAX;
	int16_t x84 = INT16_MIN;
	static volatile int32_t t20 = 1604;

	t20 = (x81<=(x82^(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	uint8_t x86 = 0U;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 521764;

	t21 = (x85<=(x86^(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	int16_t x92 = -6;
	static volatile int32_t t22 = 1933592;

	t22 = (x89<=(x90^(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 1950320729LLU;
	int16_t x94 = -1;
	volatile int64_t x96 = INT64_MIN;
	volatile int32_t t23 = -110;

	t23 = (x93<=(x94^(x95^x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 308;
	volatile int16_t x98 = 24;
	volatile int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -13877033;

	t24 = (x97<=(x98^(x99^x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MAX;
	uint8_t x104 = 14U;
	int32_t t25 = 5383;

	t25 = (x101<=(x102^(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -2;
	int16_t x107 = INT16_MIN;
	int16_t x108 = -437;
	int32_t t26 = 14;

	t26 = (x105<=(x106^(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	int32_t x110 = INT32_MIN;
	static uint64_t x111 = 14885LLU;
	int64_t x112 = INT64_MIN;
	static int32_t t27 = 190186271;

	t27 = (x109<=(x110^(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = 472931069U;
	uint64_t x115 = UINT64_MAX;
	int32_t t28 = 299297161;

	t28 = (x113<=(x114^(x115^x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = -1;
	int32_t x119 = INT32_MAX;
	static int8_t x120 = -2;
	static volatile int32_t t29 = 117983143;

	t29 = (x117<=(x118^(x119^x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = 31;
	uint32_t x122 = UINT32_MAX;
	volatile int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MIN;

	t30 = (x121<=(x122^(x123^x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint8_t x126 = 22U;
	static volatile int32_t t31 = -20551;

	t31 = (x125<=(x126^(x127^x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 13U;
	int32_t x132 = 101;
	volatile int32_t t32 = -4359;

	t32 = (x129<=(x130^(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 125;
	static int16_t x135 = -3250;
	volatile int32_t t33 = -51284925;

	t33 = (x133<=(x134^(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -57;
	int32_t x138 = 1970254;
	volatile int64_t x140 = INT64_MIN;
	int32_t t34 = 330;

	t34 = (x137<=(x138^(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 82439LLU;
	static uint16_t x142 = UINT16_MAX;
	uint16_t x144 = UINT16_MAX;
	int32_t t35 = 124;

	t35 = (x141<=(x142^(x143^x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	int16_t x146 = 312;
	uint32_t x147 = 1840730U;
	int16_t x148 = INT16_MAX;
	int32_t t36 = -29586;

	t36 = (x145<=(x146^(x147^x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	uint64_t x150 = 92266014643LLU;
	int64_t x151 = -1LL;
	uint16_t x152 = UINT16_MAX;

	t37 = (x149<=(x150^(x151^x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 22U;
	uint32_t x154 = UINT32_MAX;
	static uint8_t x155 = UINT8_MAX;
	int8_t x156 = INT8_MAX;

	t38 = (x153<=(x154^(x155^x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MAX;
	uint64_t x159 = UINT64_MAX;
	static int8_t x160 = -1;
	volatile int32_t t39 = 297870841;

	t39 = (x157<=(x158^(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 1889211462LLU;
	uint16_t x163 = 1U;
	int16_t x164 = INT16_MIN;
	static volatile int32_t t40 = 351178468;

	t40 = (x161<=(x162^(x163^x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -852091156;
	uint64_t x167 = 6543682LLU;
	static volatile int64_t x168 = INT64_MAX;
	int32_t t41 = -351560;

	t41 = (x165<=(x166^(x167^x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -14;
	int16_t x171 = -1;
	int64_t x172 = -1LL;

	t42 = (x169<=(x170^(x171^x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -32;
	int64_t x174 = INT64_MIN;
	int16_t x175 = -1;
	volatile int32_t x176 = -1;
	volatile int32_t t43 = 0;

	t43 = (x173<=(x174^(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = -1862225077813862LL;
	int64_t x179 = -1805342738236471105LL;
	int64_t x180 = INT64_MAX;
	volatile int32_t t44 = -1;

	t44 = (x177<=(x178^(x179^x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 10;
	volatile uint8_t x182 = 28U;
	int64_t x183 = INT64_MIN;
	static int8_t x184 = INT8_MAX;

	t45 = (x181<=(x182^(x183^x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -1;
	int32_t x186 = INT32_MAX;
	uint32_t x187 = 957045U;
	int32_t t46 = -241;

	t46 = (x185<=(x186^(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MIN;
	int16_t x190 = 0;
	uint16_t x191 = 0U;
	volatile int32_t t47 = 13396;

	t47 = (x189<=(x190^(x191^x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -53;
	int64_t x194 = -1LL;
	volatile int32_t x195 = -3870471;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = 13;

	t48 = (x193<=(x194^(x195^x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int32_t t49 = -5755923;

	t49 = (x197<=(x198^(x199^x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1324;
	uint16_t x202 = 115U;
	static int16_t x204 = INT16_MAX;
	int32_t t50 = -464;

	t50 = (x201<=(x202^(x203^x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	int32_t x206 = -7;
	volatile uint32_t x207 = 90122799U;
	static volatile int32_t t51 = 1;

	t51 = (x205<=(x206^(x207^x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = 4;
	static int16_t x210 = INT16_MIN;
	uint16_t x211 = 493U;
	volatile int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -204270829;

	t52 = (x209<=(x210^(x211^x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = 6U;
	volatile int16_t x215 = -1;
	int8_t x216 = INT8_MIN;
	static int32_t t53 = -1;

	t53 = (x213<=(x214^(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x217 = 122U;
	volatile int32_t x218 = 120;
	int16_t x219 = INT16_MIN;

	t54 = (x217<=(x218^(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 14245U;
	uint32_t x222 = 45034736U;
	int8_t x224 = -1;
	volatile int32_t t55 = -8;

	t55 = (x221<=(x222^(x223^x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = 0U;
	int8_t x226 = -15;
	static int8_t x227 = -51;
	static int8_t x228 = INT8_MIN;
	static int32_t t56 = 95446;

	t56 = (x225<=(x226^(x227^x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MAX;
	int8_t x232 = -48;
	int32_t t57 = 680402;

	t57 = (x229<=(x230^(x231^x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	static uint64_t x234 = 14799LLU;
	int16_t x235 = -26;
	volatile uint64_t x236 = 0LLU;
	volatile int32_t t58 = -1458;

	t58 = (x233<=(x234^(x235^x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	static int8_t x239 = INT8_MIN;
	volatile int32_t x240 = -1238656;
	static volatile int32_t t59 = 7303;

	t59 = (x237<=(x238^(x239^x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 18;
	volatile uint16_t x243 = 0U;
	int32_t t60 = -21464122;

	t60 = (x241<=(x242^(x243^x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = 3990144;
	int16_t x246 = -1;
	int16_t x247 = INT16_MIN;

	t61 = (x245<=(x246^(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = 4U;
	volatile int8_t x251 = -1;
	static int64_t x252 = INT64_MAX;
	int32_t t62 = -7;

	t62 = (x249<=(x250^(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x254 = UINT16_MAX;
	int16_t x256 = -1;

	t63 = (x253<=(x254^(x255^x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x257 = 0;
	uint8_t x258 = UINT8_MAX;
	uint16_t x259 = UINT16_MAX;
	uint8_t x260 = 9U;
	volatile int32_t t64 = 262692;

	t64 = (x257<=(x258^(x259^x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	uint8_t x262 = 68U;
	static uint8_t x263 = 1U;
	uint8_t x264 = 1U;
	int32_t t65 = -8988;

	t65 = (x261<=(x262^(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = UINT8_MAX;
	int64_t x266 = 2408881426488LL;
	int8_t x267 = 63;
	uint8_t x268 = 13U;
	static volatile int32_t t66 = -2924;

	t66 = (x265<=(x266^(x267^x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 33;
	volatile int32_t x270 = -439;
	volatile int64_t x271 = INT64_MIN;
	uint64_t x272 = 38555522233LLU;

	t67 = (x269<=(x270^(x271^x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = -3737;
	uint16_t x274 = 24303U;
	int64_t x276 = -10260475582951910LL;

	t68 = (x273<=(x274^(x275^x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = 15476598177707773LLU;
	volatile uint64_t x278 = UINT64_MAX;
	int64_t x279 = INT64_MIN;
	int16_t x280 = INT16_MIN;
	static volatile int32_t t69 = 73379;

	t69 = (x277<=(x278^(x279^x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int16_t x284 = INT16_MIN;
	int32_t t70 = -56650;

	t70 = (x281<=(x282^(x283^x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MIN;
	static volatile int64_t x287 = INT64_MAX;
	static uint16_t x288 = 7163U;

	t71 = (x285<=(x286^(x287^x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 538U;
	uint8_t x290 = 2U;
	static int32_t x291 = 110;
	uint8_t x292 = UINT8_MAX;
	int32_t t72 = 13360;

	t72 = (x289<=(x290^(x291^x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 3U;
	uint8_t x294 = UINT8_MAX;
	int64_t x295 = INT64_MAX;
	uint32_t x296 = UINT32_MAX;
	int32_t t73 = 630;

	t73 = (x293<=(x294^(x295^x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 31416407LLU;
	static volatile int64_t x298 = 380026LL;
	static uint8_t x299 = UINT8_MAX;
	int64_t x300 = -128292663562536LL;

	t74 = (x297<=(x298^(x299^x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MIN;
	static int32_t x302 = INT32_MIN;
	int32_t x303 = INT32_MAX;
	int32_t x304 = INT32_MIN;
	int32_t t75 = -2;

	t75 = (x301<=(x302^(x303^x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int8_t x306 = INT8_MIN;
	uint32_t x307 = 39493410U;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -6805803;

	t76 = (x305<=(x306^(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -7056;
	volatile int16_t x310 = 10;
	volatile int16_t x311 = INT16_MIN;
	int32_t t77 = 53995;

	t77 = (x309<=(x310^(x311^x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 3343875281151193007LLU;
	static int32_t x315 = -1;
	int8_t x316 = INT8_MAX;
	int32_t t78 = 29201521;

	t78 = (x313<=(x314^(x315^x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 3997U;
	volatile int64_t x318 = INT64_MIN;
	int8_t x319 = -2;
	int64_t x320 = 246169423LL;
	int32_t t79 = 3158959;

	t79 = (x317<=(x318^(x319^x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x322 = 104;
	uint64_t x323 = UINT64_MAX;
	static volatile uint8_t x324 = 27U;
	volatile int32_t t80 = 192579174;

	t80 = (x321<=(x322^(x323^x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = -6604;
	int16_t x326 = INT16_MIN;
	volatile int8_t x327 = 0;
	uint32_t x328 = 549U;
	static volatile int32_t t81 = 381;

	t81 = (x325<=(x326^(x327^x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	static int8_t x330 = -12;
	uint16_t x331 = 3U;
	int8_t x332 = -46;
	volatile int32_t t82 = 23655156;

	t82 = (x329<=(x330^(x331^x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	static volatile uint16_t x334 = UINT16_MAX;
	uint32_t x335 = UINT32_MAX;
	volatile int16_t x336 = INT16_MAX;
	int32_t t83 = -83;

	t83 = (x333<=(x334^(x335^x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 64U;
	static uint8_t x339 = 0U;
	volatile int32_t t84 = 3294;

	t84 = (x337<=(x338^(x339^x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = -1LL;
	int64_t x343 = -43337047842852LL;
	int64_t x344 = 272902288891925LL;
	volatile int32_t t85 = -3486568;

	t85 = (x341<=(x342^(x343^x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 64914;

	t86 = (x345<=(x346^(x347^x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MAX;
	static volatile int64_t x350 = 3358LL;
	int32_t x351 = -197213184;
	int32_t x352 = -1;
	volatile int32_t t87 = -127;

	t87 = (x349<=(x350^(x351^x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	int64_t x354 = 6044LL;
	int32_t x355 = INT32_MIN;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 180;

	t88 = (x353<=(x354^(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x360 = INT8_MIN;
	int32_t t89 = -83891;

	t89 = (x357<=(x358^(x359^x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MIN;
	int64_t x362 = -1LL;
	int64_t x363 = INT64_MIN;
	int32_t x364 = 8356813;
	volatile int32_t t90 = -2016214;

	t90 = (x361<=(x362^(x363^x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x366 = 14;
	uint8_t x367 = 35U;
	static int8_t x368 = INT8_MAX;

	t91 = (x365<=(x366^(x367^x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 260102LLU;
	uint16_t x370 = 1U;
	uint8_t x371 = 4U;
	volatile int32_t t92 = 28;

	t92 = (x369<=(x370^(x371^x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x374 = UINT64_MAX;
	static volatile int32_t t93 = -5948;

	t93 = (x373<=(x374^(x375^x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MAX;
	volatile int32_t x378 = -1;
	volatile int32_t x379 = INT32_MIN;
	static int8_t x380 = 5;
	volatile int32_t t94 = 508214;

	t94 = (x377<=(x378^(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x382 = UINT16_MAX;
	int8_t x384 = -1;
	int32_t t95 = 199557;

	t95 = (x381<=(x382^(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	int32_t x386 = INT32_MAX;
	uint64_t x387 = 41676351LLU;
	static volatile int32_t t96 = 0;

	t96 = (x385<=(x386^(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 3U;
	int16_t x390 = -1;
	uint16_t x391 = 9U;
	int32_t t97 = 95;

	t97 = (x389<=(x390^(x391^x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	int8_t x394 = -26;
	int8_t x395 = INT8_MIN;
	int16_t x396 = -1;

	t98 = (x393<=(x394^(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = INT64_MAX;
	uint64_t x400 = UINT64_MAX;
	static volatile int32_t t99 = -227782;

	t99 = (x397<=(x398^(x399^x400)));

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

