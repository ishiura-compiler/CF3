#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -1;
static int32_t x16 = 20301577;
static volatile int32_t t3 = 1;
uint64_t t4 = 1218492858327556LLU;
int32_t x22 = -1802;
uint8_t x35 = 0U;
volatile uint16_t x37 = 21248U;
static int8_t x43 = -1;
uint64_t t10 = 99265865LLU;
int32_t x48 = INT32_MAX;
volatile uint32_t t12 = 23727U;
static int64_t x57 = -40003207785LL;
volatile uint32_t x59 = 185630647U;
volatile int64_t t14 = -1012026597983174007LL;
volatile int64_t t16 = 1136177LL;
int64_t x69 = 4140961384707899740LL;
int8_t x79 = INT8_MIN;
static uint32_t t18 = 91892340U;
int8_t x98 = 0;
uint32_t x102 = UINT32_MAX;
volatile int8_t x111 = -11;
static int64_t x112 = -1LL;
int32_t x114 = INT32_MIN;
int64_t x115 = -1LL;
volatile int64_t t26 = 1LL;
int8_t x121 = INT8_MAX;
volatile uint8_t x126 = 12U;
volatile uint64_t x130 = UINT64_MAX;
uint64_t x137 = 531414023LLU;
static int32_t x144 = -1;
int8_t x155 = -1;
int64_t x156 = 6370272581135LL;
static volatile int64_t x166 = INT64_MAX;
uint64_t x167 = 117807331011LLU;
int64_t x168 = INT64_MAX;
int64_t x170 = -1LL;
uint64_t x191 = 510747234353LLU;
uint64_t t40 = 14LLU;
volatile uint64_t t41 = 818083926176LLU;
uint32_t x203 = UINT32_MAX;
volatile uint64_t t43 = 535539361171493800LLU;
uint8_t x209 = UINT8_MAX;
int64_t x210 = INT64_MAX;
volatile uint64_t x216 = 0LLU;
static int64_t x218 = -94541773697LL;
int64_t x220 = INT64_MIN;
uint16_t x221 = UINT16_MAX;
volatile int64_t t50 = 55LL;
int16_t x236 = -1;
int8_t x237 = 3;
volatile int8_t x240 = INT8_MAX;
int16_t x242 = -3720;
int64_t t53 = 62002922LL;
int32_t x248 = INT32_MAX;
uint16_t x251 = 12601U;
static volatile int16_t x254 = INT16_MAX;
volatile uint8_t x257 = UINT8_MAX;
uint32_t x259 = 26U;
int32_t x260 = -140342;
uint64_t x261 = 1LLU;
int32_t t59 = 7;
uint32_t x282 = 3U;
static int64_t x284 = -1LL;
volatile uint32_t x292 = 161040U;
volatile int32_t x293 = -592;
int8_t x296 = INT8_MIN;
volatile uint64_t x297 = 240357411LLU;
static int64_t x298 = -1LL;
int32_t x300 = 496660;
uint64_t t66 = 564366466654LLU;
int32_t x302 = -1;
uint8_t x304 = 6U;
int64_t t67 = 866190119LL;
int8_t x305 = INT8_MAX;
static volatile uint32_t x307 = UINT32_MAX;
int32_t x309 = -1407107;
volatile int8_t x315 = -1;
static volatile int64_t t71 = -93LL;
int8_t x325 = -1;
uint32_t x328 = UINT32_MAX;
uint8_t x332 = 90U;
static int16_t x335 = INT16_MAX;
int32_t t75 = 2;
int8_t x350 = -1;
volatile int8_t x351 = INT8_MAX;
int64_t x354 = 2078171492256677383LL;
volatile int16_t x358 = INT16_MIN;
uint32_t x361 = UINT32_MAX;
static uint64_t x365 = 28LLU;
uint8_t x373 = 15U;
volatile uint16_t x374 = 2023U;
int8_t x375 = INT8_MAX;
volatile int64_t x376 = INT64_MIN;
uint32_t x379 = UINT32_MAX;
static int64_t t84 = 28396LL;
uint32_t x391 = 489U;
static volatile int32_t x392 = INT32_MIN;
uint8_t x396 = 6U;
uint32_t x400 = 2U;
volatile uint32_t t89 = 19928U;
uint16_t x405 = 2116U;
int16_t x408 = INT16_MIN;
volatile int32_t t91 = 213736538;
int8_t x411 = -12;
int32_t x416 = 4577;
uint64_t t93 = 8371843369846140041LLU;
uint64_t x428 = UINT64_MAX;
static int8_t x431 = 3;
static uint16_t x435 = 5U;
int32_t x445 = INT32_MAX;
uint64_t x446 = 2711261993901223616LLU;
uint16_t x447 = 2157U;


