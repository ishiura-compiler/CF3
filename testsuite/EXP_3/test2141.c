#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 91U;
volatile int32_t t1 = -169;
volatile int32_t x22 = INT32_MIN;
volatile int32_t t5 = 0;
uint64_t x27 = 1818443880LLU;
volatile int64_t x28 = INT64_MIN;
volatile int32_t x32 = INT32_MAX;
int32_t t7 = 13257338;
volatile int64_t x37 = INT64_MAX;
int16_t x44 = -1;
int32_t t10 = -1;
volatile uint64_t x48 = UINT64_MAX;
volatile int64_t x50 = -1LL;
static volatile uint8_t x51 = UINT8_MAX;
uint32_t x60 = UINT32_MAX;
static volatile int16_t x62 = INT16_MAX;
uint64_t x64 = 1LLU;
int32_t t16 = 1;
int64_t x76 = -1LL;
int16_t x81 = INT16_MAX;
volatile int32_t t20 = -6808622;
static int16_t x90 = INT16_MIN;
int32_t x93 = INT32_MIN;
volatile int16_t x103 = -195;
uint64_t x104 = UINT64_MAX;
volatile int32_t t25 = -94405821;
volatile int16_t x117 = INT16_MAX;
static int64_t x121 = INT64_MAX;
volatile int16_t x123 = INT16_MIN;
static volatile int32_t x131 = -68911;
volatile int32_t t32 = 132;
static int32_t x133 = INT32_MAX;
static uint16_t x136 = UINT16_MAX;
uint16_t x141 = UINT16_MAX;
int64_t x142 = 394754051590LL;
int32_t x151 = INT32_MAX;
int64_t x152 = 339354325LL;
static uint64_t x159 = 2217932999149LLU;
uint16_t x166 = 28499U;
int32_t t41 = -116405954;
int16_t x178 = 636;
volatile uint16_t x187 = 577U;
uint16_t x190 = UINT16_MAX;
static volatile uint8_t x192 = 22U;
int64_t x194 = -1LL;
volatile int32_t t48 = -835;
uint16_t x199 = UINT16_MAX;
uint32_t x209 = UINT32_MAX;
int16_t x210 = INT16_MIN;
int8_t x213 = INT8_MIN;
uint8_t x214 = 27U;
uint8_t x216 = UINT8_MAX;
int16_t x217 = 210;
volatile int32_t x220 = 0;
uint32_t x221 = 36U;
volatile uint32_t x223 = UINT32_MAX;
static int32_t t55 = 741309;
uint16_t x229 = 34U;
int32_t x230 = 79;
int16_t x235 = INT16_MAX;
volatile int32_t t58 = 14668009;
static int16_t x237 = -1;
int64_t x246 = INT64_MAX;
int8_t x254 = -1;
int64_t x255 = INT64_MAX;
static uint8_t x257 = 7U;
int16_t x262 = INT16_MAX;
volatile int16_t x273 = -1;
volatile uint64_t x281 = 5992LLU;
volatile int64_t x289 = INT64_MAX;
uint64_t x290 = 4111537267779069260LLU;
int16_t x291 = INT16_MIN;
int64_t x293 = INT64_MIN;
volatile int16_t x296 = INT16_MAX;
int32_t t73 = -46162;
volatile uint64_t x299 = UINT64_MAX;
static int16_t x302 = INT16_MIN;
static int32_t t75 = 63;
volatile int16_t x306 = INT16_MIN;
static volatile int8_t x308 = INT8_MAX;
int64_t x310 = -275LL;
int32_t x314 = 441;
uint16_t x319 = UINT16_MAX;
uint8_t x331 = UINT8_MAX;
uint64_t x339 = 69550311250LLU;
int32_t t84 = -3529;
static int16_t x344 = INT16_MIN;
uint16_t x347 = 1151U;
int32_t x348 = INT32_MIN;
int32_t t86 = 7;
volatile int32_t t87 = 63785;
int16_t x353 = -4970;
volatile int16_t x372 = 2;
uint32_t x373 = UINT32_MAX;
volatile int64_t x378 = INT64_MIN;
volatile int64_t x380 = INT64_MIN;


