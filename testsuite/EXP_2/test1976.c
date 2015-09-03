#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 192U;
volatile int32_t t2 = 5;
int16_t x17 = INT16_MIN;
static int8_t x19 = -3;
static volatile int64_t x20 = -1LL;
uint16_t x26 = 1717U;
volatile int32_t x29 = INT32_MAX;
static uint32_t x30 = 4563U;
static int16_t x44 = INT16_MAX;
static int16_t x47 = INT16_MIN;
static int16_t x58 = 222;
uint64_t x63 = 15788759601121528LLU;
int32_t x65 = INT32_MIN;
int64_t x67 = -30217464386885LL;
static int16_t x68 = INT16_MIN;
int64_t t17 = 15568038264720865LL;
volatile uint64_t x74 = UINT64_MAX;
int8_t x79 = INT8_MIN;
uint16_t x91 = 5U;
int64_t x92 = -1427LL;
volatile int64_t t22 = 200565LL;
uint8_t x93 = UINT8_MAX;
uint32_t x97 = 2U;
volatile int32_t t26 = 64473567;
static volatile int8_t x111 = -3;
int8_t x112 = 25;
static int32_t t27 = 199;
int8_t x115 = INT8_MIN;
int64_t t28 = -41298224781LL;
int64_t x118 = INT64_MIN;
volatile uint64_t x119 = UINT64_MAX;
volatile int64_t x120 = 1884904LL;
volatile int64_t t29 = 8137LL;
static uint16_t x122 = 2U;
static int32_t t30 = -5890659;
uint32_t x127 = 13U;
int32_t x131 = INT32_MIN;
volatile uint64_t t32 = 0LLU;
int32_t x145 = INT32_MIN;
volatile int16_t x151 = -44;
static int8_t x154 = INT8_MIN;
int32_t x158 = -79428;
volatile uint64_t x163 = 1LLU;
volatile uint64_t x164 = UINT64_MAX;
volatile int16_t x166 = INT16_MAX;
volatile int32_t t43 = 643;
uint16_t x177 = 536U;
static volatile uint64_t x186 = UINT64_MAX;
int64_t x190 = 124293585434537950LL;
volatile int64_t t47 = 101108664480LL;
int16_t x203 = INT16_MIN;
int32_t x205 = -1;
int16_t x206 = INT16_MIN;
static uint16_t x217 = 1293U;
static volatile uint64_t x227 = 18587LLU;
static int32_t x228 = -445;
volatile int32_t x229 = -4;
uint32_t x232 = UINT32_MAX;
int8_t x235 = INT8_MAX;
int32_t t58 = 302068;
int8_t x237 = -1;
int64_t t60 = 0LL;
uint8_t x251 = 21U;
int32_t t62 = -1430753;
int16_t x254 = INT16_MIN;
static int64_t x257 = INT64_MAX;
uint8_t x263 = 0U;
int32_t x277 = INT32_MIN;
int32_t t69 = -961337959;
uint64_t x281 = 11577751LLU;
volatile uint16_t x286 = 6519U;
static volatile int8_t x287 = INT8_MIN;
volatile int64_t t72 = 996091501LL;
uint8_t x298 = 28U;
volatile int64_t t74 = INT64_MIN;
int64_t x302 = -1LL;
int8_t x304 = INT8_MIN;
uint16_t x312 = 216U;
uint8_t x316 = 6U;
volatile int32_t t78 = -4;
int32_t x319 = INT32_MIN;
int16_t x322 = INT16_MIN;
volatile int16_t x323 = 104;
static uint8_t x324 = UINT8_MAX;
static uint64_t x329 = 17438653603226LLU;
int16_t x334 = INT16_MIN;
int8_t x338 = INT8_MAX;
static int32_t t84 = -31;
volatile int32_t t87 = 1917312;
static volatile int8_t x356 = INT8_MAX;
volatile int32_t t89 = -861;
volatile uint64_t x361 = 1417026892838LLU;
static int32_t x363 = -1;
int32_t t91 = INT32_MIN;
int8_t x378 = -1;
int64_t x382 = INT64_MAX;
static int16_t x390 = 172;
int8_t x392 = INT8_MIN;
int32_t x400 = 132616;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint64_t x2 = 223975388LLU;
	static uint16_t x3 = 5U;
	volatile int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = -306736;

	t0 = ((x1<(x2|x3))^x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	uint32_t x7 = UINT32_MAX;
	int32_t x8 = INT32_MAX;
	int32_t t1 = 4;

	t1 = ((x5<(x6|x7))^x8);

	if (t1 != 2147483646) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile int16_t x10 = INT16_MIN;
	int64_t x11 = -701635LL;
	uint8_t x12 = UINT8_MAX;

	t2 = ((x9<(x10|x11))^x12);

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	int16_t x14 = 24;
	int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = INT32_MIN;

	t3 = ((x13<(x14|x15))^x16);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	int64_t t4 = 258643LL;

	t4 = ((x17<(x18|x19))^x20);

	if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -40824620LL;
	int8_t x22 = 1;
	int8_t x23 = -11;
	int64_t x24 = INT64_MAX;
	volatile int64_t t5 = 0LL;

	t5 = ((x21<(x22|x23))^x24);

	if (t5 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -29;
	volatile int64_t x27 = INT64_MIN;
	int8_t x28 = 1;
	int32_t t6 = 104;

	t6 = ((x25<(x26|x27))^x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = INT8_MAX;
	uint16_t x32 = 2745U;
	volatile int32_t t7 = 67185766;

	t7 = ((x29<(x30|x31))^x32);

	if (t7 != 2745) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 35U;
	uint64_t x34 = UINT64_MAX;
	volatile int64_t x35 = 2568LL;
	int8_t x36 = 13;
	volatile int32_t t8 = 1968;

	t8 = ((x33<(x34|x35))^x36);

	if (t8 != 12) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	volatile int8_t x38 = 0;
	uint32_t x39 = 19563632U;
	int8_t x40 = INT8_MAX;
	int32_t t9 = 24286;

	t9 = ((x37<(x38|x39))^x40);

	if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 4694U;
	static int32_t x42 = -1;
	int16_t x43 = 3;
	volatile int32_t t10 = 21372409;

	t10 = ((x41<(x42|x43))^x44);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int8_t x46 = 25;
	uint32_t x48 = 36829U;
	uint32_t t11 = 2345634U;

	t11 = ((x45<(x46|x47))^x48);

	if (t11 != 36829U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 1757U;
	static int64_t x50 = INT64_MAX;
	uint8_t x51 = 102U;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 10;

	t12 = ((x49<(x50|x51))^x52);

	if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 622624028257551498LLU;
	volatile int64_t x54 = 1047641892339352LL;
	volatile uint64_t x55 = 97LLU;
	int32_t x56 = INT32_MAX;
	int32_t t13 = INT32_MAX;

	t13 = ((x53<(x54|x55))^x56);

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	static uint32_t x59 = 5955U;
	int8_t x60 = -1;
	static volatile int32_t t14 = 0;

	t14 = ((x57<(x58|x59))^x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	uint8_t x62 = 0U;
	static int16_t x64 = INT16_MAX;
	static int32_t t15 = 346;

	t15 = ((x61<(x62|x63))^x64);

	if (t15 != 32766) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x66 = 31U;
	volatile int32_t t16 = -22980385;

	t16 = ((x65<(x66|x67))^x68);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -20;
	int8_t x70 = -1;
	static uint8_t x71 = 1U;
	static int64_t x72 = INT64_MIN;

	t17 = ((x69<(x70|x71))^x72);

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = 180059106U;
	uint64_t x75 = UINT64_MAX;
	static uint16_t x76 = 1307U;
	volatile int32_t t18 = -1;

	t18 = ((x73<(x74|x75))^x76);

	if (t18 != 1306) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int64_t x78 = -1LL;
	static int64_t x80 = INT64_MIN;
	static volatile int64_t t19 = INT64_MIN;

	t19 = ((x77<(x78|x79))^x80);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 65041531U;
	uint8_t x82 = UINT8_MAX;
	int32_t x83 = INT32_MIN;
	static uint8_t x84 = UINT8_MAX;
	static volatile int32_t t20 = 752719;

	t20 = ((x81<(x82|x83))^x84);

	if (t20 != 254) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -18;
	uint16_t x86 = UINT16_MAX;
	int32_t x87 = -1;
	int32_t x88 = INT32_MAX;
	static volatile int32_t t21 = 0;

	t21 = ((x85<(x86|x87))^x88);

	if (t21 != 2147483646) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	uint16_t x90 = UINT16_MAX;

	t22 = ((x89<(x90|x91))^x92);

	if (t22 != -1428LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x94 = 3U;
	int32_t x95 = 16790673;
	volatile int32_t x96 = -1;
	volatile int32_t t23 = -4;

	t23 = ((x93<(x94|x95))^x96);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x98 = INT16_MAX;
	uint16_t x99 = 328U;
	int64_t x100 = INT64_MIN;
	volatile int64_t t24 = 948750369818LL;

	t24 = ((x97<(x98|x99))^x100);

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static uint8_t x102 = UINT8_MAX;
	static int64_t x103 = 6482LL;
	volatile uint16_t x104 = 7178U;
	static volatile int32_t t25 = -9807;

	t25 = ((x101<(x102|x103))^x104);

	if (t25 != 7179) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	uint16_t x106 = UINT16_MAX;
	static int8_t x107 = INT8_MIN;
	uint8_t x108 = 0U;

	t26 = ((x105<(x106|x107))^x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	uint16_t x110 = 31U;

	t27 = ((x109<(x110|x111))^x112);

	if (t27 != 25) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = 1701;
	int64_t x114 = -1LL;
	int64_t x116 = -1LL;

	t28 = ((x113<(x114|x115))^x116);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = -1LL;

	t29 = ((x117<(x118|x119))^x120);

	if (t29 != 1884904LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 58403402;
	int64_t x123 = -785458061372LL;
	int32_t x124 = -1;

	t30 = ((x121<(x122|x123))^x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = 3LL;
	int16_t x126 = 15;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t31 = 54629LLU;

	t31 = ((x125<(x126|x127))^x128);

	if (t31 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MIN;
	uint64_t x132 = 510933485136LLU;

	t32 = ((x129<(x130|x131))^x132);

	if (t32 != 510933485136LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	int64_t x134 = INT64_MIN;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = INT32_MIN;

	t33 = ((x133<(x134|x135))^x136);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 1LL;
	int32_t x138 = -1;
	uint8_t x139 = 74U;
	int16_t x140 = -6;
	volatile int32_t t34 = -116579;

	t34 = ((x137<(x138|x139))^x140);

	if (t34 != -6) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 55U;
	volatile int32_t x142 = -1;
	static int32_t x143 = INT32_MIN;
	static int16_t x144 = 315;
	int32_t t35 = 654634;

	t35 = ((x141<(x142|x143))^x144);

	if (t35 != 315) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	int64_t x147 = INT64_MAX;
	int64_t x148 = -1434612259768008860LL;
	volatile int64_t t36 = 85722LL;

	t36 = ((x145<(x146|x147))^x148);

	if (t36 != -1434612259768008859LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	uint32_t x150 = UINT32_MAX;
	int64_t x152 = INT64_MIN;
	int64_t t37 = INT64_MIN;

	t37 = ((x149<(x150|x151))^x152);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	volatile int64_t x155 = 190LL;
	int16_t x156 = 0;
	int32_t t38 = 313637;

	t38 = ((x153<(x154|x155))^x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = -2;
	volatile int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t39 = -92256011;

	t39 = ((x157<(x158|x159))^x160);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 16U;
	int8_t x162 = INT8_MIN;
	volatile uint64_t t40 = 1331603636LLU;

	t40 = ((x161<(x162|x163))^x164);

	if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = UINT64_MAX;
	int16_t x167 = INT16_MIN;
	static uint64_t x168 = UINT64_MAX;
	uint64_t t41 = UINT64_MAX;

	t41 = ((x165<(x166|x167))^x168);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = 5654U;
	int32_t x170 = -2269;
	uint8_t x171 = 15U;
	static int16_t x172 = INT16_MAX;
	int32_t t42 = -66640353;

	t42 = ((x169<(x170|x171))^x172);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	int8_t x174 = INT8_MIN;
	static int16_t x175 = -18;
	int32_t x176 = -1;

	t43 = ((x173<(x174|x175))^x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x178 = UINT16_MAX;
	int64_t x179 = -1LL;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = ((x177<(x178|x179))^x180);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MIN;
	int32_t x183 = INT32_MIN;
	uint8_t x184 = 5U;
	int32_t t45 = 5320200;

	t45 = ((x181<(x182|x183))^x184);

	if (t45 != 5) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 0LL;
	static int8_t x187 = -1;
	static int32_t x188 = INT32_MIN;
	int32_t t46 = 0;

	t46 = ((x185<(x186|x187))^x188);

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	uint16_t x191 = 0U;
	static int64_t x192 = INT64_MIN;

	t47 = ((x189<(x190|x191))^x192);

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 481001862406LLU;
	int64_t x194 = -1LL;
	int8_t x195 = INT8_MAX;
	uint16_t x196 = 30U;
	volatile int32_t t48 = -47228748;

	t48 = ((x193<(x194|x195))^x196);

	if (t48 != 31) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	static volatile int64_t x198 = INT64_MIN;
	int32_t x199 = INT32_MIN;
	uint32_t x200 = 41896243U;
	uint32_t t49 = 915516U;

	t49 = ((x197<(x198|x199))^x200);

	if (t49 != 41896243U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	static int8_t x202 = INT8_MAX;
	int16_t x204 = -1;
	int32_t t50 = 5;

	t50 = ((x201<(x202|x203))^x204);

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x207 = INT8_MIN;
	volatile int64_t x208 = 13LL;
	volatile int64_t t51 = 53968935443936LL;

	t51 = ((x205<(x206|x207))^x208);

	if (t51 != 13LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 348;
	uint16_t x210 = UINT16_MAX;
	uint8_t x211 = 24U;
	uint8_t x212 = 4U;
	static int32_t t52 = -24475;

	t52 = ((x209<(x210|x211))^x212);

	if (t52 != 5) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = INT64_MIN;
	uint32_t x216 = UINT32_MAX;
	static uint32_t t53 = UINT32_MAX;

	t53 = ((x213<(x214|x215))^x216);

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MAX;
	volatile int32_t t54 = -205248;

	t54 = ((x217<(x218|x219))^x220);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 6347680303257LL;
	int64_t x222 = -1LL;
	static int64_t x223 = 96112LL;
	uint32_t x224 = 6402904U;
	uint32_t t55 = 57284U;

	t55 = ((x221<(x222|x223))^x224);

	if (t55 != 6402904U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = 3U;
	int64_t x226 = 438787LL;
	int32_t t56 = -468759;

	t56 = ((x225<(x226|x227))^x228);

	if (t56 != -446) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = UINT32_MAX;
	static int32_t x231 = INT32_MIN;
	uint32_t t57 = 13465592U;

	t57 = ((x229<(x230|x231))^x232);

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 6;
	volatile int16_t x234 = -12;
	volatile int16_t x236 = INT16_MIN;

	t58 = ((x233<(x234|x235))^x236);

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = INT32_MIN;
	int16_t x239 = -1;
	static uint16_t x240 = 1097U;
	int32_t t59 = -1;

	t59 = ((x237<(x238|x239))^x240);

	if (t59 != 1097) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	static int16_t x242 = INT16_MAX;
	int8_t x243 = INT8_MAX;
	int64_t x244 = -1LL;

	t60 = ((x241<(x242|x243))^x244);

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = -1;
	int8_t x246 = INT8_MIN;
	int32_t x247 = -1;
	volatile int64_t x248 = 8463282LL;
	int64_t t61 = -1LL;

	t61 = ((x245<(x246|x247))^x248);

	if (t61 != 8463282LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 0;
	int8_t x250 = 15;
	volatile int16_t x252 = -3036;

	t62 = ((x249<(x250|x251))^x252);

	if (t62 != -3035) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x255 = INT64_MIN;
	volatile int64_t x256 = INT64_MIN;
	int64_t t63 = INT64_MIN;

	t63 = ((x253<(x254|x255))^x256);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x258 = 265U;
	int8_t x259 = INT8_MIN;
	int64_t x260 = -1LL;
	volatile int64_t t64 = -11LL;

	t64 = ((x257<(x258|x259))^x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	uint64_t x262 = 24367531032812LLU;
	int32_t x264 = INT32_MIN;
	static int32_t t65 = 31925;

	t65 = ((x261<(x262|x263))^x264);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = 15U;
	static volatile uint32_t x266 = 166352U;
	volatile int16_t x267 = -597;
	static int8_t x268 = INT8_MIN;
	int32_t t66 = 30;

	t66 = ((x265<(x266|x267))^x268);

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MIN;
	volatile int32_t x270 = -1;
	int16_t x271 = INT16_MIN;
	static int64_t x272 = INT64_MIN;
	static int64_t t67 = -66244794629809LL;

	t67 = ((x269<(x270|x271))^x272);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = UINT16_MAX;
	volatile int32_t x274 = INT32_MIN;
	int16_t x275 = -1;
	static uint32_t x276 = UINT32_MAX;
	uint32_t t68 = UINT32_MAX;

	t68 = ((x273<(x274|x275))^x276);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x278 = UINT16_MAX;
	static int64_t x279 = INT64_MIN;
	static int16_t x280 = INT16_MIN;

	t69 = ((x277<(x278|x279))^x280);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = -1;
	int32_t x283 = -1;
	int8_t x284 = INT8_MIN;
	int32_t t70 = -26;

	t70 = ((x281<(x282|x283))^x284);

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 62863221422469502LL;
	volatile uint32_t x288 = 201116U;
	uint32_t t71 = 7766U;

	t71 = ((x285<(x286|x287))^x288);

	if (t71 != 201116U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = 57U;
	volatile uint32_t x290 = UINT32_MAX;
	volatile int64_t x291 = INT64_MIN;
	int64_t x292 = 40564984722LL;

	t72 = ((x289<(x290|x291))^x292);

	if (t72 != 40564984722LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int64_t x294 = -1LL;
	int32_t x295 = INT32_MIN;
	uint8_t x296 = UINT8_MAX;
	static volatile int32_t t73 = 7;

	t73 = ((x293<(x294|x295))^x296);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	int16_t x299 = INT16_MIN;
	int64_t x300 = INT64_MIN;

	t74 = ((x297<(x298|x299))^x300);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = 2U;
	int64_t x303 = 66966123551705415LL;
	int32_t t75 = 438;

	t75 = ((x301<(x302|x303))^x304);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 29U;
	uint16_t x306 = UINT16_MAX;
	uint16_t x307 = 4094U;
	static int16_t x308 = -1;
	volatile int32_t t76 = -14193040;

	t76 = ((x305<(x306|x307))^x308);

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 6U;
	int32_t x310 = 9256;
	int8_t x311 = -42;
	static volatile int32_t t77 = -3916;

	t77 = ((x309<(x310|x311))^x312);

	if (t77 != 216) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = 3429LLU;
	int32_t x314 = INT32_MAX;
	uint8_t x315 = UINT8_MAX;

	t78 = ((x313<(x314|x315))^x316);

	if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 18U;
	static uint32_t x318 = 106082491U;
	static volatile int64_t x320 = -15380LL;
	int64_t t79 = -2139733682121074193LL;

	t79 = ((x317<(x318|x319))^x320);

	if (t79 != -15379LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MAX;
	int32_t t80 = -805517;

	t80 = ((x321<(x322|x323))^x324);

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = INT8_MIN;
	volatile int32_t x326 = -1449;
	volatile int8_t x327 = INT8_MIN;
	int64_t x328 = 3110242687750LL;
	int64_t t81 = -20666910825LL;

	t81 = ((x325<(x326|x327))^x328);

	if (t81 != 3110242687751LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = INT16_MIN;
	int16_t x331 = INT16_MIN;
	uint64_t x332 = 4LLU;
	volatile uint64_t t82 = 22925LLU;

	t82 = ((x329<(x330|x331))^x332);

	if (t82 != 5LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = INT16_MIN;
	int64_t x335 = -1LL;
	uint64_t x336 = 447631846LLU;
	uint64_t t83 = 38LLU;

	t83 = ((x333<(x334|x335))^x336);

	if (t83 != 447631847LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	int64_t x339 = INT64_MAX;
	uint16_t x340 = 504U;

	t84 = ((x337<(x338|x339))^x340);

	if (t84 != 505) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	uint16_t x342 = 0U;
	int16_t x343 = INT16_MAX;
	int32_t x344 = INT32_MAX;
	int32_t t85 = -6663037;

	t85 = ((x341<(x342|x343))^x344);

	if (t85 != 2147483646) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = INT16_MIN;
	static uint64_t x346 = UINT64_MAX;
	static int64_t x347 = 55651LL;
	static int16_t x348 = -1;
	volatile int32_t t86 = -3;

	t86 = ((x345<(x346|x347))^x348);

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MIN;
	int16_t x351 = -1;
	static int32_t x352 = INT32_MIN;

	t87 = ((x349<(x350|x351))^x352);

	if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	int8_t x354 = -2;
	int8_t x355 = 0;
	volatile int32_t t88 = -788688673;

	t88 = ((x353<(x354|x355))^x356);

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = -105033102;
	static int64_t x358 = INT64_MIN;
	int16_t x359 = INT16_MIN;
	static uint8_t x360 = UINT8_MAX;

	t89 = ((x357<(x358|x359))^x360);

	if (t89 != 254) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = 7U;
	volatile int16_t x364 = 47;
	static volatile int32_t t90 = 21;

	t90 = ((x361<(x362|x363))^x364);

	if (t90 != 47) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	static int8_t x366 = 0;
	int32_t x367 = -766145;
	volatile int32_t x368 = INT32_MIN;

	t91 = ((x365<(x366|x367))^x368);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 2U;
	static uint16_t x370 = 0U;
	int32_t x371 = INT32_MIN;
	volatile int32_t x372 = -1;
	int32_t t92 = 459785;

	t92 = ((x369<(x370|x371))^x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	uint64_t x374 = UINT64_MAX;
	static volatile int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MAX;
	int32_t t93 = 3424;

	t93 = ((x373<(x374|x375))^x376);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int8_t x379 = INT8_MAX;
	int8_t x380 = 2;
	static int32_t t94 = 1244620;

	t94 = ((x377<(x378|x379))^x380);

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x381 = INT16_MIN;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = -1;
	int32_t t95 = 12707;

	t95 = ((x381<(x382|x383))^x384);

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	static uint16_t x386 = UINT16_MAX;
	volatile uint32_t x387 = 1535999U;
	int64_t x388 = INT64_MIN;
	volatile int64_t t96 = INT64_MIN;

	t96 = ((x385<(x386|x387))^x388);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	volatile int16_t x391 = INT16_MIN;
	volatile int32_t t97 = -216;

	t97 = ((x389<(x390|x391))^x392);

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MAX;
	static uint16_t x394 = UINT16_MAX;
	int32_t x395 = -553645229;
	volatile uint8_t x396 = UINT8_MAX;
	static volatile int32_t t98 = 913372;

	t98 = ((x393<(x394|x395))^x396);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MAX;
	volatile int8_t x398 = 59;
	int8_t x399 = INT8_MIN;
	static volatile int32_t t99 = 375455719;

	t99 = ((x397<(x398|x399))^x400);

	if (t99 != 132616) { NG(); } else { ; }
	
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

