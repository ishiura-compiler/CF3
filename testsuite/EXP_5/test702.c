#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = -33;
static volatile int32_t x19 = -106575;
static volatile int32_t x28 = INT32_MAX;
volatile int32_t x31 = INT32_MIN;
volatile int16_t x34 = -1;
uint16_t x36 = 11012U;
uint32_t x41 = 488299U;
static int8_t x42 = -1;
uint64_t x48 = UINT64_MAX;
int32_t x51 = INT32_MAX;
static int32_t x52 = INT32_MIN;
volatile uint64_t t12 = 171957559LLU;
int8_t x53 = INT8_MIN;
volatile int64_t t13 = -140894LL;
uint64_t t14 = 525485709503LLU;
uint16_t x82 = 818U;
uint16_t x97 = 116U;
int16_t x102 = -488;
volatile int16_t x105 = INT16_MIN;
static int16_t x106 = INT16_MIN;
int16_t x111 = -46;
static int8_t x121 = 1;
uint16_t x124 = 169U;
volatile uint8_t x132 = UINT8_MAX;
volatile int64_t t29 = -33630686713329LL;
int8_t x137 = -1;
int8_t x138 = INT8_MAX;
static volatile int16_t x139 = INT16_MIN;
uint32_t x143 = 971103U;
int32_t x147 = -418398;
int64_t t34 = 250927682LL;
volatile int8_t x162 = INT8_MIN;
volatile int16_t x164 = INT16_MAX;
uint64_t t36 = 3353LLU;
static uint64_t x165 = UINT64_MAX;
volatile uint16_t x177 = 4U;
int32_t x180 = 1539963;
volatile int8_t x181 = 0;
int16_t x182 = -893;
uint64_t t42 = 7882439388076388792LLU;
volatile uint32_t x191 = 240877178U;
static uint16_t x202 = UINT16_MAX;
volatile uint64_t t46 = 46412187079LLU;
int16_t x206 = -1;
volatile uint16_t x211 = 852U;
volatile int16_t x212 = INT16_MIN;
int16_t x214 = INT16_MIN;
static int64_t t49 = -20962LL;
volatile uint64_t x220 = UINT64_MAX;
volatile int8_t x223 = INT8_MIN;
volatile int32_t x225 = -1132633;
uint32_t x226 = 45273892U;
static int64_t x228 = -1LL;
static volatile int32_t x239 = INT32_MAX;
int64_t x242 = INT64_MIN;
int16_t x258 = -1;
volatile uint32_t t59 = 206U;
int32_t x261 = -81410613;
volatile int32_t x271 = -1;
uint64_t x275 = 1487LLU;
static uint8_t x276 = 2U;
int8_t x288 = INT8_MIN;
uint8_t x293 = 31U;
int32_t x294 = 1;
int32_t x301 = -1;
int32_t x310 = INT32_MIN;
int32_t x318 = INT32_MAX;
static int8_t x324 = 2;
int8_t x326 = 21;
static uint32_t x331 = 383522415U;
uint8_t x340 = 95U;
int32_t t78 = -27;
static int32_t x355 = -1011234;
static uint8_t x356 = UINT8_MAX;
static volatile int8_t x360 = -1;
int16_t x363 = -1;
int8_t x364 = -7;
volatile uint32_t t86 = 1661533U;
volatile uint32_t x373 = 3659U;
volatile uint32_t t88 = 4U;
static uint64_t x382 = 5505350064026LLU;
int16_t x388 = INT16_MIN;
int8_t x393 = INT8_MAX;
volatile int64_t x398 = -1LL;
uint16_t x399 = 1U;
int16_t x405 = -10543;
uint32_t x409 = 242688038U;
int64_t x413 = INT64_MIN;
static int32_t x416 = -1;
int64_t x419 = -1LL;
int32_t x421 = -5892133;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	uint8_t x2 = 0U;
	static uint32_t x3 = 3677U;
	static uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 779379420U;

	t0 = (x1^((x2%x3)-x4));

	if (t0 != 4294967169U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	volatile int16_t x6 = -1;
	uint16_t x7 = 63U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -2058389;

	t1 = (x5^((x6%x7)-x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int64_t x10 = -1LL;
	int32_t x11 = -4195995;
	static uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 8269491932134874LLU;

	t2 = (x9^((x10%x11)-x12));

	if (t2 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -3;
	static int32_t x15 = INT32_MIN;
	uint16_t x16 = 29835U;
	static int32_t t3 = -1208;

	t3 = (x13^((x14%x15)-x16));

	if (t3 != 29869) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	volatile int64_t x18 = -1235LL;
	volatile int8_t x20 = -3;
	int64_t t4 = 13293055056LL;

	t4 = (x17^((x18%x19)-x20));

	if (t4 != -1201LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 116U;
	uint64_t x22 = 5532958943469805LLU;
	int64_t x23 = INT64_MAX;
	volatile int16_t x24 = INT16_MAX;
	volatile uint64_t t5 = 19761452294387LLU;

	t5 = (x21^((x22%x23)-x24));

	if (t5 != 5532958943436954LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	volatile int32_t x26 = -108049815;
	int64_t x27 = -2LL;
	volatile int64_t t6 = 531420554207319LL;

	t6 = (x25^((x26%x27)-x28));

	if (t6 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MIN;
	uint16_t x32 = 0U;
	static volatile int32_t t7 = -2714;

	t7 = (x29^((x30%x31)-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -975735146332898LL;
	static int64_t x35 = INT64_MIN;
	int64_t t8 = 504553336226LL;

	t8 = (x33^((x34%x35)-x36));

	if (t8 != 975735146342885LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 9684U;
	int32_t x38 = INT32_MAX;
	static volatile int16_t x39 = -1;
	int32_t x40 = 11737;
	volatile int32_t t9 = 806059663;

	t9 = (x37^((x38%x39)-x40));

	if (t9 != -2061) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x43 = 1326;
	volatile int8_t x44 = INT8_MIN;
	volatile uint32_t t10 = 1U;

	t10 = (x41^((x42%x43)-x44));

	if (t10 != 488212U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 5;
	volatile int8_t x46 = INT8_MIN;
	static uint64_t x47 = UINT64_MAX;
	static uint64_t t11 = 303767246274LLU;

	t11 = (x45^((x46%x47)-x48));

	if (t11 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 34U;
	uint64_t x50 = UINT64_MAX;

	t12 = (x49^((x50%x51)-x52));

	if (t12 != 2147483681LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = 20;
	uint32_t x55 = UINT32_MAX;
	static int64_t x56 = 18189LL;

	t13 = (x53^((x54%x55)-x56));

	if (t13 != 18055LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	uint64_t x58 = 212248535317108209LLU;
	int32_t x59 = -1;
	int32_t x60 = INT32_MIN;

	t14 = (x57^((x58%x59)-x60));

	if (t14 != 212248537464580622LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 1702U;
	static int16_t x62 = INT16_MIN;
	uint64_t x63 = 124LLU;
	uint8_t x64 = 5U;
	uint64_t t15 = 3LLU;

	t15 = (x61^((x62%x63)-x64));

	if (t15 != 1729LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int16_t x66 = 2609;
	static volatile int32_t x67 = -1;
	volatile int64_t x68 = -17751285621568LL;
	volatile uint64_t t16 = 39650723873LLU;

	t16 = (x65^((x66%x67)-x68));

	if (t16 != 18446726322423930047LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MAX;
	volatile int64_t x70 = -1LL;
	volatile int8_t x71 = INT8_MIN;
	volatile int16_t x72 = 1;
	int64_t t17 = 34711635991187987LL;

	t17 = (x69^((x70%x71)-x72));

	if (t17 != -127LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	static int16_t x78 = -9;
	int8_t x79 = -1;
	int8_t x80 = -1;
	int32_t t18 = 15;

	t18 = (x77^((x78%x79)-x80));

	if (t18 != 126) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = INT16_MIN;
	uint32_t x83 = UINT32_MAX;
	static volatile uint8_t x84 = 1U;
	uint32_t t19 = 631617U;

	t19 = (x81^((x82%x83)-x84));

	if (t19 != 4294935345U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 389LLU;
	int8_t x86 = 28;
	int32_t x87 = INT32_MIN;
	static uint8_t x88 = 13U;
	static uint64_t t20 = 4049094160LLU;

	t20 = (x85^((x86%x87)-x88));

	if (t20 != 394LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x93 = INT64_MAX;
	int64_t x94 = -1LL;
	static int32_t x95 = INT32_MIN;
	static uint8_t x96 = 54U;
	volatile int64_t t21 = 2836404603304LL;

	t21 = (x93^((x94%x95)-x96));

	if (t21 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x98 = UINT16_MAX;
	volatile int8_t x99 = -1;
	volatile int16_t x100 = INT16_MAX;
	volatile int32_t t22 = -12054;

	t22 = (x97^((x98%x99)-x100));

	if (t22 != -32651) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x101 = 3U;
	int32_t x103 = INT32_MIN;
	int8_t x104 = -37;
	static volatile int32_t t23 = -312885933;

	t23 = (x101^((x102%x103)-x104));

	if (t23 != -450) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x107 = INT8_MAX;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t24 = 493995411395LLU;

	t24 = (x105^((x106%x107)-x108));

	if (t24 != 32767LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MAX;
	int8_t x110 = -1;
	static volatile int64_t x112 = -14LL;
	static volatile int64_t t25 = 2974241231LL;

	t25 = (x109^((x110%x111)-x112));

	if (t25 != 114LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x113 = INT32_MAX;
	volatile int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	int32_t t26 = -11695597;

	t26 = (x113^((x114%x115)-x116));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x118 = 135178335609LLU;
	volatile int64_t x119 = -124LL;
	int8_t x120 = INT8_MAX;
	volatile uint64_t t27 = 2440876879LLU;

	t27 = (x117^((x118%x119)-x120));

	if (t27 != 9223372172033111290LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = 3;
	static volatile uint64_t x123 = UINT64_MAX;
	uint64_t t28 = 0LLU;

	t28 = (x121^((x122%x123)-x124));

	if (t28 != 18446744073709551451LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x129 = -107LL;
	int64_t x130 = INT64_MIN;
	int64_t x131 = -1LL;

	t29 = (x129^((x130%x131)-x132));

	if (t29 != 148LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = 1067018211614884090LL;
	uint16_t x134 = UINT16_MAX;
	volatile int64_t x135 = -1LL;
	static int32_t x136 = -1;
	int64_t t30 = -500217838053LL;

	t30 = (x133^((x134%x135)-x136));

	if (t30 != 1067018211614884091LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x140 = 902U;
	static volatile int32_t t31 = 1;

	t31 = (x137^((x138%x139)-x140));

	if (t31 != 774) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	volatile uint16_t x144 = UINT16_MAX;
	uint32_t t32 = 80371384U;

	t32 = (x141^((x142%x143)-x144));

	if (t32 != 4294654084U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x145 = -1;
	int8_t x146 = 13;
	volatile uint64_t x148 = UINT64_MAX;
	volatile uint64_t t33 = 27398LLU;

	t33 = (x145^((x146%x147)-x148));

	if (t33 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = 255;
	int8_t x150 = INT8_MIN;
	int64_t x151 = 4922LL;
	int16_t x152 = INT16_MIN;

	t34 = (x149^((x150%x151)-x152));

	if (t34 != 32639LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 12U;
	int64_t x158 = INT64_MAX;
	int16_t x159 = -57;
	uint8_t x160 = 88U;
	volatile int64_t t35 = -374578818LL;

	t35 = (x157^((x158%x159)-x160));

	if (t35 != -45LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = 256979101LLU;
	int32_t x163 = -3;

	t36 = (x161^((x162%x163)-x164));

	if (t36 != 18446744073452539746LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x166 = INT64_MIN;
	static int32_t x167 = INT32_MIN;
	int64_t x168 = -1443LL;
	static volatile uint64_t t37 = 455LLU;

	t37 = (x165^((x166%x167)-x168));

	if (t37 != 18446744073709550172LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -1;
	int8_t x170 = 20;
	int8_t x171 = -1;
	volatile int16_t x172 = INT16_MIN;
	volatile int32_t t38 = -4511403;

	t38 = (x169^((x170%x171)-x172));

	if (t38 != -32769) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = -1;
	volatile int64_t x174 = INT64_MIN;
	static int64_t x175 = -1LL;
	int64_t x176 = -28751LL;
	int64_t t39 = -575107353444373363LL;

	t39 = (x173^((x174%x175)-x176));

	if (t39 != -28752LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x178 = 450196151144LL;
	int16_t x179 = -128;
	volatile int64_t t40 = -1646360815203768LL;

	t40 = (x177^((x178%x179)-x180));

	if (t40 != -1539863LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x183 = -1;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t41 = 137743332927424LLU;

	t41 = (x181^((x182%x183)-x184));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = 3777821164LLU;
	static int32_t x186 = -1;
	volatile uint64_t x187 = UINT64_MAX;
	volatile int8_t x188 = INT8_MAX;

	t42 = (x185^((x186%x187)-x188));

	if (t42 != 18446744069931730541LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x189 = -1;
	volatile uint64_t x190 = 106699359504502806LLU;
	static int64_t x192 = INT64_MIN;
	volatile uint64_t t43 = 101862LLU;

	t43 = (x189^((x190%x191)-x192));

	if (t43 != 9223372036790812041LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = -671517932532LL;
	int32_t x194 = -1;
	int32_t x195 = INT32_MAX;
	int8_t x196 = INT8_MIN;
	static int64_t t44 = 449LL;

	t44 = (x193^((x194%x195)-x196));

	if (t44 != -671517932429LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 7732738U;
	int32_t x198 = -1;
	int64_t x199 = -12231LL;
	static volatile int8_t x200 = INT8_MIN;
	static int64_t t45 = -15878662339267210LL;

	t45 = (x197^((x198%x199)-x200));

	if (t45 != 7732861LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x201 = 1150U;
	static uint64_t x203 = 6984057962966LLU;
	int8_t x204 = 30;

	t46 = (x201^((x202%x203)-x204));

	if (t46 != 64415LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x205 = 33;
	int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MAX;
	static volatile int64_t t47 = -34786505149LL;

	t47 = (x205^((x206%x207)-x208));

	if (t47 != -32735LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = 138;
	int8_t x210 = INT8_MIN;
	static volatile int32_t t48 = -5575526;

	t48 = (x209^((x210%x211)-x212));

	if (t48 != 32522) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = -698942940;
	int32_t x215 = INT32_MAX;
	int64_t x216 = -1LL;

	t49 = (x213^((x214%x215)-x216));

	if (t49 != 698972709LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x217 = 0U;
	int32_t x218 = 20800;
	volatile int64_t x219 = -1LL;
	volatile uint64_t t50 = 801864230LLU;

	t50 = (x217^((x218%x219)-x220));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MIN;
	uint64_t x222 = UINT64_MAX;
	int16_t x224 = -846;
	static volatile uint64_t t51 = 170737535932LLU;

	t51 = (x221^((x222%x223)-x224));

	if (t51 != 18446744071562068941LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x227 = 4;
	int64_t t52 = -22256827146050869LL;

	t52 = (x225^((x226%x227)-x228));

	if (t52 != -1132634LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x229 = INT16_MIN;
	volatile uint64_t x230 = 55442705279LLU;
	uint8_t x231 = 1U;
	static uint64_t x232 = UINT64_MAX;
	uint64_t t53 = 5102526LLU;

	t53 = (x229^((x230%x231)-x232));

	if (t53 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = UINT8_MAX;
	static int8_t x234 = INT8_MAX;
	uint8_t x235 = 7U;
	int64_t x236 = INT64_MAX;
	volatile int64_t t54 = -677496LL;

	t54 = (x233^((x234%x235)-x236));

	if (t54 != -9223372036854775555LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = INT8_MIN;
	static volatile int64_t x238 = -1LL;
	volatile uint16_t x240 = 19592U;
	volatile int64_t t55 = -146LL;

	t55 = (x237^((x238%x239)-x240));

	if (t55 != 19703LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = INT32_MAX;
	uint16_t x243 = 97U;
	int8_t x244 = INT8_MIN;
	volatile int64_t t56 = 348990858LL;

	t56 = (x241^((x242%x243)-x244));

	if (t56 != 2147483598LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = INT16_MIN;
	static volatile uint64_t x246 = 1020LLU;
	int64_t x247 = INT64_MIN;
	int16_t x248 = -4698;
	static volatile uint64_t t57 = 2270864100987171LLU;

	t57 = (x245^((x246%x247)-x248));

	if (t57 != 18446744073709524566LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x253 = INT8_MIN;
	int64_t x254 = 24520518854LL;
	volatile uint16_t x255 = UINT16_MAX;
	static int8_t x256 = -1;
	volatile int64_t t58 = -68088LL;

	t58 = (x253^((x254%x255)-x256));

	if (t58 != -8746LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MAX;
	uint32_t x259 = 1U;
	volatile uint8_t x260 = 29U;

	t59 = (x257^((x258%x259)-x260));

	if (t59 != 4294967196U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x262 = -1LL;
	int8_t x263 = -14;
	volatile int64_t x264 = INT64_MAX;
	int64_t t60 = -444151468385002LL;

	t60 = (x261^((x262%x263)-x264));

	if (t60 != 9223372036773365195LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x265 = INT64_MAX;
	volatile int16_t x266 = -14;
	volatile int16_t x267 = -63;
	uint16_t x268 = UINT16_MAX;
	int64_t t61 = 2790LL;

	t61 = (x265^((x266%x267)-x268));

	if (t61 != -9223372036854710260LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MIN;
	uint16_t x270 = 188U;
	int8_t x272 = INT8_MIN;
	int32_t t62 = 1586167;

	t62 = (x269^((x270%x271)-x272));

	if (t62 != -2147483520) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = 0;
	int32_t x274 = INT32_MAX;
	volatile uint64_t t63 = 3187048397486963LLU;

	t63 = (x273^((x274%x275)-x276));

	if (t63 != 1368LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x277 = INT16_MIN;
	int64_t x278 = -14937073120LL;
	uint8_t x279 = 2U;
	uint16_t x280 = 197U;
	int64_t t64 = -2226926LL;

	t64 = (x277^((x278%x279)-x280));

	if (t64 != 32571LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = -4480;
	int16_t x286 = INT16_MAX;
	uint64_t x287 = UINT64_MAX;
	uint64_t t65 = 4357LLU;

	t65 = (x285^((x286%x287)-x288));

	if (t65 != 18446744073709514495LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = INT8_MAX;
	static int8_t x290 = -1;
	int32_t x291 = INT32_MIN;
	int32_t x292 = INT32_MIN;
	volatile int32_t t66 = 953;

	t66 = (x289^((x290%x291)-x292));

	if (t66 != 2147483520) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x295 = 82694977LLU;
	uint32_t x296 = 961U;
	volatile uint64_t t67 = 79LLU;

	t67 = (x293^((x294%x295)-x296));

	if (t67 != 18446744073709550687LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x297 = -1;
	static uint64_t x298 = UINT64_MAX;
	static uint64_t x299 = 10347846561504345LLU;
	uint16_t x300 = UINT16_MAX;
	static volatile uint64_t t68 = 62705LLU;

	t68 = (x297^((x298%x299)-x300));

	if (t68 != 18439862572600808325LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x302 = UINT64_MAX;
	int64_t x303 = -1LL;
	int32_t x304 = INT32_MAX;
	uint64_t t69 = 4044977041LLU;

	t69 = (x301^((x302%x303)-x304));

	if (t69 != 2147483646LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = INT64_MIN;
	volatile uint8_t x306 = 0U;
	int16_t x307 = INT16_MIN;
	volatile int16_t x308 = -1;
	volatile int64_t t70 = 33976542076420LL;

	t70 = (x305^((x306%x307)-x308));

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = -1LL;
	int64_t x311 = INT64_MAX;
	int8_t x312 = INT8_MIN;
	volatile int64_t t71 = 245129008LL;

	t71 = (x309^((x310%x311)-x312));

	if (t71 != 2147483519LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	volatile uint64_t x315 = UINT64_MAX;
	uint16_t x316 = 28U;
	uint64_t t72 = 43LLU;

	t72 = (x313^((x314%x315)-x316));

	if (t72 != 18446744069414584348LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x317 = 924544LL;
	static uint8_t x319 = UINT8_MAX;
	uint32_t x320 = 54U;
	static int64_t t73 = -60849642011LL;

	t73 = (x317^((x318%x319)-x320));

	if (t73 != 924617LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x321 = 3914U;
	int8_t x322 = INT8_MIN;
	int16_t x323 = -1;
	int32_t t74 = 1;

	t74 = (x321^((x322%x323)-x324));

	if (t74 != -3916) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x325 = INT64_MIN;
	uint16_t x327 = UINT16_MAX;
	int32_t x328 = -1;
	volatile int64_t t75 = 11529693584148LL;

	t75 = (x325^((x326%x327)-x328));

	if (t75 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x329 = INT64_MIN;
	uint16_t x330 = 40U;
	static int64_t x332 = -1LL;
	static volatile int64_t t76 = 181677219905748769LL;

	t76 = (x329^((x330%x331)-x332));

	if (t76 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MIN;
	volatile uint16_t x334 = UINT16_MAX;
	static int8_t x335 = INT8_MIN;
	uint16_t x336 = 1855U;
	volatile int32_t t77 = -867;

	t77 = (x333^((x334%x335)-x336));

	if (t77 != 1728) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = INT8_MAX;
	static volatile int8_t x338 = INT8_MIN;
	int32_t x339 = -1;

	t78 = (x337^((x338%x339)-x340));

	if (t78 != -34) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x341 = 1U;
	int64_t x342 = 12429443LL;
	int32_t x343 = INT32_MAX;
	static uint8_t x344 = 3U;
	int64_t t79 = 14939675062LL;

	t79 = (x341^((x342%x343)-x344));

	if (t79 != 12429441LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = INT64_MIN;
	int64_t x346 = -1LL;
	int64_t x347 = 478967969LL;
	uint32_t x348 = 124U;
	volatile int64_t t80 = -1963427865527LL;

	t80 = (x345^((x346%x347)-x348));

	if (t80 != 9223372036854775683LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x349 = 967146U;
	uint16_t x350 = 6946U;
	int16_t x351 = INT16_MIN;
	volatile int16_t x352 = -1;
	uint32_t t81 = 621776297U;

	t81 = (x349^((x350%x351)-x352));

	if (t81 != 973513U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x353 = INT32_MIN;
	volatile uint64_t x354 = 189LLU;
	volatile uint64_t t82 = 124653LLU;

	t82 = (x353^((x354%x355)-x356));

	if (t82 != 2147483582LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x357 = -1;
	uint32_t x358 = UINT32_MAX;
	static int64_t x359 = -1LL;
	volatile int64_t t83 = -204093688LL;

	t83 = (x357^((x358%x359)-x360));

	if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x361 = 1;
	volatile int64_t x362 = INT64_MIN;
	int64_t t84 = -178974098385473LL;

	t84 = (x361^((x362%x363)-x364));

	if (t84 != 6LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x365 = INT8_MAX;
	uint16_t x366 = 1U;
	int16_t x367 = INT16_MIN;
	volatile int16_t x368 = INT16_MIN;
	int32_t t85 = 37;

	t85 = (x365^((x366%x367)-x368));

	if (t85 != 32894) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x369 = 11502171U;
	static int8_t x370 = INT8_MIN;
	int32_t x371 = 11163;
	int32_t x372 = -518100021;

	t86 = (x369^((x370%x371)-x372));

	if (t86 != 508432878U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x374 = INT16_MIN;
	volatile int16_t x375 = INT16_MIN;
	uint8_t x376 = UINT8_MAX;
	uint32_t t87 = 13U;

	t87 = (x373^((x374%x375)-x376));

	if (t87 != 4294963530U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x377 = -1;
	int32_t x378 = -3694;
	int16_t x379 = -19;
	uint32_t x380 = 8736U;

	t88 = (x377^((x378%x379)-x380));

	if (t88 != 8743U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x381 = 78U;
	static int32_t x383 = -1;
	volatile int16_t x384 = 155;
	uint64_t t89 = 1LLU;

	t89 = (x381^((x382%x383)-x384));

	if (t89 != 5505350063793LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = 720407020LLU;
	int64_t x386 = 97245502762111LL;
	volatile int32_t x387 = INT32_MIN;
	static volatile uint64_t t90 = 54564LLU;

	t90 = (x385^((x386%x387)-x388));

	if (t90 != 290907539LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x389 = INT64_MAX;
	int16_t x390 = INT16_MIN;
	volatile int16_t x391 = 905;
	static int64_t x392 = 92511LL;
	static int64_t t91 = -17LL;

	t91 = (x389^((x390%x391)-x392));

	if (t91 != -9223372036854683110LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x394 = INT64_MIN;
	int64_t x395 = INT64_MIN;
	volatile uint8_t x396 = 13U;
	int64_t t92 = 1843915229LL;

	t92 = (x393^((x394%x395)-x396));

	if (t92 != -116LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x397 = UINT64_MAX;
	uint8_t x400 = 118U;
	volatile uint64_t t93 = 2198835093637160LLU;

	t93 = (x397^((x398%x399)-x400));

	if (t93 != 117LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = 0LL;
	int32_t x402 = 762697772;
	int8_t x403 = -1;
	int32_t x404 = INT32_MAX;
	static volatile int64_t t94 = 3437257090853LL;

	t94 = (x401^((x402%x403)-x404));

	if (t94 != -2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x406 = UINT64_MAX;
	volatile int32_t x407 = -200;
	static int32_t x408 = 1289;
	volatile uint64_t t95 = 794392LLU;

	t95 = (x405^((x406%x407)-x408));

	if (t95 != 11631LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x410 = INT8_MIN;
	int64_t x411 = 96243LL;
	uint16_t x412 = UINT16_MAX;
	int64_t t96 = -13471960680596115LL;

	t96 = (x409^((x410%x411)-x412));

	if (t96 != -242622553LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x414 = -1;
	int8_t x415 = INT8_MIN;
	int64_t t97 = INT64_MIN;

	t97 = (x413^((x414%x415)-x416));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x417 = 10484757;
	volatile uint16_t x418 = 178U;
	int64_t x420 = INT64_MAX;
	static volatile int64_t t98 = -6LL;

	t98 = (x417^((x418%x419)-x420));

	if (t98 != -9223372036844291052LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x422 = -13679;
	int32_t x423 = INT32_MIN;
	static uint16_t x424 = 855U;
	volatile int32_t t99 = -4097529;

	t99 = (x421^((x422%x423)-x424));

	if (t99 != 5886177) { NG(); } else { ; }
	
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