void f0(void) {
	int16_t x2 = INT16_MIN;
	int32_t x3 = INT32_MAX;
	uint64_t x4 = 2218LLU;
	volatile int32_t t0 = 69270170;

	t0 = ((x1<x2)<(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 2064U;
	static int16_t x6 = -1;
	uint32_t x7 = UINT32_MAX;
	static int8_t x8 = INT8_MIN;

	t1 = ((x5<x6)<(x7^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 199465679;
	volatile uint32_t x10 = 341U;
	volatile int32_t x11 = INT32_MAX;
	volatile int64_t x12 = INT64_MIN;
	int32_t t2 = -798;

	t2 = ((x9<x10)<(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x14 = INT8_MAX;
	int64_t x15 = -18758LL;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = -14505;

	t3 = ((x13<x14)<(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = 3;
	int32_t x18 = INT32_MIN;
	uint64_t x19 = 1512009LLU;
	volatile int8_t x20 = INT8_MIN;
	int32_t t4 = 7455;

	t4 = ((x17<x18)<(x19^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -14;
	int8_t x23 = -59;
	int64_t x24 = -1LL;

	t5 = ((x21<x22)<(x23^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = 6852456000756646LL;
	int32_t t6 = -30991173;

	t6 = ((x25<x26)<(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 9049LLU;
	volatile int8_t x30 = INT8_MIN;
	uint64_t x31 = 1062633602157LLU;

	t7 = ((x29<x30)<(x31^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MAX;
	volatile int16_t x34 = -1;
	uint32_t x35 = 70284739U;
	uint8_t x36 = 1U;
	volatile int32_t t8 = -529;

	t8 = ((x33<x34)<(x35^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 3U;
	int16_t x39 = -1;
	int8_t x40 = INT8_MAX;
	static volatile int32_t t9 = 10902;

	t9 = ((x37<x38)<(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 14U;
	int64_t x42 = -9014578642LL;
	static volatile uint32_t x43 = UINT32_MAX;

	t10 = ((x41<x42)<(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	uint16_t x46 = 370U;
	int32_t x47 = -5104;
	int32_t t11 = 548;

	t11 = ((x45<x46)<(x47^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	uint32_t x52 = 7634U;
	static volatile int32_t t12 = 3652219;

	t12 = ((x49<x50)<(x51^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	volatile uint64_t x54 = 3789499427149072577LLU;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -1;
	volatile int32_t t13 = 50;

	t13 = ((x53<x54)<(x55^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	static int8_t x58 = 2;
	uint32_t x59 = 139143807U;
	volatile int32_t t14 = 8;

	t14 = ((x57<x58)<(x59^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = -26;
	static volatile uint64_t x63 = 17166623458LLU;
	int32_t t15 = -21037748;

	t15 = ((x61<x62)<(x63^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -4;
	uint32_t x66 = 267367U;
	volatile int64_t x67 = 4152064372LL;
	uint32_t x68 = 5472158U;

	t16 = ((x65<x66)<(x67^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	static int64_t x70 = INT64_MIN;
	int8_t x71 = -1;
	uint8_t x72 = 1U;
	int32_t t17 = -17;

	t17 = ((x69<x70)<(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -30;
	static int64_t x74 = INT64_MIN;
	static uint16_t x75 = UINT16_MAX;
	int32_t t18 = 2527;

	t18 = ((x73<x74)<(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	uint32_t x78 = 8040174U;
	int64_t x79 = -4092329535163LL;
	volatile int16_t x80 = -1;
	volatile int32_t t19 = 781;

	t19 = ((x77<x78)<(x79^x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = 4548U;
	static int32_t x83 = INT32_MAX;
	int8_t x84 = INT8_MIN;

	t20 = ((x81<x82)<(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MIN;
	static uint16_t x87 = 20U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -1;

	t21 = ((x85<x86)<(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	int64_t x92 = 44LL;
	int32_t t22 = -21131361;

	t22 = ((x89<x90)<(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x94 = 5728;
	static int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MIN;
	volatile int32_t t23 = 7924;

	t23 = ((x93<x94)<(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 2U;
	static int64_t x98 = INT64_MAX;
	static uint64_t x99 = 333LLU;
	volatile int8_t x100 = -1;
	int32_t t24 = 178211;

	t24 = ((x97<x98)<(x99^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	uint32_t x102 = 1071564U;

	t25 = ((x101<x102)<(x103^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MIN;
	uint32_t x106 = 4969U;
	uint32_t x107 = UINT32_MAX;
	int16_t x108 = -6;
	volatile int32_t t26 = 77;

	t26 = ((x105<x106)<(x107^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -48;
	int64_t x110 = INT64_MIN;
	static uint8_t x111 = UINT8_MAX;
	volatile int32_t x112 = 2847790;
	volatile int32_t t27 = 1954975;

	t27 = ((x109<x110)<(x111^x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 0U;
	uint64_t x114 = UINT64_MAX;
	int16_t x115 = INT16_MIN;
	volatile uint32_t x116 = 41859984U;
	int32_t t28 = 642383114;

	t28 = ((x113<x114)<(x115^x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x118 = UINT16_MAX;
	int64_t x119 = INT64_MIN;
	int64_t x120 = -32862422865LL;
	int32_t t29 = -26991698;

	t29 = ((x117<x118)<(x119^x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = 126;
	static int64_t x124 = 4067931086874LL;
	int32_t t30 = -26613;

	t30 = ((x121<x122)<(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	volatile int64_t x126 = -1LL;
	uint64_t x127 = 97298861690982LLU;
	uint32_t x128 = 197946249U;
	static volatile int32_t t31 = -48719670;

	t31 = ((x125<x126)<(x127^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 124LL;
	int16_t x130 = 0;
	int8_t x132 = 6;

	t32 = ((x129<x130)<(x131^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x134 = 108835907341109LLU;
	uint32_t x135 = 7449873U;
	int32_t t33 = -34;

	t33 = ((x133<x134)<(x135^x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 7U;
	int8_t x138 = 0;
	uint32_t x139 = 9414U;
	int32_t x140 = -1;
	volatile int32_t t34 = -1;

	t34 = ((x137<x138)<(x139^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x143 = -1;
	int8_t x144 = INT8_MAX;
	int32_t t35 = 1;

	t35 = ((x141<x142)<(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = UINT16_MAX;
	static uint16_t x146 = UINT16_MAX;
	int64_t x147 = -86LL;
	static int32_t x148 = INT32_MAX;
	int32_t t36 = 1;

	t36 = ((x145<x146)<(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 154;
	int8_t x150 = INT8_MAX;
	int32_t t37 = -84229;

	t37 = ((x149<x150)<(x151^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 15462557447765LLU;
	int64_t x154 = -685855722044159LL;
	int16_t x155 = -9500;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = 530224012;

	t38 = ((x153<x154)<(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int8_t x158 = INT8_MIN;
	uint8_t x160 = UINT8_MAX;
	int32_t t39 = -242504;

	t39 = ((x157<x158)<(x159^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x161 = INT16_MIN;
	int16_t x162 = -1;
	volatile int16_t x163 = INT16_MIN;
	int8_t x164 = 1;
	volatile int32_t t40 = -400673;

	t40 = ((x161<x162)<(x163^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = -1;
	volatile int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;

	t41 = ((x165<x166)<(x167^x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	volatile int32_t x170 = INT32_MIN;
	int8_t x171 = 19;
	static uint64_t x172 = 0LLU;
	volatile int32_t t42 = -7;

	t42 = ((x169<x170)<(x171^x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int16_t x174 = 2;
	volatile int8_t x175 = 10;
	static int64_t x176 = INT64_MIN;
	static volatile int32_t t43 = 4;

	t43 = ((x173<x174)<(x175^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 9LLU;
	volatile int32_t x179 = -1;
	volatile int16_t x180 = INT16_MIN;
	static int32_t t44 = 35;

	t44 = ((x177<x178)<(x179^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = 0;
	int8_t x182 = INT8_MIN;
	int32_t x183 = -1;
	int32_t x184 = 7913;
	static volatile int32_t t45 = -42048099;

	t45 = ((x181<x182)<(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 6312104;
	static volatile int32_t x186 = INT32_MIN;
	uint8_t x188 = 1U;
	volatile int32_t t46 = 2;

	t46 = ((x185<x186)<(x187^x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 7;
	int64_t x191 = -1LL;
	int32_t t47 = 1;

	t47 = ((x189<x190)<(x191^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	int64_t x195 = 125442LL;
	int16_t x196 = INT16_MIN;

	t48 = ((x193<x194)<(x195^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 0U;
	static int64_t x198 = INT64_MIN;
	volatile int16_t x200 = 0;
	volatile int32_t t49 = -129189588;

	t49 = ((x197<x198)<(x199^x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -67956568LL;
	int16_t x202 = 13043;
	uint8_t x203 = UINT8_MAX;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 28;

	t50 = ((x201<x202)<(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MAX;
	static int64_t x206 = INT64_MAX;
	volatile int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 201740280;

	t51 = ((x205<x206)<(x207^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x211 = 261196876;
	int64_t x212 = -1LL;
	int32_t t52 = 0;

	t52 = ((x209<x210)<(x211^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x215 = UINT32_MAX;
	int32_t t53 = -39139;

	t53 = ((x213<x214)<(x215^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x218 = 8817186223LLU;
	volatile int16_t x219 = 17;
	static int32_t t54 = -4065;

	t54 = ((x217<x218)<(x219^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = -1LL;
	uint32_t x224 = UINT32_MAX;

	t55 = ((x221<x222)<(x223^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = INT8_MIN;
	static uint8_t x226 = 13U;
	int64_t x227 = INT64_MAX;
	int8_t x228 = -9;
	int32_t t56 = -928;

	t56 = ((x225<x226)<(x227^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x231 = INT8_MIN;
	int8_t x232 = 3;
	int32_t t57 = -86;

	t57 = ((x229<x230)<(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = -26;
	volatile uint64_t x234 = UINT64_MAX;
	int32_t x236 = -1;

	t58 = ((x233<x234)<(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MIN;
	int16_t x239 = -1;
	volatile int8_t x240 = INT8_MIN;
	static volatile int32_t t59 = 17488;

	t59 = ((x237<x238)<(x239^x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = UINT8_MAX;
	int64_t x242 = INT64_MAX;
	volatile uint64_t x243 = 269323245462669580LLU;
	int64_t x244 = INT64_MIN;
	int32_t t60 = 97;

	t60 = ((x241<x242)<(x243^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MAX;
	int32_t t61 = -322160;

	t61 = ((x245<x246)<(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = 231U;
	int16_t x250 = INT16_MIN;
	int16_t x251 = INT16_MIN;
	static int16_t x252 = -2;
	volatile int32_t t62 = -396744353;

	t62 = ((x249<x250)<(x251^x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 188U;
	int64_t x256 = -1LL;
	int32_t t63 = 1260378;

	t63 = ((x253<x254)<(x255^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MAX;
	static int8_t x259 = INT8_MIN;
	int64_t x260 = 734550LL;
	int32_t t64 = 94844;

	t64 = ((x257<x258)<(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	volatile int16_t x263 = INT16_MIN;
	int32_t x264 = INT32_MIN;
	int32_t t65 = -24;

	t65 = ((x261<x262)<(x263^x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MIN;
	uint64_t x266 = 1920486954LLU;
	int8_t x267 = 1;
	int64_t x268 = INT64_MAX;
	int32_t t66 = 10;

	t66 = ((x265<x266)<(x267^x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	int64_t x270 = INT64_MIN;
	static uint8_t x271 = UINT8_MAX;
	static volatile int32_t x272 = INT32_MIN;
	volatile int32_t t67 = -124448942;

	t67 = ((x269<x270)<(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x274 = UINT32_MAX;
	int16_t x275 = 599;
	static int32_t x276 = 239045682;
	volatile int32_t t68 = 51;

	t68 = ((x273<x274)<(x275^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 8U;
	int32_t x278 = INT32_MAX;
	volatile uint64_t x279 = 2498225867532599LLU;
	uint32_t x280 = 25U;
	int32_t t69 = -63381;

	t69 = ((x277<x278)<(x279^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x282 = 0U;
	volatile int32_t x283 = 40755571;
	static int64_t x284 = INT64_MIN;
	int32_t t70 = -37161;

	t70 = ((x281<x282)<(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	static int8_t x286 = INT8_MAX;
	static uint16_t x287 = 6U;
	int16_t x288 = INT16_MAX;
	volatile int32_t t71 = 2721912;

	t71 = ((x285<x286)<(x287^x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x292 = INT64_MAX;
	int32_t t72 = -101914;

	t72 = ((x289<x290)<(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = -61414709;
	int64_t x295 = 4588LL;

	t73 = ((x293<x294)<(x295^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	static int32_t x298 = INT32_MIN;
	int64_t x300 = INT64_MIN;
	int32_t t74 = 1692096;

	t74 = ((x297<x298)<(x299^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	uint64_t x303 = 124483719761784LLU;
	int64_t x304 = -311621612972629787LL;

	t75 = ((x301<x302)<(x303^x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MIN;
	int8_t x307 = 10;
	volatile int32_t t76 = -767497992;

	t76 = ((x305<x306)<(x307^x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = -1;
	volatile int16_t x311 = 29;
	volatile int64_t x312 = -1LL;
	volatile int32_t t77 = 1;

	t77 = ((x309<x310)<(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = 1;
	int64_t x315 = INT64_MIN;
	static int8_t x316 = INT8_MAX;
	int32_t t78 = 14;

	t78 = ((x313<x314)<(x315^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x317 = -1LL;
	int64_t x318 = -53701664786146548LL;
	int64_t x320 = INT64_MIN;
	static volatile int32_t t79 = 37;

	t79 = ((x317<x318)<(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x321 = UINT16_MAX;
	static int8_t x322 = -1;
	uint16_t x323 = 404U;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 72053;

	t80 = ((x321<x322)<(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = INT8_MIN;
	volatile int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MAX;
	uint64_t x328 = 38085763334886LLU;
	static volatile int32_t t81 = -16466;

	t81 = ((x325<x326)<(x327^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -12077;
	static int8_t x330 = INT8_MAX;
	volatile uint64_t x332 = 24709780LLU;
	int32_t t82 = 0;

	t82 = ((x329<x330)<(x331^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = 284861487590228031LLU;
	uint8_t x334 = UINT8_MAX;
	volatile int32_t x335 = -179;
	static int8_t x336 = INT8_MAX;
	int32_t t83 = -1;

	t83 = ((x333<x334)<(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 3U;
	uint8_t x338 = 2U;
	int8_t x340 = INT8_MAX;

	t84 = ((x337<x338)<(x339^x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -2754;
	int8_t x342 = INT8_MAX;
	volatile int16_t x343 = -454;
	volatile int32_t t85 = 2;

	t85 = ((x341<x342)<(x343^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	int16_t x346 = INT16_MIN;

	t86 = ((x345<x346)<(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 1;
	static uint8_t x350 = UINT8_MAX;
	uint64_t x351 = 88LLU;
	volatile uint64_t x352 = UINT64_MAX;

	t87 = ((x349<x350)<(x351^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = INT32_MAX;
	int8_t x355 = INT8_MIN;
	volatile uint8_t x356 = 88U;
	int32_t t88 = -1;

	t88 = ((x353<x354)<(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = -5216659395519778LL;
	volatile int32_t x358 = -1;
	static int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = -4;

	t89 = ((x357<x358)<(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -29;
	int16_t x362 = INT16_MIN;
	int32_t x363 = -14016;
	int64_t x364 = 50810428546967LL;
	static volatile int32_t t90 = -361250;

	t90 = ((x361<x362)<(x363^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -140974504;
	uint8_t x366 = 0U;
	int32_t x367 = -1;
	int32_t x368 = INT32_MIN;
	static volatile int32_t t91 = -17051602;

	t91 = ((x365<x366)<(x367^x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 12978LLU;
	int16_t x370 = 9;
	int64_t x371 = -23221181682685LL;
	int32_t t92 = 1746842;

	t92 = ((x369<x370)<(x371^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = -5749147187758841LL;
	static int32_t x375 = INT32_MIN;
	static uint16_t x376 = 126U;
	int32_t t93 = 306;

	t93 = ((x373<x374)<(x375^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	volatile int64_t x379 = INT64_MIN;
	int32_t t94 = 165672;

	t94 = ((x377<x378)<(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 0U;
	static int16_t x382 = INT16_MIN;
	int16_t x383 = INT16_MAX;
	volatile int64_t x384 = -18030952168LL;
	volatile int32_t t95 = -7189945;

	t95 = ((x381<x382)<(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	int16_t x386 = -2;
	uint32_t x387 = UINT32_MAX;
	volatile uint32_t x388 = UINT32_MAX;
	static int32_t t96 = -1974;

	t96 = ((x385<x386)<(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -39;
	uint8_t x390 = 6U;
	volatile uint64_t x391 = 229756LLU;
	uint32_t x392 = UINT32_MAX;
	int32_t t97 = -865508985;

	t97 = ((x389<x390)<(x391^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	uint32_t x394 = 151862901U;
	uint64_t x395 = 187186201933158LLU;
	static volatile int16_t x396 = -1;
	volatile int32_t t98 = -763341;

	t98 = ((x393<x394)<(x395^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	uint64_t x398 = 31049585894LLU;
	int16_t x399 = INT16_MAX;
	volatile int8_t x400 = 0;
	volatile int32_t t99 = 5404486;

	t99 = ((x397<x398)<(x399^x400));

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