void f0(void) {
	volatile uint64_t x1 = 797298755785394367LLU;
	int64_t x2 = -1LL;
	int16_t x3 = -1587;
	int16_t x4 = -470;
	volatile uint64_t t0 = 989LLU;

	t0 = (((x1^x2)+x3)&x4);

	if (t0 != 17649445317924155400LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = UINT64_MAX;
	int64_t x7 = INT64_MIN;
	volatile uint64_t x8 = 538131157LLU;
	uint64_t t1 = 18282883LLU;

	t1 = (((x5^x6)+x7)&x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 208184U;
	int64_t x10 = INT64_MAX;
	static volatile uint64_t x11 = UINT64_MAX;
	uint32_t x12 = UINT32_MAX;
	volatile uint64_t t2 = 581343424LLU;

	t2 = (((x9^x10)+x11)&x12);

	if (t2 != 4294759110LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -369444;
	int8_t x14 = -3;
	int8_t x15 = -10;

	t3 = (((x13^x14)+x15)&x16);

	if (t3 != 361217) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile int8_t x18 = INT8_MIN;
	volatile uint32_t x19 = 2U;
	uint16_t x20 = UINT16_MAX;

	t4 = (((x17^x18)+x19)&x20);

	if (t4 != 129LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -57;
	uint16_t x23 = 1U;
	static int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = 194638;

	t5 = (((x21^x22)+x23)&x24);

	if (t5 != 1792) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 48363977845LLU;
	int32_t x26 = -42;
	int32_t x27 = -75606;
	static uint8_t x28 = UINT8_MAX;
	static uint64_t t6 = 1080345336154853LLU;

	t6 = (((x25^x26)+x27)&x28);

	if (t6 != 77LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 14U;
	uint32_t x30 = 59432U;
	int8_t x31 = 0;
	static uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 1056586696LLU;

	t7 = (((x29^x30)+x31)&x32);

	if (t7 != 59430LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	static int8_t x34 = INT8_MIN;
	uint32_t x36 = 265845U;
	volatile uint32_t t8 = 52716U;

	t8 = (((x33^x34)+x35)&x36);

	if (t8 != 3584U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 2U;
	volatile uint8_t x39 = 1U;
	uint64_t x40 = 1291731956862LLU;
	uint64_t t9 = 1LLU;

	t9 = (((x37^x38)+x39)&x40);

	if (t9 != 20482LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MIN;
	volatile uint64_t x44 = 32905941374002LLU;

	t10 = (((x41^x42)+x43)&x44);

	if (t10 != 32905941374002LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static volatile int8_t x46 = -1;
	int16_t x47 = INT16_MIN;
	volatile int64_t t11 = -231LL;

	t11 = (((x45^x46)+x47)&x48);

	if (t11 != 2147450879LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = UINT16_MAX;
	volatile uint32_t x50 = UINT32_MAX;
	int8_t x51 = -7;
	int32_t x52 = 2290;

	t12 = (((x49^x50)+x51)&x52);

	if (t12 != 2288U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 571412;
	int16_t x54 = INT16_MIN;
	static uint16_t x55 = 10334U;
	static volatile int64_t x56 = -73358992322281401LL;
	volatile int64_t t13 = 23178082LL;

	t13 = (((x53^x54)+x55)&x56);

	if (t13 != -73358992322838462LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = -1;
	static int32_t x60 = INT32_MAX;

	t14 = (((x57^x58)+x59)&x60);

	if (t14 != 1534132767LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	static uint32_t x62 = UINT32_MAX;
	volatile int64_t x63 = INT64_MIN;
	int64_t x64 = INT64_MIN;
	int64_t t15 = INT64_MIN;

	t15 = (((x61^x62)+x63)&x64);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = 569;
	int32_t x66 = -2112;
	volatile int64_t x67 = -3604442965LL;
	uint32_t x68 = 6312486U;

	t16 = (((x65^x66)+x67)&x68);

	if (t16 != 2097700LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = 0;
	int64_t x71 = -1LL;
	int64_t x72 = INT64_MAX;
	volatile int64_t t17 = 2951638825474810LL;

	t17 = (((x69^x70)+x71)&x72);

	if (t17 != 4140961384707899739LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = -1;
	static uint32_t x78 = 4U;
	uint8_t x80 = UINT8_MAX;

	t18 = (((x77^x78)+x79)&x80);

	if (t18 != 123U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x85 = 7037U;
	static int16_t x86 = INT16_MIN;
	volatile int32_t x87 = INT32_MAX;
	int16_t x88 = INT16_MAX;
	volatile int32_t t19 = -27;

	t19 = (((x85^x86)+x87)&x88);

	if (t19 != 7036) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = INT32_MAX;
	int8_t x91 = INT8_MIN;
	static int32_t x92 = INT32_MAX;
	int64_t t20 = 477604LL;

	t20 = (((x89^x90)+x91)&x92);

	if (t20 != 2147483519LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x97 = UINT8_MAX;
	int64_t x99 = 141LL;
	static uint64_t x100 = 54501672456870680LLU;
	static uint64_t t21 = 853564330418725648LLU;

	t21 = (((x97^x98)+x99)&x100);

	if (t21 != 264LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x101 = 6U;
	int16_t x103 = -1;
	volatile int16_t x104 = INT16_MAX;
	static volatile uint32_t t22 = 1U;

	t22 = (((x101^x102)+x103)&x104);

	if (t22 != 32760U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = INT64_MIN;
	volatile int32_t x107 = -1;
	int8_t x108 = 14;
	volatile int64_t t23 = 681678729008398LL;

	t23 = (((x105^x106)+x107)&x108);

	if (t23 != 14LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 31U;
	static int64_t x110 = INT64_MAX;
	volatile int64_t t24 = 7836533LL;

	t24 = (((x109^x110)+x111)&x112);

	if (t24 != 9223372036854775765LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x113 = INT16_MAX;
	int16_t x116 = INT16_MAX;
	int64_t t25 = -2747072422393LL;

	t25 = (((x113^x114)+x115)&x116);

	if (t25 != 32766LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = 64;
	uint16_t x118 = 51U;
	int64_t x119 = INT64_MIN;
	int8_t x120 = -33;

	t26 = (((x117^x118)+x119)&x120);

	if (t26 != -9223372036854775725LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MIN;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t27 = 34950256;

	t27 = (((x121^x122)+x123)&x124);

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = -1;
	volatile int32_t x127 = 802;
	static uint8_t x128 = 4U;
	volatile int32_t t28 = -516901731;

	t28 = (((x125^x126)+x127)&x128);

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x129 = 23947335LL;
	int64_t x131 = INT64_MIN;
	int16_t x132 = -230;
	static uint64_t t29 = 3909680980756981109LLU;

	t29 = (((x129^x130)+x131)&x132);

	if (t29 != 9223372036830828312LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x138 = INT16_MAX;
	static volatile int8_t x139 = 0;
	uint32_t x140 = UINT32_MAX;
	uint64_t t30 = 90104932406480LLU;

	t30 = (((x137^x138)+x139)&x140);

	if (t30 != 531416056LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = 449LLU;
	static int64_t x142 = -1LL;
	int64_t x143 = INT64_MIN;
	volatile uint64_t t31 = 5814824456664LLU;

	t31 = (((x141^x142)+x143)&x144);

	if (t31 != 9223372036854775358LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x145 = 2U;
	static int64_t x146 = INT64_MAX;
	int32_t x147 = INT32_MIN;
	volatile uint16_t x148 = 3U;
	int64_t t32 = -15734285862LL;

	t32 = (((x145^x146)+x147)&x148);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x153 = -12;
	static uint16_t x154 = UINT16_MAX;
	volatile int64_t t33 = 1933LL;

	t33 = (((x153^x154)+x155)&x156);

	if (t33 != 6370272542730LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MIN;
	uint64_t t34 = 14LLU;

	t34 = (((x165^x166)+x167)&x168);

	if (t34 != 117807363778LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = INT32_MIN;
	static int32_t x171 = -1;
	static uint16_t x172 = 13U;
	volatile int64_t t35 = -995734310672825362LL;

	t35 = (((x169^x170)+x171)&x172);

	if (t35 != 12LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = -1;
	int16_t x174 = INT16_MIN;
	int32_t x175 = -47;
	volatile int8_t x176 = -13;
	volatile int32_t t36 = 8076;

	t36 = (((x173^x174)+x175)&x176);

	if (t36 != 32720) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x177 = 28;
	static uint16_t x178 = 32687U;
	int32_t x179 = 938524890;
	int16_t x180 = INT16_MIN;
	volatile int32_t t37 = 2;

	t37 = (((x177^x178)+x179)&x180);

	if (t37 != 938541056) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = 62933026929756LLU;
	uint64_t x182 = UINT64_MAX;
	uint64_t x183 = 69192995LLU;
	static uint8_t x184 = 7U;
	uint64_t t38 = 3529117600LLU;

	t38 = (((x181^x182)+x183)&x184);

	if (t38 != 6LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x185 = INT64_MIN;
	static int16_t x186 = INT16_MAX;
	int8_t x187 = INT8_MIN;
	int16_t x188 = -1;
	int64_t t39 = -980844883LL;

	t39 = (((x185^x186)+x187)&x188);

	if (t39 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x189 = 103U;
	static int32_t x190 = INT32_MIN;
	uint32_t x192 = 57U;

	t40 = (((x189^x190)+x191)&x192);

	if (t40 != 24LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x193 = 15U;
	int16_t x194 = INT16_MIN;
	volatile uint32_t x195 = UINT32_MAX;
	uint64_t x196 = 19890502657564LLU;

	t41 = (((x193^x194)+x195)&x196);

	if (t41 != 509083660LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = INT32_MAX;
	uint64_t x198 = 8770965LLU;
	int16_t x199 = INT16_MAX;
	volatile uint16_t x200 = 68U;
	volatile uint64_t t42 = 7859894612195148415LLU;

	t42 = (((x197^x198)+x199)&x200);

	if (t42 != 64LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x201 = 26U;
	volatile uint64_t x202 = 69864LLU;
	uint8_t x204 = 3U;

	t43 = (((x201^x202)+x203)&x204);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = -1LL;
	volatile uint32_t x206 = 3568964U;
	int32_t x207 = 9661709;
	int64_t x208 = -92LL;
	int64_t t44 = 3792706659326427523LL;

	t44 = (((x205^x206)+x207)&x208);

	if (t44 != 6092672LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x211 = 2U;
	uint8_t x212 = 0U;
	int64_t t45 = 2LL;

	t45 = (((x209^x210)+x211)&x212);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = INT8_MIN;
	uint16_t x214 = 911U;
	uint64_t x215 = UINT64_MAX;
	uint64_t t46 = 76430615011LLU;

	t46 = (((x213^x214)+x215)&x216);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = INT8_MAX;
	int32_t x219 = INT32_MAX;
	volatile int64_t t47 = INT64_MIN;

	t47 = (((x217^x218)+x219)&x220);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x222 = 7;
	static int32_t x223 = -1;
	static uint32_t x224 = 7437U;
	uint32_t t48 = 15U;

	t48 = (((x221^x222)+x223)&x224);

	if (t48 != 7429U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x225 = INT16_MIN;
	static int64_t x226 = 23918LL;
	volatile int8_t x227 = INT8_MIN;
	volatile uint8_t x228 = 7U;
	int64_t t49 = -4585LL;

	t49 = (((x225^x226)+x227)&x228);

	if (t49 != 6LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = INT8_MAX;
	int8_t x230 = 1;
	volatile int32_t x231 = INT32_MIN;
	int64_t x232 = -3594519061166LL;

	t50 = (((x229^x230)+x231)&x232);

	if (t50 != -3594887626670LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = 17814;
	int16_t x234 = -1;
	int16_t x235 = INT16_MIN;
	volatile int32_t t51 = 1;

	t51 = (((x233^x234)+x235)&x236);

	if (t51 != -50583) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x238 = 11;
	volatile uint8_t x239 = UINT8_MAX;
	int32_t t52 = 881;

	t52 = (((x237^x238)+x239)&x240);

	if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x241 = UINT8_MAX;
	int16_t x243 = INT16_MAX;
	volatile int64_t x244 = INT64_MIN;

	t53 = (((x241^x242)+x243)&x244);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = 885342654158860420LL;
	uint64_t x246 = 29514403916LLU;
	static int16_t x247 = INT16_MIN;
	uint64_t t54 = 49615364223LLU;

	t54 = (((x245^x246)+x247)&x248);

	if (t54 != 1519476936LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = -1;
	int64_t x250 = -127LL;
	int16_t x252 = -284;
	volatile int64_t t55 = -53LL;

	t55 = (((x249^x250)+x251)&x252);

	if (t55 != 12452LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = INT8_MAX;
	static int8_t x255 = -11;
	int16_t x256 = -2;
	volatile int32_t t56 = -14885506;

	t56 = (((x253^x254)+x255)&x256);

	if (t56 != 32628) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x258 = 16195U;
	volatile uint32_t t57 = 786944008U;

	t57 = (((x257^x258)+x259)&x260);

	if (t57 != 7106U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x262 = 1524611802651LLU;
	volatile uint32_t x263 = UINT32_MAX;
	uint32_t x264 = 138203425U;
	volatile uint64_t t58 = 12598641434383LLU;

	t58 = (((x261^x262)+x263)&x264);

	if (t58 != 137412609LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x265 = 5U;
	static volatile int8_t x266 = -22;
	int16_t x267 = 1419;
	int32_t x268 = 1;

	t59 = (((x265^x266)+x267)&x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MIN;
	volatile int8_t x270 = INT8_MAX;
	volatile uint16_t x271 = UINT16_MAX;
	volatile uint32_t x272 = UINT32_MAX;
	static volatile uint32_t t60 = 57411U;

	t60 = (((x269^x270)+x271)&x272);

	if (t60 != 65534U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x273 = 27641221LL;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = -1;
	static int32_t x276 = INT32_MIN;
	uint64_t t61 = 104277LLU;

	t61 = (((x273^x274)+x275)&x276);

	if (t61 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x277 = 14450LLU;
	int8_t x278 = -1;
	volatile uint8_t x279 = 0U;
	int64_t x280 = 175994372LL;
	volatile uint64_t t62 = 14LLU;

	t62 = (((x277^x278)+x279)&x280);

	if (t62 != 175982084LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x281 = 0U;
	int64_t x283 = -1LL;
	int64_t t63 = 185733LL;

	t63 = (((x281^x282)+x283)&x284);

	if (t63 != 2LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x289 = 65U;
	int16_t x290 = INT16_MIN;
	static int16_t x291 = -1;
	static uint32_t t64 = 412332815U;

	t64 = (((x289^x290)+x291)&x292);

	if (t64 != 131072U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x294 = UINT32_MAX;
	int32_t x295 = INT32_MIN;
	static volatile uint32_t t65 = 49668U;

	t65 = (((x293^x294)+x295)&x296);

	if (t65 != 2147484160U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x299 = 1877047127U;

	t66 = (((x297^x298)+x299)&x300);

	if (t66 != 361488LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = INT64_MIN;
	uint16_t x303 = 0U;

	t67 = (((x301^x302)+x303)&x304);

	if (t67 != 6LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x306 = UINT64_MAX;
	uint8_t x308 = 70U;
	uint64_t t68 = 4LLU;

	t68 = (((x305^x306)+x307)&x308);

	if (t68 != 70LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x310 = -5;
	uint8_t x311 = 4U;
	int8_t x312 = INT8_MIN;
	static volatile int32_t t69 = -780389021;

	t69 = (((x309^x310)+x311)&x312);

	if (t69 != 1407104) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x313 = INT16_MAX;
	volatile int16_t x314 = -1;
	uint16_t x316 = UINT16_MAX;
	int32_t t70 = 509267412;

	t70 = (((x313^x314)+x315)&x316);

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x317 = -36LL;
	static int64_t x318 = -392448389589886LL;
	int64_t x319 = 3317329595LL;
	static volatile uint8_t x320 = 116U;

	t71 = (((x317^x318)+x319)&x320);

	if (t71 != 16LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x321 = -3175;
	volatile uint32_t x322 = UINT32_MAX;
	uint32_t x323 = 0U;
	volatile uint8_t x324 = UINT8_MAX;
	volatile uint32_t t72 = 7U;

	t72 = (((x321^x322)+x323)&x324);

	if (t72 != 102U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x326 = 41039U;
	uint8_t x327 = 1U;
	uint32_t t73 = 985339U;

	t73 = (((x325^x326)+x327)&x328);

	if (t73 != 4294926257U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = INT16_MIN;
	uint64_t x330 = UINT64_MAX;
	volatile int16_t x331 = -1001;
	volatile uint64_t t74 = 8226LLU;

	t74 = (((x329^x330)+x331)&x332);

	if (t74 != 18LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MIN;
	uint16_t x334 = UINT16_MAX;
	static int16_t x336 = INT16_MIN;

	t75 = (((x333^x334)+x335)&x336);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x337 = 563U;
	static int8_t x338 = INT8_MIN;
	int64_t x339 = -724344047LL;
	static int8_t x340 = -1;
	static int64_t t76 = -1281LL;

	t76 = (((x337^x338)+x339)&x340);

	if (t76 != -724344636LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x349 = INT16_MIN;
	int32_t x352 = INT32_MIN;
	volatile int32_t t77 = 480771;

	t77 = (((x349^x350)+x351)&x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x353 = UINT32_MAX;
	int16_t x355 = INT16_MIN;
	volatile int64_t x356 = INT64_MIN;
	static int64_t t78 = -1932963045592LL;

	t78 = (((x353^x354)+x355)&x356);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = INT32_MAX;
	uint64_t x359 = 1736LLU;
	int16_t x360 = INT16_MIN;
	volatile uint64_t t79 = 754012005701929LLU;

	t79 = (((x357^x358)+x359)&x360);

	if (t79 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x362 = 93176U;
	volatile int16_t x363 = -5729;
	volatile int8_t x364 = 6;
	volatile uint32_t t80 = 2051414852U;

	t80 = (((x361^x362)+x363)&x364);

	if (t80 != 6U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x366 = INT32_MIN;
	int16_t x367 = -150;
	uint8_t x368 = UINT8_MAX;
	static volatile uint64_t t81 = 2963040316016440LLU;

	t81 = (((x365^x366)+x367)&x368);

	if (t81 != 134LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x369 = 2515735U;
	int16_t x370 = 16001;
	int16_t x371 = -1;
	uint32_t x372 = 270U;
	uint32_t t82 = 1635U;

	t82 = (((x369^x370)+x371)&x372);

	if (t82 != 260U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t t83 = 6411938683LL;

	t83 = (((x373^x374)+x375)&x376);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x377 = 19U;
	static int64_t x378 = -14140LL;
	int64_t x380 = -1LL;

	t84 = (((x377^x378)+x379)&x380);

	if (t84 != 4294953174LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x381 = UINT16_MAX;
	static uint64_t x382 = UINT64_MAX;
	volatile int8_t x383 = -1;
	volatile int32_t x384 = INT32_MAX;
	volatile uint64_t t85 = 155095630LLU;

	t85 = (((x381^x382)+x383)&x384);

	if (t85 != 2147418111LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x385 = UINT8_MAX;
	static int64_t x386 = INT64_MIN;
	int8_t x387 = INT8_MAX;
	uint64_t x388 = UINT64_MAX;
	static uint64_t t86 = 220701LLU;

	t86 = (((x385^x386)+x387)&x388);

	if (t86 != 9223372036854776190LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = INT64_MIN;
	int32_t x390 = INT32_MIN;
	static int64_t t87 = 2627LL;

	t87 = (((x389^x390)+x391)&x392);

	if (t87 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x393 = 1105U;
	int64_t x394 = 36446LL;
	static int64_t x395 = INT64_MIN;
	volatile int64_t t88 = -742302072227691LL;

	t88 = (((x393^x394)+x395)&x396);

	if (t88 != 6LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = -1;
	volatile int16_t x398 = -764;
	uint32_t x399 = 667643U;

	t89 = (((x397^x398)+x399)&x400);

	if (t89 != 2U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x401 = 4479016U;
	uint16_t x402 = 24U;
	int16_t x403 = 5;
	volatile uint32_t x404 = 24U;
	uint32_t t90 = 561046082U;

	t90 = (((x401^x402)+x403)&x404);

	if (t90 != 16U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x406 = 25;
	uint8_t x407 = 0U;

	t91 = (((x405^x406)+x407)&x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x409 = 4540LLU;
	static int32_t x410 = INT32_MIN;
	int8_t x412 = INT8_MIN;
	static volatile uint64_t t92 = 2810844328LLU;

	t92 = (((x409^x410)+x411)&x412);

	if (t92 != 18446744071562072448LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x413 = 12LL;
	uint64_t x414 = 943960815965270LLU;
	int16_t x415 = -1;

	t93 = (((x413^x414)+x415)&x416);

	if (t93 != 4161LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x417 = INT16_MAX;
	static uint8_t x418 = UINT8_MAX;
	static volatile int16_t x419 = 26;
	static int16_t x420 = INT16_MIN;
	int32_t t94 = 1103797;

	t94 = (((x417^x418)+x419)&x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x421 = INT64_MIN;
	int32_t x422 = INT32_MAX;
	uint8_t x423 = 77U;
	uint64_t x424 = 4837LLU;
	volatile uint64_t t95 = 1931298270102LLU;

	t95 = (((x421^x422)+x423)&x424);

	if (t95 != 68LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x425 = UINT64_MAX;
	int8_t x426 = -2;
	int32_t x427 = INT32_MAX;
	static volatile uint64_t t96 = 3410822833337104LLU;

	t96 = (((x425^x426)+x427)&x428);

	if (t96 != 2147483648LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x429 = 596356626LL;
	int32_t x430 = INT32_MIN;
	static int8_t x432 = 1;
	volatile int64_t t97 = -5445845220LL;

	t97 = (((x429^x430)+x431)&x432);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x433 = 10902;
	uint32_t x434 = UINT32_MAX;
	static volatile uint16_t x436 = UINT16_MAX;
	static volatile uint32_t t98 = 21774930U;

	t98 = (((x433^x434)+x435)&x436);

	if (t98 != 54638U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x448 = 8087617LL;
	volatile uint64_t t99 = 114847306979238370LLU;

	t99 = (((x445^x446)+x447)&x448);

	if (t99 != 2048LLU) { NG(); } else { ; }
	
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

