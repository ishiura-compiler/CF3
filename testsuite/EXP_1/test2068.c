#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = 1;
uint64_t x7 = 32310712589836LLU;
int8_t x9 = -1;
volatile uint32_t t2 = 88608U;
volatile int64_t t3 = -11036297080126504LL;
static int16_t x18 = INT16_MIN;
int64_t x24 = INT64_MIN;
uint64_t x26 = 24LLU;
static uint32_t x28 = 214105581U;
uint8_t x35 = UINT8_MAX;
int32_t t8 = -111692596;
static int16_t x40 = INT16_MAX;
int64_t x43 = INT64_MAX;
uint16_t x44 = UINT16_MAX;
uint32_t x46 = UINT32_MAX;
int64_t x47 = INT64_MAX;
static int32_t x49 = INT32_MIN;
int16_t x58 = -1;
uint32_t x63 = 901016200U;
int8_t x66 = INT8_MAX;
int32_t x67 = -3;
int32_t x70 = INT32_MIN;
int32_t x77 = INT32_MIN;
uint8_t x78 = 49U;
static volatile uint16_t x79 = 1U;
uint64_t x89 = 334463522411902LLU;
volatile uint64_t t22 = 422028643016092208LLU;
static int32_t x101 = -1;
uint64_t x103 = UINT64_MAX;
volatile int64_t x105 = INT64_MIN;
int64_t x107 = INT64_MIN;
static int8_t x115 = INT8_MIN;
uint16_t x120 = UINT16_MAX;
int16_t x124 = INT16_MIN;
static int16_t x125 = INT16_MAX;
volatile uint64_t t31 = 174829LLU;
int8_t x129 = INT8_MAX;
static int8_t x138 = INT8_MIN;
volatile int16_t x140 = INT16_MIN;
int32_t x144 = INT32_MIN;
volatile uint32_t t35 = 40818443U;
int64_t x146 = 5LL;
int32_t x147 = INT32_MIN;
uint64_t x156 = 201513870LLU;
int32_t x157 = -1;
static uint64_t x158 = UINT64_MAX;
static uint8_t x160 = 0U;
int64_t x167 = INT64_MAX;
int8_t x169 = 1;
static int16_t x170 = 4250;
static volatile int32_t x175 = -43;
int64_t t42 = 871288599504LL;
static int8_t x178 = -7;
volatile int64_t x179 = INT64_MIN;
volatile uint8_t x184 = 3U;
volatile uint8_t x186 = 8U;
static uint64_t x187 = 222473LLU;
int32_t x192 = 8105;
int64_t x196 = -94LL;
int64_t x197 = INT64_MAX;
int64_t x199 = INT64_MIN;
volatile int64_t t48 = 82716480LL;
volatile uint64_t t50 = 164708LLU;
uint32_t x213 = 440307U;
uint8_t x233 = UINT8_MAX;
volatile int64_t t57 = -3761841LL;
int16_t x243 = INT16_MIN;
uint64_t t60 = 755359451750565545LLU;
uint32_t x262 = 119515275U;
int16_t x270 = INT16_MIN;
volatile uint32_t x273 = 0U;
int64_t x276 = INT64_MIN;
static int64_t x278 = -94642478387LL;
uint8_t x285 = UINT8_MAX;
int16_t x286 = INT16_MAX;
int16_t x287 = -2413;
int32_t x289 = INT32_MIN;
static int64_t x298 = -1LL;
int8_t x301 = 1;
int64_t t74 = INT64_MAX;
volatile uint32_t t75 = UINT32_MAX;
uint8_t x310 = UINT8_MAX;
int8_t x312 = 0;
volatile int8_t x313 = 11;
uint32_t x314 = 8115U;
volatile int64_t x315 = INT64_MAX;
uint64_t x332 = 7701451LLU;
static uint32_t x333 = UINT32_MAX;
uint64_t t82 = 219LLU;
int64_t x345 = 184695LL;
int8_t x346 = -1;
int16_t x349 = -1016;
uint8_t x355 = UINT8_MAX;
volatile int64_t t86 = 12894568337LL;
static int32_t t87 = -89017153;
volatile int8_t x369 = INT8_MAX;
int8_t x377 = -1;
uint16_t x384 = 1U;
int8_t x386 = INT8_MIN;
volatile int64_t x387 = -85LL;
int64_t t92 = 325751323LL;
int32_t x390 = 0;
volatile uint64_t t93 = 520979502058883847LLU;
uint16_t x399 = 397U;
uint8_t x409 = 8U;
uint32_t x417 = 818U;
int32_t x418 = 4;
uint32_t x423 = 1283907U;
uint64_t x427 = UINT64_MAX;


