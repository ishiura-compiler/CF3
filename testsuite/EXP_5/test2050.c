#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MAX;
uint32_t x3 = 16628U;
volatile uint32_t x9 = 3992308U;
int32_t t2 = 142;
static volatile int16_t x30 = INT16_MIN;
static int16_t x31 = -3888;
int32_t t4 = -6416154;
static volatile int32_t t5 = -259694;
uint64_t x40 = 1251659019094352LLU;
int32_t x47 = -11;
volatile int32_t t8 = 3470838;
static uint16_t x51 = UINT16_MAX;
static uint8_t x59 = UINT8_MAX;
int16_t x61 = INT16_MIN;
int32_t t12 = 0;
int32_t x76 = 3377;
int32_t t14 = -14;
uint8_t x78 = UINT8_MAX;
static int8_t x82 = INT8_MIN;
static int64_t x89 = INT64_MIN;
int16_t x91 = 2634;
volatile uint64_t x92 = UINT64_MAX;
int32_t t19 = -67009107;
int16_t x97 = 316;
static uint64_t x102 = 6427613788LLU;
volatile int16_t x115 = INT16_MIN;
uint64_t x122 = 1818041999LLU;
volatile int32_t t25 = 30;
int8_t x134 = INT8_MIN;
volatile int32_t t28 = -180455226;
volatile int16_t x137 = INT16_MAX;
int32_t x139 = 53496;
volatile uint16_t x144 = UINT16_MAX;
int16_t x146 = -1;
uint8_t x156 = 100U;
volatile uint64_t x161 = UINT64_MAX;
int64_t x163 = INT64_MAX;
static volatile int32_t t36 = -1805;
volatile int32_t t37 = 2146384;
int64_t x173 = 24LL;
uint32_t x175 = 6U;
int16_t x178 = INT16_MIN;
uint64_t x180 = 153149439907383093LLU;
int16_t x182 = -1;
int64_t x188 = -2535797642LL;
int32_t t42 = 63378;
int8_t x202 = INT8_MIN;
uint16_t x206 = UINT16_MAX;
int32_t t45 = 325304274;
uint8_t x219 = 1U;
int32_t x220 = 300;
volatile int32_t t49 = 0;
int8_t x227 = INT8_MIN;
static int32_t t50 = -696320;
static int64_t x233 = INT64_MAX;
int8_t x234 = INT8_MIN;
static int32_t t55 = -167;
int64_t x253 = -76540335LL;
int8_t x256 = INT8_MIN;
static uint16_t x271 = 728U;
volatile int8_t x272 = INT8_MIN;
volatile int32_t t60 = 11;
int16_t x274 = INT16_MIN;
static volatile int16_t x275 = -9;
volatile uint8_t x284 = 0U;
int8_t x293 = INT8_MIN;
int32_t x301 = INT32_MIN;
uint32_t x305 = 1869349981U;
uint64_t x306 = UINT64_MAX;
uint16_t x308 = 13U;
uint8_t x311 = UINT8_MAX;
uint16_t x316 = 434U;
volatile int32_t t71 = -31258;
int64_t x328 = 38347029688LL;
int32_t x336 = -113496;
int16_t x337 = 1;
static uint8_t x338 = 27U;
int64_t x350 = INT64_MAX;
uint16_t x355 = UINT16_MAX;
uint64_t x360 = 6364948864631205098LLU;
int16_t x372 = -1;
int8_t x373 = INT8_MAX;
int32_t t83 = 15;
int8_t x386 = INT8_MIN;
volatile int64_t x398 = 0LL;
volatile int16_t x400 = INT16_MIN;
uint8_t x406 = UINT8_MAX;
int64_t x425 = -1LL;
uint16_t x431 = 2305U;
uint32_t x432 = 101166U;
static int8_t x439 = INT8_MAX;
int32_t x443 = INT32_MIN;


