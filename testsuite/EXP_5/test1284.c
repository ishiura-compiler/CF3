#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int16_t x7 = INT16_MIN;
uint64_t x9 = 3175645268845367LLU;
int32_t t2 = -157464;
static int16_t x14 = INT16_MIN;
int16_t x17 = INT16_MIN;
int16_t x24 = 0;
uint64_t x25 = UINT64_MAX;
uint16_t x27 = 73U;
volatile int32_t t6 = -2508;
int8_t x31 = INT8_MAX;
volatile int64_t x32 = INT64_MIN;
volatile uint64_t x34 = 211473530499LLU;
static int16_t x36 = INT16_MAX;
int8_t x38 = -1;
uint32_t x47 = UINT32_MAX;
volatile int16_t x63 = INT16_MAX;
uint16_t x67 = 3350U;
static volatile int64_t x72 = INT64_MAX;
uint16_t x79 = UINT16_MAX;
volatile int32_t x91 = -4618;
int16_t x96 = -423;
int32_t t24 = -135;
int32_t x105 = 737;
uint8_t x108 = 5U;
int64_t x110 = -1LL;
volatile int32_t t28 = 657181220;
volatile int8_t x127 = -1;
uint16_t x128 = UINT16_MAX;
int32_t x129 = -1;
uint16_t x131 = 6U;
static volatile int32_t x134 = INT32_MIN;
volatile int32_t t34 = 19162879;
int64_t x141 = INT64_MAX;
int32_t x143 = -244524;
volatile int64_t x144 = INT64_MIN;
uint16_t x151 = UINT16_MAX;
int64_t x155 = INT64_MAX;
int8_t x157 = INT8_MAX;
volatile int32_t t39 = 1;
int32_t x161 = 1213581;
static volatile int32_t t40 = -2706618;
uint16_t x167 = 7950U;
static int8_t x172 = INT8_MIN;
static int32_t x173 = -1;
uint32_t x180 = 6146339U;
uint16_t x182 = UINT16_MAX;
uint64_t x185 = 68800LLU;
uint8_t x186 = 52U;
static volatile uint16_t x191 = 6U;
static volatile int16_t x193 = -1;
int64_t x195 = -209001357LL;
volatile int32_t t50 = -109;
uint32_t x210 = UINT32_MAX;
int32_t t52 = 297;
static uint32_t x216 = 1781U;
volatile uint64_t x219 = UINT64_MAX;
volatile int32_t t54 = 352;
int8_t x224 = 1;
volatile uint8_t x225 = 0U;
int32_t x226 = INT32_MIN;
static volatile uint16_t x228 = 93U;
static int8_t x246 = INT8_MAX;
volatile int8_t x251 = 3;
volatile int8_t x253 = INT8_MIN;
volatile int32_t x264 = 10087395;
static int16_t x267 = -1;
static int8_t x281 = INT8_MIN;
static int16_t x283 = INT16_MIN;
int8_t x288 = -1;
volatile int32_t t71 = 208945468;
int32_t t72 = 30728151;
uint8_t x295 = 117U;
volatile uint16_t x302 = 30U;
int32_t t75 = -3;
static int64_t x307 = 12924451516660LL;
int32_t x312 = -434389;
volatile int8_t x316 = INT8_MIN;
int16_t x317 = 1;
static uint16_t x321 = 304U;
static volatile uint64_t x324 = 185LLU;
int8_t x327 = INT8_MIN;
int32_t t81 = -2415510;
int8_t x331 = INT8_MIN;
int64_t x336 = INT64_MIN;
int64_t x337 = INT64_MIN;
static uint16_t x343 = 117U;
int64_t x347 = 23953274984LL;
volatile uint64_t x348 = 6569577LLU;
static uint64_t x349 = 1557712538493601LLU;
uint32_t x354 = 6U;
volatile int64_t x358 = 2517LL;
static int16_t x361 = 150;
int16_t x363 = -1;
int16_t x366 = -182;
int32_t x370 = 910953;
volatile int32_t x371 = -1;
uint16_t x375 = UINT16_MAX;
static uint16_t x379 = 44U;
int32_t x380 = INT32_MAX;
int16_t x382 = INT16_MIN;
uint16_t x386 = 1U;
int64_t x387 = INT64_MIN;
static int8_t x393 = INT8_MIN;
int32_t x397 = -129895;


