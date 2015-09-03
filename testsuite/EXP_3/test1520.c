#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
uint8_t x2 = 0U;
int64_t t0 = 31767LL;
int16_t x13 = -1762;
static uint64_t x18 = 2297837402LLU;
int64_t t5 = -13LL;
uint8_t x25 = 14U;
volatile uint32_t x28 = 29916902U;
int8_t x31 = INT8_MIN;
int32_t x40 = 25643;
volatile int64_t t10 = INT64_MAX;
int32_t x56 = -1;
volatile uint64_t t13 = 91565972LLU;
static int64_t x59 = -4866027141LL;
uint64_t x62 = UINT64_MAX;
int16_t x65 = INT16_MIN;
static int64_t t16 = 137LL;
uint8_t x69 = 93U;
int32_t x70 = -491160467;
static int32_t x72 = -1;
int32_t t17 = -76651842;
int16_t x75 = 835;
volatile int32_t t18 = 1985642;
uint16_t x81 = UINT16_MAX;
int64_t t21 = 332LL;
int16_t x97 = -1;
uint64_t x104 = UINT64_MAX;
int64_t t26 = -76LL;
static int64_t x110 = INT64_MIN;
int64_t t27 = 48817LL;
uint32_t x113 = UINT32_MAX;
int8_t x117 = -1;
volatile int16_t x120 = INT16_MAX;
static int64_t x133 = -1LL;
uint8_t x134 = 33U;
static uint64_t t36 = 438933LLU;
static int8_t x149 = INT8_MIN;
int16_t x154 = INT16_MIN;
int16_t x157 = 766;
uint32_t t41 = 151706U;
uint64_t x169 = 2595690358174LLU;
int64_t x177 = INT64_MIN;
uint32_t x178 = 5612614U;
volatile int32_t x180 = INT32_MAX;
int64_t t44 = 27305620040LL;
volatile int32_t t45 = 8157961;
static volatile int64_t t46 = -62911957903781LL;
uint64_t x192 = UINT64_MAX;
static volatile int32_t t47 = 334;
uint32_t x193 = UINT32_MAX;
static int32_t x194 = INT32_MIN;
volatile uint64_t x196 = UINT64_MAX;
volatile uint32_t t48 = 2529U;
volatile int16_t x198 = INT16_MIN;
uint16_t x199 = 27U;
static int8_t x200 = -60;
static volatile int32_t x203 = INT32_MAX;
static uint16_t x205 = 13U;
static int16_t x209 = INT16_MIN;
volatile int64_t x215 = INT64_MAX;
int16_t x216 = -378;
static int64_t t54 = -1LL;
static int64_t x221 = 767395858LL;
volatile int64_t x223 = INT64_MAX;
int64_t x225 = -1LL;
int32_t x233 = -1;
int64_t x235 = INT64_MIN;
volatile uint32_t x240 = 34096498U;
uint32_t t59 = 154880622U;
int16_t x244 = 536;
uint64_t x245 = UINT64_MAX;
uint64_t x248 = UINT64_MAX;
static int16_t x250 = INT16_MAX;
volatile int32_t x255 = -871096;
volatile int32_t t63 = 1;
int32_t x258 = 180;
uint8_t x261 = 1U;
static uint64_t x264 = UINT64_MAX;
int32_t t65 = 380301854;
static volatile int64_t x266 = INT64_MIN;
int64_t t66 = 10225886373LL;
uint32_t x269 = 683327595U;
int8_t x272 = -1;
uint16_t x278 = UINT16_MAX;
int8_t x280 = INT8_MIN;
static int64_t t69 = 3210727125LL;
uint32_t t72 = 197563U;
volatile uint64_t x300 = 3798LLU;
uint16_t x304 = UINT16_MAX;
volatile int32_t t75 = -17074741;
volatile int32_t x312 = -1;
int32_t x314 = 212668867;
int64_t x316 = -1LL;
int16_t x317 = -1;
int32_t x320 = INT32_MIN;
int64_t x326 = INT64_MIN;
int8_t x327 = INT8_MIN;
static volatile int64_t t81 = -1616147742LL;
int8_t x338 = INT8_MIN;
int64_t x341 = 16122809796LL;
volatile int32_t x354 = 18578;
uint8_t x358 = 2U;
int8_t x360 = -1;
volatile uint8_t x364 = 27U;
uint8_t x366 = UINT8_MAX;
static volatile uint32_t x368 = 286863751U;
volatile int32_t x373 = -217;
int16_t x382 = 13572;
int16_t x396 = INT16_MAX;
volatile int32_t t98 = -1035314;
static int64_t x397 = -1LL;
int32_t x398 = INT32_MIN;


