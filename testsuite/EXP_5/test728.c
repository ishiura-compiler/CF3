#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
int32_t t0 = 9927;
uint8_t x13 = 2U;
int32_t x14 = 3358;
int8_t x20 = INT8_MIN;
uint16_t x22 = 119U;
static uint16_t x34 = UINT16_MAX;
int32_t x38 = -1;
static volatile uint32_t t9 = 24318U;
static volatile uint16_t x41 = UINT16_MAX;
int64_t x44 = INT64_MIN;
static int64_t t10 = 1LL;
static int8_t x45 = INT8_MAX;
int8_t x46 = -1;
static volatile int64_t t12 = -382768447LL;
static int32_t x59 = -252316010;
int64_t x65 = -1LL;
int64_t x66 = -20802LL;
static int16_t x70 = 8792;
int32_t x71 = INT32_MIN;
static uint16_t x78 = UINT16_MAX;
int32_t x79 = -20;
int32_t t19 = 3613;
uint32_t x82 = UINT32_MAX;
uint8_t x88 = UINT8_MAX;
volatile int64_t x92 = INT64_MIN;
int8_t x93 = INT8_MIN;
static volatile uint32_t t23 = 12277003U;
int32_t x98 = INT32_MIN;
volatile uint64_t t24 = 217764065570LLU;
volatile uint32_t t26 = 133512889U;
int16_t x109 = INT16_MAX;
uint32_t x116 = 27307757U;
uint32_t x119 = 2U;
static int8_t x120 = -39;
volatile int16_t x122 = 1502;
uint64_t x124 = 3169947857LLU;
volatile int64_t x140 = INT64_MIN;
int8_t x142 = 18;
int8_t x145 = INT8_MAX;
static int32_t x149 = -116510;
uint16_t x150 = UINT16_MAX;
volatile int32_t t37 = 127937;
int32_t x154 = 15252;
int8_t x156 = INT8_MIN;
volatile int16_t x160 = INT16_MAX;
uint64_t x163 = 225327LLU;
uint32_t x168 = 437276U;
volatile int64_t t41 = -1571995109071918689LL;
static int32_t x173 = -1;
int32_t t43 = -240680477;
int16_t x181 = -17;
int16_t x184 = 2;
int32_t x188 = -1;
uint16_t x191 = UINT16_MAX;
int64_t t47 = -2014LL;
static int8_t x193 = 60;
volatile int32_t x201 = -5535920;
static volatile int16_t x205 = INT16_MIN;
static int32_t x213 = -1;
int16_t x214 = INT16_MIN;
int8_t x216 = 1;
int64_t x217 = -181927019592274738LL;
int64_t x219 = -629505228171668992LL;
uint64_t t54 = 171LLU;
uint8_t x227 = 5U;
int64_t x230 = -413333409032799LL;
volatile int32_t x235 = -15;
int32_t t57 = INT32_MIN;
int64_t x238 = 3LL;
volatile int32_t x239 = 427;
int64_t t59 = -1243354670796LL;
uint8_t x247 = 104U;
static int32_t x252 = -1;
uint16_t x253 = 125U;
int8_t x254 = INT8_MIN;
volatile int16_t x260 = -4;
uint8_t x268 = 125U;
int64_t x272 = INT64_MAX;
uint32_t x273 = 480512675U;
volatile int8_t x279 = -48;
int32_t x283 = INT32_MAX;
int64_t x287 = INT64_MIN;
static uint64_t x293 = 0LLU;
uint32_t x297 = UINT32_MAX;
int64_t t74 = 26LL;
int16_t x307 = -1;
volatile int16_t x313 = INT16_MAX;
volatile int32_t x316 = 863129445;
volatile uint8_t x322 = 5U;
int32_t x324 = 53584005;
volatile int8_t x349 = -1;
int16_t x354 = -1;
int8_t x357 = INT8_MIN;
uint8_t x359 = 30U;
int64_t x362 = INT64_MIN;
static int64_t x371 = 9LL;
static int8_t x382 = INT8_MIN;
int64_t x386 = INT64_MIN;
volatile int16_t x391 = -193;
uint8_t x392 = 13U;
int8_t x394 = -12;
static volatile int64_t t98 = -722053LL;
uint16_t x407 = 136U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int32_t x2 = -1;
	int8_t x4 = -1;

	t0 = (x1^((x2%x3)/x4));

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 1081U;
	static int64_t x6 = INT64_MAX;
	uint64_t x7 = 7915103220973LLU;
	uint32_t x8 = 6861U;
	uint64_t t1 = 411044045879LLU;

	t1 = (x5^((x6%x7)/x8));

	if (t1 != 750588861LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -5462317LL;
	int64_t x10 = -1LL;
	int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MAX;
	int64_t t2 = 51660LL;

	t2 = (x9^((x10%x11)/x12));

	if (t2 != -5462317LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x15 = UINT64_MAX;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 238581304882419091LLU;

	t3 = (x13^((x14%x15)/x16));

	if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 15;
	volatile uint64_t x18 = UINT64_MAX;
	uint8_t x19 = UINT8_MAX;
	volatile uint64_t t4 = 292730521LLU;

	t4 = (x17^((x18%x19)/x20));

	if (t4 != 15LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	uint8_t x23 = UINT8_MAX;
	uint32_t x24 = 898U;
	volatile int64_t t5 = INT64_MAX;

	t5 = (x21^((x22%x23)/x24));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 582256152U;
	int64_t x26 = INT64_MAX;
	uint16_t x27 = 4640U;
	int64_t x28 = -473415LL;
	int64_t t6 = -748666142487LL;

	t6 = (x25^((x26%x27)/x28));

	if (t6 != 582256152LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MAX;
	int8_t x31 = -1;
	int32_t x32 = INT32_MIN;
	int64_t t7 = 99309477660064023LL;

	t7 = (x29^((x30%x31)/x32));

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = -9;
	int32_t x35 = INT32_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -475560;

	t8 = (x33^((x34%x35)/x36));

	if (t8 != 502) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int32_t x39 = -1;
	uint32_t x40 = 537011U;

	t9 = (x37^((x38%x39)/x40));

	if (t9 != 4294967168U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x42 = -1;
	int16_t x43 = -15991;

	t10 = (x41^((x42%x43)/x44));

	if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = INT32_MAX;
	static volatile int8_t x48 = INT8_MIN;
	static volatile int32_t t11 = -39449;

	t11 = (x45^((x46%x47)/x48));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint32_t x50 = 2089948U;
	volatile int64_t x51 = INT64_MAX;
	int16_t x52 = INT16_MIN;

	t12 = (x49^((x50%x51)/x52));

	if (t12 != 2147483585LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -418;
	volatile uint16_t x54 = UINT16_MAX;
	static int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -231;

	t13 = (x53^((x54%x55)/x56));

	if (t13 != -418) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x57 = UINT64_MAX;
	int32_t x58 = INT32_MIN;
	int32_t x60 = INT32_MIN;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x57^((x58%x59)/x60));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = -1LL;
	int8_t x62 = 16;
	int32_t x63 = INT32_MIN;
	volatile int8_t x64 = INT8_MIN;
	volatile int64_t t15 = 18791863579981955LL;

	t15 = (x61^((x62%x63)/x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x67 = 75U;
	int32_t x68 = INT32_MAX;
	volatile int64_t t16 = 0LL;

	t16 = (x65^((x66%x67)/x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -4;
	int64_t x72 = 108LL;
	static volatile int64_t t17 = -6179831227856LL;

	t17 = (x69^((x70%x71)/x72));

	if (t17 != -83LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 53U;
	static uint8_t x74 = 17U;
	int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	int32_t t18 = 1856;

	t18 = (x73^((x74%x75)/x76));

	if (t18 != 53) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	volatile int32_t x80 = -1;

	t19 = (x77^((x78%x79)/x80));

	if (t19 != 2147483633) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 742;
	volatile int8_t x83 = -50;
	int32_t x84 = -15382683;
	uint32_t t20 = 1U;

	t20 = (x81^((x82%x83)/x84));

	if (t20 != 742U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	uint32_t x86 = UINT32_MAX;
	uint8_t x87 = 2U;
	static int64_t t21 = INT64_MIN;

	t21 = (x85^((x86%x87)/x88));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int16_t x90 = 855;
	uint8_t x91 = UINT8_MAX;
	volatile int64_t t22 = 468LL;

	t22 = (x89^((x90%x91)/x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x94 = -1;
	uint32_t x95 = 9579834U;
	uint32_t x96 = 44131654U;

	t23 = (x93^((x94%x95)/x96));

	if (t23 != 4294967168U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = 421973387062LLU;
	uint32_t x99 = 5661307U;
	uint16_t x100 = UINT16_MAX;

	t24 = (x97^((x98%x99)/x100));

	if (t24 != 421973387050LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int8_t x102 = -3;
	static uint32_t x103 = 1491052779U;
	uint8_t x104 = 6U;
	uint32_t t25 = 233562U;

	t25 = (x101^((x102%x103)/x104));

	if (t25 != 4076157006U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	uint32_t x106 = UINT32_MAX;
	volatile int16_t x107 = -1;
	int8_t x108 = INT8_MIN;

	t26 = (x105^((x106%x107)/x108));

	if (t26 != 32767U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = UINT64_MAX;
	volatile int32_t x111 = -1;
	int8_t x112 = INT8_MIN;
	static volatile uint64_t t27 = 12332250568308LLU;

	t27 = (x109^((x110%x111)/x112));

	if (t27 != 32767LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 42181U;
	volatile uint32_t x114 = UINT32_MAX;
	int8_t x115 = INT8_MIN;
	volatile uint32_t t28 = 1862476U;

	t28 = (x113^((x114%x115)/x116));

	if (t28 != 42181U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MAX;
	static int64_t x118 = INT64_MAX;
	int64_t t29 = -116738502LL;

	t29 = (x117^((x118%x119)/x120));

	if (t29 != 127LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	static int16_t x123 = INT16_MAX;
	uint64_t t30 = 15361LLU;

	t30 = (x121^((x122%x123)/x124));

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = -1409343LL;
	uint8_t x127 = UINT8_MAX;
	static uint64_t x128 = 141845960428309LLU;
	volatile uint64_t t31 = 12043093883531LLU;

	t31 = (x125^((x126%x127)/x128));

	if (t31 != 9223372036854905855LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	uint16_t x130 = UINT16_MAX;
	int64_t x131 = INT64_MAX;
	uint32_t x132 = 2563007U;
	int64_t t32 = -491341655170034278LL;

	t32 = (x129^((x130%x131)/x132));

	if (t32 != 65535LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	volatile int16_t x134 = INT16_MIN;
	static int16_t x135 = INT16_MAX;
	static uint8_t x136 = 23U;
	static volatile int32_t t33 = 14690;

	t33 = (x133^((x134%x135)/x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	uint8_t x138 = 54U;
	static volatile int32_t x139 = -1;
	volatile int64_t t34 = 183LL;

	t34 = (x137^((x138%x139)/x140));

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -5;
	int32_t x143 = INT32_MIN;
	static int16_t x144 = INT16_MIN;
	int32_t t35 = -52791;

	t35 = (x141^((x142%x143)/x144));

	if (t35 != -5) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = -1;
	static uint16_t x147 = UINT16_MAX;
	static volatile int64_t x148 = INT64_MAX;
	int64_t t36 = 153555LL;

	t36 = (x145^((x146%x147)/x148));

	if (t36 != 127LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x151 = INT8_MIN;
	int8_t x152 = -1;

	t37 = (x149^((x150%x151)/x152));

	if (t37 != 116579) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = UINT64_MAX;
	int64_t x155 = INT64_MIN;
	uint64_t t38 = 125605083131LLU;

	t38 = (x153^((x154%x155)/x156));

	if (t38 != 118LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = -1;
	int16_t x158 = -1;
	int8_t x159 = -41;
	volatile int32_t t39 = -168576;

	t39 = (x157^((x158%x159)/x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 696U;
	int16_t x162 = -1;
	uint16_t x164 = 13U;
	volatile uint64_t t40 = 33411390823821LLU;

	t40 = (x161^((x162%x163)/x164));

	if (t40 != 15997LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 1U;
	volatile int64_t x166 = INT64_MIN;
	int64_t x167 = -1LL;

	t41 = (x165^((x166%x167)/x168));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	uint16_t x170 = 7U;
	static uint64_t x171 = 1LLU;
	static int16_t x172 = -183;
	static volatile uint64_t t42 = 41011LLU;

	t42 = (x169^((x170%x171)/x172));

	if (t42 != 4294967295LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = -1;
	static volatile int8_t x175 = 2;
	int32_t x176 = INT32_MIN;

	t43 = (x173^((x174%x175)/x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 7U;
	int64_t x178 = INT64_MIN;
	static int8_t x179 = -1;
	uint32_t x180 = 52U;
	static int64_t t44 = 12256072456349023LL;

	t44 = (x177^((x178%x179)/x180));

	if (t44 != 7LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MAX;
	int16_t x183 = INT16_MIN;
	int32_t t45 = -397232565;

	t45 = (x181^((x182%x183)/x184));

	if (t45 != -16368) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MAX;
	int64_t x187 = INT64_MIN;
	int64_t t46 = -16152896864131LL;

	t46 = (x185^((x186%x187)/x188));

	if (t46 != 2147483521LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = UINT8_MAX;
	int16_t x190 = 1;
	int64_t x192 = -1LL;

	t47 = (x189^((x190%x191)/x192));

	if (t47 != -256LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x194 = UINT16_MAX;
	static int32_t x195 = INT32_MIN;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = -9190;

	t48 = (x193^((x194%x195)/x196));

	if (t48 != 61) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	uint32_t x198 = 6U;
	int8_t x199 = INT8_MIN;
	uint8_t x200 = 2U;
	volatile uint32_t t49 = 1999U;

	t49 = (x197^((x198%x199)/x200));

	if (t49 != 4294967292U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 37423891LLU;
	int64_t x203 = -349994670313230LL;
	static int16_t x204 = INT16_MIN;
	volatile uint64_t t50 = 7063892940LLU;

	t50 = (x201^((x202%x203)/x204));

	if (t50 != 18446744073704015696LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = UINT16_MAX;
	int64_t x207 = 4838274356LL;
	int16_t x208 = INT16_MIN;
	volatile int64_t t51 = -104220286492549LL;

	t51 = (x205^((x206%x207)/x208));

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x215 = 605233;
	volatile int32_t t52 = -128214;

	t52 = (x213^((x214%x215)/x216));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x218 = -110;
	int32_t x220 = INT32_MIN;
	volatile int64_t t53 = 8780LL;

	t53 = (x217^((x218%x219)/x220));

	if (t53 != -181927019592274738LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 1981056421734869LLU;
	int16_t x222 = INT16_MIN;
	int32_t x223 = -1;
	int8_t x224 = -1;

	t54 = (x221^((x222%x223)/x224));

	if (t54 != 1981056421734869LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = 1U;
	uint32_t x226 = UINT32_MAX;
	uint8_t x228 = 100U;
	uint32_t t55 = 198603U;

	t55 = (x225^((x226%x227)/x228));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	int16_t x231 = INT16_MIN;
	uint32_t x232 = UINT32_MAX;
	static int64_t t56 = INT64_MIN;

	t56 = (x229^((x230%x231)/x232));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	uint8_t x234 = UINT8_MAX;
	int32_t x236 = -1;

	t57 = (x233^((x234%x235)/x236));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x237 = 123U;
	volatile uint8_t x240 = 34U;
	volatile int64_t t58 = 0LL;

	t58 = (x237^((x238%x239)/x240));

	if (t58 != 123LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x241 = 115U;
	int64_t x242 = INT64_MIN;
	volatile int64_t x243 = 25461834418667LL;
	int8_t x244 = INT8_MIN;

	t59 = (x241^((x242%x243)/x244));

	if (t59 != 5871356057LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = 5U;
	int64_t x246 = INT64_MAX;
	int16_t x248 = 1;
	static volatile int64_t t60 = -20439629LL;

	t60 = (x245^((x246%x247)/x248));

	if (t60 != 2LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x249 = 15U;
	int64_t x250 = -29308251LL;
	uint32_t x251 = 60U;
	volatile int64_t t61 = 136423222128LL;

	t61 = (x249^((x250%x251)/x252));

	if (t61 != 60LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x255 = INT64_MAX;
	int32_t x256 = INT32_MAX;
	int64_t t62 = -3972LL;

	t62 = (x253^((x254%x255)/x256));

	if (t62 != 125LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x257 = INT32_MAX;
	int8_t x258 = INT8_MIN;
	int32_t x259 = -1;
	volatile int32_t t63 = INT32_MAX;

	t63 = (x257^((x258%x259)/x260));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	int64_t x262 = -1LL;
	int16_t x263 = -4;
	static int32_t x264 = INT32_MIN;
	volatile int64_t t64 = -4635508464LL;

	t64 = (x261^((x262%x263)/x264));

	if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = -1LL;
	int8_t x266 = 42;
	int16_t x267 = INT16_MIN;
	int64_t t65 = 488350216522930740LL;

	t65 = (x265^((x266%x267)/x268));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x269 = INT32_MIN;
	static volatile int16_t x270 = INT16_MAX;
	static int8_t x271 = INT8_MIN;
	int64_t t66 = 8984163LL;

	t66 = (x269^((x270%x271)/x272));

	if (t66 != -2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x274 = -1;
	int8_t x275 = INT8_MAX;
	int8_t x276 = -1;
	volatile uint32_t t67 = 938480800U;

	t67 = (x273^((x274%x275)/x276));

	if (t67 != 480512674U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = 12;
	static int16_t x278 = INT16_MIN;
	volatile int64_t x280 = INT64_MIN;
	volatile int64_t t68 = 303230801344LL;

	t68 = (x277^((x278%x279)/x280));

	if (t68 != 12LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x281 = 1;
	uint32_t x282 = UINT32_MAX;
	int16_t x284 = INT16_MIN;
	static volatile uint32_t t69 = 47U;

	t69 = (x281^((x282%x283)/x284));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x285 = 1LLU;
	int8_t x286 = 56;
	int32_t x288 = INT32_MIN;
	volatile uint64_t t70 = 60810915894LLU;

	t70 = (x285^((x286%x287)/x288));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = 602410246163417LLU;
	static uint32_t x290 = 1070268U;
	int8_t x291 = -1;
	static int32_t x292 = 7532;
	static volatile uint64_t t71 = 15927LLU;

	t71 = (x289^((x290%x291)/x292));

	if (t71 != 602410246163287LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x294 = INT16_MIN;
	int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MIN;
	uint64_t t72 = 980240286335209LLU;

	t72 = (x293^((x294%x295)/x296));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x298 = INT16_MIN;
	static int64_t x299 = INT64_MIN;
	uint64_t x300 = 884LLU;
	uint64_t t73 = 267255119882457094LLU;

	t73 = (x297^((x298%x299)/x300));

	if (t73 != 20867359356829658LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x301 = -1;
	int32_t x302 = 1;
	uint16_t x303 = 2005U;
	int64_t x304 = 5LL;

	t74 = (x301^((x302%x303)/x304));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = 610101481536657LL;
	int16_t x306 = INT16_MIN;
	volatile int8_t x308 = INT8_MIN;
	int64_t t75 = 914940LL;

	t75 = (x305^((x306%x307)/x308));

	if (t75 != 610101481536657LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x309 = -1LL;
	int64_t x310 = INT64_MAX;
	int64_t x311 = -28800LL;
	int64_t x312 = -23071776189LL;
	int64_t t76 = 95273892467308561LL;

	t76 = (x309^((x310%x311)/x312));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x314 = INT8_MAX;
	int64_t x315 = -1LL;
	volatile int64_t t77 = 474032076LL;

	t77 = (x313^((x314%x315)/x316));

	if (t77 != 32767LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = -1;
	int32_t x318 = INT32_MAX;
	uint8_t x319 = 53U;
	int32_t x320 = INT32_MIN;
	volatile int32_t t78 = 3;

	t78 = (x317^((x318%x319)/x320));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = INT32_MIN;
	volatile uint64_t x323 = UINT64_MAX;
	uint64_t t79 = 13365341LLU;

	t79 = (x321^((x322%x323)/x324));

	if (t79 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = 3164868LL;
	uint32_t x326 = 617U;
	uint64_t x327 = 1LLU;
	volatile int16_t x328 = INT16_MIN;
	uint64_t t80 = 12LLU;

	t80 = (x325^((x326%x327)/x328));

	if (t80 != 3164868LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x329 = 653230756344LLU;
	int16_t x330 = 1;
	int32_t x331 = INT32_MIN;
	int64_t x332 = -1LL;
	uint64_t t81 = 67664069LLU;

	t81 = (x329^((x330%x331)/x332));

	if (t81 != 18446743420478795271LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x333 = UINT32_MAX;
	int16_t x334 = 1;
	int32_t x335 = -115419;
	static int32_t x336 = -2;
	uint32_t t82 = UINT32_MAX;

	t82 = (x333^((x334%x335)/x336));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x341 = 572283259896364273LL;
	uint8_t x342 = 58U;
	int64_t x343 = 2099063529LL;
	int64_t x344 = -1LL;
	static int64_t t83 = -1297LL;

	t83 = (x341^((x342%x343)/x344));

	if (t83 != -572283259896364233LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = -32170508LL;
	volatile uint8_t x346 = 5U;
	int8_t x347 = -1;
	uint32_t x348 = UINT32_MAX;
	volatile int64_t t84 = 51LL;

	t84 = (x345^((x346%x347)/x348));

	if (t84 != -32170508LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x350 = INT32_MIN;
	int8_t x351 = INT8_MAX;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t85 = 610;

	t85 = (x349^((x350%x351)/x352));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = -1;
	int64_t x355 = INT64_MIN;
	static uint32_t x356 = UINT32_MAX;
	volatile int64_t t86 = -426LL;

	t86 = (x353^((x354%x355)/x356));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x358 = 944;
	static uint8_t x360 = 6U;
	int32_t t87 = 126717;

	t87 = (x357^((x358%x359)/x360));

	if (t87 != -126) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = 15;
	int16_t x363 = -1;
	uint8_t x364 = 9U;
	volatile int64_t t88 = 370437901279LL;

	t88 = (x361^((x362%x363)/x364));

	if (t88 != 15LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MIN;
	volatile int16_t x366 = INT16_MIN;
	uint8_t x367 = 9U;
	int8_t x368 = 9;
	int32_t t89 = -3780494;

	t89 = (x365^((x366%x367)/x368));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = -30LL;
	int8_t x370 = INT8_MAX;
	volatile int64_t x372 = INT64_MAX;
	int64_t t90 = 1967797LL;

	t90 = (x369^((x370%x371)/x372));

	if (t90 != -30LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x373 = 1987948;
	int32_t x374 = -1;
	uint64_t x375 = 42590768051213LLU;
	uint8_t x376 = 11U;
	volatile uint64_t t91 = 336LLU;

	t91 = (x373^((x374%x375)/x376));

	if (t91 != 88950285463LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = 1;
	int8_t x378 = INT8_MAX;
	int64_t x379 = 515420057326390LL;
	uint64_t x380 = UINT64_MAX;
	uint64_t t92 = 3LLU;

	t92 = (x377^((x378%x379)/x380));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = -1;
	static volatile int64_t x383 = INT64_MIN;
	int16_t x384 = -428;
	int64_t t93 = 8424528672457434LL;

	t93 = (x381^((x382%x383)/x384));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x385 = -8;
	static volatile uint16_t x387 = UINT16_MAX;
	int16_t x388 = -1;
	int64_t t94 = -31874LL;

	t94 = (x385^((x386%x387)/x388));

	if (t94 != -32776LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = 10;
	int64_t x390 = INT64_MAX;
	int64_t t95 = 501190120568070016LL;

	t95 = (x389^((x390%x391)/x392));

	if (t95 != 9LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = 0;
	volatile int16_t x395 = INT16_MAX;
	uint16_t x396 = UINT16_MAX;
	int32_t t96 = 555;

	t96 = (x393^((x394%x395)/x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x397 = INT32_MIN;
	static int64_t x398 = -48689678LL;
	int32_t x399 = INT32_MIN;
	volatile int64_t x400 = INT64_MAX;
	static volatile int64_t t97 = 0LL;

	t97 = (x397^((x398%x399)/x400));

	if (t97 != -2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x401 = 20928124U;
	uint32_t x402 = UINT32_MAX;
	volatile uint16_t x403 = 10U;
	volatile int64_t x404 = INT64_MIN;

	t98 = (x401^((x402%x403)/x404));

	if (t98 != 20928124LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x405 = INT16_MAX;
	volatile int16_t x406 = -1;
	uint32_t x408 = UINT32_MAX;
	volatile uint32_t t99 = 2U;

	t99 = (x405^((x406%x407)/x408));

	if (t99 != 32766U) { NG(); } else { ; }
	
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