void f0(void) {
	int16_t x1 = -1;
	static uint32_t x3 = 1081523U;
	static int8_t x4 = -1;
	uint32_t t0 = 16337U;

	t0 = (((x1^x2)/x3)+x4);

	if (t0 != 3970U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -11464535908072LL;
	int8_t x6 = -1;
	volatile uint64_t x8 = UINT64_MAX;
	uint64_t t1 = UINT64_MAX;

	t1 = (((x5^x6)/x7)+x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x10 = UINT32_MAX;
	int16_t x11 = -1;
	uint16_t x12 = UINT16_MAX;

	t2 = (((x9^x10)/x11)+x12);

	if (t2 != 65535U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile int32_t x14 = -87995;
	uint32_t x15 = UINT32_MAX;
	volatile int16_t x16 = -1;

	t3 = (((x13^x14)/x15)+x16);

	if (t3 != 2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 0;
	int16_t x19 = -4;
	uint8_t x20 = 41U;
	int32_t t4 = -1;

	t4 = (((x17^x18)/x19)+x20);

	if (t4 != 8233) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -6691;
	int32_t x22 = INT32_MAX;
	int64_t x23 = INT64_MIN;
	int64_t t5 = INT64_MIN;

	t5 = (((x21^x22)/x23)+x24);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	volatile uint64_t x27 = 234639460443439LLU;
	uint64_t t6 = 191839912211LLU;

	t6 = (((x25^x26)/x27)+x28);

	if (t6 != 214105581LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint64_t x30 = 201659994248LLU;
	uint32_t x31 = 9U;
	uint8_t x32 = 54U;
	static uint64_t t7 = 94833376808153309LLU;

	t7 = (((x29^x30)/x31)+x32);

	if (t7 != 1024819137612752282LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 7;
	int16_t x34 = INT16_MIN;
	int16_t x36 = INT16_MAX;

	t8 = (((x33^x34)/x35)+x36);

	if (t8 != 32639) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -20;
	uint16_t x38 = 0U;
	int64_t x39 = INT64_MIN;
	int64_t t9 = 22019LL;

	t9 = (((x37^x38)/x39)+x40);

	if (t9 != 32767LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 3U;
	int16_t x42 = INT16_MAX;
	int64_t t10 = 2313LL;

	t10 = (((x41^x42)/x43)+x44);

	if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = 3402482;
	uint32_t x48 = UINT32_MAX;
	volatile int64_t t11 = -1614574313047030005LL;

	t11 = (((x45^x46)/x47)+x48);

	if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = 0;
	static int32_t x51 = -30;
	static uint64_t x52 = 0LLU;
	volatile uint64_t t12 = 369141572997231876LLU;

	t12 = (((x49^x50)/x51)+x52);

	if (t12 != 71582788LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = -1;
	uint64_t x55 = 106386LLU;
	static int32_t x56 = INT32_MAX;
	uint64_t t13 = 958663961LLU;

	t13 = (((x53^x54)/x55)+x56);

	if (t13 != 173396617373571LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 431LLU;
	static volatile int16_t x59 = -1;
	int32_t x60 = 304366;
	volatile uint64_t t14 = 313LLU;

	t14 = (((x57^x58)/x59)+x60);

	if (t14 != 304366LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	volatile int64_t x62 = INT64_MAX;
	int8_t x64 = 19;
	volatile int64_t t15 = 21702383569533LL;

	t15 = (((x61^x62)/x63)+x64);

	if (t15 != 10236632875LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint16_t x68 = 22U;
	static volatile int32_t t16 = -446832417;

	t16 = (((x65^x66)/x67)+x68);

	if (t16 != -20) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	static uint8_t x71 = 2U;
	uint32_t x72 = 45563U;
	int64_t t17 = -59416768LL;

	t17 = (((x69^x70)/x71)+x72);

	if (t17 != 1073787386LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	static int8_t x74 = 1;
	int8_t x75 = INT8_MAX;
	uint64_t x76 = 750610097068815484LLU;
	static volatile uint64_t t18 = 95569729556LLU;

	t18 = (((x73^x74)/x75)+x76);

	if (t18 != 750610097068816000LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x80 = 253967LL;
	int64_t t19 = -4834505431LL;

	t19 = (((x77^x78)/x79)+x80);

	if (t19 != -2147229632LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 5U;
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = -1LL;
	uint16_t x84 = 9985U;
	int64_t t20 = -591471LL;

	t20 = (((x81^x82)/x83)+x84);

	if (t20 != -4294957305LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	volatile uint64_t x86 = UINT64_MAX;
	int32_t x87 = INT32_MIN;
	int32_t x88 = -4;
	uint64_t t21 = 465LLU;

	t21 = (((x85^x86)/x87)+x88);

	if (t21 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x90 = INT32_MAX;
	static int32_t x91 = INT32_MAX;
	int16_t x92 = -114;

	t22 = (((x89^x90)/x91)+x92);

	if (t22 != 155632LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = UINT16_MAX;
	int64_t x94 = 2145726101279LL;
	int8_t x95 = INT8_MAX;
	volatile int32_t x96 = -2225098;
	volatile int64_t t23 = 99LL;

	t23 = (((x93^x94)/x95)+x96);

	if (t23 != 16893255534LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int8_t x98 = INT8_MIN;
	volatile uint32_t x99 = 5536U;
	static int64_t x100 = -1LL;
	static volatile int64_t t24 = 172579LL;

	t24 = (((x97^x98)/x99)+x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x102 = 119008515U;
	volatile int32_t x104 = INT32_MIN;
	uint64_t t25 = 604329976540329LLU;

	t25 = (((x101^x102)/x103)+x104);

	if (t25 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = 3463873;
	int64_t x108 = INT64_MAX;
	static int64_t t26 = INT64_MAX;

	t26 = (((x105^x106)/x107)+x108);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	uint8_t x110 = UINT8_MAX;
	int64_t x111 = -1LL;
	int32_t x112 = 207786447;
	volatile int64_t t27 = 29929739130LL;

	t27 = (((x109^x110)/x111)+x112);

	if (t27 != 207786703LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 240;
	static int8_t x114 = INT8_MIN;
	int16_t x116 = 242;
	static volatile int32_t t28 = 196;

	t28 = (((x113^x114)/x115)+x116);

	if (t28 != 243) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -14;
	uint64_t x118 = 84619430865996LLU;
	volatile int8_t x119 = 1;
	volatile uint64_t t29 = 71165687276696LLU;

	t29 = (((x117^x118)/x119)+x120);

	if (t29 != 18446659454278751165LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	uint32_t x122 = UINT32_MAX;
	uint32_t x123 = 17285U;
	volatile uint32_t t30 = 762259360U;

	t30 = (((x121^x122)/x123)+x124);

	if (t30 != 4294934529U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x126 = INT64_MAX;
	uint64_t x127 = UINT64_MAX;
	uint32_t x128 = UINT32_MAX;

	t31 = (((x125^x126)/x127)+x128);

	if (t31 != 4294967295LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = -1;
	int32_t x131 = -415804417;
	volatile uint64_t x132 = 28532727555LLU;
	static uint64_t t32 = 503038LLU;

	t32 = (((x129^x130)/x131)+x132);

	if (t32 != 28532727555LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MAX;
	int16_t x134 = 183;
	int64_t x135 = INT64_MAX;
	int64_t x136 = INT64_MIN;
	volatile int64_t t33 = INT64_MIN;

	t33 = (((x133^x134)/x135)+x136);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = UINT8_MAX;
	uint16_t x139 = UINT16_MAX;
	int32_t t34 = 205238;

	t34 = (((x137^x138)/x139)+x140);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 147794637U;
	int32_t x142 = INT32_MIN;
	static volatile int16_t x143 = INT16_MIN;

	t35 = (((x141^x142)/x143)+x144);

	if (t35 != 2147483648U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 16338374LLU;
	static int32_t x148 = -95;
	uint64_t t36 = 11420268206LLU;

	t36 = (((x145^x146)/x147)+x148);

	if (t36 != 18446744073709551521LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MAX;
	int64_t x154 = INT64_MAX;
	uint8_t x155 = 113U;
	static volatile uint64_t t37 = 1677375358639934LLU;

	t37 = (((x153^x154)/x155)+x156);

	if (t37 != 81622761589608941LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x159 = INT64_MIN;
	volatile uint64_t t38 = 2834369593LLU;

	t38 = (((x157^x158)/x159)+x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x161 = UINT8_MAX;
	static int8_t x162 = INT8_MIN;
	uint8_t x163 = UINT8_MAX;
	int64_t x164 = INT64_MIN;
	volatile int64_t t39 = INT64_MIN;

	t39 = (((x161^x162)/x163)+x164);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x165 = 8811495319945534723LLU;
	static uint64_t x166 = 115252LLU;
	uint16_t x168 = 0U;
	uint64_t t40 = 161LLU;

	t40 = (((x165^x166)/x167)+x168);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x171 = INT16_MIN;
	int32_t x172 = -1500;
	volatile int32_t t41 = -829;

	t41 = (((x169^x170)/x171)+x172);

	if (t41 != -1500) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x173 = 1070U;
	int64_t x174 = -1175903LL;
	int16_t x176 = INT16_MIN;

	t42 = (((x173^x174)/x175)+x176);

	if (t42 != -5398LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MAX;
	int8_t x180 = INT8_MAX;
	static volatile int64_t t43 = -1852929241885LL;

	t43 = (((x177^x178)/x179)+x180);

	if (t43 != 127LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -1;
	int16_t x182 = INT16_MAX;
	volatile int16_t x183 = INT16_MIN;
	int32_t t44 = -43647783;

	t44 = (((x181^x182)/x183)+x184);

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = 6139712U;
	int64_t x188 = -1LL;
	volatile uint64_t t45 = 4052551427LLU;

	t45 = (((x185^x186)/x187)+x188);

	if (t45 != 26LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 3886U;
	int8_t x190 = -54;
	int16_t x191 = -1;
	int32_t t46 = 89272457;

	t46 = (((x189^x190)/x191)+x192);

	if (t46 != 11973) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = -1LL;
	int8_t x194 = INT8_MIN;
	static int64_t x195 = 3819LL;
	volatile int64_t t47 = 2008LL;

	t47 = (((x193^x194)/x195)+x196);

	if (t47 != -94LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x198 = -1;
	int64_t x200 = -1LL;

	t48 = (((x197^x198)/x199)+x200);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x201 = 3817U;
	uint16_t x202 = 5U;
	static volatile int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MIN;
	volatile int64_t t49 = INT64_MIN;

	t49 = (((x201^x202)/x203)+x204);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = 2LL;
	uint64_t x206 = 15544827447193LLU;
	int16_t x207 = 689;
	int16_t x208 = INT16_MIN;

	t50 = (((x205^x206)/x207)+x208);

	if (t50 != 22561400391LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MIN;
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = 1;
	int64_t x212 = INT64_MAX;
	uint64_t t51 = 1931174099603LLU;

	t51 = (((x209^x210)/x211)+x212);

	if (t51 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x214 = UINT16_MAX;
	static int64_t x215 = INT64_MIN;
	volatile int8_t x216 = INT8_MIN;
	int64_t t52 = -382423332LL;

	t52 = (((x213^x214)/x215)+x216);

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MAX;
	int16_t x218 = -6;
	int8_t x219 = 19;
	static int32_t x220 = -457281615;
	int64_t t53 = 5766729540LL;

	t53 = (((x217^x218)/x219)+x220);

	if (t53 != -485440633975954025LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MAX;
	volatile int32_t x222 = INT32_MIN;
	uint16_t x223 = 62U;
	static uint32_t x224 = UINT32_MAX;
	int64_t t54 = -3342565135349LL;

	t54 = (((x221^x222)/x223)+x224);

	if (t54 != -148764060780956772LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	static volatile int16_t x226 = -1;
	uint8_t x227 = 25U;
	int64_t x228 = INT64_MIN;
	int64_t t55 = -699883908460245LL;

	t55 = (((x225^x226)/x227)+x228);

	if (t55 != -9223372036768876463LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x229 = INT64_MAX;
	int32_t x230 = INT32_MIN;
	int32_t x231 = -13;
	int8_t x232 = INT8_MAX;
	int64_t t56 = 728981LL;

	t56 = (((x229^x230)/x231)+x232);

	if (t56 != 709490156515945677LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x234 = -1LL;
	int16_t x235 = 3;
	volatile uint32_t x236 = 3235637U;

	t57 = (((x233^x234)/x235)+x236);

	if (t57 != 3235552LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MAX;
	int64_t x240 = INT64_MIN;
	volatile int64_t t58 = -3LL;

	t58 = (((x237^x238)/x239)+x240);

	if (t58 != -9150747060186628226LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MAX;
	volatile int64_t x242 = INT64_MIN;
	uint32_t x244 = UINT32_MAX;
	int64_t t59 = -1090LL;

	t59 = (((x241^x242)/x243)+x244);

	if (t59 != 281479271677950LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x245 = 0U;
	int64_t x246 = -514796016540LL;
	uint16_t x247 = UINT16_MAX;
	uint64_t x248 = 9073111958331LLU;

	t60 = (((x245^x246)/x247)+x248);

	if (t60 != 9073104103048LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = -180;
	uint16_t x250 = UINT16_MAX;
	volatile uint32_t x251 = 14286U;
	volatile uint8_t x252 = 0U;
	uint32_t t61 = 120847U;

	t61 = (((x249^x250)/x251)+x252);

	if (t61 != 300637U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = 498U;
	uint64_t x254 = 70316LLU;
	int64_t x255 = INT64_MIN;
	int32_t x256 = 123300;
	static uint64_t t62 = 6LLU;

	t62 = (((x253^x254)/x255)+x256);

	if (t62 != 123300LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -1;
	int32_t x258 = -52134;
	uint8_t x259 = 44U;
	static int64_t x260 = -1LL;
	int64_t t63 = -51877LL;

	t63 = (((x257^x258)/x259)+x260);

	if (t63 != 1183LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x261 = INT32_MIN;
	volatile uint64_t x263 = UINT64_MAX;
	int32_t x264 = INT32_MIN;
	volatile uint64_t t64 = 15737715518964LLU;

	t64 = (((x261^x262)/x263)+x264);

	if (t64 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 1U;
	int8_t x266 = -4;
	int8_t x267 = INT8_MAX;
	static uint16_t x268 = 32U;
	int32_t t65 = -48;

	t65 = (((x265^x266)/x267)+x268);

	if (t65 != 32) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = 91LL;
	volatile int32_t x271 = -401484;
	int8_t x272 = INT8_MIN;
	int64_t t66 = -143864780295388LL;

	t66 = (((x269^x270)/x271)+x272);

	if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x274 = UINT32_MAX;
	static uint32_t x275 = UINT32_MAX;
	int64_t t67 = 0LL;

	t67 = (((x273^x274)/x275)+x276);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x277 = UINT64_MAX;
	int32_t x279 = INT32_MIN;
	int8_t x280 = 1;
	uint64_t t68 = 509161LLU;

	t68 = (((x277^x278)/x279)+x280);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x281 = -12;
	int16_t x282 = -1;
	volatile uint32_t x283 = 2429696U;
	int16_t x284 = INT16_MAX;
	volatile uint32_t t69 = 1091U;

	t69 = (((x281^x282)/x283)+x284);

	if (t69 != 32767U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x288 = INT8_MAX;
	static int32_t t70 = -13948016;

	t70 = (((x285^x286)/x287)+x288);

	if (t70 != 114) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x290 = INT32_MAX;
	static int16_t x291 = 1;
	int16_t x292 = INT16_MAX;
	static int32_t t71 = 1614;

	t71 = (((x289^x290)/x291)+x292);

	if (t71 != 32766) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MIN;
	uint32_t x294 = 57575U;
	uint64_t x295 = 14452326LLU;
	uint64_t x296 = 67225474459LLU;
	uint64_t t72 = 32755630LLU;

	t72 = (((x293^x294)/x295)+x296);

	if (t72 != 67225474756LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x297 = 938753755854050LLU;
	int8_t x299 = -55;
	int16_t x300 = INT16_MAX;
	volatile uint64_t t73 = 2661918140846LLU;

	t73 = (((x297^x298)/x299)+x300);

	if (t73 != 32767LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MAX;

	t74 = (((x301^x302)/x303)+x304);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MAX;
	int8_t x306 = -24;
	int32_t x307 = INT32_MIN;
	uint32_t x308 = UINT32_MAX;

	t75 = (((x305^x306)/x307)+x308);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x309 = 2U;
	uint32_t x311 = 13446550U;
	volatile uint32_t t76 = 9108U;

	t76 = (((x309^x310)/x311)+x312);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x316 = 4U;
	volatile int64_t t77 = -6284282871969013LL;

	t77 = (((x313^x314)/x315)+x316);

	if (t77 != 4LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = UINT64_MAX;
	static int64_t x326 = -1LL;
	static int16_t x327 = -1;
	uint64_t x328 = UINT64_MAX;
	static uint64_t t78 = UINT64_MAX;

	t78 = (((x325^x326)/x327)+x328);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = INT32_MAX;
	uint64_t x331 = UINT64_MAX;
	static volatile uint64_t t79 = 672123673143LLU;

	t79 = (((x329^x330)/x331)+x332);

	if (t79 != 7701451LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x334 = INT16_MAX;
	int32_t x335 = 64;
	static int32_t x336 = -1;
	uint32_t t80 = 3178U;

	t80 = (((x333^x334)/x335)+x336);

	if (t80 != 67108351U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x337 = 24593U;
	int64_t x338 = INT64_MIN;
	static int32_t x339 = -1258904;
	volatile int32_t x340 = -316;
	int64_t t81 = -250847425LL;

	t81 = (((x337^x338)/x339)+x340);

	if (t81 != 7326509437142LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x341 = 2U;
	uint64_t x342 = 721485LLU;
	volatile uint8_t x343 = 2U;
	static int16_t x344 = -409;

	t82 = (((x341^x342)/x343)+x344);

	if (t82 != 360334LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x347 = UINT32_MAX;
	static int8_t x348 = 29;
	int64_t t83 = -23794281310821LL;

	t83 = (((x345^x346)/x347)+x348);

	if (t83 != 29LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x350 = -1;
	uint16_t x351 = UINT16_MAX;
	volatile int32_t x352 = INT32_MAX;
	volatile int32_t t84 = INT32_MAX;

	t84 = (((x349^x350)/x351)+x352);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MAX;
	uint64_t x354 = UINT64_MAX;
	uint8_t x356 = 1U;
	volatile uint64_t t85 = 403392051LLU;

	t85 = (((x353^x354)/x355)+x356);

	if (t85 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = 1;
	int8_t x362 = 31;
	int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MAX;

	t86 = (((x361^x362)/x363)+x364);

	if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = -1;
	int16_t x367 = INT16_MAX;
	int8_t x368 = INT8_MIN;

	t87 = (((x365^x366)/x367)+x368);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x370 = 9U;
	static int8_t x371 = INT8_MIN;
	uint32_t x372 = UINT32_MAX;
	static uint32_t t88 = UINT32_MAX;

	t88 = (((x369^x370)/x371)+x372);

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x373 = 1319LLU;
	int32_t x374 = INT32_MIN;
	volatile int32_t x375 = -1;
	static int32_t x376 = -1;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (((x373^x374)/x375)+x376);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x378 = 0;
	int32_t x379 = -1;
	int16_t x380 = INT16_MIN;
	int32_t t90 = 9261;

	t90 = (((x377^x378)/x379)+x380);

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = 879373069581914LL;
	static int32_t x382 = INT32_MIN;
	int8_t x383 = -2;
	volatile int64_t t91 = 132899572121579LL;

	t91 = (((x381^x382)/x383)+x384);

	if (t91 != 439685470486740LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = -19;
	uint16_t x388 = 8044U;

	t92 = (((x385^x386)/x387)+x388);

	if (t92 != 8043LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x389 = UINT32_MAX;
	static uint64_t x391 = UINT64_MAX;
	int64_t x392 = INT64_MIN;

	t93 = (((x389^x390)/x391)+x392);

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x397 = INT16_MIN;
	static uint8_t x398 = 2U;
	int32_t x400 = INT32_MAX;
	int32_t t94 = 599;

	t94 = (((x397^x398)/x399)+x400);

	if (t94 != 2147483565) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x410 = INT16_MIN;
	static volatile int8_t x411 = INT8_MAX;
	uint8_t x412 = 76U;
	volatile int32_t t95 = -1970762;

	t95 = (((x409^x410)/x411)+x412);

	if (t95 != -181) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x413 = -64354;
	uint32_t x414 = UINT32_MAX;
	int8_t x415 = INT8_MIN;
	int16_t x416 = 1796;
	volatile uint32_t t96 = 1455751U;

	t96 = (((x413^x414)/x415)+x416);

	if (t96 != 1796U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x419 = INT16_MIN;
	static uint8_t x420 = UINT8_MAX;
	uint32_t t97 = 2U;

	t97 = (((x417^x418)/x419)+x420);

	if (t97 != 255U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x421 = 233;
	uint8_t x422 = 20U;
	uint64_t x424 = 34261LLU;
	static volatile uint64_t t98 = 172122276104LLU;

	t98 = (((x421^x422)/x423)+x424);

	if (t98 != 34261LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x425 = UINT32_MAX;
	static int8_t x426 = INT8_MIN;
	int32_t x428 = INT32_MIN;
	volatile uint64_t t99 = 33801343221365LLU;

	t99 = (((x425^x426)/x427)+x428);

	if (t99 != 18446744071562067968LLU) { NG(); } else { ; }
	
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

