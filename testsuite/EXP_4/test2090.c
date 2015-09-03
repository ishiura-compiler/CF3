#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 112389368914220LLU;
volatile int32_t x14 = 90641;
uint8_t x19 = 19U;
int16_t x21 = INT16_MAX;
volatile uint64_t x25 = UINT64_MAX;
volatile uint8_t x26 = UINT8_MAX;
volatile int32_t t6 = -490190;
int64_t x32 = -1LL;
static volatile int32_t x41 = INT32_MAX;
uint32_t x44 = 2598923U;
uint16_t x46 = 6948U;
volatile uint8_t x48 = UINT8_MAX;
int16_t x50 = 60;
volatile int32_t t11 = -3;
int32_t x74 = -16;
static volatile uint8_t x75 = UINT8_MAX;
int32_t x79 = INT32_MAX;
int8_t x111 = -9;
uint8_t x115 = 2U;
int32_t x125 = INT32_MIN;
volatile uint32_t x128 = 3U;
static int16_t x134 = INT16_MAX;
uint8_t x135 = UINT8_MAX;
int16_t x142 = -1;
int8_t x146 = 1;
uint16_t x148 = 11U;
volatile int16_t x151 = INT16_MAX;
int8_t x153 = INT8_MIN;
int16_t x155 = -1;
static int32_t x156 = 116;
int16_t x157 = INT16_MIN;
volatile int32_t x163 = -2727263;
int32_t t37 = 13415;
uint8_t x167 = 1U;
int32_t x168 = INT32_MAX;
volatile int8_t x176 = -1;
int8_t x178 = INT8_MAX;
volatile int64_t x179 = INT64_MIN;
static int16_t x182 = 6446;
volatile int32_t x188 = INT32_MIN;
static int32_t x190 = INT32_MAX;
uint64_t x191 = UINT64_MAX;
int64_t x192 = INT64_MAX;
int32_t x198 = -1;
volatile int32_t t47 = -19184914;
volatile int32_t t49 = -1021558780;
uint32_t x220 = 319U;
static volatile int16_t x222 = INT16_MIN;
static uint16_t x230 = 18U;
uint32_t x232 = 143839U;
int16_t x236 = INT16_MIN;
uint64_t x255 = 902249270291780LLU;
uint32_t x259 = UINT32_MAX;
static uint32_t x266 = UINT32_MAX;
uint64_t x271 = UINT64_MAX;
volatile int64_t x272 = INT64_MIN;
uint8_t x275 = 26U;
static int32_t t64 = 1;
volatile int32_t t67 = -12686323;
int64_t x290 = INT64_MIN;
static volatile int16_t x291 = 1;
static int16_t x292 = 255;
int16_t x293 = -1;
volatile uint16_t x297 = UINT16_MAX;
int16_t x300 = -1778;
int8_t x301 = INT8_MAX;
static int8_t x309 = INT8_MIN;
int16_t x315 = 206;
static int32_t x320 = -1;
uint8_t x331 = 1U;
uint16_t x332 = 203U;
int32_t x337 = INT32_MIN;
static volatile int32_t t79 = 4174143;
uint16_t x347 = UINT16_MAX;
static int32_t t82 = 306;
uint8_t x356 = UINT8_MAX;
static int32_t x365 = INT32_MIN;
volatile int16_t x367 = -1;
static volatile int32_t x370 = 126171891;
uint8_t x372 = UINT8_MAX;
int64_t x377 = 12494069646500LL;
int32_t x380 = INT32_MIN;
int32_t t89 = -64226;
int16_t x383 = INT16_MIN;
uint32_t x387 = 88U;
static int32_t x397 = INT32_MIN;
int16_t x410 = 6;
static int8_t x414 = -1;
static int16_t x415 = -1;


