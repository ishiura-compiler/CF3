#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x8 = UINT32_MAX;
int32_t t3 = 94772;
int32_t t5 = INT32_MIN;
static int16_t x27 = 30;
uint32_t x35 = 27961888U;
int8_t x42 = 0;
int32_t t10 = 152454;
static volatile uint64_t x45 = 20LLU;
static volatile int64_t x48 = -8089791790560LL;
static int64_t x50 = -1LL;
static int16_t x51 = -13;
uint32_t x52 = UINT32_MAX;
volatile uint32_t x53 = 26542916U;
static uint64_t x61 = 100823LLU;
uint64_t x62 = UINT64_MAX;
int16_t x64 = INT16_MIN;
int32_t t16 = 3746591;
static int8_t x72 = INT8_MIN;
int32_t t17 = -451149234;
int8_t x75 = INT8_MIN;
volatile int64_t t18 = -7747LL;
int16_t x90 = INT16_MIN;
uint16_t x103 = 455U;
volatile int32_t t26 = INT32_MIN;
int64_t x113 = INT64_MIN;
int64_t t28 = INT64_MIN;
static uint8_t x117 = 0U;
uint8_t x119 = UINT8_MAX;
volatile uint64_t x122 = 1264934812459603370LLU;
volatile int32_t t30 = 68222;
static volatile int32_t t32 = -1;
uint32_t x133 = 421028324U;
static uint8_t x139 = UINT8_MAX;
volatile uint8_t x150 = UINT8_MAX;
volatile int32_t t37 = 706476151;
int8_t x156 = 13;
int64_t x160 = -1LL;
static volatile int32_t t39 = 93322639;
uint32_t x162 = 128435U;
int64_t x166 = -383633797LL;
int64_t x176 = INT64_MIN;
static int32_t t43 = -977;
volatile uint64_t x186 = UINT64_MAX;
int64_t x190 = 3880274LL;
int16_t x196 = -1;
static volatile int8_t x200 = -1;
volatile int64_t t49 = 217592801LL;
volatile int32_t t52 = 0;
volatile int64_t x213 = -1LL;
int64_t t53 = -8544327299LL;
uint8_t x224 = 84U;
static int32_t x227 = INT32_MIN;
int16_t x228 = INT16_MIN;
int32_t t56 = 0;
int64_t t57 = -272666148047826624LL;
int16_t x236 = INT16_MAX;
int64_t t58 = -52971LL;
int8_t x247 = -1;
uint16_t x252 = 19U;
volatile uint16_t x257 = 58U;
int8_t x258 = INT8_MAX;
uint8_t x265 = 1U;
volatile int8_t x272 = INT8_MIN;
volatile uint8_t x273 = 0U;
int32_t t68 = 32796;
volatile int8_t x286 = -1;
int32_t x289 = -1;
uint32_t x290 = UINT32_MAX;
uint8_t x291 = UINT8_MAX;
uint32_t x297 = 78299U;
volatile uint32_t t74 = 27694457U;
uint16_t x313 = 152U;
int64_t x320 = -547889143454615LL;
volatile int64_t t79 = 8407656901LL;
volatile int8_t x324 = INT8_MAX;
int32_t x325 = INT32_MIN;
int16_t x336 = -37;
int8_t x337 = -27;
int64_t x345 = INT64_MIN;
uint8_t x350 = 0U;
int8_t x355 = -5;
int32_t x357 = -1;
int64_t x358 = INT64_MIN;
uint32_t x359 = UINT32_MAX;
int32_t t89 = -4;
uint8_t x362 = 0U;
int8_t x364 = -20;
int32_t t90 = -10;
static int32_t x371 = INT32_MIN;
int32_t t92 = -3788;
static volatile uint8_t x375 = 6U;
uint32_t x387 = 116U;
uint32_t x388 = 222798U;
int64_t x389 = INT64_MIN;
int8_t x400 = -3;


