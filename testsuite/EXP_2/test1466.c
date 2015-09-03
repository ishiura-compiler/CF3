#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 2910821U;
volatile int32_t t1 = -134471466;
volatile uint8_t x10 = 0U;
int8_t x14 = -30;
uint64_t x15 = 14912397LLU;
volatile int32_t t3 = 995163;
int64_t x23 = -2424LL;
int16_t x29 = INT16_MIN;
int16_t x31 = INT16_MIN;
int16_t x32 = INT16_MAX;
int8_t x35 = -38;
static int16_t x37 = -1;
int16_t x40 = INT16_MIN;
uint8_t x43 = 1U;
int32_t x48 = 14641834;
int64_t x54 = INT64_MAX;
int8_t x71 = INT8_MIN;
uint16_t x72 = UINT16_MAX;
int32_t t17 = 2526117;
int8_t x75 = -1;
volatile int32_t t18 = 187;
uint16_t x78 = 0U;
int64_t x81 = -3898985914LL;
int8_t x82 = INT8_MIN;
volatile int32_t t20 = -427164;
int8_t x90 = INT8_MIN;
uint8_t x93 = UINT8_MAX;
static int16_t x96 = INT16_MIN;
uint64_t x97 = 71LLU;
static volatile int32_t t25 = 78403993;
uint8_t x106 = UINT8_MAX;
int32_t t28 = 261;
int64_t x124 = 10921657879726281LL;
int64_t x129 = INT64_MIN;
volatile int32_t t32 = -201297;
uint8_t x134 = 1U;
int64_t x142 = 1LL;
int32_t x152 = -1;
int64_t x155 = INT64_MAX;
int32_t x157 = INT32_MIN;
volatile int32_t x160 = INT32_MAX;
static uint16_t x162 = UINT16_MAX;
int8_t x165 = 3;
static uint64_t x166 = 29211531868LLU;
volatile uint16_t x168 = 104U;
int16_t x171 = 76;
int32_t x173 = 0;
int64_t x175 = -1LL;
int32_t x176 = 23936096;
int64_t x178 = 379339338LL;
int8_t x180 = INT8_MIN;
uint8_t x181 = 84U;
int32_t x182 = INT32_MIN;
int16_t x189 = -2;
volatile int32_t t49 = -1;
int64_t x205 = -1LL;
uint64_t x211 = UINT64_MAX;
uint8_t x212 = 0U;
volatile uint16_t x216 = UINT16_MAX;
static int64_t x218 = -1LL;
int16_t x219 = INT16_MIN;
int16_t x220 = -192;
uint32_t x221 = 3520329U;
int32_t x224 = INT32_MIN;
volatile int32_t t55 = -1526317;
static uint16_t x226 = 326U;
uint16_t x233 = 8092U;
static volatile int16_t x237 = -1;
static int8_t x247 = INT8_MIN;
int32_t x248 = INT32_MIN;
uint32_t x253 = UINT32_MAX;
int64_t x258 = 10783410939376LL;
volatile int32_t t64 = 22;
static int16_t x261 = 8;
volatile int32_t t65 = -48461;
int32_t x272 = -1;
int8_t x273 = -16;
int8_t x275 = INT8_MIN;
uint64_t x276 = UINT64_MAX;
volatile int32_t t68 = -5;
int32_t t69 = -360431453;
volatile int32_t t70 = -4431571;
int32_t x285 = INT32_MAX;
int16_t x296 = INT16_MAX;
int64_t x297 = -1LL;
int8_t x300 = INT8_MIN;
int64_t x302 = INT64_MAX;
int32_t t75 = 263733;
static volatile int32_t x311 = -11347;
int32_t t79 = 1642;
uint16_t x321 = UINT16_MAX;
int64_t x324 = 317307442420LL;
int64_t x333 = 9355694525775LL;
uint8_t x335 = UINT8_MAX;
uint64_t x336 = 182845715LLU;
uint8_t x339 = UINT8_MAX;
int64_t x343 = -1LL;
volatile uint64_t x347 = UINT64_MAX;
volatile int8_t x355 = -1;
volatile uint64_t x358 = 22LLU;
int16_t x360 = INT16_MIN;
volatile int32_t t89 = -65962483;
int16_t x361 = -19;
volatile int32_t t90 = 6960602;
uint64_t x366 = 2081572551965932233LLU;
int32_t x376 = -3734;
static int16_t x396 = -1;
volatile uint16_t x399 = 535U;


