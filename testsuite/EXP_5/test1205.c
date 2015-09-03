#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
int8_t x2 = INT8_MIN;
uint8_t x8 = 91U;
static uint64_t x15 = UINT64_MAX;
volatile uint16_t x17 = 0U;
int16_t x19 = INT16_MIN;
int64_t x27 = INT64_MIN;
static int16_t x28 = -1;
int16_t x38 = INT16_MIN;
int16_t x46 = 63;
volatile uint64_t x47 = 78358LLU;
volatile int64_t x48 = -3613LL;
uint64_t x49 = 701844308LLU;
static int16_t x52 = INT16_MIN;
static volatile int32_t t12 = -1435139;
static uint32_t x55 = UINT32_MAX;
volatile int32_t x57 = -1;
int64_t x59 = INT64_MIN;
volatile int32_t t14 = -1;
static int32_t x64 = -1;
uint8_t x66 = UINT8_MAX;
volatile uint8_t x75 = 0U;
int32_t x79 = -89715;
static volatile int32_t t19 = 5530;
static volatile int32_t t20 = -2819399;
uint32_t x92 = UINT32_MAX;
volatile int32_t x100 = 2257091;
volatile int32_t t23 = 386;
uint64_t x125 = UINT64_MAX;
uint16_t x141 = 963U;
volatile uint64_t x142 = 205843LLU;
volatile int16_t x144 = -1139;
uint32_t x145 = UINT32_MAX;
int32_t x147 = -941889;
uint64_t x148 = 1145288023794367530LLU;
int8_t x156 = -38;
volatile int32_t t37 = 667486687;
int64_t x164 = INT64_MAX;
int32_t x167 = 33470551;
uint64_t x168 = 996752LLU;
volatile int32_t t39 = 10;
volatile int16_t x180 = INT16_MIN;
uint64_t x183 = 1373959LLU;
uint8_t x192 = 71U;
static int16_t x211 = INT16_MIN;
uint32_t x213 = UINT32_MAX;
uint32_t x232 = 211141642U;
static int8_t x235 = INT8_MAX;
static int16_t x247 = -1;
int64_t x255 = -5LL;
static int32_t x263 = INT32_MAX;
int32_t t60 = 22;
volatile int16_t x280 = 0;
static uint64_t x283 = UINT64_MAX;
volatile int32_t t63 = -29751433;
int32_t x289 = -1;
volatile int16_t x298 = -13766;
static volatile int8_t x305 = -1;
static volatile uint32_t x313 = 10U;
int32_t t71 = 34;
int64_t x320 = -779LL;
volatile int16_t x324 = -1;
int16_t x331 = -1;
int64_t x334 = -1LL;
int32_t t76 = -105108809;
static volatile int32_t t78 = 0;
static int8_t x348 = 16;
uint16_t x351 = 10U;
static int64_t x354 = -4955376341349552LL;
volatile int16_t x365 = INT16_MIN;
static uint32_t x372 = UINT32_MAX;
volatile int32_t t84 = 3747;
volatile uint16_t x383 = 14U;
int32_t t88 = 662;
int16_t x397 = INT16_MIN;
uint64_t x398 = UINT64_MAX;
int8_t x399 = -1;
volatile int32_t t90 = -13;
static int8_t x401 = INT8_MIN;
int64_t x405 = -158130885541768LL;
static uint16_t x415 = UINT16_MAX;
volatile int64_t x422 = -1LL;
int32_t t97 = 11364;
uint64_t x433 = 9LLU;


