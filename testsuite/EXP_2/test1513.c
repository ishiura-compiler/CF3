#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x6 = -1;
uint32_t x8 = UINT32_MAX;
static uint32_t t1 = 1368338U;
static int32_t x19 = INT32_MIN;
volatile int64_t t4 = -2904388595689244809LL;
int8_t x26 = 3;
static int32_t t6 = 332196;
uint64_t x36 = 130742LLU;
int64_t x39 = INT64_MIN;
int64_t x47 = INT64_MIN;
volatile int64_t t11 = -2LL;
uint64_t x49 = 26LLU;
uint16_t x51 = 0U;
int16_t x65 = -1425;
uint64_t x66 = UINT64_MAX;
volatile uint64_t t16 = 49678134LLU;
volatile uint32_t t17 = 31991U;
int64_t x78 = -7761LL;
uint64_t x84 = 137383229LLU;
uint64_t x88 = 9427200477443LLU;
volatile int8_t x93 = -1;
int32_t t23 = 0;
volatile uint16_t x102 = 528U;
volatile int64_t t25 = -93900095428663734LL;
int64_t x106 = 77703LL;
int32_t x117 = 79;
uint8_t x120 = 1U;
uint8_t x128 = 25U;
volatile uint8_t x132 = UINT8_MAX;
uint64_t t32 = 132962268600LLU;
volatile uint64_t x142 = 209631651161687LLU;
int16_t x151 = INT16_MAX;
static uint64_t x154 = UINT64_MAX;
int32_t x178 = INT32_MIN;
int32_t t44 = 386460537;
int8_t x194 = INT8_MAX;
uint8_t x195 = 9U;
int8_t x197 = 2;
int32_t x200 = INT32_MIN;
uint8_t x201 = UINT8_MAX;
volatile int8_t x205 = -1;
int64_t x208 = INT64_MIN;
volatile uint32_t t51 = 2U;
int32_t t52 = -491592;
int8_t x217 = INT8_MAX;
static int8_t x218 = -1;
uint32_t x223 = 506851U;
static int32_t x225 = INT32_MIN;
uint16_t x235 = 104U;
volatile int64_t t58 = -326404531LL;
volatile int32_t t59 = 12146141;
int64_t x245 = INT64_MIN;
uint16_t x247 = 92U;
volatile int64_t t60 = 353LL;
int64_t x256 = INT64_MIN;
uint64_t x257 = UINT64_MAX;
int8_t x260 = -1;
volatile int64_t x261 = INT64_MAX;
int8_t x263 = INT8_MIN;
uint32_t x268 = UINT32_MAX;
uint32_t x272 = 1438U;
int8_t x273 = -3;
int32_t t67 = -99677;
int32_t x280 = -19194785;
int32_t t70 = -8572;
int32_t x291 = -1;
static volatile int32_t t71 = 2074;
int32_t x293 = 31974;
int16_t x294 = INT16_MIN;
volatile uint8_t x297 = UINT8_MAX;
volatile int32_t x300 = -1;
static uint16_t x303 = 408U;
int32_t x304 = INT32_MIN;
volatile int8_t x307 = INT8_MIN;
int16_t x308 = INT16_MAX;
int32_t t75 = -4;
int32_t x309 = INT32_MIN;
uint64_t x319 = UINT64_MAX;
int32_t t78 = -6994422;
int16_t x321 = INT16_MIN;
int8_t x342 = INT8_MIN;
uint16_t x345 = UINT16_MAX;
volatile uint64_t x347 = 44500160644784070LLU;
uint64_t t85 = 365303LLU;
uint8_t x349 = UINT8_MAX;
static uint16_t x354 = 0U;
int32_t x355 = INT32_MAX;
volatile int64_t x359 = INT64_MIN;
int32_t x360 = INT32_MIN;
int8_t x362 = INT8_MIN;
int16_t x363 = -3;
uint32_t x367 = UINT32_MAX;
volatile uint8_t x383 = 3U;
volatile uint64_t x387 = 1235LLU;
volatile int32_t t95 = 390568171;
int32_t x389 = 2028031;
uint32_t x392 = 1U;
uint64_t x402 = UINT64_MAX;
int64_t x404 = -13465973721LL;