void f0(void) {
	uint64_t x1 = 652290052833LLU;
	int64_t x2 = INT64_MIN;
	int32_t x3 = INT32_MIN;
	static volatile int32_t t0 = 13;

	t0 = (x1<=(x2%(x3^x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 13269718LL;
	int16_t x6 = 3470;
	static uint32_t x7 = 9U;
	int8_t x8 = INT8_MIN;
	static int32_t t1 = -853;

	t1 = (x5<=(x6%(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	static volatile int32_t x10 = INT32_MIN;
	int8_t x11 = INT8_MIN;
	int64_t x12 = -133441512021022LL;
	int32_t t2 = 3696781;

	t2 = (x9<=(x10%(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	static int8_t x15 = INT8_MIN;
	uint16_t x16 = 15674U;
	volatile int32_t t3 = -1089;

	t3 = (x13<=(x14%(x15^x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 23;
	uint16_t x18 = 2U;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -3009879;

	t4 = (x17<=(x18%(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = UINT8_MAX;
	uint32_t x23 = UINT32_MAX;
	int64_t x24 = -1582007876LL;
	int32_t t5 = 1603;

	t5 = (x21<=(x22%(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x27 = 1U;
	int64_t x28 = -1LL;

	t6 = (x25<=(x26%(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MAX;
	static int16_t x30 = INT16_MIN;
	volatile int16_t x31 = INT16_MAX;
	int32_t t7 = -631067;

	t7 = (x29<=(x30%(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x42 = 3268711787308LLU;
	int32_t x43 = -1;
	int32_t t8 = 109479899;

	t8 = (x41<=(x42%(x43^x44)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	int8_t x47 = -14;
	static int32_t t9 = -120;

	t9 = (x45<=(x46%(x47^x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x49 = INT8_MIN;
	int16_t x51 = -1;
	int16_t x52 = INT16_MAX;
	volatile int32_t t10 = 49965;

	t10 = (x49<=(x50%(x51^x52)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = -1;
	static volatile int16_t x55 = -1;
	int64_t x56 = INT64_MIN;

	t11 = (x53<=(x54%(x55^x56)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = 12282447964231772LL;
	static int8_t x58 = 29;
	volatile uint64_t x59 = 27764LLU;
	static uint32_t x60 = 13493U;
	volatile int32_t t12 = 15;

	t12 = (x57<=(x58%(x59^x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x61 = 898902151517228099LLU;
	int8_t x62 = INT8_MAX;
	int16_t x63 = INT16_MAX;
	static int8_t x64 = INT8_MAX;
	volatile int32_t t13 = 11;

	t13 = (x61<=(x62%(x63^x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	volatile int8_t x66 = INT8_MIN;
	volatile int16_t x67 = -1;
	static int32_t x68 = 7576176;
	int32_t t14 = -82289;

	t14 = (x65<=(x66%(x67^x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = -15024;
	int32_t x70 = -159939;
	volatile int32_t x71 = -298326;
	int16_t x72 = INT16_MIN;
	volatile int32_t t15 = 3;

	t15 = (x69<=(x70%(x71^x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 58U;
	volatile int16_t x76 = 4028;
	int32_t t16 = 122;

	t16 = (x73<=(x74%(x75^x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MIN;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t17 = -194936;

	t17 = (x77<=(x78%(x79^x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MIN;
	int8_t x87 = 0;
	uint64_t x88 = 31710927LLU;
	volatile int32_t t18 = -49821750;

	t18 = (x85<=(x86%(x87^x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = INT8_MAX;
	static int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MAX;
	int32_t x92 = -1;
	static volatile int32_t t19 = -7;

	t19 = (x89<=(x90%(x91^x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = UINT32_MAX;
	volatile uint16_t x94 = 3450U;
	int64_t x95 = 784740718709LL;
	static int16_t x96 = 10632;
	volatile int32_t t20 = 19210155;

	t20 = (x93<=(x94%(x95^x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = -458538160LL;
	int64_t x98 = -375656799537184948LL;
	volatile uint8_t x99 = UINT8_MAX;
	int32_t x100 = -1;
	volatile int32_t t21 = 3652;

	t21 = (x97<=(x98%(x99^x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = 1692831726U;
	volatile int32_t x102 = INT32_MIN;
	volatile uint64_t x103 = UINT64_MAX;
	int32_t x104 = INT32_MAX;
	volatile int32_t t22 = -7867;

	t22 = (x101<=(x102%(x103^x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = -1LL;
	int16_t x107 = INT16_MIN;
	uint64_t x108 = UINT64_MAX;
	static int32_t t23 = 230;

	t23 = (x105<=(x106%(x107^x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = UINT8_MAX;
	volatile int8_t x110 = INT8_MAX;
	static uint32_t x112 = UINT32_MAX;
	volatile int32_t t24 = -5912860;

	t24 = (x109<=(x110%(x111^x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x114 = INT16_MIN;
	int8_t x116 = 1;
	static int32_t t25 = 45706699;

	t25 = (x113<=(x114%(x115^x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x117 = INT16_MIN;
	volatile int64_t x118 = INT64_MAX;
	static uint64_t x119 = 1168LLU;
	int64_t x120 = 53367583174LL;
	static int32_t t26 = 5411;

	t26 = (x117<=(x118%(x119^x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = 0;
	volatile int16_t x122 = -1;
	static volatile int64_t x123 = 3607199375633LL;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t27 = 597023;

	t27 = (x121<=(x122%(x123^x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x126 = -1;
	static int16_t x127 = 0;
	static volatile int32_t t28 = 6;

	t28 = (x125<=(x126%(x127^x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x129 = 948U;
	int32_t x130 = -1;
	uint64_t x131 = 0LLU;
	uint16_t x132 = 2038U;
	int32_t t29 = -36;

	t29 = (x129<=(x130%(x131^x132)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x133 = -880;
	int8_t x136 = INT8_MAX;
	int32_t t30 = -689;

	t30 = (x133<=(x134%(x135^x136)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x137 = 357457U;
	static uint32_t x138 = UINT32_MAX;
	volatile uint8_t x139 = 0U;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t31 = 1;

	t31 = (x137<=(x138%(x139^x140)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	static int64_t x143 = -1LL;
	uint32_t x144 = 6U;
	int32_t t32 = 513328390;

	t32 = (x141<=(x142%(x143^x144)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x145 = 27089787761391357LLU;
	int16_t x147 = INT16_MIN;
	volatile int32_t t33 = -88637;

	t33 = (x145<=(x146%(x147^x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -1;
	int8_t x150 = -5;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t34 = -7618574;

	t34 = (x149<=(x150%(x151^x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x154 = INT8_MAX;
	volatile int32_t t35 = -524;

	t35 = (x153<=(x154%(x155^x156)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x158 = -1;
	int8_t x159 = -1;
	int32_t x160 = 1158656;
	volatile int32_t t36 = 135;

	t36 = (x157<=(x158%(x159^x160)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x161 = 32LLU;
	uint8_t x162 = 95U;
	volatile int64_t x164 = INT64_MAX;

	t37 = (x161<=(x162%(x163^x164)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x165 = 3U;
	static int8_t x166 = -1;
	static int32_t t38 = 1047370125;

	t38 = (x165<=(x166%(x167^x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MAX;
	int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	volatile int16_t x172 = INT16_MAX;
	int32_t t39 = 10;

	t39 = (x169<=(x170%(x171^x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = -4;
	int8_t x174 = INT8_MAX;
	int8_t x175 = -11;
	int32_t t40 = -122;

	t40 = (x173<=(x174%(x175^x176)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = -105791440098817LL;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t41 = -1064;

	t41 = (x177<=(x178%(x179^x180)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x181 = INT8_MIN;
	volatile uint8_t x183 = 0U;
	int32_t x184 = INT32_MAX;
	static int32_t t42 = -659;

	t42 = (x181<=(x182%(x183^x184)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = 225U;
	int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MAX;
	volatile int32_t t43 = 44298;

	t43 = (x185<=(x186%(x187^x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = 10;
	volatile int32_t t44 = -521476;

	t44 = (x189<=(x190%(x191^x192)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x193 = INT16_MIN;
	volatile int32_t x194 = 1606;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;
	int32_t t45 = -6;

	t45 = (x193<=(x194%(x195^x196)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = 1413U;
	uint8_t x199 = 1U;
	int8_t x200 = INT8_MIN;
	volatile int32_t t46 = 0;

	t46 = (x197<=(x198%(x199^x200)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x201 = 3;
	uint32_t x202 = UINT32_MAX;
	uint64_t x203 = 3728661761199391LLU;
	volatile int8_t x204 = -33;

	t47 = (x201<=(x202%(x203^x204)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 36U;
	int32_t x206 = -1;
	int32_t x207 = INT32_MIN;
	static uint32_t x208 = UINT32_MAX;
	int32_t t48 = 24847;

	t48 = (x205<=(x206%(x207^x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = -1;
	uint32_t x210 = 376U;
	int16_t x211 = INT16_MAX;
	int16_t x212 = -1;

	t49 = (x209<=(x210%(x211^x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MAX;
	int32_t x218 = INT32_MIN;
	uint64_t x219 = 2LLU;
	int32_t t50 = 458042969;

	t50 = (x217<=(x218%(x219^x220)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = 1LL;
	static volatile int32_t x223 = INT32_MAX;
	int32_t x224 = -1;
	volatile int32_t t51 = 169730060;

	t51 = (x221<=(x222%(x223^x224)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = -1;
	int8_t x226 = INT8_MIN;
	int64_t x227 = INT64_MIN;
	static int64_t x228 = INT64_MAX;
	volatile int32_t t52 = 146409570;

	t52 = (x225<=(x226%(x227^x228)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = 7788;
	static uint64_t x231 = UINT64_MAX;
	int32_t t53 = -3;

	t53 = (x229<=(x230%(x231^x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = INT32_MIN;
	volatile int64_t x234 = 1LL;
	volatile uint8_t x235 = 14U;
	int32_t t54 = -6241435;

	t54 = (x233<=(x234%(x235^x236)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = -10;
	static int32_t x238 = -1;
	int32_t x239 = 4;
	static int32_t x240 = INT32_MIN;
	int32_t t55 = 34731296;

	t55 = (x237<=(x238%(x239^x240)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = UINT64_MAX;
	static int8_t x242 = -1;
	static uint32_t x243 = 1U;
	uint32_t x244 = 2U;
	int32_t t56 = 64199;

	t56 = (x241<=(x242%(x243^x244)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = -1;
	volatile int32_t x246 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	int64_t x248 = -1LL;
	int32_t t57 = -166855403;

	t57 = (x245<=(x246%(x247^x248)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x249 = UINT64_MAX;
	static int16_t x250 = INT16_MIN;
	volatile uint16_t x251 = 6U;
	int16_t x252 = -13;
	static volatile int32_t t58 = -128980727;

	t58 = (x249<=(x250%(x251^x252)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x253 = -1;
	int32_t x254 = -69;
	uint64_t x256 = 52320871091866169LLU;
	int32_t t59 = -1283;

	t59 = (x253<=(x254%(x255^x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = UINT8_MAX;
	static volatile uint64_t x258 = UINT64_MAX;
	int16_t x260 = INT16_MIN;
	int32_t t60 = 313384;

	t60 = (x257<=(x258%(x259^x260)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MAX;
	static uint8_t x263 = 6U;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t61 = 111984;

	t61 = (x261<=(x262%(x263^x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = 1U;
	int16_t x267 = INT16_MIN;
	volatile uint8_t x268 = UINT8_MAX;
	int32_t t62 = -1;

	t62 = (x265<=(x266%(x267^x268)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = 50893529007446499LLU;
	volatile int32_t x270 = INT32_MIN;
	volatile int32_t t63 = 115;

	t63 = (x269<=(x270%(x271^x272)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MIN;
	uint16_t x276 = 24705U;

	t64 = (x273<=(x274%(x275^x276)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x277 = 31U;
	uint8_t x278 = 75U;
	uint64_t x279 = 601LLU;
	int16_t x280 = INT16_MIN;
	int32_t t65 = -18633183;

	t65 = (x277<=(x278%(x279^x280)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = -76LL;
	int64_t x282 = -1LL;
	int8_t x283 = 0;
	static int32_t x284 = 274397;
	volatile int32_t t66 = -29;

	t66 = (x281<=(x282%(x283^x284)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = -78;
	static uint32_t x287 = 261070712U;
	int16_t x288 = INT16_MIN;

	t67 = (x285<=(x286%(x287^x288)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = -1;
	int32_t t68 = -1965040;

	t68 = (x289<=(x290%(x291^x292)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x294 = INT8_MAX;
	uint8_t x295 = 88U;
	int16_t x296 = INT16_MAX;
	static volatile int32_t t69 = 4382;

	t69 = (x293<=(x294%(x295^x296)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x298 = -667734092;
	static uint32_t x299 = UINT32_MAX;
	volatile int32_t t70 = 0;

	t70 = (x297<=(x298%(x299^x300)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x302 = INT16_MAX;
	static uint8_t x303 = UINT8_MAX;
	static volatile uint8_t x304 = 0U;
	int32_t t71 = -1;

	t71 = (x301<=(x302%(x303^x304)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x310 = UINT8_MAX;
	int64_t x311 = INT64_MIN;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t72 = -3;

	t72 = (x309<=(x310%(x311^x312)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MAX;
	uint16_t x314 = 28338U;
	int8_t x316 = INT8_MIN;
	volatile int32_t t73 = 1348456;

	t73 = (x313<=(x314%(x315^x316)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = -69246;
	static int8_t x318 = 10;
	static uint16_t x319 = 98U;
	volatile int32_t t74 = -866025821;

	t74 = (x317<=(x318%(x319^x320)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x321 = UINT32_MAX;
	uint16_t x322 = 12178U;
	static int32_t x323 = -91;
	volatile int32_t x324 = INT32_MIN;
	int32_t t75 = -123516;

	t75 = (x321<=(x322%(x323^x324)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MIN;
	uint16_t x327 = 28089U;
	int8_t x328 = 1;
	int32_t t76 = 162;

	t76 = (x325<=(x326%(x327^x328)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = -1LL;
	static int32_t x330 = 673;
	volatile int32_t t77 = 4;

	t77 = (x329<=(x330%(x331^x332)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x333 = 1U;
	uint16_t x334 = UINT16_MAX;
	uint32_t x335 = UINT32_MAX;
	static int32_t x336 = INT32_MIN;
	int32_t t78 = -115683848;

	t78 = (x333<=(x334%(x335^x336)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x338 = -1;
	uint64_t x339 = 0LLU;
	int16_t x340 = INT16_MAX;

	t79 = (x337<=(x338%(x339^x340)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MAX;
	int32_t x342 = -1;
	int8_t x343 = INT8_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t80 = -49122;

	t80 = (x341<=(x342%(x343^x344)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = INT8_MIN;
	uint16_t x346 = 1062U;
	static volatile int32_t x348 = -1;
	static int32_t t81 = 1325;

	t81 = (x345<=(x346%(x347^x348)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x349 = UINT64_MAX;
	int8_t x350 = INT8_MAX;
	uint32_t x351 = 0U;
	uint64_t x352 = UINT64_MAX;

	t82 = (x349<=(x350%(x351^x352)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MAX;
	int32_t x354 = 31678651;
	int64_t x355 = -1LL;
	static volatile int32_t t83 = -1;

	t83 = (x353<=(x354%(x355^x356)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = 19;
	static uint8_t x358 = 97U;
	int32_t x359 = -692;
	static volatile int64_t x360 = INT64_MIN;
	volatile int32_t t84 = -15004;

	t84 = (x357<=(x358%(x359^x360)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = UINT8_MAX;
	int64_t x362 = INT64_MIN;
	uint8_t x363 = 3U;
	static int16_t x364 = -1;
	int32_t t85 = -83805;

	t85 = (x361<=(x362%(x363^x364)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x366 = 14LLU;
	static int8_t x368 = INT8_MIN;
	int32_t t86 = -77;

	t86 = (x365<=(x366%(x367^x368)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MIN;
	uint16_t x371 = 19366U;
	static int32_t t87 = -20055;

	t87 = (x369<=(x370%(x371^x372)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x373 = -1LL;
	int16_t x374 = -3;
	int32_t x375 = INT32_MIN;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t88 = 150135064;

	t88 = (x373<=(x374%(x375^x376)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x378 = 48345431;
	int64_t x379 = 1512LL;

	t89 = (x377<=(x378%(x379^x380)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x381 = 0U;
	int16_t x382 = INT16_MAX;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t90 = 223;

	t90 = (x381<=(x382%(x383^x384)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = -1;
	int16_t x386 = INT16_MIN;
	uint8_t x388 = 11U;
	static volatile int32_t t91 = 81;

	t91 = (x385<=(x386%(x387^x388)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x389 = 6425LLU;
	int32_t x390 = INT32_MAX;
	static volatile int8_t x391 = -2;
	uint32_t x392 = 22U;
	int32_t t92 = -56;

	t92 = (x389<=(x390%(x391^x392)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x393 = INT32_MIN;
	static int32_t x394 = INT32_MAX;
	static int8_t x395 = 1;
	volatile int32_t x396 = INT32_MIN;
	int32_t t93 = 890600125;

	t93 = (x393<=(x394%(x395^x396)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x398 = -489;
	int64_t x399 = -1LL;
	volatile int64_t x400 = INT64_MAX;
	volatile int32_t t94 = 170;

	t94 = (x397<=(x398%(x399^x400)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = INT64_MIN;
	static uint16_t x402 = UINT16_MAX;
	uint32_t x403 = 91U;
	uint16_t x404 = UINT16_MAX;
	int32_t t95 = -59724518;

	t95 = (x401<=(x402%(x403^x404)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x405 = INT64_MIN;
	int64_t x406 = -1LL;
	int8_t x407 = 56;
	volatile uint32_t x408 = 754122U;
	volatile int32_t t96 = 5488295;

	t96 = (x405<=(x406%(x407^x408)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = -502564;
	static volatile uint8_t x411 = UINT8_MAX;
	volatile int32_t x412 = -1;
	volatile int32_t t97 = -2281;

	t97 = (x409<=(x410%(x411^x412)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x413 = UINT32_MAX;
	volatile int64_t x416 = INT64_MIN;
	int32_t t98 = -2;

	t98 = (x413<=(x414%(x415^x416)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x417 = 0U;
	static volatile int64_t x418 = 2079368322582648040LL;
	int32_t x419 = -609389253;
	uint32_t x420 = 14802U;
	int32_t t99 = 1944207;

	t99 = (x417<=(x418%(x419^x420)));

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