void f0(void) {
	volatile int32_t x2 = INT32_MIN;
	static volatile int16_t x4 = -1;
	static volatile int32_t t0 = 117259;

	t0 = (x1<((x2^x3)-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = INT16_MAX;
	uint8_t x11 = 80U;
	static uint64_t x12 = 2074294280LLU;
	int32_t t1 = 1026320139;

	t1 = (x9<((x10^x11)-x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 14U;
	volatile int8_t x14 = 1;
	int8_t x15 = INT8_MAX;
	volatile int64_t x16 = 145LL;

	t2 = (x13<((x14^x15)-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = 2;
	int8_t x22 = INT8_MIN;
	uint64_t x23 = UINT64_MAX;
	uint32_t x24 = UINT32_MAX;
	int32_t t3 = 67679;

	t3 = (x21<((x22^x23)-x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x29 = 41443LLU;
	volatile int8_t x32 = 1;

	t4 = (x29<((x30^x31)-x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 21U;
	int16_t x34 = INT16_MIN;
	volatile uint16_t x35 = 185U;
	int16_t x36 = INT16_MIN;

	t5 = (x33<((x34^x35)-x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = UINT8_MAX;
	int16_t x38 = INT16_MIN;
	uint16_t x39 = 0U;
	volatile int32_t t6 = -10;

	t6 = (x37<((x38^x39)-x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MIN;
	volatile uint16_t x43 = UINT16_MAX;
	volatile int16_t x44 = 0;
	volatile int32_t t7 = 618005;

	t7 = (x41<((x42^x43)-x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = INT8_MIN;
	uint8_t x46 = UINT8_MAX;
	int32_t x48 = INT32_MIN;

	t8 = (x45<((x46^x47)-x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = 182;
	int64_t x50 = -1LL;
	int16_t x52 = INT16_MIN;
	static int32_t t9 = 7506989;

	t9 = (x49<((x50^x51)-x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 11782LLU;
	static uint16_t x54 = 83U;
	int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MIN;
	static int32_t t10 = -1;

	t10 = (x53<((x54^x55)-x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = -1LL;
	static uint64_t x58 = UINT64_MAX;
	uint64_t x60 = 57281028379LLU;
	static int32_t t11 = -1458;

	t11 = (x57<((x58^x59)-x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x62 = -2;
	static uint8_t x63 = 4U;
	volatile int8_t x64 = 0;

	t12 = (x61<((x62^x63)-x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x69 = INT64_MIN;
	static int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MIN;
	uint32_t x72 = 625U;
	volatile int32_t t13 = -7;

	t13 = (x69<((x70^x71)-x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MAX;
	int8_t x74 = 9;
	volatile int8_t x75 = INT8_MIN;

	t14 = (x73<((x74^x75)-x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x77 = INT8_MIN;
	int64_t x79 = INT64_MIN;
	static volatile int8_t x80 = -1;
	static int32_t t15 = -12672649;

	t15 = (x77<((x78^x79)-x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 286268338U;
	int64_t x83 = INT64_MAX;
	int8_t x84 = INT8_MIN;
	volatile int32_t t16 = 269146;

	t16 = (x81<((x82^x83)-x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x85 = INT8_MIN;
	uint8_t x86 = 10U;
	int8_t x87 = -15;
	int64_t x88 = -1LL;
	int32_t t17 = 57;

	t17 = (x85<((x86^x87)-x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x90 = UINT8_MAX;
	int32_t t18 = -181890;

	t18 = (x89<((x90^x91)-x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 770441526915LLU;
	int8_t x94 = -1;
	uint8_t x95 = 20U;
	uint16_t x96 = 13955U;

	t19 = (x93<((x94^x95)-x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x98 = INT8_MIN;
	uint32_t x99 = 1U;
	volatile uint16_t x100 = 42U;
	volatile int32_t t20 = 348475;

	t20 = (x97<((x98^x99)-x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MAX;
	int64_t x103 = INT64_MIN;
	volatile int8_t x104 = INT8_MAX;
	volatile int32_t t21 = 662676086;

	t21 = (x101<((x102^x103)-x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = 1U;
	int64_t x110 = 31LL;
	int64_t x111 = INT64_MAX;
	static int64_t x112 = -1LL;
	volatile int32_t t22 = -28897001;

	t22 = (x109<((x110^x111)-x112));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -13646;
	int64_t x114 = INT64_MIN;
	int8_t x116 = -17;
	volatile int32_t t23 = -3077649;

	t23 = (x113<((x114^x115)-x116));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = -9791;
	volatile int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	uint8_t x120 = UINT8_MAX;
	static volatile int32_t t24 = 48;

	t24 = (x117<((x118^x119)-x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MIN;
	uint16_t x123 = 1886U;
	int16_t x124 = -23;

	t25 = (x121<((x122^x123)-x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x125 = 1087U;
	uint32_t x126 = 0U;
	int64_t x127 = INT64_MIN;
	int8_t x128 = -1;
	int32_t t26 = -6830;

	t26 = (x125<((x126^x127)-x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = -1;
	int8_t x130 = INT8_MIN;
	volatile uint16_t x131 = 104U;
	uint16_t x132 = 5U;
	int32_t t27 = -2;

	t27 = (x129<((x130^x131)-x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x133 = -2020373980641359590LL;
	static int32_t x135 = INT32_MIN;
	volatile int16_t x136 = INT16_MAX;

	t28 = (x133<((x134^x135)-x136));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x138 = INT16_MIN;
	volatile int16_t x140 = 83;
	int32_t t29 = -15037555;

	t29 = (x137<((x138^x139)-x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 2224U;
	int64_t x142 = 98416LL;
	int32_t x143 = -1317946;
	volatile int32_t t30 = -16159848;

	t30 = (x141<((x142^x143)-x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x145 = INT64_MIN;
	int16_t x147 = INT16_MIN;
	int16_t x148 = 7;
	volatile int32_t t31 = 25;

	t31 = (x145<((x146^x147)-x148));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x149 = 205U;
	volatile int8_t x150 = INT8_MIN;
	int32_t x151 = INT32_MAX;
	int16_t x152 = 1;
	int32_t t32 = -194925525;

	t32 = (x149<((x150^x151)-x152));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x153 = -11443;
	uint32_t x154 = UINT32_MAX;
	uint8_t x155 = 121U;
	int32_t t33 = -1865777;

	t33 = (x153<((x154^x155)-x156));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x157 = 30316U;
	static int16_t x158 = INT16_MIN;
	int8_t x159 = -1;
	int64_t x160 = -1LL;
	volatile int32_t t34 = -1165;

	t34 = (x157<((x158^x159)-x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x162 = -1;
	static int16_t x164 = INT16_MIN;
	volatile int32_t t35 = -5;

	t35 = (x161<((x162^x163)-x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x165 = -1;
	volatile int16_t x166 = INT16_MAX;
	static int8_t x167 = INT8_MAX;
	static volatile uint16_t x168 = 134U;

	t36 = (x165<((x166^x167)-x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x169 = 31U;
	uint64_t x170 = UINT64_MAX;
	int64_t x171 = INT64_MIN;
	volatile int16_t x172 = INT16_MAX;

	t37 = (x169<((x170^x171)-x172));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x174 = 1484;
	int32_t x176 = INT32_MIN;
	volatile int32_t t38 = 1488059;

	t38 = (x173<((x174^x175)-x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MIN;
	int64_t x179 = -1LL;
	int32_t t39 = -132520856;

	t39 = (x177<((x178^x179)-x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = INT16_MAX;
	static volatile int32_t x183 = 79229;
	uint64_t x184 = UINT64_MAX;
	int32_t t40 = -3547345;

	t40 = (x181<((x182^x183)-x184));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = INT64_MIN;
	uint8_t x187 = 38U;
	int32_t t41 = -59;

	t41 = (x185<((x186^x187)-x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x193 = UINT8_MAX;
	uint8_t x194 = UINT8_MAX;
	int32_t x195 = -614370;
	static int8_t x196 = 1;

	t42 = (x193<((x194^x195)-x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x197 = INT8_MIN;
	uint16_t x198 = 30871U;
	int64_t x199 = INT64_MIN;
	uint8_t x200 = 17U;
	static volatile int32_t t43 = -39942;

	t43 = (x197<((x198^x199)-x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = INT8_MIN;
	uint64_t x203 = 2362845LLU;
	uint32_t x204 = 19U;
	int32_t t44 = -4321;

	t44 = (x201<((x202^x203)-x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x205 = UINT8_MAX;
	static volatile int16_t x207 = INT16_MIN;
	int16_t x208 = -1;

	t45 = (x205<((x206^x207)-x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x209 = 67U;
	int64_t x210 = INT64_MAX;
	uint32_t x211 = 134188289U;
	int32_t x212 = -374540;
	static volatile int32_t t46 = -26221;

	t46 = (x209<((x210^x211)-x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x213 = INT16_MIN;
	uint16_t x214 = UINT16_MAX;
	volatile int64_t x215 = -1LL;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t47 = 908322;

	t47 = (x213<((x214^x215)-x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = -1;
	static volatile int16_t x218 = -1;
	static volatile int32_t t48 = -4769;

	t48 = (x217<((x218^x219)-x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MAX;
	uint64_t x224 = UINT64_MAX;

	t49 = (x221<((x222^x223)-x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x225 = -2;
	int16_t x226 = -1;
	volatile int16_t x228 = INT16_MIN;

	t50 = (x225<((x226^x227)-x228));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x229 = 12263U;
	static uint32_t x230 = 9U;
	int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MAX;
	int32_t t51 = 0;

	t51 = (x229<((x230^x231)-x232));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x235 = INT32_MIN;
	static int8_t x236 = -1;
	int32_t t52 = -9527;

	t52 = (x233<((x234^x235)-x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = 4469231045167496684LL;
	uint32_t x238 = 418705134U;
	volatile int32_t x239 = -1;
	int32_t x240 = INT32_MAX;
	int32_t t53 = -10032;

	t53 = (x237<((x238^x239)-x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = 0U;
	int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MAX;
	uint32_t x244 = 128435936U;
	static int32_t t54 = 179;

	t54 = (x241<((x242^x243)-x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = 253527;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MIN;
	int8_t x248 = 0;

	t55 = (x245<((x246^x247)-x248));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x249 = -180632219234917428LL;
	volatile int32_t x250 = INT32_MAX;
	int16_t x251 = 118;
	static volatile int32_t x252 = INT32_MAX;
	volatile int32_t t56 = -569235368;

	t56 = (x249<((x250^x251)-x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x254 = INT32_MIN;
	volatile uint16_t x255 = 679U;
	int32_t t57 = 164;

	t57 = (x253<((x254^x255)-x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x261 = 0U;
	uint8_t x262 = 111U;
	static uint64_t x263 = UINT64_MAX;
	static uint16_t x264 = 5U;
	int32_t t58 = 5992234;

	t58 = (x261<((x262^x263)-x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x265 = 11;
	int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MAX;
	uint16_t x268 = 1183U;
	int32_t t59 = 45470;

	t59 = (x265<((x266^x267)-x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x269 = -2007;
	static int16_t x270 = INT16_MIN;

	t60 = (x269<((x270^x271)-x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x273 = 0U;
	int8_t x276 = INT8_MIN;
	int32_t t61 = 2680;

	t61 = (x273<((x274^x275)-x276));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = -259;
	uint8_t x278 = UINT8_MAX;
	static uint16_t x279 = 566U;
	int32_t x280 = -1;
	volatile int32_t t62 = 246376;

	t62 = (x277<((x278^x279)-x280));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = INT64_MAX;
	static int64_t x282 = -1694932074585LL;
	int64_t x283 = INT64_MIN;
	static int32_t t63 = -3069546;

	t63 = (x281<((x282^x283)-x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = 0;
	volatile uint8_t x286 = 8U;
	int32_t x287 = 160975565;
	uint8_t x288 = 3U;
	volatile int32_t t64 = -876;

	t64 = (x285<((x286^x287)-x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x289 = 13U;
	int32_t x290 = INT32_MIN;
	int16_t x291 = 920;
	uint32_t x292 = 104751U;
	int32_t t65 = -18;

	t65 = (x289<((x290^x291)-x292));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x294 = -1;
	static int32_t x295 = -1;
	volatile uint64_t x296 = 611LLU;
	int32_t t66 = 8152802;

	t66 = (x293<((x294^x295)-x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x297 = 28U;
	static volatile int16_t x298 = -1;
	uint16_t x299 = 19U;
	int16_t x300 = -2308;
	volatile int32_t t67 = -52365381;

	t67 = (x297<((x298^x299)-x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x302 = 5;
	uint8_t x303 = 1U;
	volatile int16_t x304 = INT16_MAX;
	volatile int32_t t68 = -4;

	t68 = (x301<((x302^x303)-x304));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x307 = INT8_MAX;
	static volatile int32_t t69 = -7798984;

	t69 = (x305<((x306^x307)-x308));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = -1;
	volatile int32_t x310 = 161;
	int64_t x312 = -1LL;
	volatile int32_t t70 = 3857660;

	t70 = (x309<((x310^x311)-x312));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x313 = INT16_MIN;
	uint32_t x314 = 1U;
	volatile uint8_t x315 = 5U;

	t71 = (x313<((x314^x315)-x316));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x321 = -1LL;
	int64_t x322 = -1LL;
	static volatile int16_t x323 = INT16_MAX;
	static uint8_t x324 = UINT8_MAX;
	int32_t t72 = -198;

	t72 = (x321<((x322^x323)-x324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = INT32_MAX;
	uint8_t x326 = 1U;
	volatile int16_t x327 = -1;
	int32_t t73 = 596867718;

	t73 = (x325<((x326^x327)-x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = INT64_MIN;
	uint64_t x334 = 218704LLU;
	int32_t x335 = INT32_MIN;
	volatile int32_t t74 = -4;

	t74 = (x333<((x334^x335)-x336));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x339 = UINT8_MAX;
	volatile int16_t x340 = INT16_MAX;
	int32_t t75 = 1930;

	t75 = (x337<((x338^x339)-x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = 60U;
	int8_t x346 = -1;
	int8_t x347 = 1;
	static volatile uint32_t x348 = UINT32_MAX;
	volatile int32_t t76 = 63595;

	t76 = (x345<((x346^x347)-x348));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x349 = 23U;
	static int32_t x351 = INT32_MIN;
	int32_t x352 = 449;
	int32_t t77 = 48569;

	t77 = (x349<((x350^x351)-x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MAX;
	static int32_t x356 = 281692790;
	int32_t t78 = -1;

	t78 = (x353<((x354^x355)-x356));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x357 = INT8_MAX;
	int64_t x358 = INT64_MAX;
	int8_t x359 = INT8_MIN;
	int32_t t79 = 6530;

	t79 = (x357<((x358^x359)-x360));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MIN;
	volatile int8_t x363 = -1;
	int8_t x364 = INT8_MAX;
	volatile int32_t t80 = -3607964;

	t80 = (x361<((x362^x363)-x364));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x365 = -1;
	uint8_t x366 = 111U;
	int8_t x367 = INT8_MAX;
	static int16_t x368 = -1;
	volatile int32_t t81 = -15707122;

	t81 = (x365<((x366^x367)-x368));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x369 = 13U;
	volatile int8_t x370 = -8;
	uint32_t x371 = UINT32_MAX;
	int32_t t82 = 2041;

	t82 = (x369<((x370^x371)-x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x374 = INT16_MAX;
	int16_t x375 = INT16_MAX;
	volatile int64_t x376 = INT64_MAX;

	t83 = (x373<((x374^x375)-x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = -930;
	uint8_t x378 = 119U;
	volatile uint8_t x379 = 38U;
	volatile int64_t x380 = 7LL;
	volatile int32_t t84 = 4237793;

	t84 = (x377<((x378^x379)-x380));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x381 = -196640LL;
	volatile int64_t x382 = -1LL;
	uint32_t x383 = 1U;
	uint32_t x384 = UINT32_MAX;
	int32_t t85 = -1;

	t85 = (x381<((x382^x383)-x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x385 = 11U;
	int32_t x387 = INT32_MIN;
	int64_t x388 = 282280934LL;
	volatile int32_t t86 = 1058806517;

	t86 = (x385<((x386^x387)-x388));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x389 = 397U;
	volatile int16_t x390 = 4388;
	volatile int64_t x391 = INT64_MIN;
	static uint8_t x392 = 29U;
	int32_t t87 = 105338;

	t87 = (x389<((x390^x391)-x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x393 = 84U;
	uint16_t x394 = 0U;
	static int8_t x395 = INT8_MAX;
	volatile int64_t x396 = INT64_MAX;
	volatile int32_t t88 = -204390625;

	t88 = (x393<((x394^x395)-x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x397 = INT64_MIN;
	uint32_t x399 = 1U;
	volatile int32_t t89 = -140;

	t89 = (x397<((x398^x399)-x400));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MAX;
	uint16_t x403 = 359U;
	uint32_t x404 = 27U;
	int32_t t90 = -1117;

	t90 = (x401<((x402^x403)-x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x405 = -1;
	uint32_t x407 = 27888787U;
	uint8_t x408 = 57U;
	int32_t t91 = -563018;

	t91 = (x405<((x406^x407)-x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x409 = 1U;
	int8_t x410 = INT8_MIN;
	int16_t x411 = -4;
	static int16_t x412 = 6942;
	volatile int32_t t92 = -989791;

	t92 = (x409<((x410^x411)-x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x417 = 15676134U;
	uint8_t x418 = UINT8_MAX;
	int64_t x419 = -1LL;
	volatile uint16_t x420 = UINT16_MAX;
	static volatile int32_t t93 = -270533397;

	t93 = (x417<((x418^x419)-x420));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x421 = INT8_MIN;
	static int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MAX;
	static int8_t x424 = INT8_MIN;
	volatile int32_t t94 = -1;

	t94 = (x421<((x422^x423)-x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x426 = -1LL;
	volatile uint64_t x427 = 195162LLU;
	int16_t x428 = INT16_MIN;
	int32_t t95 = 28908;

	t95 = (x425<((x426^x427)-x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = 47016;
	static uint16_t x430 = UINT16_MAX;
	volatile int32_t t96 = 724;

	t96 = (x429<((x430^x431)-x432));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x433 = INT32_MIN;
	volatile int8_t x434 = -1;
	int64_t x435 = -1LL;
	static uint32_t x436 = UINT32_MAX;
	static volatile int32_t t97 = -159003199;

	t97 = (x433<((x434^x435)-x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x437 = -1;
	volatile int16_t x438 = INT16_MIN;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t98 = -46854;

	t98 = (x437<((x438^x439)-x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x441 = 51U;
	int32_t x442 = INT32_MIN;
	static uint16_t x444 = 657U;
	static volatile int32_t t99 = -106541256;

	t99 = (x441<((x442^x443)-x444));

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