void f0(void) {
	int64_t x3 = INT64_MIN;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = 75191;

	t0 = (x1<((x2==x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 3598;
	int32_t x6 = INT32_MAX;
	int8_t x7 = -1;
	volatile int32_t t1 = 43474;

	t1 = (x5<((x6==x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 0;
	uint64_t x10 = 339200446107LLU;
	int32_t x11 = -26;
	volatile int8_t x12 = INT8_MIN;
	int32_t t2 = 1;

	t2 = (x9<((x10==x11)-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int64_t x14 = -1LL;
	volatile uint8_t x16 = UINT8_MAX;
	static int32_t t3 = -406810068;

	t3 = (x13<((x14==x15)-x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	int64_t x20 = 225722846901LL;
	int32_t t4 = -6009795;

	t4 = (x17<((x18==x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = UINT64_MAX;
	uint16_t x22 = 4U;
	volatile int8_t x23 = -1;
	static int8_t x24 = -7;
	volatile int32_t t5 = 1870;

	t5 = (x21<((x22==x23)-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile uint8_t x26 = 1U;
	int32_t t6 = 261115;

	t6 = (x25<((x26==x27)-x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 2;
	volatile uint8_t x30 = UINT8_MAX;
	volatile int16_t x31 = INT16_MIN;
	static int8_t x32 = -1;
	int32_t t7 = -23502925;

	t7 = (x29<((x30==x31)-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 59727146949LLU;
	int32_t x34 = INT32_MIN;
	int8_t x35 = -1;
	static uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 70135;

	t8 = (x33<((x34==x35)-x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -237;
	int64_t x39 = INT64_MAX;
	volatile uint16_t x40 = UINT16_MAX;
	int32_t t9 = -933;

	t9 = (x37<((x38==x39)-x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	volatile uint8_t x42 = UINT8_MAX;
	int64_t x43 = -16LL;
	volatile int32_t x44 = 5;
	volatile int32_t t10 = -13;

	t10 = (x41<((x42==x43)-x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 7U;
	int32_t t11 = 1967;

	t11 = (x45<((x46==x47)-x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = -1;
	static int16_t x51 = 10;

	t12 = (x49<((x50==x51)-x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint16_t x54 = 24526U;
	volatile int8_t x56 = INT8_MIN;
	int32_t t13 = -452;

	t13 = (x53<((x54==x55)-x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = UINT64_MAX;
	volatile int8_t x60 = INT8_MIN;

	t14 = (x57<((x58==x59)-x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	volatile int16_t x62 = 25;
	static uint8_t x63 = 17U;
	int32_t t15 = -27857759;

	t15 = (x61<((x62==x63)-x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = 223522070939LL;
	uint64_t x67 = 1LLU;
	int32_t x68 = 16021;
	static int32_t t16 = 187372;

	t16 = (x65<((x66==x67)-x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = -1836192359351LL;
	static int8_t x70 = INT8_MAX;
	static volatile int32_t x71 = -1;
	uint32_t x72 = 6267U;
	static int32_t t17 = 3;

	t17 = (x69<((x70==x71)-x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = INT64_MAX;
	volatile uint16_t x76 = 1U;
	volatile int32_t t18 = -2;

	t18 = (x73<((x74==x75)-x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	static volatile int32_t x78 = -216781;
	int8_t x80 = -28;

	t19 = (x77<((x78==x79)-x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 1;
	static volatile int32_t x82 = INT32_MIN;
	static int16_t x83 = INT16_MAX;
	uint16_t x84 = 8910U;

	t20 = (x81<((x82==x83)-x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 262U;
	volatile uint32_t x86 = UINT32_MAX;
	volatile int32_t x87 = -48;
	static uint32_t x88 = UINT32_MAX;
	int32_t t21 = -1;

	t21 = (x85<((x86==x87)-x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -7;
	volatile int32_t x90 = INT32_MIN;
	uint32_t x91 = UINT32_MAX;
	volatile int32_t t22 = 785361604;

	t22 = (x89<((x90==x91)-x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -1;
	uint64_t x98 = 28246682LLU;
	int64_t x99 = 67447547878944971LL;

	t23 = (x97<((x98==x99)-x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	volatile int32_t x102 = -2814;
	volatile int64_t x103 = INT64_MIN;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t24 = -808754788;

	t24 = (x101<((x102==x103)-x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = UINT64_MAX;
	int64_t x106 = INT64_MAX;
	int8_t x107 = -1;
	uint8_t x108 = 3U;
	int32_t t25 = -1;

	t25 = (x105<((x106==x107)-x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 24715U;
	int16_t x114 = INT16_MIN;
	int16_t x115 = INT16_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t26 = -9;

	t26 = (x113<((x114==x115)-x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	volatile int8_t x119 = INT8_MIN;
	volatile int16_t x120 = -1;
	static volatile int32_t t27 = -20207;

	t27 = (x117<((x118==x119)-x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MAX;
	int32_t x122 = 94040753;
	volatile uint8_t x123 = 7U;
	volatile uint8_t x124 = 0U;
	int32_t t28 = 251;

	t28 = (x121<((x122==x123)-x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x126 = INT16_MIN;
	static volatile int16_t x127 = INT16_MAX;
	volatile uint64_t x128 = 1416094194277756381LLU;
	volatile int32_t t29 = 57;

	t29 = (x125<((x126==x127)-x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = 45U;
	uint64_t x130 = 32276028327139LLU;
	int16_t x131 = -13;
	int64_t x132 = 0LL;
	volatile int32_t t30 = 14922317;

	t30 = (x129<((x130==x131)-x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	uint32_t x134 = 92134799U;
	static int16_t x135 = 71;
	uint32_t x136 = UINT32_MAX;
	volatile int32_t t31 = 38;

	t31 = (x133<((x134==x135)-x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = INT8_MAX;
	int8_t x138 = -1;
	int32_t x139 = INT32_MIN;
	volatile int16_t x140 = INT16_MAX;
	volatile int32_t t32 = -2770;

	t32 = (x137<((x138==x139)-x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x143 = 7;
	volatile int32_t t33 = -34151;

	t33 = (x141<((x142==x143)-x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x146 = -1;
	volatile int32_t t34 = -8144833;

	t34 = (x145<((x146==x147)-x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 16363340U;
	uint16_t x150 = 1U;
	static uint64_t x151 = UINT64_MAX;
	int8_t x152 = INT8_MAX;
	volatile int32_t t35 = -32188439;

	t35 = (x149<((x150==x151)-x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x153 = 7404799643983LLU;
	int16_t x154 = INT16_MIN;
	int32_t x155 = -1;
	int32_t t36 = -35410833;

	t36 = (x153<((x154==x155)-x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = UINT32_MAX;
	int16_t x158 = INT16_MAX;
	int32_t x159 = INT32_MIN;
	int32_t x160 = -9;

	t37 = (x157<((x158==x159)-x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x161 = INT32_MIN;
	static uint64_t x162 = 17862716716194315LLU;
	static int8_t x163 = INT8_MIN;
	int32_t t38 = -881;

	t38 = (x161<((x162==x163)-x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	int16_t x166 = INT16_MAX;

	t39 = (x165<((x166==x167)-x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	int64_t x170 = 1045597142155LL;
	static uint32_t x171 = 12418U;
	uint16_t x172 = UINT16_MAX;
	int32_t t40 = 105513;

	t40 = (x169<((x170==x171)-x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x177 = INT16_MIN;
	int32_t x178 = -1657;
	volatile int64_t x179 = -1LL;
	volatile int32_t t41 = -1;

	t41 = (x177<((x178==x179)-x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = 365LL;
	int8_t x184 = 0;
	int32_t t42 = -56;

	t42 = (x181<((x182==x183)-x184));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = UINT32_MAX;
	uint64_t x186 = UINT64_MAX;
	int64_t x187 = -1LL;
	static int32_t x188 = -527968;
	volatile int32_t t43 = -9365;

	t43 = (x185<((x186==x187)-x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	int64_t x190 = 32720050LL;
	uint8_t x191 = UINT8_MAX;
	volatile int32_t t44 = 28489;

	t44 = (x189<((x190==x191)-x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x197 = UINT8_MAX;
	static volatile int32_t x198 = INT32_MIN;
	static uint16_t x199 = 110U;
	volatile int32_t x200 = -2;
	int32_t t45 = 1998;

	t45 = (x197<((x198==x199)-x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = -1;
	int16_t x202 = -1;
	volatile uint32_t x203 = UINT32_MAX;
	static volatile int16_t x204 = -3;
	int32_t t46 = 10;

	t46 = (x201<((x202==x203)-x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x205 = 1;
	int32_t x206 = INT32_MAX;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = -51;
	int32_t t47 = 1834310;

	t47 = (x205<((x206==x207)-x208));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = 215613LLU;
	static uint64_t x210 = 1651263363454771467LLU;
	int16_t x212 = -1;
	int32_t t48 = -217;

	t48 = (x209<((x210==x211)-x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x214 = INT8_MIN;
	volatile uint8_t x215 = UINT8_MAX;
	volatile int8_t x216 = INT8_MIN;
	static volatile int32_t t49 = 779;

	t49 = (x213<((x214==x215)-x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = 312999611LL;
	static uint64_t x223 = UINT64_MAX;
	uint16_t x224 = 252U;
	volatile int32_t t50 = -1;

	t50 = (x221<((x222==x223)-x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x229 = UINT32_MAX;
	int64_t x230 = 0LL;
	int64_t x231 = 19953293478481LL;
	int32_t t51 = -255;

	t51 = (x229<((x230==x231)-x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x233 = INT8_MAX;
	uint8_t x234 = UINT8_MAX;
	volatile uint16_t x236 = 0U;
	int32_t t52 = -699887;

	t52 = (x233<((x234==x235)-x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = INT32_MIN;
	int8_t x238 = -1;
	uint32_t x239 = 122422U;
	uint64_t x240 = 1459195LLU;
	volatile int32_t t53 = -2067;

	t53 = (x237<((x238==x239)-x240));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = 5;
	int64_t x246 = INT64_MIN;
	int16_t x248 = 1048;
	volatile int32_t t54 = 960;

	t54 = (x245<((x246==x247)-x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MIN;
	uint8_t x250 = 0U;
	int16_t x251 = INT16_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t55 = 6776277;

	t55 = (x249<((x250==x251)-x252));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x253 = 3104426781322LLU;
	static int64_t x254 = INT64_MIN;
	uint8_t x256 = 5U;
	volatile int32_t t56 = 260742994;

	t56 = (x253<((x254==x255)-x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = -1LL;
	static uint16_t x258 = UINT16_MAX;
	int16_t x259 = INT16_MIN;
	uint64_t x260 = 15917962075464LLU;
	volatile int32_t t57 = -947;

	t57 = (x257<((x258==x259)-x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = 47;
	volatile int16_t x262 = INT16_MAX;
	int16_t x264 = INT16_MAX;
	static int32_t t58 = -61281;

	t58 = (x261<((x262==x263)-x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = 2;
	static int8_t x266 = INT8_MAX;
	int64_t x267 = -1LL;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t59 = -708;

	t59 = (x265<((x266==x267)-x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x269 = -1LL;
	volatile int64_t x270 = -1LL;
	uint64_t x271 = 1453809165702267LLU;
	uint64_t x272 = 3487404524009067LLU;

	t60 = (x269<((x270==x271)-x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x273 = -1430457;
	int16_t x274 = -1;
	int16_t x275 = INT16_MIN;
	int16_t x276 = -15309;
	int32_t t61 = -15026;

	t61 = (x273<((x274==x275)-x276));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x277 = INT8_MIN;
	int64_t x278 = 28493LL;
	volatile uint64_t x279 = UINT64_MAX;
	int32_t t62 = 2038;

	t62 = (x277<((x278==x279)-x280));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = -1;
	int32_t x282 = INT32_MIN;
	volatile int64_t x284 = INT64_MAX;

	t63 = (x281<((x282==x283)-x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x285 = 1708437U;
	static int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MIN;
	static uint8_t x288 = 28U;
	volatile int32_t t64 = 457;

	t64 = (x285<((x286==x287)-x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x290 = UINT16_MAX;
	static int64_t x291 = INT64_MIN;
	int64_t x292 = -1LL;
	int32_t t65 = -114958;

	t65 = (x289<((x290==x291)-x292));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x293 = 8519552382835698LLU;
	static int16_t x294 = INT16_MIN;
	int8_t x295 = -1;
	int32_t x296 = -100;
	int32_t t66 = 1181840;

	t66 = (x293<((x294==x295)-x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x297 = UINT64_MAX;
	int8_t x299 = INT8_MAX;
	int64_t x300 = 210839660348LL;
	int32_t t67 = -105292;

	t67 = (x297<((x298==x299)-x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x301 = 2337;
	int64_t x302 = 40305879171469LL;
	static volatile uint64_t x303 = 19144503000498346LLU;
	int64_t x304 = -134082767LL;
	static int32_t t68 = -245;

	t68 = (x301<((x302==x303)-x304));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x306 = 26U;
	volatile int32_t x307 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t69 = -31109;

	t69 = (x305<((x306==x307)-x308));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x309 = 1U;
	int8_t x310 = 25;
	static volatile int8_t x311 = INT8_MIN;
	int32_t x312 = 1;
	volatile int32_t t70 = 1545;

	t70 = (x309<((x310==x311)-x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x314 = -1;
	int8_t x315 = -49;
	static volatile uint64_t x316 = UINT64_MAX;

	t71 = (x313<((x314==x315)-x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = 440750901244349LL;
	int16_t x318 = INT16_MAX;
	int16_t x319 = -1;
	volatile int32_t t72 = -54554;

	t72 = (x317<((x318==x319)-x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x321 = 1398413895261LLU;
	uint16_t x322 = 295U;
	int64_t x323 = -21405372810295621LL;
	static volatile int32_t t73 = -314;

	t73 = (x321<((x322==x323)-x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 1021538647454066LLU;
	int8_t x326 = INT8_MAX;
	int16_t x327 = INT16_MIN;
	uint16_t x328 = 83U;
	static volatile int32_t t74 = -3;

	t74 = (x325<((x326==x327)-x328));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x329 = INT8_MIN;
	int8_t x330 = -1;
	static int64_t x332 = 1223735073LL;
	int32_t t75 = -7;

	t75 = (x329<((x330==x331)-x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = INT16_MIN;
	int16_t x335 = 1;
	uint8_t x336 = UINT8_MAX;

	t76 = (x333<((x334==x335)-x336));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MAX;
	volatile int64_t x339 = 0LL;
	static uint16_t x340 = 47U;
	int32_t t77 = -34;

	t77 = (x337<((x338==x339)-x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = 4116159420097612416LL;
	int16_t x342 = INT16_MIN;
	int32_t x343 = -1;
	uint64_t x344 = UINT64_MAX;

	t78 = (x341<((x342==x343)-x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x345 = -1;
	volatile int16_t x346 = 1;
	int8_t x347 = INT8_MIN;
	int32_t t79 = -23;

	t79 = (x345<((x346==x347)-x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x349 = INT32_MAX;
	volatile int8_t x350 = INT8_MIN;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t80 = 79041;

	t80 = (x349<((x350==x351)-x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = 0LL;
	static int8_t x355 = INT8_MIN;
	uint64_t x356 = UINT64_MAX;
	int32_t t81 = 1407;

	t81 = (x353<((x354==x355)-x356));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x357 = 66741119U;
	static int8_t x358 = INT8_MAX;
	uint64_t x359 = 220448968908878LLU;
	uint32_t x360 = 841701452U;
	int32_t t82 = -7017;

	t82 = (x357<((x358==x359)-x360));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x366 = INT8_MIN;
	volatile int16_t x367 = 3;
	uint64_t x368 = 8054329052493LLU;
	static int32_t t83 = 21091702;

	t83 = (x365<((x366==x367)-x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x369 = 59444U;
	static uint8_t x370 = 117U;
	int64_t x371 = -285493LL;

	t84 = (x369<((x370==x371)-x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x373 = -1;
	volatile int64_t x374 = INT64_MAX;
	static volatile uint64_t x375 = 2LLU;
	int8_t x376 = INT8_MIN;
	int32_t t85 = 0;

	t85 = (x373<((x374==x375)-x376));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = INT8_MIN;
	volatile int32_t x378 = INT32_MIN;
	uint64_t x379 = UINT64_MAX;
	static int16_t x380 = INT16_MIN;
	int32_t t86 = 59388;

	t86 = (x377<((x378==x379)-x380));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x381 = UINT32_MAX;
	static int8_t x382 = 1;
	int8_t x384 = 20;
	int32_t t87 = 107;

	t87 = (x381<((x382==x383)-x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = -1;
	int64_t x386 = -1LL;
	uint64_t x387 = 44849779LLU;
	static uint8_t x388 = UINT8_MAX;

	t88 = (x385<((x386==x387)-x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x389 = -1;
	int32_t x390 = 184351;
	int64_t x391 = 245752226828597LL;
	uint8_t x392 = 0U;
	int32_t t89 = -29829920;

	t89 = (x389<((x390==x391)-x392));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x400 = 29U;

	t90 = (x397<((x398==x399)-x400));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x402 = 1008;
	static uint16_t x403 = 22U;
	int8_t x404 = -1;
	static volatile int32_t t91 = 1;

	t91 = (x401<((x402==x403)-x404));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x406 = INT64_MIN;
	uint64_t x407 = 325452252LLU;
	uint8_t x408 = 27U;
	int32_t t92 = 195;

	t92 = (x405<((x406==x407)-x408));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x409 = 122026635U;
	static volatile int16_t x410 = -2;
	volatile int64_t x411 = INT64_MIN;
	static volatile uint64_t x412 = UINT64_MAX;
	volatile int32_t t93 = 24;

	t93 = (x409<((x410==x411)-x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x413 = 29U;
	static int8_t x414 = INT8_MIN;
	volatile int32_t x416 = -490815100;
	int32_t t94 = -1;

	t94 = (x413<((x414==x415)-x416));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x417 = 1852U;
	uint64_t x418 = 11003LLU;
	int16_t x419 = INT16_MAX;
	volatile int32_t x420 = INT32_MAX;
	volatile int32_t t95 = -3;

	t95 = (x417<((x418==x419)-x420));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x421 = 9636U;
	uint8_t x423 = UINT8_MAX;
	int32_t x424 = 231594271;
	volatile int32_t t96 = -30100;

	t96 = (x421<((x422==x423)-x424));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x425 = INT8_MAX;
	int32_t x426 = -1;
	int64_t x427 = -1LL;
	uint8_t x428 = UINT8_MAX;

	t97 = (x425<((x426==x427)-x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x429 = -1;
	int32_t x430 = -1;
	int8_t x431 = 2;
	int8_t x432 = -1;
	volatile int32_t t98 = -2020;

	t98 = (x429<((x430==x431)-x432));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x434 = INT32_MIN;
	int8_t x435 = -23;
	static int16_t x436 = -506;
	static int32_t t99 = 156;

	t99 = (x433<((x434==x435)-x436));

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