void f0(void) {
	static int16_t x3 = INT16_MIN;
	int8_t x4 = -22;

	t0 = ((x1^x2)|(x3<x4));

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -2401;
	static int8_t x6 = -1;
	int16_t x7 = -1;
	int32_t x8 = INT32_MIN;
	static int32_t t1 = -510700655;

	t1 = ((x5^x6)|(x7<x8));

	if (t1 != 2400) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 3812;
	int8_t x10 = INT8_MIN;
	volatile int8_t x11 = 9;
	int64_t x12 = INT64_MAX;
	int32_t t2 = -156852;

	t2 = ((x9^x10)|(x11<x12));

	if (t2 != -3739) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 4U;
	uint32_t x15 = 1256378U;
	uint8_t x16 = UINT8_MAX;
	uint32_t t3 = 4217U;

	t3 = ((x13^x14)|(x15<x16));

	if (t3 != 4294965530U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 0U;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;
	uint64_t t4 = 25035726036LLU;

	t4 = ((x17^x18)|(x19<x20));

	if (t4 != 2297837403LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MIN;
	int8_t x23 = 16;
	int32_t x24 = -976;

	t5 = ((x21^x22)|(x23<x24));

	if (t5 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 11U;
	int32_t x27 = INT32_MIN;
	static int32_t t6 = -735;

	t6 = ((x25^x26)|(x27<x28));

	if (t6 != 5) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -22;
	int16_t x30 = -1;
	int8_t x32 = 1;
	static int32_t t7 = -400331966;

	t7 = ((x29^x30)|(x31<x32));

	if (t7 != 21) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 2634;
	static uint16_t x34 = UINT16_MAX;
	int8_t x35 = 1;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = -2;

	t8 = ((x33^x34)|(x35<x36));

	if (t8 != 62901) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MAX;
	int64_t x39 = -736LL;
	volatile int32_t t9 = 0;

	t9 = ((x37^x38)|(x39<x40));

	if (t9 != -2147450881) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 0;
	int64_t x42 = INT64_MAX;
	static volatile int8_t x43 = INT8_MIN;
	int16_t x44 = -1;

	t10 = ((x41^x42)|(x43<x44));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -3447;
	uint8_t x46 = 57U;
	uint16_t x47 = UINT16_MAX;
	int32_t x48 = INT32_MAX;
	volatile int32_t t11 = -92895;

	t11 = ((x45^x46)|(x47<x48));

	if (t11 != -3407) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 11U;
	static uint16_t x50 = 629U;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = INT8_MAX;
	uint32_t t12 = 2203U;

	t12 = ((x49^x50)|(x51<x52));

	if (t12 != 638U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = 383847911078222777LLU;
	int16_t x54 = 24;
	static int32_t x55 = 118392;

	t13 = ((x53^x54)|(x55<x56));

	if (t13 != 383847911078222753LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = UINT32_MAX;
	int32_t x58 = -1;
	uint64_t x60 = 2665792LLU;
	static uint32_t t14 = 0U;

	t14 = ((x57^x58)|(x59<x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	int32_t x63 = INT32_MAX;
	volatile int8_t x64 = INT8_MAX;
	volatile uint64_t t15 = 360LLU;

	t15 = ((x61^x62)|(x63<x64));

	if (t15 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -3125344828815836561LL;
	int64_t x67 = INT64_MAX;
	static int32_t x68 = INT32_MIN;

	t16 = ((x65^x66)|(x67<x68));

	if (t16 != 3125344828815866479LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x71 = -1;

	t17 = ((x69^x70)|(x71<x72));

	if (t17 != -491160528) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -1;
	int32_t x74 = -1;
	static volatile int64_t x76 = INT64_MIN;

	t18 = ((x73^x74)|(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MAX;
	int32_t x78 = INT32_MIN;
	volatile uint64_t x79 = UINT64_MAX;
	int16_t x80 = INT16_MIN;
	static int64_t t19 = 2412365302499LL;

	t19 = ((x77^x78)|(x79<x80));

	if (t19 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = 363919410;
	int8_t x83 = 0;
	static uint8_t x84 = 0U;
	int32_t t20 = 29858;

	t20 = ((x81^x82)|(x83<x84));

	if (t20 != 363857869) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	volatile int32_t x86 = 741475;
	volatile int32_t x87 = INT32_MAX;
	int32_t x88 = 24736;

	t21 = ((x85^x86)|(x87<x88));

	if (t21 != -9223372036854034333LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = -1;
	int64_t x90 = INT64_MIN;
	static int64_t x91 = -3375LL;
	int64_t x92 = -782728879034507LL;
	int64_t t22 = INT64_MAX;

	t22 = ((x89^x90)|(x91<x92));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	volatile int8_t x94 = INT8_MIN;
	int32_t x95 = 896726656;
	static uint64_t x96 = 3504847334LLU;
	volatile int32_t t23 = -64497;

	t23 = ((x93^x94)|(x95<x96));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MAX;
	int64_t x99 = INT64_MAX;
	uint32_t x100 = 390097U;
	int32_t t24 = INT32_MIN;

	t24 = ((x97^x98)|(x99<x100));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int32_t x102 = -1;
	static int32_t x103 = 5206479;
	volatile int32_t t25 = 1980;

	t25 = ((x101^x102)|(x103<x104));

	if (t25 != -255) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static int64_t x106 = INT64_MAX;
	volatile int32_t x107 = INT32_MIN;
	int32_t x108 = INT32_MIN;

	t26 = ((x105^x106)|(x107<x108));

	if (t26 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	volatile int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MIN;

	t27 = ((x109^x110)|(x111<x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = -1;
	int16_t x115 = -9622;
	int64_t x116 = INT64_MIN;
	uint32_t t28 = 1386080U;

	t28 = ((x113^x114)|(x115<x116));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x118 = 52U;
	uint16_t x119 = UINT16_MAX;
	int32_t t29 = 207315;

	t29 = ((x117^x118)|(x119<x120));

	if (t29 != -53) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	volatile int16_t x122 = INT16_MIN;
	uint16_t x123 = 0U;
	volatile int8_t x124 = INT8_MIN;
	uint64_t t30 = 114037351LLU;

	t30 = ((x121^x122)|(x123<x124));

	if (t30 != 32767LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	static uint8_t x126 = UINT8_MAX;
	uint8_t x127 = UINT8_MAX;
	int16_t x128 = INT16_MIN;
	uint32_t t31 = 896U;

	t31 = ((x125^x126)|(x127<x128));

	if (t31 != 4294967040U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 2;
	uint16_t x130 = 31U;
	int32_t x131 = 0;
	static uint32_t x132 = 19257068U;
	volatile int32_t t32 = 368160073;

	t32 = ((x129^x130)|(x131<x132));

	if (t32 != 29) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x135 = -13737;
	static int32_t x136 = 179252593;
	int64_t t33 = -33474114375746LL;

	t33 = ((x133^x134)|(x135<x136));

	if (t33 != -33LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = 107991636U;
	int32_t x138 = -1;
	static uint32_t x139 = 24881264U;
	int16_t x140 = INT16_MIN;
	volatile uint32_t t34 = 182U;

	t34 = ((x137^x138)|(x139<x140));

	if (t34 != 4186975659U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	uint8_t x142 = 123U;
	static int32_t x143 = -9361105;
	int16_t x144 = 3;
	volatile uint32_t t35 = 62590930U;

	t35 = ((x141^x142)|(x143<x144));

	if (t35 != 4294967173U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = UINT32_MAX;
	uint64_t x146 = UINT64_MAX;
	int64_t x147 = -14537436627LL;
	uint64_t x148 = 14427007532659LLU;

	t36 = ((x145^x146)|(x147<x148));

	if (t36 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x150 = INT16_MIN;
	volatile uint8_t x151 = 0U;
	static int32_t x152 = INT32_MIN;
	static volatile int32_t t37 = -1;

	t37 = ((x149^x150)|(x151<x152));

	if (t37 != 32640) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = -14;

	t38 = ((x153^x154)|(x155<x156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x158 = 1008U;
	static int32_t x159 = INT32_MIN;
	int16_t x160 = -1;
	int32_t t39 = 121172099;

	t39 = ((x157^x158)|(x159<x160));

	if (t39 != 271) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 26U;
	int32_t x162 = INT32_MAX;
	static volatile uint64_t x163 = 600400458033LLU;
	int16_t x164 = -28;
	volatile int32_t t40 = -2951;

	t40 = ((x161^x162)|(x163<x164));

	if (t40 != 2147483621) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	uint32_t x166 = 554U;
	uint64_t x167 = 1LLU;
	static uint8_t x168 = UINT8_MAX;

	t41 = ((x165^x166)|(x167<x168));

	if (t41 != 4294935083U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = UINT64_MAX;
	uint8_t x171 = 28U;
	uint32_t x172 = UINT32_MAX;
	volatile uint64_t t42 = 2119055129110LLU;

	t42 = ((x169^x170)|(x171<x172));

	if (t42 != 18446741478019193441LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 1;
	int32_t x174 = INT32_MAX;
	static int64_t x175 = INT64_MAX;
	uint64_t x176 = 0LLU;
	int32_t t43 = -378;

	t43 = ((x173^x174)|(x175<x176));

	if (t43 != 2147483646) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x179 = 351606U;

	t44 = ((x177^x178)|(x179<x180));

	if (t44 != -9223372036849163193LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	volatile int32_t x182 = -75996705;
	uint8_t x183 = 115U;
	int32_t x184 = INT32_MIN;

	t45 = ((x181^x182)|(x183<x184));

	if (t45 != 75996704) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x186 = 114U;
	int32_t x187 = -1;
	int8_t x188 = INT8_MIN;

	t46 = ((x185^x186)|(x187<x188));

	if (t46 != -9223372036854775694LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 24U;
	int16_t x190 = INT16_MAX;
	int16_t x191 = -1;

	t47 = ((x189^x190)|(x191<x192));

	if (t47 != 32743) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x195 = UINT16_MAX;

	t48 = ((x193^x194)|(x195<x196));

	if (t48 != 2147483647U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = UINT8_MAX;
	volatile int32_t t49 = -26;

	t49 = ((x197^x198)|(x199<x200));

	if (t49 != -32513) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	uint16_t x202 = 2344U;
	uint64_t x204 = UINT64_MAX;
	static int32_t t50 = -248;

	t50 = ((x201^x202)|(x203<x204));

	if (t50 != -2147481303) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x206 = 138U;
	uint16_t x207 = UINT16_MAX;
	volatile int32_t x208 = -1;
	static uint32_t t51 = 485U;

	t51 = ((x205^x206)|(x207<x208));

	if (t51 != 135U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MAX;
	static uint64_t x211 = UINT64_MAX;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = -28464;

	t52 = ((x209^x210)|(x211<x212));

	if (t52 != -2147450881) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 111U;
	static volatile int16_t x214 = -1;
	static volatile int32_t t53 = 3280;

	t53 = ((x213^x214)|(x215<x216));

	if (t53 != -112) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -3456637LL;
	int64_t x218 = -1LL;
	uint8_t x219 = 0U;
	int8_t x220 = -1;

	t54 = ((x217^x218)|(x219<x220));

	if (t54 != 3456636LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x222 = INT16_MIN;
	volatile uint64_t x224 = 892113759976LLU;
	int64_t t55 = 2804673391488292928LL;

	t55 = ((x221^x222)|(x223<x224));

	if (t55 != -767424494LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = 10424;
	static uint64_t x227 = 22LLU;
	static int16_t x228 = -1;
	volatile int64_t t56 = -4297429480488943004LL;

	t56 = ((x225^x226)|(x227<x228));

	if (t56 != -10425LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	uint8_t x230 = 20U;
	static uint32_t x231 = 119U;
	int32_t x232 = INT32_MAX;
	volatile int64_t t57 = -1763LL;

	t57 = ((x229^x230)|(x231<x232));

	if (t57 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x234 = 46058770196LLU;
	static int32_t x236 = -1;
	uint64_t t58 = 229279LLU;

	t58 = ((x233^x234)|(x235<x236));

	if (t58 != 18446744027650781419LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MIN;
	uint32_t x238 = 74U;
	int32_t x239 = -1;

	t59 = ((x237^x238)|(x239<x240));

	if (t59 != 4294934602U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	uint64_t x242 = 654LLU;
	uint64_t x243 = 16233425LLU;
	uint64_t t60 = 172796LLU;

	t60 = ((x241^x242)|(x243<x244));

	if (t60 != 18446744073709550862LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = INT16_MIN;
	volatile uint64_t t61 = 74694504482LLU;

	t61 = ((x245^x246)|(x247<x248));

	if (t61 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MAX;
	volatile int64_t x251 = INT64_MIN;
	int16_t x252 = -1;
	volatile int32_t t62 = 2983;

	t62 = ((x249^x250)|(x251<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = INT16_MAX;
	int16_t x254 = 382;
	int16_t x256 = -1;

	t63 = ((x253^x254)|(x255<x256));

	if (t63 != 32385) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MIN;
	volatile uint16_t x259 = UINT16_MAX;
	int8_t x260 = INT8_MAX;
	volatile int64_t t64 = 940448373637LL;

	t64 = ((x257^x258)|(x259<x260));

	if (t64 != -9223372036854775628LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = 1930413;
	int32_t x263 = INT32_MIN;

	t65 = ((x261^x262)|(x263<x264));

	if (t65 != 1930413) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 15026;
	int64_t x267 = INT64_MIN;
	uint32_t x268 = UINT32_MAX;

	t66 = ((x265^x266)|(x267<x268));

	if (t66 != -9223372036854760781LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = 1;
	uint64_t x271 = UINT64_MAX;
	volatile uint32_t t67 = 15875032U;

	t67 = ((x269^x270)|(x271<x272));

	if (t67 != 683327594U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 51730;
	uint8_t x274 = 7U;
	uint16_t x275 = UINT16_MAX;
	uint16_t x276 = 38U;
	static volatile int32_t t68 = 123578459;

	t68 = ((x273^x274)|(x275<x276));

	if (t68 != 51733) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	volatile uint16_t x279 = 755U;

	t69 = ((x277^x278)|(x279<x280));

	if (t69 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = INT16_MIN;
	static int16_t x284 = INT16_MIN;
	volatile uint64_t t70 = 435226477978568934LLU;

	t70 = ((x281^x282)|(x283<x284));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	uint16_t x286 = 31U;
	volatile int16_t x287 = INT16_MAX;
	volatile uint8_t x288 = UINT8_MAX;
	int32_t t71 = 200395;

	t71 = ((x285^x286)|(x287<x288));

	if (t71 != 32736) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x289 = UINT32_MAX;
	uint8_t x290 = 3U;
	int16_t x291 = 453;
	volatile uint8_t x292 = 3U;

	t72 = ((x289^x290)|(x291<x292));

	if (t72 != 4294967292U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = UINT8_MAX;
	int8_t x294 = -11;
	uint32_t x295 = 4U;
	uint32_t x296 = 1939620838U;
	int32_t t73 = 121;

	t73 = ((x293^x294)|(x295<x296));

	if (t73 != -245) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = -1;
	static int8_t x298 = -1;
	volatile int16_t x299 = INT16_MAX;
	int32_t t74 = -315;

	t74 = ((x297^x298)|(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	int16_t x302 = -1;
	static int64_t x303 = -1LL;

	t75 = ((x301^x302)|(x303<x304));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MAX;
	uint32_t x306 = 3U;
	static uint32_t x307 = UINT32_MAX;
	static int8_t x308 = INT8_MAX;
	volatile uint32_t t76 = 643223U;

	t76 = ((x305^x306)|(x307<x308));

	if (t76 != 2147483644U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = -59616330LL;
	int32_t x310 = 4967;
	int64_t x311 = INT64_MIN;
	static volatile int64_t t77 = 19003011957014LL;

	t77 = ((x309^x310)|(x311<x312));

	if (t77 != -59621167LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	int8_t x315 = -1;
	static uint64_t t78 = 280297825LLU;

	t78 = ((x313^x314)|(x315<x316));

	if (t78 != 18446744073496882748LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x318 = UINT32_MAX;
	int8_t x319 = 5;
	volatile uint32_t t79 = 89U;

	t79 = ((x317^x318)|(x319<x320));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = INT8_MAX;
	uint16_t x322 = 2U;
	int8_t x323 = -1;
	static int64_t x324 = INT64_MAX;
	int32_t t80 = -20406668;

	t80 = ((x321^x322)|(x323<x324));

	if (t80 != 125) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	int16_t x328 = -1;

	t81 = ((x325^x326)|(x327<x328));

	if (t81 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	volatile int8_t x331 = 0;
	static int8_t x332 = -1;
	int32_t t82 = -947533486;

	t82 = ((x329^x330)|(x331<x332));

	if (t82 != -256) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MAX;
	int16_t x334 = -1;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -29;
	static int64_t t83 = -3438230LL;

	t83 = ((x333^x334)|(x335<x336));

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	volatile uint8_t x339 = 2U;
	int64_t x340 = -7LL;
	volatile int32_t t84 = -1638908;

	t84 = ((x337^x338)|(x339<x340));

	if (t84 != 32640) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MAX;
	int8_t x343 = 1;
	int32_t x344 = INT32_MIN;
	volatile int64_t t85 = -63929114158572LL;

	t85 = ((x341^x342)|(x343<x344));

	if (t85 != 16122835515LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 5U;
	int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MIN;
	int32_t x348 = -94;
	int32_t t86 = 10239;

	t86 = ((x345^x346)|(x347<x348));

	if (t86 != -123) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 245LLU;
	volatile int8_t x350 = 27;
	uint8_t x351 = 0U;
	static uint8_t x352 = UINT8_MAX;
	volatile uint64_t t87 = 8589811904131LLU;

	t87 = ((x349^x350)|(x351<x352));

	if (t87 != 239LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int32_t x355 = INT32_MAX;
	volatile int16_t x356 = INT16_MIN;
	volatile int64_t t88 = 42461579465LL;

	t88 = ((x353^x354)|(x355<x356));

	if (t88 != -18579LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 3;
	int64_t x359 = INT64_MIN;
	volatile int32_t t89 = -15959902;

	t89 = ((x357^x358)|(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = -1LL;
	uint32_t x362 = UINT32_MAX;
	static volatile uint64_t x363 = UINT64_MAX;
	volatile int64_t t90 = -12835331LL;

	t90 = ((x361^x362)|(x363<x364));

	if (t90 != -4294967296LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x365 = INT16_MAX;
	uint64_t x367 = UINT64_MAX;
	volatile int32_t t91 = -848;

	t91 = ((x365^x366)|(x367<x368));

	if (t91 != 32512) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	int32_t x370 = INT32_MIN;
	uint8_t x371 = 25U;
	static uint64_t x372 = 30509LLU;
	volatile int32_t t92 = -1;

	t92 = ((x369^x370)|(x371<x372));

	if (t92 != -2147418113) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MIN;
	int64_t x375 = 56003264LL;
	int8_t x376 = -1;
	static int64_t t93 = -14128LL;

	t93 = ((x373^x374)|(x375<x376));

	if (t93 != 9223372036854775591LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -1;
	static int8_t x378 = INT8_MIN;
	static int32_t x379 = INT32_MIN;
	int8_t x380 = 0;
	static volatile int32_t t94 = -2;

	t94 = ((x377^x378)|(x379<x380));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int32_t x383 = -1;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 58861452;

	t95 = ((x381^x382)|(x383<x384));

	if (t95 != -13573) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = 25;
	uint8_t x386 = 0U;
	uint64_t x387 = UINT64_MAX;
	uint32_t x388 = 281493799U;
	int32_t t96 = -2915561;

	t96 = ((x385^x386)|(x387<x388));

	if (t96 != 25) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 1;
	int32_t x390 = INT32_MIN;
	uint8_t x391 = 4U;
	int64_t x392 = -1LL;
	volatile int32_t t97 = 3;

	t97 = ((x389^x390)|(x391<x392));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	uint16_t x394 = UINT16_MAX;
	uint32_t x395 = UINT32_MAX;

	t98 = ((x393^x394)|(x395<x396));

	if (t98 != -32769) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x399 = INT32_MIN;
	static volatile uint16_t x400 = UINT16_MAX;
	volatile int64_t t99 = 172571772175750LL;

	t99 = ((x397^x398)|(x399<x400));

	if (t99 != 2147483647LL) { NG(); } else { ; }
	
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