void f0(void) {
	uint64_t x1 = 15LLU;
	uint32_t x2 = 43796U;
	int16_t x3 = INT16_MAX;
	int16_t x4 = INT16_MIN;
	uint64_t t0 = 3612344039737873586LLU;

	t0 = ((x1^(x2<x3))%x4);

	if (t0 != 15LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 229U;
	uint32_t x7 = 250557U;

	t1 = ((x5^(x6<x7))%x8);

	if (t1 != 229U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int8_t x10 = -1;
	int16_t x11 = INT16_MIN;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 46164284;

	t2 = ((x9^(x10<x11))%x12);

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static int64_t x14 = 15818252LL;
	static uint16_t x15 = 6914U;
	uint8_t x16 = 1U;
	static volatile int32_t t3 = -6;

	t3 = ((x13^(x14<x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	volatile int8_t x18 = 28;
	static int64_t x20 = -1LL;

	t4 = ((x17^(x18<x19))%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = UINT8_MAX;
	static int64_t x22 = INT64_MIN;
	uint64_t x23 = 1LLU;
	int8_t x24 = INT8_MAX;
	int32_t t5 = 257;

	t5 = ((x21^(x22<x23))%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	int32_t x27 = INT32_MIN;
	static int8_t x28 = 5;

	t6 = ((x25^(x26<x27))%x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -1;
	volatile int16_t x30 = INT16_MIN;
	volatile uint64_t x31 = 0LLU;
	int32_t x32 = -433580383;
	volatile int32_t t7 = -968;

	t7 = ((x29^(x30<x31))%x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 498;
	uint8_t x34 = 110U;
	static int8_t x35 = -1;
	uint64_t t8 = 202LLU;

	t8 = ((x33^(x34<x35))%x36);

	if (t8 != 498LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	static int8_t x38 = -1;
	static uint16_t x40 = 45U;
	int32_t t9 = 6537;

	t9 = ((x37^(x38<x39))%x40);

	if (t9 != -38) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 2174093498289LL;
	uint32_t x42 = 1007U;
	int16_t x43 = 408;
	volatile int32_t x44 = INT32_MIN;
	int64_t t10 = -38263765LL;

	t10 = ((x41^(x42<x43))%x44);

	if (t10 != 840046513LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x45 = 1399317U;
	uint16_t x46 = 1016U;
	volatile int64_t x48 = INT64_MIN;

	t11 = ((x45^(x46<x47))%x48);

	if (t11 != 1399317LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x50 = -90755LL;
	int32_t x52 = 433;
	volatile uint64_t t12 = 3155328LLU;

	t12 = ((x49^(x50<x51))%x52);

	if (t12 != 27LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 1U;
	static uint32_t x54 = 4086U;
	volatile int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -704;

	t13 = ((x53^(x54<x55))%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint64_t x58 = 316341532668LLU;
	uint16_t x59 = 6871U;
	int64_t x60 = 4LL;
	volatile int64_t t14 = -134437694LL;

	t14 = ((x57^(x58<x59))%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	uint8_t x62 = 15U;
	volatile int16_t x63 = INT16_MIN;
	uint16_t x64 = UINT16_MAX;
	int64_t t15 = 149LL;

	t15 = ((x61^(x62<x63))%x64);

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x67 = INT32_MIN;
	volatile uint64_t x68 = UINT64_MAX;

	t16 = ((x65^(x66<x67))%x68);

	if (t16 != 18446744073709550191LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 0;
	static int32_t x70 = -2015519;
	uint16_t x71 = 31004U;
	volatile uint32_t x72 = UINT32_MAX;

	t17 = ((x69^(x70<x71))%x72);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -282;
	int32_t x74 = -179333008;
	static volatile uint32_t x75 = 121758233U;
	volatile int32_t x76 = INT32_MAX;
	static int32_t t18 = -8;

	t18 = ((x73^(x74<x75))%x76);

	if (t18 != -282) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	static uint64_t x79 = UINT64_MAX;
	int16_t x80 = INT16_MIN;
	static int32_t t19 = -5162152;

	t19 = ((x77^(x78<x79))%x80);

	if (t19 != 126) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = 20975513LLU;
	volatile int32_t x82 = INT32_MIN;
	int64_t x83 = -375349900LL;
	static volatile uint64_t t20 = 14924LLU;

	t20 = ((x81^(x82<x83))%x84);

	if (t20 != 20975512LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int64_t x86 = -1LL;
	int64_t x87 = -1LL;
	volatile uint64_t t21 = 55613344LLU;

	t21 = ((x85^(x86<x87))%x88);

	if (t21 != 65535LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MAX;
	static uint64_t x91 = UINT64_MAX;
	int64_t x92 = -1LL;
	static int64_t t22 = -43192554647804LL;

	t22 = ((x89^(x90<x91))%x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = -18;
	uint16_t x95 = 14U;
	volatile uint8_t x96 = UINT8_MAX;

	t23 = ((x93^(x94<x95))%x96);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	volatile int32_t x98 = 620;
	static volatile uint32_t x99 = 19U;
	uint16_t x100 = 54U;
	int32_t t24 = -35;

	t24 = ((x97^(x98<x99))%x100);

	if (t24 != 19) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	volatile uint16_t x103 = UINT16_MAX;
	int16_t x104 = INT16_MIN;

	t25 = ((x101^(x102<x103))%x104);

	if (t25 != 32766LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int64_t x107 = -378213944424LL;
	volatile int64_t x108 = -28LL;
	int64_t t26 = 59LL;

	t26 = ((x105^(x106<x107))%x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 159870809U;
	volatile uint32_t x110 = 2031521686U;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = 96990U;
	volatile uint32_t t27 = 61U;

	t27 = ((x109^(x110<x111))%x112);

	if (t27 != 31289U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -1;
	volatile int32_t x114 = INT32_MAX;
	static int8_t x115 = 12;
	int32_t x116 = -89;
	volatile int32_t t28 = -9876;

	t28 = ((x113^(x114<x115))%x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;
	static uint32_t x119 = 11U;
	static int32_t t29 = 1052473;

	t29 = ((x117^(x118<x119))%x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	uint16_t x122 = UINT16_MAX;
	static int32_t x123 = INT32_MIN;
	int8_t x124 = 1;
	int32_t t30 = 1281;

	t30 = ((x121^(x122<x123))%x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 1;
	volatile uint32_t x126 = 11284987U;
	int16_t x127 = -1;
	int32_t t31 = -26387;

	t31 = ((x125^(x126<x127))%x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	int16_t x130 = -1;
	int8_t x131 = INT8_MIN;

	t32 = ((x129^(x130<x131))%x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 1U;
	int16_t x134 = -1;
	volatile int8_t x135 = -1;
	int16_t x136 = -1;
	int32_t t33 = -1;

	t33 = ((x133^(x134<x135))%x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int32_t x138 = INT32_MIN;
	int8_t x139 = -9;
	volatile int32_t x140 = 704745683;
	volatile int32_t t34 = 102485;

	t34 = ((x137^(x138<x139))%x140);

	if (t34 != -33246598) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 8U;
	int64_t x143 = 0LL;
	int16_t x144 = INT16_MIN;
	int32_t t35 = -67;

	t35 = ((x141^(x142<x143))%x144);

	if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 1U;
	static int8_t x146 = -1;
	static uint8_t x147 = 35U;
	volatile uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = -11228;

	t36 = ((x145^(x146<x147))%x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MIN;
	static int16_t x150 = INT16_MAX;
	uint64_t x152 = UINT64_MAX;
	static uint64_t t37 = 872LLU;

	t37 = ((x149^(x150<x151))%x152);

	if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = 26;
	volatile int16_t x155 = 6;
	volatile int32_t x156 = INT32_MIN;
	volatile int32_t t38 = -1;

	t38 = ((x153^(x154<x155))%x156);

	if (t38 != 26) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = 38U;
	static int16_t x158 = -1;
	uint16_t x159 = 0U;
	static uint8_t x160 = UINT8_MAX;
	int32_t t39 = -44;

	t39 = ((x157^(x158<x159))%x160);

	if (t39 != 39) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = UINT32_MAX;
	uint16_t x162 = UINT16_MAX;
	static int64_t x163 = INT64_MIN;
	volatile int16_t x164 = INT16_MAX;
	uint32_t t40 = 3U;

	t40 = ((x161^(x162<x163))%x164);

	if (t40 != 3U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	uint8_t x166 = UINT8_MAX;
	static int8_t x167 = INT8_MAX;
	uint8_t x168 = 41U;
	int32_t t41 = -124903;

	t41 = ((x165^(x166<x167))%x168);

	if (t41 != -5) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MAX;
	static int8_t x171 = INT8_MAX;
	uint16_t x172 = 166U;
	static volatile int64_t t42 = 495308722623LL;

	t42 = ((x169^(x170<x171))%x172);

	if (t42 != -18LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 0LL;
	uint64_t x174 = UINT64_MAX;
	int64_t x175 = INT64_MIN;
	int32_t x176 = -1;
	volatile int64_t t43 = -126LL;

	t43 = ((x173^(x174<x175))%x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 0;
	int32_t x179 = -7983063;
	static uint8_t x180 = 1U;

	t44 = ((x177^(x178<x179))%x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 414874289650LLU;
	int8_t x182 = -1;
	int8_t x183 = 1;
	volatile int8_t x184 = -1;
	uint64_t t45 = 289973280355LLU;

	t45 = ((x181^(x182<x183))%x184);

	if (t45 != 414874289651LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 153094308U;
	static volatile int16_t x186 = 860;
	int8_t x187 = 20;
	static volatile int64_t x188 = 7393278986447089LL;
	int64_t t46 = -7244671LL;

	t46 = ((x185^(x186<x187))%x188);

	if (t46 != 153094308LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 11U;
	static int64_t x196 = INT64_MIN;
	volatile int64_t t47 = -65068956085375401LL;

	t47 = ((x193^(x194<x195))%x196);

	if (t47 != 11LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x198 = -1042237826944021835LL;
	int8_t x199 = INT8_MIN;
	static int32_t t48 = -220826;

	t48 = ((x197^(x198<x199))%x200);

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x202 = -1;
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;
	int32_t t49 = -785136838;

	t49 = ((x201^(x202<x203))%x204);

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x206 = UINT8_MAX;
	uint8_t x207 = 51U;
	static int64_t t50 = -258095138889LL;

	t50 = ((x205^(x206<x207))%x208);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	uint32_t x211 = 823207985U;
	uint32_t x212 = 2899219U;

	t51 = ((x209^(x210<x211))%x212);

	if (t51 != 2061588U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = -41;
	static int8_t x214 = -10;
	static int32_t x215 = -4;
	int32_t x216 = INT32_MIN;

	t52 = ((x213^(x214<x215))%x216);

	if (t52 != -42) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x219 = UINT32_MAX;
	volatile uint16_t x220 = UINT16_MAX;
	static int32_t t53 = -4569;

	t53 = ((x217^(x218<x219))%x220);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MIN;
	volatile int64_t x222 = 13408284140927LL;
	int32_t x224 = -40930320;
	int32_t t54 = -73;

	t54 = ((x221^(x222<x223))%x224);

	if (t54 != -19107008) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x226 = -1;
	int8_t x227 = INT8_MAX;
	volatile int16_t x228 = -1;
	int32_t t55 = -1536;

	t55 = ((x225^(x226<x227))%x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MAX;
	int8_t x230 = -1;
	volatile int8_t x231 = -1;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t56 = 562882387LLU;

	t56 = ((x229^(x230<x231))%x232);

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MAX;
	static int16_t x236 = INT16_MIN;
	volatile int64_t t57 = -84205734LL;

	t57 = ((x233^(x234<x235))%x236);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -1LL;
	int32_t x238 = INT32_MIN;
	static int32_t x239 = 13830122;
	int8_t x240 = INT8_MAX;

	t58 = ((x237^(x238<x239))%x240);

	if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MIN;
	volatile int16_t x243 = INT16_MIN;
	volatile int8_t x244 = INT8_MIN;

	t59 = ((x241^(x242<x243))%x244);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x246 = INT8_MAX;
	uint16_t x248 = UINT16_MAX;

	t60 = ((x245^(x246<x247))%x248);

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x249 = 7U;
	volatile int8_t x250 = 0;
	uint64_t x251 = UINT64_MAX;
	static int64_t x252 = -1LL;
	volatile int64_t t61 = 117273355262761154LL;

	t61 = ((x249^(x250<x251))%x252);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = 36766479U;
	uint16_t x254 = UINT16_MAX;
	static int32_t x255 = INT32_MAX;
	int64_t t62 = -2894312080LL;

	t62 = ((x253^(x254<x255))%x256);

	if (t62 != 36766478LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	volatile uint64_t t63 = 772LLU;

	t63 = ((x257^(x258<x259))%x260);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x262 = 162640802653858LL;
	static volatile int32_t x264 = -131217980;
	volatile int64_t t64 = 3680608124189LL;

	t64 = ((x261^(x262<x263))%x264);

	if (t64 != 31636827LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -46;
	static uint16_t x266 = UINT16_MAX;
	int8_t x267 = INT8_MIN;
	uint32_t t65 = 65441394U;

	t65 = ((x265^(x266<x267))%x268);

	if (t65 != 4294967250U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x269 = INT16_MIN;
	static int64_t x270 = INT64_MIN;
	static int64_t x271 = INT64_MIN;
	uint32_t t66 = 791250U;

	t66 = ((x269^(x270<x271))%x272);

	if (t66 != 970U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x274 = 4448051193653180LLU;
	static int32_t x275 = INT32_MAX;
	int16_t x276 = INT16_MIN;

	t67 = ((x273^(x274<x275))%x276);

	if (t67 != -3) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = -1;
	static volatile int16_t x278 = 116;
	int16_t x279 = INT16_MIN;
	volatile int32_t t68 = 5696326;

	t68 = ((x277^(x278<x279))%x280);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = 13987708U;
	uint64_t x282 = 111LLU;
	static uint32_t x283 = UINT32_MAX;
	static volatile uint8_t x284 = UINT8_MAX;
	uint32_t t69 = 30147U;

	t69 = ((x281^(x282<x283))%x284);

	if (t69 != 194U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = INT8_MAX;
	int64_t x286 = INT64_MIN;
	int16_t x287 = -954;
	int16_t x288 = 10642;

	t70 = ((x285^(x286<x287))%x288);

	if (t70 != 126) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x289 = -414;
	static volatile int16_t x290 = INT16_MAX;
	uint16_t x292 = 404U;

	t71 = ((x289^(x290<x291))%x292);

	if (t71 != -10) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x295 = INT8_MIN;
	int16_t x296 = -1;
	int32_t t72 = 28663;

	t72 = ((x293^(x294<x295))%x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x298 = 1;
	int32_t x299 = INT32_MIN;
	volatile int32_t t73 = -200055;

	t73 = ((x297^(x298<x299))%x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = -1;
	int16_t x302 = INT16_MIN;
	int32_t t74 = -90;

	t74 = ((x301^(x302<x303))%x304);

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = -1;
	int16_t x306 = INT16_MIN;

	t75 = ((x305^(x306<x307))%x308);

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x310 = 6085LLU;
	int32_t x311 = -1;
	uint16_t x312 = 5062U;
	int32_t t76 = 61406185;

	t76 = ((x309^(x310<x311))%x312);

	if (t76 != -1015) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x313 = UINT16_MAX;
	int16_t x314 = -1;
	int8_t x315 = INT8_MAX;
	int64_t x316 = INT64_MIN;
	volatile int64_t t77 = -684213513750612465LL;

	t77 = ((x313^(x314<x315))%x316);

	if (t77 != 65534LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MIN;
	int32_t x318 = 718607;
	int32_t x320 = -1;

	t78 = ((x317^(x318<x319))%x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x322 = INT64_MAX;
	int16_t x323 = 1;
	int64_t x324 = -1LL;
	volatile int64_t t79 = -3433628382LL;

	t79 = ((x321^(x322<x323))%x324);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = -1;
	int16_t x326 = -1;
	int16_t x327 = INT16_MIN;
	volatile int64_t x328 = 7LL;
	volatile int64_t t80 = 13923195546273LL;

	t80 = ((x325^(x326<x327))%x328);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x329 = INT8_MIN;
	volatile uint32_t x330 = 77223388U;
	uint16_t x331 = UINT16_MAX;
	volatile uint32_t x332 = UINT32_MAX;
	uint32_t t81 = 186797U;

	t81 = ((x329^(x330<x331))%x332);

	if (t81 != 4294967168U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = 5209LL;
	uint16_t x334 = 7683U;
	int64_t x335 = -1LL;
	uint32_t x336 = UINT32_MAX;
	volatile int64_t t82 = 126136334217LL;

	t82 = ((x333^(x334<x335))%x336);

	if (t82 != 5209LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x337 = UINT32_MAX;
	static int8_t x338 = 1;
	uint32_t x339 = UINT32_MAX;
	uint8_t x340 = 2U;
	volatile uint32_t t83 = 248U;

	t83 = ((x337^(x338<x339))%x340);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x341 = 4330U;
	int16_t x343 = 10034;
	static int32_t x344 = INT32_MAX;
	int32_t t84 = -1;

	t84 = ((x341^(x342<x343))%x344);

	if (t84 != 4331) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x346 = -1LL;
	uint64_t x348 = 23208707666LLU;

	t85 = ((x345^(x346<x347))%x348);

	if (t85 != 65535LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x350 = INT8_MAX;
	static uint64_t x351 = 463233LLU;
	uint32_t x352 = UINT32_MAX;
	uint32_t t86 = 1U;

	t86 = ((x349^(x350<x351))%x352);

	if (t86 != 254U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MAX;
	volatile int16_t x356 = 1;
	volatile int32_t t87 = 1108;

	t87 = ((x353^(x354<x355))%x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x357 = -100159031;
	int8_t x358 = -1;
	int32_t t88 = -13;

	t88 = ((x357^(x358<x359))%x360);

	if (t88 != -100159031) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x361 = 26U;
	static volatile int32_t x364 = INT32_MIN;
	int32_t t89 = 13539669;

	t89 = ((x361^(x362<x363))%x364);

	if (t89 != 27) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x365 = INT64_MIN;
	uint8_t x366 = UINT8_MAX;
	volatile int32_t x368 = 26;
	static int64_t t90 = -2369174417909348LL;

	t90 = ((x365^(x366<x367))%x368);

	if (t90 != -7LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x369 = -11;
	volatile int16_t x370 = -1;
	uint8_t x371 = 1U;
	int8_t x372 = 31;
	static int32_t t91 = 204470;

	t91 = ((x369^(x370<x371))%x372);

	if (t91 != -12) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = 0;
	static int64_t x374 = INT64_MIN;
	volatile int32_t x375 = -548705;
	volatile int32_t x376 = -27586;
	int32_t t92 = 59;

	t92 = ((x373^(x374<x375))%x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = INT64_MAX;
	int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -562;
	int64_t t93 = 62153119151912387LL;

	t93 = ((x377^(x378<x379))%x380);

	if (t93 != 471LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = -1151;
	uint64_t x382 = 496998724LLU;
	volatile int16_t x384 = INT16_MIN;
	int32_t t94 = -235514224;

	t94 = ((x381^(x382<x383))%x384);

	if (t94 != -1151) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = -6930;
	static uint32_t x386 = UINT32_MAX;
	int16_t x388 = 14;

	t95 = ((x385^(x386<x387))%x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x390 = -1LL;
	int32_t x391 = -3031;
	volatile uint32_t t96 = 15395U;

	t96 = ((x389^(x390<x391))%x392);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x393 = 6;
	static volatile int8_t x394 = INT8_MIN;
	int64_t x395 = INT64_MIN;
	volatile int64_t x396 = -5679LL;
	volatile int64_t t97 = 964605252832LL;

	t97 = ((x393^(x394<x395))%x396);

	if (t97 != 6LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x397 = 6487993U;
	int32_t x398 = INT32_MAX;
	static uint64_t x399 = UINT64_MAX;
	volatile uint32_t x400 = UINT32_MAX;
	volatile uint32_t t98 = 6U;

	t98 = ((x397^(x398<x399))%x400);

	if (t98 != 6487992U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = -1;
	uint64_t x403 = UINT64_MAX;
	int64_t t99 = 13076495352117160LL;

	t99 = ((x401^(x402<x403))%x404);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

