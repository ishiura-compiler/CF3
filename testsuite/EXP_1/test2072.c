#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x4 = UINT16_MAX;
uint32_t x5 = 1484U;
int8_t x12 = INT8_MAX;
volatile uint64_t t2 = 2098495586898LLU;
int16_t x16 = -1;
int64_t x18 = 23466554273389987LL;
uint16_t x28 = UINT16_MAX;
static int16_t x29 = -1;
int16_t x32 = INT16_MIN;
uint32_t x37 = 6051U;
int8_t x45 = INT8_MIN;
static volatile uint16_t x56 = UINT16_MAX;
int8_t x65 = INT8_MIN;
int32_t x74 = 107043789;
uint32_t x75 = 1018U;
int8_t x80 = 3;
uint32_t x85 = 15U;
int8_t x90 = INT8_MIN;
int64_t x93 = 469574065634658886LL;
int8_t x94 = INT8_MIN;
int64_t x95 = INT64_MIN;
volatile int64_t x97 = -1965LL;
int8_t x104 = INT8_MIN;
volatile uint64_t t26 = 0LLU;
static int8_t x124 = 31;
static uint64_t x132 = 6185LLU;
static uint8_t x135 = 45U;
int64_t x138 = INT64_MAX;
volatile uint64_t t32 = 10163807138188LLU;
int32_t x143 = -123098416;
volatile int64_t x144 = INT64_MIN;
int64_t t33 = -3414761945LL;
int32_t x159 = INT32_MIN;
volatile uint16_t x163 = UINT16_MAX;
static int64_t x171 = INT64_MAX;
static int16_t x172 = 15374;
static volatile int64_t t39 = -7121559558036LL;
int32_t x174 = INT32_MIN;
uint64_t x179 = 875729776251012629LLU;
int64_t x183 = INT64_MIN;
int8_t x186 = INT8_MIN;
int64_t x189 = INT64_MIN;
int32_t x200 = 7;
int16_t x201 = INT16_MAX;
uint32_t x204 = UINT32_MAX;
uint8_t x206 = 102U;
int16_t x211 = -1;
volatile int64_t t48 = -103225471368242807LL;
uint8_t x216 = UINT8_MAX;
uint32_t x236 = 686U;
static int8_t x239 = -1;
static int64_t x246 = INT64_MAX;
static uint32_t x248 = 471550U;
int32_t x254 = INT32_MIN;
volatile uint8_t x255 = 2U;
static uint8_t x265 = 13U;
int16_t x266 = INT16_MIN;
volatile uint32_t x269 = 493U;
int16_t x277 = INT16_MAX;
int16_t x280 = INT16_MIN;
int16_t x281 = -1;
volatile int64_t x286 = INT64_MIN;
volatile int32_t x297 = -369;
static volatile int8_t x302 = INT8_MIN;
static uint64_t t71 = 94567619668LLU;
int8_t x316 = INT8_MAX;
volatile int64_t t72 = -504LL;
static int64_t x317 = INT64_MAX;
volatile int32_t x318 = 23641;
int64_t t73 = 580845899504LL;
uint32_t x321 = 895908197U;
int64_t x324 = INT64_MIN;
static volatile uint64_t t74 = 1001LLU;
volatile int32_t x327 = -1;
int16_t x340 = INT16_MIN;
volatile uint64_t x343 = UINT64_MAX;
volatile uint64_t t79 = 135LLU;
static uint64_t x350 = 55LLU;
uint64_t t81 = 3487101576565522LLU;
static int32_t x356 = 108256;
static uint64_t x357 = 17236598101994LLU;
volatile uint64_t x365 = 256757111LLU;
static int64_t x366 = INT64_MIN;
static int32_t x368 = -1;
volatile uint64_t t85 = 12287738177582LLU;
volatile uint32_t t86 = 387465876U;
uint32_t x380 = 13059582U;
int16_t x381 = -1016;
int32_t x390 = 50;
static int32_t x391 = INT32_MAX;
int32_t x397 = INT32_MIN;
int64_t x399 = INT64_MIN;
uint8_t x404 = 23U;
static int32_t t94 = 2040946;
int64_t x410 = INT64_MIN;
int8_t x412 = 51;
static uint8_t x413 = UINT8_MAX;
int8_t x414 = 55;
volatile int64_t t97 = 12997197186LL;
volatile int16_t x418 = -1;
int16_t x420 = -1;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int64_t x2 = 35825554500664LL;
	int16_t x3 = INT16_MAX;
	int64_t t0 = -93779374567918751LL;

	t0 = (((x1^x2)/x3)%x4);

	if (t0 != 12445LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 54;
	int8_t x7 = INT8_MIN;
	static int8_t x8 = -5;
	volatile uint32_t t1 = 92033U;

	t1 = (((x5^x6)/x7)%x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint64_t x10 = 8439186049097018LLU;
	volatile uint64_t x11 = UINT64_MAX;

	t2 = (((x9^x10)/x11)%x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 1;
	static volatile int8_t x14 = -1;
	static int8_t x15 = 1;
	static int32_t t3 = -512292;

	t3 = (((x13^x14)/x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 7U;
	int64_t x19 = 2LL;
	uint32_t x20 = 84U;
	volatile int64_t t4 = -34959492738581LL;

	t4 = (((x17^x18)/x19)%x20);

	if (t4 != 34LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	uint32_t x22 = 2104U;
	uint8_t x23 = 2U;
	int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = 46004388862322LL;

	t5 = (((x21^x22)/x23)%x24);

	if (t5 != 2147482595LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MAX;
	static volatile int32_t x27 = 16;
	volatile int32_t t6 = -947796056;

	t6 = (((x25^x26)/x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = INT64_MAX;
	volatile int8_t x31 = INT8_MIN;
	static volatile int64_t t7 = -197LL;

	t7 = (((x29^x30)/x31)%x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	int32_t x34 = INT32_MIN;
	static int8_t x35 = INT8_MIN;
	static int32_t x36 = 81;
	int32_t t8 = -2;

	t8 = (((x33^x34)/x35)%x36);

	if (t8 != -9) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x38 = 1591U;
	int8_t x39 = -1;
	int32_t x40 = 17528;
	volatile uint32_t t9 = 3943U;

	t9 = (((x37^x38)/x39)%x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int16_t x42 = 534;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MIN;
	volatile int64_t t10 = 13316433LL;

	t10 = (((x41^x42)/x43)%x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = INT32_MIN;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MAX;
	uint64_t t11 = 249911324997127515LLU;

	t11 = (((x45^x46)/x47)%x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	int32_t x50 = -2427;
	static int32_t x51 = INT32_MIN;
	volatile int64_t x52 = 153518LL;
	int64_t t12 = -3357977383LL;

	t12 = (((x49^x50)/x51)%x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int16_t x54 = INT16_MAX;
	int8_t x55 = 2;
	int32_t t13 = 49118105;

	t13 = (((x53^x54)/x55)%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	int8_t x58 = -56;
	uint64_t x59 = 1LLU;
	int64_t x60 = -1LL;
	uint64_t t14 = 60106856LLU;

	t14 = (((x57^x58)/x59)%x60);

	if (t14 != 72LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	uint16_t x62 = 349U;
	int32_t x63 = INT32_MIN;
	int32_t x64 = -590;
	volatile int64_t t15 = 3LL;

	t15 = (((x61^x62)/x63)%x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = UINT16_MAX;
	int64_t x67 = 25519252LL;
	static volatile int64_t x68 = INT64_MIN;
	volatile int64_t t16 = 4064175LL;

	t16 = (((x65^x66)/x67)%x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = UINT8_MAX;
	uint32_t x70 = 47860465U;
	static int16_t x71 = INT16_MIN;
	static int8_t x72 = -1;
	uint32_t t17 = 1625591U;

	t17 = (((x69^x70)/x71)%x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MAX;
	int16_t x76 = INT16_MIN;
	static uint32_t t18 = 666U;

	t18 = (((x73^x74)/x75)%x76);

	if (t18 != 105137U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	uint16_t x78 = 2203U;
	int64_t x79 = INT64_MIN;
	volatile int64_t t19 = -93395213LL;

	t19 = (((x77^x78)/x79)%x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	uint16_t x82 = UINT16_MAX;
	volatile uint32_t x83 = UINT32_MAX;
	int32_t x84 = -1080;
	volatile uint32_t t20 = 63U;

	t20 = (((x81^x82)/x83)%x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x86 = 10U;
	uint16_t x87 = 8192U;
	static volatile int32_t x88 = 23240838;
	volatile uint32_t t21 = 193141611U;

	t21 = (((x85^x86)/x87)%x88);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 7;
	int16_t x91 = 384;
	static int16_t x92 = -1954;
	int32_t t22 = -1;

	t22 = (((x89^x90)/x91)%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x96 = -1LL;
	volatile int64_t t23 = -146765727455950479LL;

	t23 = (((x93^x94)/x95)%x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x98 = 1296U;
	uint16_t x99 = 19U;
	uint8_t x100 = UINT8_MAX;
	volatile int64_t t24 = -219129532452423926LL;

	t24 = (((x97^x98)/x99)%x100);

	if (t24 != -36LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 859U;
	static uint64_t x102 = UINT64_MAX;
	static int64_t x103 = 1LL;
	uint64_t t25 = 25LLU;

	t25 = (((x101^x102)/x103)%x104);

	if (t25 != 18446744073709550756LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = UINT64_MAX;
	int64_t x110 = -1LL;
	int8_t x111 = 15;
	int16_t x112 = -1;

	t26 = (((x109^x110)/x111)%x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -1413781;
	uint32_t x114 = 1512U;
	static volatile int8_t x115 = INT8_MAX;
	static int64_t x116 = 732807LL;
	int64_t t27 = -602LL;

	t27 = (((x113^x114)/x115)%x116);

	if (t27 != 98376LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 1U;
	int64_t x122 = INT64_MIN;
	int16_t x123 = 56;
	int64_t t28 = -12LL;

	t28 = (((x121^x122)/x123)%x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -4680;
	static uint16_t x126 = 160U;
	static uint64_t x127 = 440LLU;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t29 = 0LLU;

	t29 = (((x125^x126)/x127)%x128);

	if (t29 != 41924418349339879LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x129 = -1;
	static int64_t x130 = INT64_MAX;
	volatile uint32_t x131 = 5U;
	volatile uint64_t t30 = 61455LLU;

	t30 = (((x129^x130)/x131)%x132);

	if (t30 != 3595LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x133 = 52U;
	uint64_t x134 = UINT64_MAX;
	volatile int16_t x136 = INT16_MAX;
	static uint64_t t31 = 209647647560050510LLU;

	t31 = (((x133^x134)/x135)%x136);

	if (t31 != 32766LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x137 = 1020482754418620842LLU;
	volatile int16_t x139 = INT16_MIN;
	static int16_t x140 = 3;

	t32 = (((x137^x138)/x139)%x140);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x141 = INT32_MIN;
	int16_t x142 = 109;

	t33 = (((x141^x142)/x143)%x144);

	if (t33 != 17LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = -1;
	int16_t x146 = 540;
	uint64_t x147 = UINT64_MAX;
	uint32_t x148 = UINT32_MAX;
	volatile uint64_t t34 = 884227153LLU;

	t34 = (((x145^x146)/x147)%x148);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	volatile uint16_t x150 = 29U;
	int32_t x151 = -1;
	uint16_t x152 = 3648U;
	static int32_t t35 = -1588954;

	t35 = (((x149^x150)/x151)%x152);

	if (t35 != 99) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MIN;
	int8_t x158 = -4;
	volatile int16_t x160 = -13;
	volatile int32_t t36 = -133;

	t36 = (((x157^x158)/x159)%x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = 1453;
	int32_t x162 = INT32_MIN;
	uint16_t x164 = 1U;
	static int32_t t37 = -594;

	t37 = (((x161^x162)/x163)%x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -1;
	static uint64_t x166 = 4084224220LLU;
	volatile int32_t x167 = INT32_MIN;
	static uint16_t x168 = 1U;
	volatile uint64_t t38 = 4LLU;

	t38 = (((x165^x166)/x167)%x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = 3U;
	volatile int16_t x170 = INT16_MAX;

	t39 = (((x169^x170)/x171)%x172);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = INT16_MAX;
	int32_t x175 = -1;
	int64_t x176 = INT64_MAX;
	volatile int64_t t40 = 174133411204552771LL;

	t40 = (((x173^x174)/x175)%x176);

	if (t40 != 2147450881LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = -1LL;
	uint16_t x178 = UINT16_MAX;
	uint32_t x180 = 1647400U;
	volatile uint64_t t41 = 7183112LLU;

	t41 = (((x177^x178)/x179)%x180);

	if (t41 != 21LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x181 = -1;
	int8_t x182 = -1;
	static int16_t x184 = INT16_MIN;
	static int64_t t42 = 1743846097707126306LL;

	t42 = (((x181^x182)/x183)%x184);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = UINT32_MAX;
	int8_t x187 = 31;
	uint16_t x188 = 2719U;
	uint32_t t43 = 1108568235U;

	t43 = (((x185^x186)/x187)%x188);

	if (t43 != 4U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = INT8_MAX;
	uint32_t x191 = UINT32_MAX;
	volatile int64_t x192 = -1LL;
	static int64_t t44 = 6652987291806158LL;

	t44 = (((x189^x190)/x191)%x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = 7;
	static int8_t x198 = INT8_MIN;
	uint32_t x199 = 31739418U;
	volatile uint32_t t45 = 1106U;

	t45 = (((x197^x198)/x199)%x200);

	if (t45 != 2U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x202 = 1904941LLU;
	uint8_t x203 = 1U;
	volatile uint64_t t46 = 15033931466LLU;

	t46 = (((x201^x202)/x203)%x204);

	if (t46 != 1928914LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = -1;
	int8_t x207 = INT8_MAX;
	static uint64_t x208 = 3751249163885923807LLU;
	volatile uint64_t t47 = 857391232LLU;

	t47 = (((x205^x206)/x207)%x208);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MAX;
	int16_t x210 = 0;
	int64_t x212 = INT64_MAX;

	t48 = (((x209^x210)/x211)%x212);

	if (t48 != -32767LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = UINT64_MAX;
	static int16_t x214 = INT16_MAX;
	uint16_t x215 = UINT16_MAX;
	uint64_t t49 = 2705534661748LLU;

	t49 = (((x213^x214)/x215)%x216);

	if (t49 != 3LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = UINT64_MAX;
	uint32_t x222 = 7005879U;
	int32_t x223 = INT32_MAX;
	static int32_t x224 = -1;
	uint64_t t50 = 302082064873463924LLU;

	t50 = (((x221^x222)/x223)%x224);

	if (t50 != 8589934595LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = 20;
	int32_t x226 = -2;
	volatile int8_t x227 = INT8_MAX;
	static int32_t x228 = INT32_MIN;
	int32_t t51 = -242;

	t51 = (((x225^x226)/x227)%x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = -1;
	int32_t x230 = INT32_MAX;
	uint64_t x231 = 367978264LLU;
	int8_t x232 = INT8_MIN;
	uint64_t t52 = 30066860591511184LLU;

	t52 = (((x229^x230)/x231)%x232);

	if (t52 != 50129982871LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x233 = INT16_MAX;
	static int16_t x234 = INT16_MIN;
	volatile uint8_t x235 = 7U;
	static uint32_t t53 = 16980U;

	t53 = (((x233^x234)/x235)%x236);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = 2;
	int8_t x238 = INT8_MIN;
	int32_t x240 = INT32_MIN;
	volatile int32_t t54 = -866496;

	t54 = (((x237^x238)/x239)%x240);

	if (t54 != 126) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MIN;
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = INT64_MIN;
	static uint64_t x244 = 1076287LLU;
	static uint64_t t55 = 2164LLU;

	t55 = (((x241^x242)/x243)%x244);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x245 = -13685;
	uint64_t x247 = 122LLU;
	uint64_t t56 = 12623901704955LLU;

	t56 = (((x245^x246)/x247)%x248);

	if (t56 != 11162LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x249 = 12183U;
	volatile int64_t x250 = -1LL;
	int16_t x251 = 28;
	int16_t x252 = INT16_MAX;
	static volatile int64_t t57 = 1980254LL;

	t57 = (((x249^x250)/x251)%x252);

	if (t57 != -435LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = UINT32_MAX;
	uint64_t x256 = 515136016144LLU;
	volatile uint64_t t58 = 33423551008735LLU;

	t58 = (((x253^x254)/x255)%x256);

	if (t58 != 1073741823LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x257 = UINT64_MAX;
	uint32_t x258 = UINT32_MAX;
	volatile int16_t x259 = INT16_MIN;
	volatile int8_t x260 = INT8_MAX;
	volatile uint64_t t59 = 8924LLU;

	t59 = (((x257^x258)/x259)%x260);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x267 = 77160114083156118LLU;
	int8_t x268 = -23;
	volatile uint64_t t60 = 125114840873485LLU;

	t60 = (((x265^x266)/x267)%x268);

	if (t60 != 239LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x270 = 394587569U;
	static uint16_t x271 = UINT16_MAX;
	int16_t x272 = INT16_MIN;
	volatile uint32_t t61 = 1U;

	t61 = (((x269^x270)/x271)%x272);

	if (t61 != 6021U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = 9U;
	uint64_t x274 = UINT64_MAX;
	static int64_t x275 = -339LL;
	int16_t x276 = INT16_MAX;
	uint64_t t62 = 1296188595571330LLU;

	t62 = (((x273^x274)/x275)%x276);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x278 = 13U;
	uint16_t x279 = 1U;
	volatile uint32_t t63 = 50U;

	t63 = (((x277^x278)/x279)%x280);

	if (t63 != 32754U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x282 = 17U;
	int64_t x283 = 710044LL;
	int8_t x284 = -23;
	int64_t t64 = -1927060673094460LL;

	t64 = (((x281^x282)/x283)%x284);

	if (t64 != 22LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x285 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	static uint64_t x288 = 238830359LLU;
	volatile uint64_t t65 = 252370080721889LLU;

	t65 = (((x285^x286)/x287)%x288);

	if (t65 != 29724100LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = -26;
	uint32_t x290 = 61U;
	int16_t x291 = INT16_MIN;
	int16_t x292 = -5;
	static volatile uint32_t t66 = 711806098U;

	t66 = (((x289^x290)/x291)%x292);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x293 = INT64_MIN;
	static uint8_t x294 = UINT8_MAX;
	int16_t x295 = INT16_MIN;
	int64_t x296 = INT64_MAX;
	int64_t t67 = -1976870068LL;

	t67 = (((x293^x294)/x295)%x296);

	if (t67 != 281474976710655LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x298 = INT16_MIN;
	uint32_t x299 = 381320179U;
	uint64_t x300 = UINT64_MAX;
	static uint64_t t68 = 68960107LLU;

	t68 = (((x297^x298)/x299)%x300);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x301 = -97LL;
	int8_t x303 = INT8_MAX;
	static uint16_t x304 = 134U;
	int64_t t69 = 1647707LL;

	t69 = (((x301^x302)/x303)%x304);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = -1LL;
	static uint16_t x306 = 1U;
	int32_t x307 = INT32_MIN;
	static int16_t x308 = INT16_MAX;
	int64_t t70 = 2630889413595544025LL;

	t70 = (((x305^x306)/x307)%x308);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x309 = UINT64_MAX;
	int16_t x310 = -1;
	uint64_t x311 = 2530528251685LLU;
	int8_t x312 = INT8_MIN;

	t71 = (((x309^x310)/x311)%x312);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = INT64_MAX;
	int16_t x314 = INT16_MIN;
	volatile int32_t x315 = INT32_MIN;

	t72 = (((x313^x314)/x315)%x316);

	if (t72 != 15LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MIN;

	t73 = (((x317^x318)/x319)%x320);

	if (t73 != -32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x322 = INT8_MIN;
	volatile uint64_t x323 = UINT64_MAX;

	t74 = (((x321^x322)/x323)%x324);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = -1LL;
	int16_t x326 = INT16_MIN;
	static int16_t x328 = INT16_MIN;
	int64_t t75 = 4770239LL;

	t75 = (((x325^x326)/x327)%x328);

	if (t75 != -32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x329 = 1U;
	uint16_t x330 = UINT16_MAX;
	static int64_t x331 = INT64_MIN;
	int64_t x332 = INT64_MIN;
	int64_t t76 = 8503634850555LL;

	t76 = (((x329^x330)/x331)%x332);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = INT64_MIN;
	volatile uint8_t x334 = UINT8_MAX;
	static int64_t x335 = INT64_MIN;
	static int64_t x336 = INT64_MIN;
	volatile int64_t t77 = 1LL;

	t77 = (((x333^x334)/x335)%x336);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x337 = 601U;
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MIN;
	volatile uint64_t t78 = 1186LLU;

	t78 = (((x337^x338)/x339)%x340);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x341 = 56U;
	uint8_t x342 = UINT8_MAX;
	static int8_t x344 = 5;

	t79 = (((x341^x342)/x343)%x344);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = INT8_MIN;
	volatile uint8_t x346 = UINT8_MAX;
	int64_t x347 = INT64_MIN;
	int32_t x348 = -1;
	volatile int64_t t80 = 744185306809LL;

	t80 = (((x345^x346)/x347)%x348);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x349 = UINT32_MAX;
	uint8_t x351 = 82U;
	int32_t x352 = -137;

	t81 = (((x349^x350)/x351)%x352);

	if (t81 != 52377649LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = 15U;
	static int16_t x354 = INT16_MAX;
	int8_t x355 = -1;
	static int32_t t82 = -144930;

	t82 = (((x353^x354)/x355)%x356);

	if (t82 != -32752) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x358 = INT8_MAX;
	int16_t x359 = -1;
	int32_t x360 = INT32_MAX;
	uint64_t t83 = 17495145202474LLU;

	t83 = (((x357^x358)/x359)%x360);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x361 = -1;
	uint64_t x362 = 7243520LLU;
	uint32_t x363 = 41U;
	static volatile int16_t x364 = INT16_MAX;
	uint64_t t84 = 216447345LLU;

	t84 = (((x361^x362)/x363)%x364);

	if (t84 != 19931LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x367 = UINT8_MAX;

	t85 = (((x365^x366)/x367)%x368);

	if (t85 != 36170086420045227LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x369 = 2191;
	uint16_t x370 = 6U;
	static int32_t x371 = INT32_MIN;
	uint32_t x372 = UINT32_MAX;

	t86 = (((x369^x370)/x371)%x372);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x373 = 10U;
	int8_t x374 = -1;
	int16_t x375 = INT16_MAX;
	volatile int16_t x376 = -1;
	volatile int32_t t87 = 120;

	t87 = (((x373^x374)/x375)%x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = -1;
	int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MIN;
	uint32_t t88 = 120907405U;

	t88 = (((x377^x378)/x379)%x380);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x382 = UINT64_MAX;
	static uint64_t x383 = UINT64_MAX;
	static int64_t x384 = INT64_MIN;
	uint64_t t89 = 14LLU;

	t89 = (((x381^x382)/x383)%x384);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x385 = INT32_MIN;
	int8_t x386 = 1;
	int8_t x387 = -1;
	uint32_t x388 = UINT32_MAX;
	uint32_t t90 = 7U;

	t90 = (((x385^x386)/x387)%x388);

	if (t90 != 2147483647U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x389 = INT32_MAX;
	static volatile int8_t x392 = -1;
	static int32_t t91 = 53554700;

	t91 = (((x389^x390)/x391)%x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x393 = 2015895121U;
	int64_t x394 = INT64_MAX;
	volatile int64_t x395 = -1015838898798063LL;
	static uint64_t x396 = 521206LLU;
	volatile uint64_t t92 = 396LLU;

	t92 = (((x393^x394)/x395)%x396);

	if (t92 != 161849LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x398 = -1;
	uint64_t x400 = 44623LLU;
	uint64_t t93 = 151626093334023586LLU;

	t93 = (((x397^x398)/x399)%x400);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x401 = UINT8_MAX;
	static int8_t x402 = -1;
	int16_t x403 = 3;

	t94 = (((x401^x402)/x403)%x404);

	if (t94 != -16) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x405 = 8U;
	static int16_t x406 = INT16_MAX;
	uint16_t x407 = 243U;
	uint8_t x408 = 63U;
	volatile int32_t t95 = -182710;

	t95 = (((x405^x406)/x407)%x408);

	if (t95 != 8) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = INT8_MIN;
	uint64_t x411 = UINT64_MAX;
	uint64_t t96 = 28438850738287750LLU;

	t96 = (((x409^x410)/x411)%x412);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x415 = INT32_MIN;
	int64_t x416 = INT64_MIN;

	t97 = (((x413^x414)/x415)%x416);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x417 = 13667770875404LLU;
	uint32_t x419 = 1727543236U;
	volatile uint64_t t98 = 6911736971400737839LLU;

	t98 = (((x417^x418)/x419)%x420);

	if (t98 != 10678013737LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = -1LL;
	static int32_t x422 = -1;
	volatile int64_t x423 = 13132LL;
	int32_t x424 = INT32_MIN;
	static volatile int64_t t99 = -1090829121622LL;

	t99 = (((x421^x422)/x423)%x424);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