void f0(void) {
	int32_t x2 = 3108647;
	volatile int32_t x3 = INT32_MIN;
	int8_t x4 = 4;
	volatile int32_t t0 = 6;

	t0 = (x1<=((x2==x3)==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint32_t x6 = UINT32_MAX;
	int64_t x8 = 155188LL;
	int32_t t1 = 53539;

	t1 = (x5<=((x6==x7)==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	uint16_t x11 = 106U;
	int16_t x12 = -1;

	t2 = (x9<=((x10==x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int64_t x15 = INT64_MIN;
	volatile int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 3;

	t3 = (x13<=((x14==x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = 27;
	volatile uint64_t x19 = 7114034248LLU;
	uint16_t x20 = 51U;
	volatile int32_t t4 = -18;

	t4 = (x17<=((x18==x19)==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	static uint32_t x22 = 29U;
	int16_t x23 = INT16_MAX;
	int32_t t5 = 3844222;

	t5 = (x21<=((x22==x23)==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	int8_t x28 = INT8_MAX;

	t6 = (x25<=((x26==x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile int8_t x30 = INT8_MIN;
	static int32_t t7 = 2358;

	t7 = (x29<=((x30==x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	int8_t x35 = -1;
	int32_t t8 = -161437645;

	t8 = (x33<=((x34==x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	static uint64_t x39 = 630759381919683334LLU;
	uint16_t x40 = UINT16_MAX;
	int32_t t9 = -7913;

	t9 = (x37<=((x38==x39)==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	static volatile int64_t x42 = -28529480928597871LL;
	int64_t x43 = INT64_MAX;
	static int32_t x44 = 8989;
	int32_t t10 = 6;

	t10 = (x41<=((x42==x43)==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int32_t x46 = 8159555;
	static volatile int16_t x48 = INT16_MIN;
	static int32_t t11 = -263585741;

	t11 = (x45<=((x46==x47)==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 1298504LL;
	volatile int64_t x50 = -1LL;
	int64_t x51 = -1LL;
	volatile int64_t x52 = -7495855581LL;
	volatile int32_t t12 = -93228;

	t12 = (x49<=((x50==x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -5;
	int64_t x54 = INT64_MAX;
	static int8_t x55 = -1;
	volatile uint64_t x56 = 13LLU;
	int32_t t13 = -259477981;

	t13 = (x53<=((x54==x55)==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 1480233171058LL;
	int16_t x58 = -1;
	volatile uint16_t x59 = 3856U;
	int64_t x60 = INT64_MAX;
	int32_t t14 = 181;

	t14 = (x57<=((x58==x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -27987744;
	volatile uint32_t x62 = 230001U;
	volatile int32_t x64 = INT32_MAX;
	volatile int32_t t15 = -6946246;

	t15 = (x61<=((x62==x63)==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	static int64_t x66 = INT64_MIN;
	uint8_t x68 = 27U;
	volatile int32_t t16 = -485313;

	t16 = (x65<=((x66==x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 1LL;
	static int16_t x70 = 521;
	static volatile uint16_t x71 = 8739U;
	volatile int32_t t17 = -1975;

	t17 = (x69<=((x70==x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 6LLU;
	static int32_t x74 = -204880;
	int64_t x75 = -1LL;
	static int64_t x76 = INT64_MIN;
	static int32_t t18 = -5115;

	t18 = (x73<=((x74==x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = UINT64_MAX;
	uint32_t x78 = 8U;
	int16_t x80 = -1;
	volatile int32_t t19 = -2551841;

	t19 = (x77<=((x78==x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 20367U;
	int64_t x82 = -1LL;
	static int32_t x83 = INT32_MIN;
	volatile uint32_t x84 = 338912U;
	int32_t t20 = 503042;

	t20 = (x81<=((x82==x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 3U;
	volatile int32_t x86 = 2576;
	static uint8_t x87 = UINT8_MAX;
	int64_t x88 = INT64_MIN;
	static int32_t t21 = 20548;

	t21 = (x85<=((x86==x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	static uint8_t x90 = 15U;
	volatile uint64_t x92 = 93459070293097LLU;
	static volatile int32_t t22 = -24;

	t22 = (x89<=((x90==x91)==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	volatile uint32_t x94 = 32114921U;
	static uint64_t x95 = 40554LLU;
	volatile int32_t t23 = -206;

	t23 = (x93<=((x94==x95)==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	uint8_t x98 = 28U;
	int8_t x99 = -1;
	uint64_t x100 = 654777167105805LLU;

	t24 = (x97<=((x98==x99)==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = -1;
	int8_t x102 = -1;
	static uint32_t x103 = UINT32_MAX;
	static int32_t x104 = INT32_MAX;
	int32_t t25 = 0;

	t25 = (x101<=((x102==x103)==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x106 = -1LL;
	volatile int64_t x107 = INT64_MAX;
	int32_t t26 = 0;

	t26 = (x105<=((x106==x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = -1;
	uint64_t x111 = 1116LLU;
	volatile int8_t x112 = INT8_MIN;
	static int32_t t27 = -1;

	t27 = (x109<=((x110==x111)==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	int32_t x114 = INT32_MAX;
	volatile uint64_t x115 = 5LLU;
	uint8_t x116 = UINT8_MAX;

	t28 = (x113<=((x114==x115)==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	uint64_t x118 = 3201281LLU;
	int16_t x119 = 5;
	uint16_t x120 = 1U;
	int32_t t29 = -2964;

	t29 = (x117<=((x118==x119)==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = 0;
	volatile int8_t x123 = 0;
	volatile int8_t x124 = INT8_MIN;
	int32_t t30 = 432381;

	t30 = (x121<=((x122==x123)==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	int32_t t31 = 347;

	t31 = (x125<=((x126==x127)==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = UINT64_MAX;
	uint16_t x132 = 16U;
	volatile int32_t t32 = 1;

	t32 = (x129<=((x130==x131)==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	uint32_t x135 = 3U;
	int32_t x136 = 31309404;
	volatile int32_t t33 = 557032;

	t33 = (x133<=((x134==x135)==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 3;
	volatile uint8_t x138 = 8U;
	uint64_t x139 = UINT64_MAX;
	uint8_t x140 = 1U;

	t34 = (x137<=((x138==x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x142 = INT16_MIN;
	int32_t t35 = 429384;

	t35 = (x141<=((x142==x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	volatile uint64_t x146 = 5169274931111LLU;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MAX;
	int32_t t36 = -42;

	t36 = (x145<=((x146==x147)==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -6545;
	static int8_t x150 = INT8_MIN;
	int64_t x152 = -1LL;
	int32_t t37 = -69;

	t37 = (x149<=((x150==x151)==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 1544997LL;
	uint64_t x154 = UINT64_MAX;
	volatile int64_t x156 = INT64_MAX;
	int32_t t38 = 15983;

	t38 = (x153<=((x154==x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x158 = INT32_MIN;
	uint16_t x159 = 270U;
	uint8_t x160 = 11U;

	t39 = (x157<=((x158==x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MAX;
	static volatile uint64_t x163 = 3132513209LLU;
	static int8_t x164 = INT8_MIN;

	t40 = (x161<=((x162==x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = 36;
	int32_t x166 = INT32_MIN;
	int64_t x168 = 132867137202856LL;
	int32_t t41 = 18303938;

	t41 = (x165<=((x166==x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int32_t x170 = -1;
	int64_t x171 = -1LL;
	volatile int32_t t42 = 8602;

	t42 = (x169<=((x170==x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MIN;
	volatile uint8_t x175 = 2U;
	int16_t x176 = INT16_MIN;
	int32_t t43 = 467249724;

	t43 = (x173<=((x174==x175)==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MIN;
	int8_t x179 = INT8_MAX;
	int32_t t44 = -25498;

	t44 = (x177<=((x178==x179)==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = -1;
	uint64_t x183 = 22485114848LLU;
	uint8_t x184 = 71U;
	volatile int32_t t45 = -326100;

	t45 = (x181<=((x182==x183)==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x187 = 285U;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = 66657122;

	t46 = (x185<=((x186==x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	int8_t x190 = 44;
	int8_t x192 = -1;
	static int32_t t47 = 71;

	t47 = (x189<=((x190==x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MIN;
	volatile uint16_t x196 = UINT16_MAX;
	static int32_t t48 = 22514823;

	t48 = (x193<=((x194==x195)==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = -1;
	volatile int8_t x198 = -1;
	uint16_t x199 = 26U;
	static int64_t x200 = INT64_MAX;
	static int32_t t49 = 9;

	t49 = (x197<=((x198==x199)==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 487;
	int64_t x202 = INT64_MIN;
	static int32_t x203 = -1;
	uint8_t x204 = 30U;

	t50 = (x201<=((x202==x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	static volatile uint64_t x206 = 2426064823641948LLU;
	int8_t x207 = 1;
	static uint64_t x208 = 88786811035152118LLU;
	volatile int32_t t51 = -59976;

	t51 = (x205<=((x206==x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = -9632026944705747LL;
	volatile int64_t x211 = -1LL;
	int64_t x212 = 69977380867353LL;

	t52 = (x209<=((x210==x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int8_t x214 = 19;
	int64_t x215 = INT64_MAX;
	int32_t t53 = -246209;

	t53 = (x213<=((x214==x215)==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 1U;
	int16_t x218 = 2;
	int32_t x220 = -1;

	t54 = (x217<=((x218==x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = 5;
	int8_t x222 = INT8_MAX;
	volatile int64_t x223 = INT64_MIN;
	static volatile int32_t t55 = 25057;

	t55 = (x221<=((x222==x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x227 = INT8_MIN;
	static int32_t t56 = 1;

	t56 = (x225<=((x226==x227)==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = INT16_MAX;
	int16_t x230 = -3820;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;
	int32_t t57 = 62;

	t57 = (x229<=((x230==x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	static int64_t x234 = INT64_MIN;
	static int16_t x235 = -12;
	volatile uint16_t x236 = 2U;
	volatile int32_t t58 = 6460;

	t58 = (x233<=((x234==x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = -1;
	volatile int32_t x238 = -1;
	int8_t x239 = INT8_MAX;
	static int64_t x240 = INT64_MAX;
	volatile int32_t t59 = -28;

	t59 = (x237<=((x238==x239)==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -249;
	int16_t x242 = -1;
	volatile uint8_t x243 = 21U;
	volatile uint8_t x244 = 15U;
	volatile int32_t t60 = -1170;

	t60 = (x241<=((x242==x243)==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -1;
	static uint32_t x247 = 34524U;
	volatile int16_t x248 = 0;
	volatile int32_t t61 = 880;

	t61 = (x245<=((x246==x247)==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static uint64_t x250 = 11617792935023955LLU;
	static volatile uint32_t x252 = UINT32_MAX;
	volatile int32_t t62 = 57169;

	t62 = (x249<=((x250==x251)==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x254 = 373244U;
	int8_t x255 = INT8_MIN;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t63 = 11811;

	t63 = (x253<=((x254==x255)==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 8U;
	static int64_t x258 = -1LL;
	static volatile uint32_t x259 = 17821004U;
	volatile int64_t x260 = INT64_MIN;
	volatile int32_t t64 = -171963232;

	t64 = (x257<=((x258==x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MIN;
	volatile int32_t x262 = 2905352;
	int16_t x263 = INT16_MIN;
	static int32_t t65 = -3455006;

	t65 = (x261<=((x262==x263)==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	int8_t x268 = -1;
	int32_t t66 = 0;

	t66 = (x265<=((x266==x267)==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = 7;
	int64_t x270 = 22878983522830LL;
	volatile int16_t x271 = INT16_MIN;
	static int32_t x272 = INT32_MIN;
	int32_t t67 = -659108;

	t67 = (x269<=((x270==x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	static volatile uint8_t x274 = 24U;
	int32_t x275 = -1;
	static volatile int32_t x276 = INT32_MIN;
	int32_t t68 = 62541;

	t68 = (x273<=((x274==x275)==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MIN;
	uint8_t x278 = UINT8_MAX;
	volatile uint64_t x279 = UINT64_MAX;
	int8_t x280 = 0;
	volatile int32_t t69 = 763996;

	t69 = (x277<=((x278==x279)==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x282 = 8906108LLU;
	static uint32_t x284 = 1U;
	volatile int32_t t70 = 35;

	t70 = (x281<=((x282==x283)==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;

	t71 = (x285<=((x286==x287)==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = -14;
	int8_t x290 = 26;
	int8_t x291 = 3;
	uint64_t x292 = 150955LLU;

	t72 = (x289<=((x290==x291)==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 15LLU;
	uint16_t x294 = UINT16_MAX;
	volatile uint8_t x296 = 63U;
	int32_t t73 = -123167;

	t73 = (x293<=((x294==x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -1;
	int16_t x298 = INT16_MIN;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = INT32_MAX;
	static volatile int32_t t74 = 57167;

	t74 = (x297<=((x298==x299)==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 5;
	static int16_t x303 = 492;
	int16_t x304 = INT16_MAX;

	t75 = (x301<=((x302==x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 46U;
	volatile int32_t x306 = INT32_MIN;
	int16_t x308 = 0;
	static volatile int32_t t76 = 1868481;

	t76 = (x305<=((x306==x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	volatile uint16_t x310 = 717U;
	int16_t x311 = 4233;
	volatile int32_t t77 = 2628845;

	t77 = (x309<=((x310==x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = -1;
	volatile int16_t x315 = INT16_MIN;
	static int32_t t78 = -400694188;

	t78 = (x313<=((x314==x315)==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = INT32_MAX;
	int64_t x319 = INT64_MAX;
	uint8_t x320 = 2U;
	int32_t t79 = 1582;

	t79 = (x317<=((x318==x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x322 = -2;
	int8_t x323 = -1;
	volatile int32_t t80 = -98912;

	t80 = (x321<=((x322==x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	int32_t x326 = INT32_MIN;
	int32_t x328 = -1;

	t81 = (x325<=((x326==x327)==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = INT8_MIN;
	static uint16_t x330 = 43U;
	uint64_t x332 = 223367LLU;
	static volatile int32_t t82 = -66;

	t82 = (x329<=((x330==x331)==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int32_t x334 = -2569898;
	volatile int64_t x335 = INT64_MIN;
	static volatile int32_t t83 = 6;

	t83 = (x333<=((x334==x335)==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MAX;
	volatile uint8_t x339 = 112U;
	int16_t x340 = INT16_MIN;
	volatile int32_t t84 = 2275623;

	t84 = (x337<=((x338==x339)==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MIN;
	int64_t x342 = 566962377335897LL;
	int32_t x344 = -30;
	volatile int32_t t85 = -9935324;

	t85 = (x341<=((x342==x343)==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 1319;
	static int64_t x346 = 134581LL;
	static volatile int32_t t86 = -9;

	t86 = (x345<=((x346==x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = -1;
	volatile int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MAX;
	int32_t t87 = 197657;

	t87 = (x349<=((x350==x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 32342;
	static volatile int8_t x355 = -61;
	int64_t x356 = -2765309284904282337LL;
	volatile int32_t t88 = 53182871;

	t88 = (x353<=((x354==x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	int8_t x359 = -1;
	int8_t x360 = INT8_MAX;
	int32_t t89 = 519837;

	t89 = (x357<=((x358==x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = 72U;
	static int8_t x364 = 51;
	volatile int32_t t90 = 1475;

	t90 = (x361<=((x362==x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	int32_t x367 = INT32_MAX;
	int64_t x368 = 2026LL;
	int32_t t91 = -1191232;

	t91 = (x365<=((x366==x367)==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	volatile uint16_t x372 = 14221U;
	volatile int32_t t92 = 4033079;

	t92 = (x369<=((x370==x371)==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 6203U;
	volatile int64_t x374 = INT64_MIN;
	static int16_t x376 = INT16_MAX;
	volatile int32_t t93 = -194154;

	t93 = (x373<=((x374==x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	int64_t x378 = -709367LL;
	volatile int32_t t94 = -6424;

	t94 = (x377<=((x378==x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	uint16_t x383 = 2005U;
	volatile uint8_t x384 = 0U;
	volatile int32_t t95 = 4;

	t95 = (x381<=((x382==x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 5594611U;
	volatile uint16_t x388 = 29465U;
	volatile int32_t t96 = 12829167;

	t96 = (x385<=((x386==x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 14644U;
	uint16_t x390 = 10U;
	int16_t x391 = -266;
	uint64_t x392 = 274981960565839908LLU;
	static volatile int32_t t97 = -208;

	t97 = (x389<=((x390==x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = 7805488LLU;
	int64_t x395 = 3369766434403413LL;
	int16_t x396 = INT16_MAX;
	volatile int32_t t98 = -27431;

	t98 = (x393<=((x394==x395)==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x398 = 5566380863LLU;
	volatile int16_t x399 = -179;
	volatile int32_t x400 = INT32_MIN;
	int32_t t99 = -1;

	t99 = (x397<=((x398==x399)==x400));

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