void f0(void) {
	uint32_t x1 = 59821673U;
	uint64_t x2 = UINT64_MAX;
	int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -564495;

	t0 = ((x1<(x2<x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x7 = INT16_MIN;
	volatile uint64_t x8 = 3425181480LLU;

	t1 = ((x5<(x6<x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	static int16_t x11 = INT16_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -62071;

	t2 = ((x9<(x10<x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static uint64_t x16 = 2493LLU;

	t3 = ((x13<(x14<x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	static int32_t x18 = -125296472;
	int16_t x19 = INT16_MIN;
	int16_t x20 = -19;
	volatile int32_t t4 = -1;

	t4 = ((x17<(x18<x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 24823725LLU;
	int16_t x22 = INT16_MIN;
	volatile int64_t x24 = INT64_MAX;
	volatile int32_t t5 = -1;

	t5 = ((x21<(x22<x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	volatile int16_t x27 = INT16_MIN;
	volatile uint64_t x28 = 8757476799550LLU;
	int32_t t6 = -2;

	t6 = ((x25<(x26<x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 149LLU;
	int32_t t7 = -61;

	t7 = ((x29<(x30<x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = UINT16_MAX;
	static uint16_t x34 = 3431U;
	static int32_t x36 = -2612;
	static int32_t t8 = -11;

	t8 = ((x33<(x34<x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 16U;
	volatile int32_t x39 = -4851749;
	volatile int32_t t9 = -26;

	t9 = ((x37<(x38<x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int32_t x42 = INT32_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -218456792;

	t10 = ((x41<(x42<x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 68U;
	uint16_t x46 = UINT16_MAX;
	static volatile uint8_t x47 = 5U;
	int32_t t11 = -34922;

	t11 = ((x45<(x46<x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	int8_t x50 = 0;
	int64_t x51 = 714976738716046984LL;
	volatile int32_t x52 = -1;
	int32_t t12 = -18656985;

	t12 = ((x49<(x50<x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	static volatile uint32_t x55 = 3576227U;
	volatile int64_t x56 = INT64_MAX;
	static volatile int32_t t13 = 118649;

	t13 = ((x53<(x54<x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = 28;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -293501;

	t14 = ((x57<(x58<x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 113U;
	static int64_t x62 = INT64_MAX;
	volatile uint16_t x63 = 14U;
	static uint16_t x64 = 48U;
	int32_t t15 = 3498709;

	t15 = ((x61<(x62<x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MIN;
	uint32_t x68 = 6666U;
	int32_t t16 = -18518492;

	t16 = ((x65<(x66<x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int8_t x70 = -1;

	t17 = ((x69<(x70<x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -109;
	static uint8_t x74 = 56U;
	static uint16_t x76 = 1435U;

	t18 = ((x73<(x74<x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int32_t x79 = -1164;
	int32_t x80 = INT32_MIN;
	static int32_t t19 = -88879855;

	t19 = ((x77<(x78<x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x83 = -6;
	uint64_t x84 = 11344505581889LLU;

	t20 = ((x81<(x82<x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int64_t x86 = INT64_MIN;
	int8_t x87 = 3;
	int16_t x88 = INT16_MAX;
	int32_t t21 = -789723;

	t21 = ((x85<(x86<x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int64_t x91 = INT64_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 31920;

	t22 = ((x89<(x90<x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = -7;
	uint32_t x95 = UINT32_MAX;
	int32_t t23 = 2876;

	t23 = ((x93<(x94<x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MAX;
	int32_t x99 = INT32_MIN;
	int8_t x100 = INT8_MIN;
	int32_t t24 = 984;

	t24 = ((x97<(x98<x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 13U;
	uint16_t x102 = 5U;
	int32_t x103 = -1;
	int16_t x104 = -1;

	t25 = ((x101<(x102<x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 0LLU;
	int8_t x107 = -3;
	static uint8_t x108 = 16U;
	int32_t t26 = 48060;

	t26 = ((x105<(x106<x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	uint8_t x110 = UINT8_MAX;
	volatile int32_t x111 = INT32_MIN;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = 0;

	t27 = ((x109<(x110<x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -3;
	volatile int16_t x114 = -12461;
	static int64_t x115 = INT64_MIN;
	int8_t x116 = 10;

	t28 = ((x113<(x114<x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 3;
	uint16_t x118 = 18U;
	volatile uint64_t x119 = UINT64_MAX;
	volatile int64_t x120 = -1LL;
	volatile int32_t t29 = -101;

	t29 = ((x117<(x118<x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MIN;
	int8_t x122 = -13;
	uint64_t x123 = 256363909669850887LLU;
	static volatile int32_t t30 = -18;

	t30 = ((x121<(x122<x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	uint16_t x126 = 19970U;
	uint8_t x127 = UINT8_MAX;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t31 = -461;

	t31 = ((x125<(x126<x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x130 = UINT16_MAX;
	volatile int32_t x131 = -209;
	uint8_t x132 = UINT8_MAX;

	t32 = ((x129<(x130<x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	volatile uint8_t x135 = 10U;
	int8_t x136 = -1;
	volatile int32_t t33 = -22255620;

	t33 = ((x133<(x134<x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MAX;
	int64_t x138 = INT64_MIN;
	int16_t x139 = 1;
	volatile int64_t x140 = INT64_MAX;
	static int32_t t34 = 225119;

	t34 = ((x137<(x138<x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 3813;

	t35 = ((x141<(x142<x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 535LL;
	int8_t x146 = -1;
	static uint32_t x147 = 260069U;
	int32_t x148 = -1;
	volatile int32_t t36 = -2880801;

	t36 = ((x145<(x146<x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MAX;
	int32_t x151 = INT32_MAX;
	volatile int32_t t37 = -27761;

	t37 = ((x149<(x150<x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = 0;
	uint16_t x154 = UINT16_MAX;
	int32_t x156 = -1;
	volatile int32_t t38 = 816641954;

	t38 = ((x153<(x154<x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x158 = INT16_MIN;
	int8_t x159 = INT8_MIN;
	volatile int32_t t39 = 794;

	t39 = ((x157<(x158<x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 0U;
	int16_t x163 = 0;
	uint32_t x164 = 431075993U;
	int32_t t40 = -22855016;

	t40 = ((x161<(x162<x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x167 = -1;
	int32_t t41 = 152418;

	t41 = ((x165<(x166<x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = 1;
	volatile uint16_t x172 = 121U;
	volatile int32_t t42 = -24;

	t42 = ((x169<(x170<x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = INT64_MAX;
	volatile int32_t t43 = -29;

	t43 = ((x173<(x174<x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	int16_t x179 = INT16_MIN;
	volatile int32_t t44 = -34;

	t44 = ((x177<(x178<x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x183 = INT32_MAX;
	volatile uint16_t x184 = UINT16_MAX;
	static int32_t t45 = -1031671;

	t45 = ((x181<(x182<x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int8_t x186 = -1;
	int64_t x187 = 466041328LL;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 337;

	t46 = ((x185<(x186<x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = 23U;
	int16_t x191 = INT16_MIN;
	static uint32_t x192 = UINT32_MAX;
	volatile int32_t t47 = -220;

	t47 = ((x189<(x190<x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = 1873U;
	int16_t x194 = INT16_MAX;
	static int8_t x195 = -1;
	volatile int8_t x196 = 1;
	static volatile int32_t t48 = -1269;

	t48 = ((x193<(x194<x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -43;
	uint16_t x198 = 7U;
	static int16_t x199 = INT16_MAX;
	int32_t x200 = INT32_MIN;

	t49 = ((x197<(x198<x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MIN;
	int32_t x202 = INT32_MIN;
	volatile int64_t x203 = -1LL;
	uint32_t x204 = UINT32_MAX;
	int32_t t50 = -3266;

	t50 = ((x201<(x202<x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x206 = 0U;
	int64_t x207 = INT64_MIN;
	int16_t x208 = -1;
	static volatile int32_t t51 = -58151;

	t51 = ((x205<(x206<x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	int8_t x210 = INT8_MAX;
	static int32_t t52 = -61;

	t52 = ((x209<(x210<x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	volatile int8_t x215 = -1;
	int32_t t53 = 1619511;

	t53 = ((x213<(x214<x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	volatile int32_t t54 = -1;

	t54 = ((x217<(x218<x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x222 = -1;
	int64_t x223 = INT64_MIN;

	t55 = ((x221<(x222<x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	int16_t x227 = 4;
	static int32_t x228 = INT32_MIN;
	int32_t t56 = 20509753;

	t56 = ((x225<(x226<x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	volatile int16_t x230 = INT16_MAX;
	uint32_t x231 = UINT32_MAX;
	int32_t x232 = INT32_MAX;
	static volatile int32_t t57 = -10;

	t57 = ((x229<(x230<x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = UINT8_MAX;
	uint8_t x235 = UINT8_MAX;
	uint32_t x236 = UINT32_MAX;
	static int32_t t58 = 6698;

	t58 = ((x233<(x234<x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MAX;
	volatile int16_t x239 = -15896;
	int16_t x240 = -42;
	int32_t t59 = -4152;

	t59 = ((x237<(x238<x239))<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = 6U;
	uint8_t x242 = UINT8_MAX;
	volatile int16_t x243 = INT16_MIN;
	volatile int64_t x244 = -145106LL;
	static int32_t t60 = 2920;

	t60 = ((x241<(x242<x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int64_t x246 = INT64_MIN;
	volatile int32_t t61 = -20578190;

	t61 = ((x245<(x246<x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x249 = -1;
	static int64_t x250 = -133681762459818964LL;
	int8_t x251 = -1;
	volatile int16_t x252 = -1;
	volatile int32_t t62 = -900;

	t62 = ((x249<(x250<x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x254 = UINT32_MAX;
	uint8_t x255 = 30U;
	int16_t x256 = INT16_MAX;
	int32_t t63 = -560539422;

	t63 = ((x253<(x254<x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	volatile int32_t x259 = INT32_MAX;
	int8_t x260 = INT8_MIN;

	t64 = ((x257<(x258<x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = INT64_MIN;
	static int8_t x263 = INT8_MIN;
	volatile uint16_t x264 = UINT16_MAX;

	t65 = ((x261<(x262<x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = 5;
	static int64_t x267 = INT64_MIN;
	static int16_t x268 = -5986;
	volatile int32_t t66 = -17;

	t66 = ((x265<(x266<x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = UINT16_MAX;
	uint32_t x270 = 1660U;
	int64_t x271 = INT64_MAX;
	volatile int32_t t67 = 4412;

	t67 = ((x269<(x270<x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x274 = -1;

	t68 = ((x273<(x274<x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int16_t x278 = 3056;
	uint16_t x279 = 25611U;
	int64_t x280 = INT64_MIN;

	t69 = ((x277<(x278<x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 223080408U;
	int32_t x282 = -1;
	uint32_t x283 = 10034U;
	int8_t x284 = INT8_MIN;

	t70 = ((x281<(x282<x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;
	static int32_t x287 = INT32_MAX;
	int64_t x288 = INT64_MAX;
	int32_t t71 = 297393017;

	t71 = ((x285<(x286<x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	volatile uint32_t x290 = 10U;
	int64_t x291 = -111244262881688134LL;
	int16_t x292 = 188;
	int32_t t72 = 1012698915;

	t72 = ((x289<(x290<x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 0;
	int16_t x294 = INT16_MIN;
	uint32_t x295 = UINT32_MAX;
	int32_t t73 = 182547;

	t73 = ((x293<(x294<x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x298 = UINT32_MAX;
	int8_t x299 = INT8_MAX;
	volatile int32_t t74 = 801474833;

	t74 = ((x297<(x298<x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 33054982LL;
	int64_t x303 = 287955470061LL;
	int32_t x304 = -2004875;

	t75 = ((x301<(x302<x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -3027;
	int16_t x306 = INT16_MIN;
	static volatile int64_t x307 = INT64_MIN;
	static uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = 631;

	t76 = ((x305<(x306<x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 31U;
	volatile int8_t x310 = -42;
	static int8_t x312 = -61;
	int32_t t77 = -1;

	t77 = ((x309<(x310<x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	static int32_t x314 = INT32_MIN;
	static int64_t x315 = 237998275001LL;
	uint64_t x316 = UINT64_MAX;
	static int32_t t78 = -1683032;

	t78 = ((x313<(x314<x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 0;
	uint64_t x318 = UINT64_MAX;
	volatile int16_t x319 = 2832;
	int16_t x320 = 1;

	t79 = ((x317<(x318<x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MIN;
	static int32_t t80 = -641;

	t80 = ((x321<(x322<x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	volatile uint16_t x326 = UINT16_MAX;
	volatile uint64_t x327 = 20LLU;
	static int64_t x328 = -1LL;
	volatile int32_t t81 = 54999;

	t81 = ((x325<(x326<x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	static int16_t x330 = 1331;
	volatile int64_t x331 = INT64_MIN;
	volatile uint16_t x332 = UINT16_MAX;
	static volatile int32_t t82 = 1;

	t82 = ((x329<(x330<x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = 13;
	volatile int32_t t83 = -7512;

	t83 = ((x333<(x334<x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = 1394;
	int64_t x338 = -1LL;
	int64_t x340 = INT64_MIN;
	int32_t t84 = -402975;

	t84 = ((x337<(x338<x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	static int32_t x342 = -1454;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t85 = -24206;

	t85 = ((x341<(x342<x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -15LL;
	uint32_t x346 = UINT32_MAX;
	static int64_t x348 = 29729644LL;
	volatile int32_t t86 = 0;

	t86 = ((x345<(x346<x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -103411687;
	volatile int64_t x350 = INT64_MIN;
	static int16_t x351 = -1;
	static int8_t x352 = -1;
	volatile int32_t t87 = -504729356;

	t87 = ((x349<(x350<x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = 3825601535150LLU;
	uint16_t x354 = UINT16_MAX;
	int32_t x356 = INT32_MIN;
	int32_t t88 = 198;

	t88 = ((x353<(x354<x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	static volatile uint64_t x359 = 490240139LLU;

	t89 = ((x357<(x358<x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x362 = INT32_MIN;
	volatile int16_t x363 = -61;
	static volatile int8_t x364 = INT8_MIN;

	t90 = ((x361<(x362<x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -16;
	int16_t x367 = -35;
	static volatile uint8_t x368 = 30U;
	int32_t t91 = 932454;

	t91 = ((x365<(x366<x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 1223U;
	static int64_t x370 = -757LL;
	static int32_t x371 = 1;
	volatile int32_t x372 = INT32_MIN;
	int32_t t92 = 2468341;

	t92 = ((x369<(x370<x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = -1;
	volatile uint32_t x374 = 75U;
	static uint16_t x375 = UINT16_MAX;
	volatile int32_t t93 = 1012427;

	t93 = ((x373<(x374<x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MAX;
	uint32_t x378 = 574671457U;
	volatile int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MIN;
	int32_t t94 = 1;

	t94 = ((x377<(x378<x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x381 = 3587357395427LLU;
	uint64_t x382 = 125734LLU;
	uint32_t x383 = 2005828U;
	static uint64_t x384 = 123501211906LLU;
	volatile int32_t t95 = -2566;

	t95 = ((x381<(x382<x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MAX;
	uint8_t x386 = UINT8_MAX;
	uint32_t x387 = 12163U;
	static volatile int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 744615;

	t96 = ((x385<(x386<x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int8_t x390 = 32;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = -32530704;
	int32_t t97 = -81838;

	t97 = ((x389<(x390<x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	int64_t x394 = -458935LL;
	volatile int32_t x395 = -15544282;
	int32_t t98 = 7971;

	t98 = ((x393<(x394<x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = -53;
	int64_t x398 = -1LL;
	int16_t x400 = INT16_MIN;
	int32_t t99 = 1072175616;

	t99 = ((x397<(x398<x399))<=x400);

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