void f0(void) {
	volatile int32_t x1 = 379818062;
	int32_t x2 = INT32_MIN;
	uint32_t x3 = 53U;
	uint32_t x4 = 6U;
	volatile int32_t t0 = 900636;

	t0 = (x1^(x2<=(x3==x4)));

	if (t0 != 379818063) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static uint8_t x6 = UINT8_MAX;
	volatile int8_t x7 = 30;
	int32_t t1 = -129726;

	t1 = (x5^(x6<=(x7==x8)));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint32_t x10 = UINT32_MAX;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -613417856;

	t2 = (x9^(x10<=(x11==x12)));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = 4;
	static int16_t x16 = 1;

	t3 = (x13^(x14<=(x15==x16)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int16_t x18 = -1;
	int8_t x19 = -1;
	int32_t x20 = 8227564;
	int32_t t4 = -1;

	t4 = (x17^(x18<=(x19==x20)));

	if (t4 != 126) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MAX;
	volatile uint64_t x23 = 4469317094416994076LLU;
	static int8_t x24 = -29;

	t5 = (x21^(x22<=(x23==x24)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 121U;
	int8_t x26 = INT8_MIN;
	uint16_t x28 = UINT16_MAX;
	static volatile int32_t t6 = 5392;

	t6 = (x25^(x26<=(x27==x28)));

	if (t6 != 120) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	volatile int16_t x30 = -4;
	int64_t x31 = INT64_MIN;
	volatile uint32_t x32 = 800005U;
	volatile int32_t t7 = 3;

	t7 = (x29^(x30<=(x31==x32)));

	if (t7 != 126) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = 1;
	int16_t x34 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 589400637;

	t8 = (x33^(x34<=(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	volatile int16_t x38 = INT16_MAX;
	int16_t x39 = 3623;
	int16_t x40 = -252;
	int32_t t9 = -138;

	t9 = (x37^(x38<=(x39==x40)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint8_t x43 = 2U;
	int8_t x44 = INT8_MAX;

	t10 = (x41^(x42<=(x43==x44)));

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MAX;
	int32_t x47 = 12668;
	volatile uint64_t t11 = 50LLU;

	t11 = (x45^(x46<=(x47==x48)));

	if (t11 != 20LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -261839;
	volatile int32_t t12 = 441;

	t12 = (x49^(x50<=(x51==x52)));

	if (t12 != -261840) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = 5549;
	volatile int32_t x55 = INT32_MIN;
	volatile int16_t x56 = INT16_MIN;
	uint32_t t13 = 69493U;

	t13 = (x53^(x54<=(x55==x56)));

	if (t13 != 26542916U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int8_t x58 = -1;
	static int64_t x59 = INT64_MIN;
	static volatile uint64_t x60 = UINT64_MAX;
	static int32_t t14 = 913023;

	t14 = (x57^(x58<=(x59==x60)));

	if (t14 != -2) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x63 = UINT32_MAX;
	uint64_t t15 = 1824344954LLU;

	t15 = (x61^(x62<=(x63==x64)));

	if (t15 != 100823LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int8_t x66 = INT8_MAX;
	int8_t x67 = -1;
	int64_t x68 = -1LL;

	t16 = (x65^(x66<=(x67==x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = -1;
	int8_t x71 = 1;

	t17 = (x69^(x70<=(x71==x72)));

	if (t17 != 65534) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = 84828LL;
	int16_t x74 = INT16_MIN;
	int32_t x76 = -1;

	t18 = (x73^(x74<=(x75==x76)));

	if (t18 != 84829LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	volatile int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MAX;
	uint32_t x80 = 3675U;
	int32_t t19 = 813;

	t19 = (x77^(x78<=(x79==x80)));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 19LLU;
	static volatile int32_t x82 = INT32_MAX;
	static int16_t x83 = 0;
	uint64_t x84 = UINT64_MAX;
	uint64_t t20 = 50418072296LLU;

	t20 = (x81^(x82<=(x83==x84)));

	if (t20 != 19LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	volatile int16_t x86 = 192;
	int16_t x87 = INT16_MIN;
	uint8_t x88 = 1U;
	static int64_t t21 = INT64_MIN;

	t21 = (x85^(x86<=(x87==x88)));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 6618U;
	volatile int16_t x91 = -1;
	int16_t x92 = 7;
	int32_t t22 = -58870;

	t22 = (x89^(x90<=(x91==x92)));

	if (t22 != 6619) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -27;
	int8_t x94 = INT8_MIN;
	uint32_t x95 = 1078U;
	int32_t x96 = INT32_MAX;
	static volatile int32_t t23 = 11593;

	t23 = (x93^(x94<=(x95==x96)));

	if (t23 != -28) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -2;
	static uint64_t x98 = UINT64_MAX;
	int32_t x99 = INT32_MAX;
	int32_t x100 = -1;
	static volatile int32_t t24 = -3516667;

	t24 = (x97^(x98<=(x99==x100)));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 22U;
	volatile int64_t x102 = 0LL;
	int8_t x104 = 20;
	int32_t t25 = -29;

	t25 = (x101^(x102<=(x103==x104)));

	if (t25 != 23) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static volatile uint16_t x106 = 283U;
	uint8_t x107 = 102U;
	int16_t x108 = -1;

	t26 = (x105^(x106<=(x107==x108)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int64_t x110 = 0LL;
	volatile int64_t x111 = INT64_MIN;
	volatile int16_t x112 = INT16_MIN;
	int32_t t27 = -28;

	t27 = (x109^(x110<=(x111==x112)));

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x114 = INT8_MAX;
	uint16_t x115 = UINT16_MAX;
	int16_t x116 = -441;

	t28 = (x113^(x114<=(x115==x116)));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x118 = 1228108480U;
	static int8_t x120 = -58;
	volatile int32_t t29 = -1;

	t29 = (x117^(x118<=(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	volatile int32_t x124 = INT32_MAX;

	t30 = (x121^(x122<=(x123==x124)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	uint64_t x126 = 449903811960786940LLU;
	int64_t x127 = -1LL;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x125^(x126<=(x127==x128)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = -26;
	int8_t x130 = INT8_MAX;
	static int64_t x131 = -15850925LL;
	static int8_t x132 = INT8_MIN;

	t32 = (x129^(x130<=(x131==x132)));

	if (t32 != -26) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = 313;
	int8_t x135 = INT8_MIN;
	static uint16_t x136 = 425U;
	uint32_t t33 = 47738364U;

	t33 = (x133^(x134<=(x135==x136)));

	if (t33 != 421028324U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = 9;
	int64_t x138 = INT64_MIN;
	int16_t x140 = 0;
	int32_t t34 = 21793040;

	t34 = (x137^(x138<=(x139==x140)));

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -82423;
	static int8_t x142 = -1;
	volatile int32_t x143 = INT32_MIN;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t35 = -1;

	t35 = (x141^(x142<=(x143==x144)));

	if (t35 != -82424) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 12;
	uint16_t x146 = UINT16_MAX;
	static int64_t x147 = INT64_MAX;
	uint16_t x148 = 53U;
	int32_t t36 = 1;

	t36 = (x145^(x146<=(x147==x148)));

	if (t36 != 12) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int64_t x151 = INT64_MAX;
	int32_t x152 = INT32_MAX;

	t37 = (x149^(x150<=(x151==x152)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	volatile int8_t x154 = -37;
	static int32_t x155 = INT32_MIN;
	volatile int32_t t38 = 52990170;

	t38 = (x153^(x154<=(x155==x156)));

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = 0;
	uint32_t x158 = UINT32_MAX;
	static int32_t x159 = -1;

	t39 = (x157^(x158<=(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x163 = -195248LL;
	uint64_t x164 = 1027567203351059LLU;
	uint64_t t40 = UINT64_MAX;

	t40 = (x161^(x162<=(x163==x164)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 28430532;
	static int32_t x167 = 301;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 3024;

	t41 = (x165^(x166<=(x167==x168)));

	if (t41 != 28430533) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 6U;
	int64_t x170 = -3760771353LL;
	volatile uint64_t x171 = 27946312LLU;
	volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = 3627;

	t42 = (x169^(x170<=(x171==x172)));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = 1;
	int32_t x174 = 823;
	int64_t x175 = INT64_MAX;

	t43 = (x173^(x174<=(x175==x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	int16_t x178 = -239;
	uint64_t x179 = UINT64_MAX;
	volatile int8_t x180 = 3;
	int32_t t44 = 57;

	t44 = (x177^(x178<=(x179==x180)));

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MIN;
	uint16_t x182 = UINT16_MAX;
	int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MAX;
	volatile int32_t t45 = -88694029;

	t45 = (x181^(x182<=(x183==x184)));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 2761U;
	int32_t x187 = -1;
	int32_t x188 = INT32_MIN;
	static volatile int32_t t46 = 3;

	t46 = (x185^(x186<=(x187==x188)));

	if (t46 != 2761) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = 3244;
	static int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MIN;
	int32_t t47 = 3687284;

	t47 = (x189^(x190<=(x191==x192)));

	if (t47 != 3244) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile int64_t x194 = -1LL;
	uint16_t x195 = 0U;
	int32_t t48 = 3884;

	t48 = (x193^(x194<=(x195==x196)));

	if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -2631015916397288LL;
	volatile int32_t x198 = INT32_MAX;
	int8_t x199 = INT8_MAX;

	t49 = (x197^(x198<=(x199==x200)));

	if (t49 != -2631015916397288LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = 18;
	int16_t x202 = INT16_MIN;
	int16_t x203 = 6;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t50 = 20;

	t50 = (x201^(x202<=(x203==x204)));

	if (t50 != 19) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x205 = 14U;
	int16_t x206 = 103;
	uint16_t x207 = UINT16_MAX;
	volatile uint8_t x208 = 1U;
	static int32_t t51 = -935902;

	t51 = (x205^(x206<=(x207==x208)));

	if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	uint32_t x210 = 1U;
	volatile uint16_t x211 = 160U;
	int16_t x212 = -1;

	t52 = (x209^(x210<=(x211==x212)));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x214 = -679452207514LL;
	int8_t x215 = -1;
	int16_t x216 = INT16_MAX;

	t53 = (x213^(x214<=(x215==x216)));

	if (t53 != -2LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = -1LL;
	int8_t x218 = INT8_MAX;
	uint8_t x219 = 19U;
	uint8_t x220 = UINT8_MAX;
	int64_t t54 = 393510LL;

	t54 = (x217^(x218<=(x219==x220)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	int8_t x222 = 27;
	uint16_t x223 = 3094U;
	static volatile int32_t t55 = 20804;

	t55 = (x221^(x222<=(x223==x224)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	static int8_t x226 = -2;

	t56 = (x225^(x226<=(x227==x228)));

	if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = -5LL;
	int16_t x230 = 80;
	volatile int32_t x231 = 0;
	static int32_t x232 = INT32_MIN;

	t57 = (x229^(x230<=(x231==x232)));

	if (t57 != -5LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MIN;
	uint16_t x235 = UINT16_MAX;

	t58 = (x233^(x234<=(x235==x236)));

	if (t58 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	int64_t x238 = -2084212823507799LL;
	int8_t x239 = -61;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 671215;

	t59 = (x237^(x238<=(x239==x240)));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x241 = INT8_MAX;
	int32_t x242 = -9458;
	uint16_t x243 = 24U;
	int16_t x244 = -1;
	static volatile int32_t t60 = 1;

	t60 = (x241^(x242<=(x243==x244)));

	if (t60 != 126) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 1;
	static int8_t x246 = INT8_MIN;
	volatile uint8_t x248 = 1U;
	volatile int32_t t61 = -1;

	t61 = (x245^(x246<=(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	uint64_t x250 = 3156763LLU;
	int8_t x251 = INT8_MAX;
	int32_t t62 = -134380036;

	t62 = (x249^(x250<=(x251==x252)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -39;
	int64_t x254 = -1LL;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = 1030966581LLU;
	int32_t t63 = -5945454;

	t63 = (x253^(x254<=(x255==x256)));

	if (t63 != -40) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x259 = UINT8_MAX;
	uint32_t x260 = 855U;
	int32_t t64 = 3269081;

	t64 = (x257^(x258<=(x259==x260)));

	if (t64 != 58) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	volatile uint16_t x262 = 0U;
	uint16_t x263 = 1U;
	int16_t x264 = INT16_MAX;
	int64_t t65 = 141LL;

	t65 = (x261^(x262<=(x263==x264)));

	if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	uint64_t x267 = UINT64_MAX;
	volatile int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 0;

	t66 = (x265^(x266<=(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = 21240;
	volatile int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MAX;
	volatile int32_t t67 = 17830;

	t67 = (x269^(x270<=(x271==x272)));

	if (t67 != 21241) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x274 = 87U;
	volatile uint64_t x275 = 248LLU;
	volatile int8_t x276 = 2;

	t68 = (x273^(x274<=(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = -1;
	static volatile int64_t x279 = INT64_MAX;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = 267697;

	t69 = (x277^(x278<=(x279==x280)));

	if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 2343U;
	int16_t x282 = 4173;
	static int32_t x283 = INT32_MAX;
	static uint8_t x284 = UINT8_MAX;
	int32_t t70 = 63847;

	t70 = (x281^(x282<=(x283==x284)));

	if (t70 != 2343) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = 0U;
	volatile uint16_t x287 = UINT16_MAX;
	static int32_t x288 = 76578;
	volatile int32_t t71 = -3;

	t71 = (x285^(x286<=(x287==x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x292 = 10U;
	volatile int32_t t72 = 4163;

	t72 = (x289^(x290<=(x291==x292)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x293 = 713087493;
	uint16_t x294 = 40U;
	int8_t x295 = INT8_MIN;
	uint32_t x296 = 794934621U;
	static volatile int32_t t73 = -432212395;

	t73 = (x293^(x294<=(x295==x296)));

	if (t73 != 713087493) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MAX;
	uint64_t x299 = UINT64_MAX;
	uint8_t x300 = 14U;

	t74 = (x297^(x298<=(x299==x300)));

	if (t74 != 78299U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MIN;
	uint64_t x303 = 2020416431LLU;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = 1644093;

	t75 = (x301^(x302<=(x303==x304)));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -7;
	int32_t x306 = -1;
	int32_t x307 = -1;
	int64_t x308 = 267262646690803359LL;
	static int32_t t76 = -728084940;

	t76 = (x305^(x306<=(x307==x308)));

	if (t76 != -8) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	int32_t x310 = INT32_MIN;
	uint32_t x311 = UINT32_MAX;
	int8_t x312 = -58;
	static int32_t t77 = 814259241;

	t77 = (x309^(x310<=(x311==x312)));

	if (t77 != 126) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MIN;
	uint8_t x315 = UINT8_MAX;
	static volatile uint64_t x316 = UINT64_MAX;
	int32_t t78 = 9431;

	t78 = (x313^(x314<=(x315==x316)));

	if (t78 != 153) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	static uint16_t x318 = 1U;
	uint16_t x319 = UINT16_MAX;

	t79 = (x317^(x318<=(x319==x320)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	uint64_t x322 = 1817401996273964246LLU;
	int32_t x323 = -2;
	int32_t t80 = 27054;

	t80 = (x321^(x322<=(x323==x324)));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -1;
	int8_t x327 = 2;
	int16_t x328 = INT16_MAX;
	volatile int32_t t81 = -907;

	t81 = (x325^(x326<=(x327==x328)));

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = INT16_MAX;
	uint16_t x330 = 505U;
	int32_t x331 = -7;
	volatile int8_t x332 = INT8_MIN;
	static int32_t t82 = -7059863;

	t82 = (x329^(x330<=(x331==x332)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = 112U;
	volatile uint64_t x334 = 2657686693LLU;
	int32_t x335 = 120;
	volatile int32_t t83 = 2;

	t83 = (x333^(x334<=(x335==x336)));

	if (t83 != 112) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x338 = UINT64_MAX;
	uint64_t x339 = 3LLU;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = -3130161;

	t84 = (x337^(x338<=(x339==x340)));

	if (t84 != -27) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 5545;
	volatile int64_t x342 = INT64_MIN;
	int32_t x343 = -1;
	uint8_t x344 = UINT8_MAX;
	int32_t t85 = 0;

	t85 = (x341^(x342<=(x343==x344)));

	if (t85 != 5544) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x346 = UINT16_MAX;
	int32_t x347 = -1;
	static volatile uint32_t x348 = 5576U;
	volatile int64_t t86 = INT64_MIN;

	t86 = (x345^(x346<=(x347==x348)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	int8_t x351 = -1;
	static volatile int64_t x352 = -21303749864062180LL;
	uint64_t t87 = 4LLU;

	t87 = (x349^(x350<=(x351==x352)));

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x353 = 3U;
	uint32_t x354 = 245U;
	int16_t x356 = INT16_MIN;
	static int32_t t88 = 3645073;

	t88 = (x353^(x354<=(x355==x356)));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x360 = 40LLU;

	t89 = (x357^(x358<=(x359==x360)));

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = 2102;
	int64_t x363 = INT64_MIN;

	t90 = (x361^(x362<=(x363==x364)));

	if (t90 != 2103) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = -127;
	static int64_t x366 = 1973948LL;
	uint8_t x367 = 127U;
	volatile int64_t x368 = -71907LL;
	int32_t t91 = -35380036;

	t91 = (x365^(x366<=(x367==x368)));

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	volatile uint32_t x370 = 1869U;
	static uint8_t x372 = 3U;

	t92 = (x369^(x370<=(x371==x372)));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	uint32_t x374 = UINT32_MAX;
	int64_t x376 = INT64_MAX;
	volatile int32_t t93 = -2;

	t93 = (x373^(x374<=(x375==x376)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -947765284891LL;
	int8_t x378 = -1;
	volatile int8_t x379 = 1;
	int8_t x380 = INT8_MAX;
	int64_t t94 = -279LL;

	t94 = (x377^(x378<=(x379==x380)));

	if (t94 != -947765284892LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = -1;
	int8_t x382 = INT8_MAX;
	int32_t x383 = INT32_MIN;
	static volatile uint8_t x384 = UINT8_MAX;
	static int32_t t95 = -412819559;

	t95 = (x381^(x382<=(x383==x384)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	volatile int32_t x386 = INT32_MIN;
	volatile int32_t t96 = 16084393;

	t96 = (x385^(x386<=(x387==x388)));

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x390 = 1U;
	int32_t x391 = 9;
	int64_t x392 = 212319LL;
	int64_t t97 = INT64_MIN;

	t97 = (x389^(x390<=(x391==x392)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 8072916563395383538LLU;
	volatile int8_t x394 = INT8_MAX;
	int32_t x395 = INT32_MAX;
	uint16_t x396 = 19U;
	static uint64_t t98 = 6LLU;

	t98 = (x393^(x394<=(x395==x396)));

	if (t98 != 8072916563395383538LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MIN;
	static uint16_t x398 = 507U;
	int16_t x399 = INT16_MAX;
	volatile int32_t t99 = 24347;

	t99 = (x397^(x398<=(x399==x400)));

	if (t99 != -128) { NG(); } else { ; }
	
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

