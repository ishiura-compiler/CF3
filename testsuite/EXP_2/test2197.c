#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
volatile int8_t x7 = -1;
static uint32_t x11 = 8995477U;
static int16_t x12 = -1;
int16_t x25 = INT16_MIN;
int8_t x27 = INT8_MAX;
uint16_t x30 = UINT16_MAX;
int16_t x41 = -21;
volatile int16_t x53 = INT16_MIN;
int32_t x54 = 26074319;
static volatile int32_t t13 = -134;
uint16_t x63 = UINT16_MAX;
int32_t t15 = -53;
int8_t x67 = INT8_MIN;
static volatile int32_t t16 = 907;
static uint64_t x72 = 63336LLU;
uint64_t t17 = 2304445771532LLU;
int8_t x74 = 1;
uint16_t x85 = UINT16_MAX;
uint32_t x86 = UINT32_MAX;
int64_t x88 = INT64_MIN;
int32_t x90 = INT32_MIN;
int32_t x92 = 2;
uint64_t x101 = UINT64_MAX;
int32_t x107 = -21692864;
volatile int32_t t26 = -184;
static volatile int32_t t27 = -69896;
static int8_t x113 = -41;
static uint16_t x114 = 137U;
static int8_t x120 = INT8_MAX;
volatile int32_t t29 = 6;
int64_t x121 = INT64_MIN;
static int8_t x123 = INT8_MIN;
static uint16_t x128 = 1136U;
volatile uint64_t t31 = 13LLU;
volatile uint16_t x135 = 0U;
uint32_t x140 = 30U;
int8_t x145 = INT8_MIN;
volatile int32_t x147 = INT32_MAX;
static volatile int32_t t38 = 4150;
int16_t x158 = INT16_MIN;
int16_t x163 = -1;
int16_t x164 = INT16_MAX;
int32_t x166 = -4;
static int8_t x168 = -1;
volatile uint8_t x185 = 3U;
uint8_t x200 = 63U;
volatile int32_t x202 = INT32_MIN;
static int32_t x212 = 15835;
int8_t x216 = -1;
int32_t x223 = INT32_MIN;
int16_t x226 = -1;
uint32_t x229 = 3743471U;
volatile int16_t x233 = -1;
int16_t x250 = -1;
uint32_t x251 = 62U;
uint16_t x261 = UINT16_MAX;
uint64_t t65 = 1391839520204915109LLU;
int32_t x275 = 0;
int16_t x280 = INT16_MIN;
int32_t t69 = 9196048;
volatile uint32_t x283 = 102U;
volatile uint64_t t71 = 628988814LLU;
int64_t x289 = INT64_MIN;
int16_t x294 = INT16_MIN;
int64_t x297 = -1LL;
int32_t x307 = 136430288;
int64_t x308 = 6676972118LL;
int64_t x309 = INT64_MIN;
volatile int16_t x313 = INT16_MAX;
int64_t x314 = INT64_MIN;
volatile uint64_t x316 = 22712LLU;
static int8_t x318 = INT8_MIN;
volatile uint32_t x325 = 277U;
volatile int64_t t82 = 7LL;
static int16_t x333 = 1;
volatile int64_t x334 = -1LL;
static volatile uint64_t x339 = 248871403LLU;
int16_t x345 = -1;
int8_t x348 = -1;
static uint64_t x350 = UINT64_MAX;
static volatile uint64_t t87 = 8LLU;
int32_t x353 = INT32_MIN;
volatile int8_t x357 = 20;
int32_t x360 = INT32_MAX;
static volatile int64_t x362 = 235829965901669LL;
static int16_t x364 = -11099;
int64_t t90 = -46790002LL;
static int16_t x365 = INT16_MAX;
volatile int16_t x368 = -247;
volatile int64_t x371 = INT64_MIN;
uint32_t x376 = 1U;
volatile int32_t x377 = 7551;
static int16_t x381 = INT16_MAX;
volatile int8_t x382 = INT8_MAX;
static uint64_t x385 = 328LLU;
volatile uint64_t t96 = 15194250LLU;
int32_t x389 = INT32_MIN;
volatile int32_t t97 = 7703378;
uint64_t x397 = 6288333778376370696LLU;
uint8_t x399 = UINT8_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int8_t x2 = -1;
	static int16_t x4 = -1;
	int32_t t0 = 3895;

	t0 = ((x1^(x2^x3))^x4);

	if (t0 != 2147483520) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 47922243603194374LL;
	uint8_t x6 = UINT8_MAX;
	int32_t x8 = INT32_MAX;
	int64_t t1 = 1066946591547981LL;

	t1 = ((x5^(x6^x7))^x8);

	if (t1 != -47922242972097799LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 13;
	int32_t x10 = -65130;
	uint32_t t2 = 234559U;

	t2 = ((x9^(x10^x11))^x12);

	if (t2 != 9026801U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 2U;
	uint32_t x14 = 8U;
	uint64_t x15 = UINT64_MAX;
	static int8_t x16 = INT8_MAX;
	volatile uint64_t t3 = 14220LLU;

	t3 = ((x13^(x14^x15))^x16);

	if (t3 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -771297;
	int64_t x18 = INT64_MIN;
	uint64_t x19 = 8865078LLU;
	uint8_t x20 = 7U;
	uint64_t t4 = 575233274558647LLU;

	t4 = ((x17^(x18^x19))^x20);

	if (t4 != 9223372036845567534LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 9;
	uint16_t x22 = 1U;
	volatile int64_t x23 = INT64_MIN;
	int16_t x24 = -16136;
	static int64_t t5 = -435482242464LL;

	t5 = ((x21^(x22^x23))^x24);

	if (t5 != 9223372036854759664LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x26 = INT32_MIN;
	volatile uint64_t x28 = 11947653150LLU;
	volatile uint64_t t6 = 89LLU;

	t6 = ((x25^(x26^x27))^x28);

	if (t6 != 11674663009LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint64_t x31 = UINT64_MAX;
	uint32_t x32 = 189U;
	uint64_t t7 = 37406088318LLU;

	t7 = ((x29^(x30^x31))^x32);

	if (t7 != 65341LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = UINT8_MAX;
	uint64_t x34 = 4103LLU;
	volatile int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	volatile uint64_t t8 = 76171524831945590LLU;

	t8 = ((x33^(x34^x35))^x36);

	if (t8 != 28536LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 3U;
	volatile int16_t x38 = -1;
	int64_t x39 = 42668LL;
	int16_t x40 = INT16_MIN;
	int64_t t9 = 359694204278LL;

	t9 = ((x37^(x38^x39))^x40);

	if (t9 != 55632LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MIN;
	static int64_t x44 = -30812LL;
	volatile int64_t t10 = 64327477572707LL;

	t10 = ((x41^(x42^x43))^x44);

	if (t10 != 9223372034707322959LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static uint8_t x46 = UINT8_MAX;
	int32_t x47 = INT32_MIN;
	uint8_t x48 = 119U;
	static int32_t t11 = 10063736;

	t11 = ((x45^(x46^x47))^x48);

	if (t11 != 136) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -2712457LL;
	volatile uint16_t x50 = UINT16_MAX;
	int8_t x51 = INT8_MIN;
	static int64_t x52 = -1LL;
	int64_t t12 = -2330874LL;

	t12 = ((x49^(x50^x51))^x52);

	if (t12 != -2726921LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x55 = INT16_MAX;
	int8_t x56 = INT8_MIN;

	t13 = ((x53^(x54^x55))^x56);

	if (t13 != 26074288) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int8_t x58 = INT8_MIN;
	int64_t x59 = -24583213LL;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t14 = 98442LLU;

	t14 = ((x57^(x58^x59))^x60);

	if (t14 != 9223372036830192556LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 3;
	volatile uint16_t x62 = UINT16_MAX;
	int16_t x64 = -10874;

	t15 = ((x61^(x62^x63))^x64);

	if (t15 != -10875) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile uint8_t x66 = 1U;
	int8_t x68 = -1;

	t16 = ((x65^(x66^x67))^x68);

	if (t16 != -2147483522) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	static int64_t x70 = INT64_MIN;
	volatile int8_t x71 = INT8_MAX;

	t17 = ((x69^(x70^x71))^x72);

	if (t17 != 9223372036854740759LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	volatile int64_t x75 = -282144723821808467LL;
	volatile uint16_t x76 = 29293U;
	static volatile int64_t t18 = 50001225LL;

	t18 = ((x73^(x74^x75))^x76);

	if (t18 != 282144723821803838LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 29;
	uint32_t x78 = UINT32_MAX;
	uint16_t x79 = UINT16_MAX;
	static int64_t x80 = 5308LL;
	int64_t t19 = 8287267540127LL;

	t19 = ((x77^(x78^x79))^x80);

	if (t19 != 4294907041LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 0;
	uint8_t x82 = UINT8_MAX;
	static uint32_t x83 = 33947112U;
	int8_t x84 = -16;
	static volatile uint32_t t20 = 25543125U;

	t20 = ((x81^(x82^x83))^x84);

	if (t20 != 4261020391U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x87 = -5723986;
	int64_t t21 = -53721098548LL;

	t21 = ((x85^(x86^x87))^x88);

	if (t21 != -9223372036849030994LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	static int32_t x91 = INT32_MAX;
	volatile int32_t t22 = -59341197;

	t22 = ((x89^(x90^x91))^x92);

	if (t22 != 32765) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	static int64_t x95 = -57933014835181LL;
	volatile uint64_t x96 = 48982007638445LLU;
	static uint64_t t23 = 384LLU;

	t23 = ((x93^(x94^x95))^x96);

	if (t23 != 26646378673854LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MAX;
	static int32_t x98 = INT32_MAX;
	static uint64_t x99 = 1609LLU;
	static int32_t x100 = -1;
	uint64_t t24 = 1059LLU;

	t24 = ((x97^(x98^x99))^x100);

	if (t24 != 18446744073709550006LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MIN;
	volatile uint64_t x103 = 459902572LLU;
	int16_t x104 = INT16_MIN;
	uint64_t t25 = 3196649LLU;

	t25 = ((x101^(x102^x103))^x104);

	if (t25 != 9223372037314703763LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint16_t x106 = 27U;
	int16_t x108 = INT16_MIN;

	t26 = ((x105^(x106^x107))^x108);

	if (t26 != -2125758885) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = 1U;
	int32_t x110 = 61778;
	uint8_t x111 = 14U;
	static int16_t x112 = INT16_MAX;

	t27 = ((x109^(x110^x111))^x112);

	if (t27 != 36514) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x115 = INT64_MIN;
	int8_t x116 = -1;
	volatile int64_t t28 = 520LL;

	t28 = ((x113^(x114^x115))^x116);

	if (t28 != -9223372036854775647LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = 11;
	uint16_t x118 = 11U;
	uint16_t x119 = 3U;

	t29 = ((x117^(x118^x119))^x120);

	if (t29 != 124) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = -860384077;
	static int64_t x124 = -51445052351899LL;
	int64_t t30 = -3333282082521317162LL;

	t30 = ((x121^(x122^x123))^x124);

	if (t30 != 9223320592552669526LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	static volatile uint64_t x126 = UINT64_MAX;
	volatile int16_t x127 = 1;

	t31 = ((x125^(x126^x127))^x128);

	if (t31 != 18446744073709550449LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 980U;
	uint32_t x130 = 217993390U;
	volatile int8_t x131 = -1;
	int32_t x132 = INT32_MIN;
	volatile uint32_t t32 = 152478519U;

	t32 = ((x129^(x130^x131))^x132);

	if (t32 != 1929489541U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = INT32_MAX;
	static uint16_t x134 = 28U;
	uint32_t x136 = 923595732U;
	volatile uint32_t t33 = 744U;

	t33 = ((x133^(x134^x135))^x136);

	if (t33 != 1223887927U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = 28624219;
	int64_t x138 = INT64_MIN;
	static uint64_t x139 = 47111671317LLU;
	volatile uint64_t t34 = 40587282LLU;

	t34 = ((x137^(x138^x139))^x140);

	if (t34 != 9223372083992972112LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -6;
	uint8_t x142 = 1U;
	int8_t x143 = INT8_MAX;
	int64_t x144 = INT64_MIN;
	int64_t t35 = 639470LL;

	t35 = ((x141^(x142^x143))^x144);

	if (t35 != 9223372036854775684LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x146 = 5;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t36 = 1494689257U;

	t36 = ((x145^(x146^x147))^x148);

	if (t36 != 2147483525U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = -147115764LL;
	static int64_t x150 = -228LL;
	static int32_t x151 = INT32_MIN;
	int64_t x152 = -57LL;
	int64_t t37 = -49479388LL;

	t37 = ((x149^(x150^x151))^x152);

	if (t37 != 2000368087LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	int32_t x154 = -65236;
	volatile int32_t x155 = -1;
	static volatile int8_t x156 = -1;

	t38 = ((x153^(x154^x155))^x156);

	if (t38 != 65235) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 61870U;
	static int8_t x159 = INT8_MAX;
	int16_t x160 = INT16_MAX;
	volatile uint32_t t39 = 5118U;

	t39 = ((x157^(x158^x159))^x160);

	if (t39 != 4294905390U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 6480703670405970LLU;
	volatile int8_t x162 = -1;
	volatile uint64_t t40 = 4302285455LLU;

	t40 = ((x161^(x162^x163))^x164);

	if (t40 != 6480703670400173LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x165 = 13U;
	volatile int16_t x167 = INT16_MIN;
	int32_t t41 = 665625852;

	t41 = ((x165^(x166^x167))^x168);

	if (t41 != -32754) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	uint64_t x170 = 191477657000LLU;
	volatile uint16_t x171 = UINT16_MAX;
	uint64_t x172 = UINT64_MAX;
	uint64_t t42 = 6799902313746203LLU;

	t42 = ((x169^(x170^x171))^x172);

	if (t42 != 18446743882231861847LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile uint64_t x174 = 25075986LLU;
	static int64_t x175 = INT64_MIN;
	int32_t x176 = -1;
	volatile uint64_t t43 = 14LLU;

	t43 = ((x173^(x174^x175))^x176);

	if (t43 != 18446744073684475629LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	int32_t x178 = -1;
	uint64_t x179 = 526666LLU;
	volatile uint16_t x180 = 62U;
	volatile uint64_t t44 = 281875892LLU;

	t44 = ((x177^(x178^x179))^x180);

	if (t44 != 526708LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -217690370783349LL;
	uint8_t x182 = 3U;
	int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MAX;
	int64_t t45 = 3416650534721793LL;

	t45 = ((x181^(x182^x183))^x184);

	if (t45 != 9223154346483992567LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MIN;
	uint64_t x187 = 5169963067042207LLU;
	int64_t x188 = -16756LL;
	volatile uint64_t t46 = 2579213141614LLU;

	t46 = ((x185^(x186^x187))^x188);

	if (t46 != 5169963067025552LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 23452750;
	static int32_t x190 = INT32_MIN;
	uint16_t x191 = 2689U;
	int64_t x192 = -9301269LL;
	static int64_t t47 = -1381365LL;

	t47 = ((x189^(x190^x191))^x192);

	if (t47 != 2115486756LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 0;
	volatile int8_t x194 = INT8_MIN;
	static volatile uint64_t x195 = 13565982108907LLU;
	int8_t x196 = INT8_MAX;
	uint64_t t48 = 852853883714369917LLU;

	t48 = ((x193^(x194^x195))^x196);

	if (t48 != 18446730507727442708LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	uint32_t x198 = 66406904U;
	int32_t x199 = 7;
	static volatile int64_t t49 = -2967450970983LL;

	t49 = ((x197^(x198^x199))^x200);

	if (t49 != -9223372036788368960LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 496644U;
	static int64_t x203 = INT64_MAX;
	volatile int64_t x204 = 4LL;
	static int64_t t50 = 3398LL;

	t50 = ((x201^(x202^x203))^x204);

	if (t50 != -9223372034707788801LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 9U;
	int8_t x206 = -43;
	int32_t x207 = -3426;
	uint16_t x208 = 1894U;
	int32_t t51 = -3952;

	t51 = ((x205^(x206^x207))^x208);

	if (t51 != 2596) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -1;
	int16_t x210 = INT16_MAX;
	int16_t x211 = -1;
	volatile int32_t t52 = -3756453;

	t52 = ((x209^(x210^x211))^x212);

	if (t52 != 16932) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = 1U;
	int16_t x214 = INT16_MIN;
	volatile uint64_t x215 = 7057841823548282LLU;
	uint64_t t53 = 6336LLU;

	t53 = ((x213^(x214^x215))^x216);

	if (t53 != 7057841823579268LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	static int16_t x218 = INT16_MIN;
	int64_t x219 = -1LL;
	volatile int8_t x220 = -7;
	volatile int64_t t54 = 3154130860LL;

	t54 = ((x217^(x218^x219))^x220);

	if (t54 != 32761LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = -6;
	static int64_t x222 = 90LL;
	int8_t x224 = 6;
	volatile int64_t t55 = 131559217LL;

	t55 = ((x221^(x222^x223))^x224);

	if (t55 != 2147483558LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int64_t x227 = INT64_MIN;
	int32_t x228 = -1;
	volatile int64_t t56 = -1832769967724LL;

	t56 = ((x225^(x226^x227))^x228);

	if (t56 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MIN;
	int16_t x231 = INT16_MAX;
	volatile int8_t x232 = -9;
	volatile int64_t t57 = 583LL;

	t57 = ((x229^(x230^x231))^x232);

	if (t57 != 9223372036851015399LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 24U;
	uint16_t x235 = UINT16_MAX;
	int8_t x236 = INT8_MAX;
	static int32_t t58 = 230523218;

	t58 = ((x233^(x234^x235))^x236);

	if (t58 != -65433) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x237 = INT64_MIN;
	int16_t x238 = -1;
	uint32_t x239 = 1280787U;
	int64_t x240 = INT64_MIN;
	volatile int64_t t59 = -28840215528LL;

	t59 = ((x237^(x238^x239))^x240);

	if (t59 != 4293686508LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MIN;
	int16_t x243 = -3;
	static volatile uint8_t x244 = 13U;
	int64_t t60 = -17576208316931LL;

	t60 = ((x241^(x242^x243))^x244);

	if (t60 != -9223372036854775696LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	uint64_t x246 = 5574153696639160734LLU;
	uint32_t x247 = UINT32_MAX;
	int32_t x248 = -215618063;
	uint64_t t61 = 5LLU;

	t61 = ((x245^(x246^x247))^x248);

	if (t61 != 5574153698982069136LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = UINT32_MAX;
	int16_t x252 = INT16_MAX;
	volatile uint32_t t62 = 1631422U;

	t62 = ((x249^(x250^x251))^x252);

	if (t62 != 32705U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 27U;
	static int64_t x254 = INT64_MIN;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = INT16_MIN;
	static volatile int64_t t63 = 359653088LL;

	t63 = ((x253^(x254^x255))^x256);

	if (t63 != 9223372036854743012LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	static volatile int32_t x258 = INT32_MIN;
	int32_t x259 = INT32_MIN;
	int32_t x260 = 410266589;
	int32_t t64 = 27684;

	t64 = ((x257^(x258^x259))^x260);

	if (t64 != -410266590) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x262 = 6LLU;
	int32_t x263 = -131741476;
	volatile int8_t x264 = INT8_MAX;

	t65 = ((x261^(x262^x263))^x264);

	if (t65 != 18446744073577772890LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	static uint16_t x267 = 7472U;
	static uint32_t x268 = 3515397U;
	volatile int64_t t66 = -625423481983676LL;

	t66 = ((x265^(x266^x267))^x268);

	if (t66 != 9223372036851251509LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MAX;
	int16_t x270 = 57;
	int16_t x271 = INT16_MAX;
	int64_t x272 = 704631677141LL;
	int64_t t67 = -1541238674LL;

	t67 = ((x269^(x270^x271))^x272);

	if (t67 != 9223371332223082732LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	int64_t x274 = -4339134518181LL;
	volatile int64_t x276 = 222LL;
	int64_t t68 = -553548980LL;

	t68 = ((x273^(x274^x275))^x276);

	if (t68 != -9223367697720257670LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MIN;

	t69 = ((x277^(x278^x279))^x280);

	if (t69 != 32640) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	static int8_t x282 = -1;
	volatile uint16_t x284 = 26459U;
	volatile int64_t t70 = -1937740824628970LL;

	t70 = ((x281^(x282^x283))^x284);

	if (t70 != -4294940867LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x286 = UINT64_MAX;
	static volatile uint16_t x287 = 16U;
	uint32_t x288 = 38921429U;

	t71 = ((x285^(x286^x287))^x288);

	if (t71 != 38921402LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = UINT8_MAX;
	static int8_t x291 = INT8_MIN;
	uint32_t x292 = 5534817U;
	int64_t t72 = 19411744LL;

	t72 = ((x289^(x290^x291))^x292);

	if (t72 != 9223372036849240862LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = 0;
	static uint64_t x295 = 186753820660821LLU;
	int16_t x296 = 2984;
	volatile uint64_t t73 = 39608LLU;

	t73 = ((x293^(x294^x295))^x296);

	if (t73 != 18446557319888871421LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x298 = INT8_MAX;
	uint16_t x299 = 20791U;
	int8_t x300 = INT8_MIN;
	int64_t t74 = 82LL;

	t74 = ((x297^(x298^x299))^x300);

	if (t74 != 20791LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 4008U;
	int32_t x302 = 23003;
	static uint8_t x303 = 107U;
	int8_t x304 = -4;
	int32_t t75 = 10154649;

	t75 = ((x301^(x302^x303))^x304);

	if (t75 != -22044) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 3086;
	volatile int16_t x306 = INT16_MAX;
	static volatile int64_t t76 = 2681606LL;

	t76 = ((x305^(x306^x307))^x308);

	if (t76 != 6540702583LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = -3;
	int64_t x311 = -1LL;
	int32_t x312 = -283393722;
	int64_t t77 = 472605463LL;

	t77 = ((x309^(x310^x311))^x312);

	if (t77 != 9223372036571382084LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x315 = INT8_MIN;
	volatile uint64_t t78 = 2LLU;

	t78 = ((x313^(x314^x315))^x316);

	if (t78 != 9223372036854765767LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	uint64_t x319 = UINT64_MAX;
	uint8_t x320 = 113U;
	static uint64_t t79 = 63007229767LLU;

	t79 = ((x317^(x318^x319))^x320);

	if (t79 != 18446744071562067982LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	int16_t x322 = -1;
	uint64_t x323 = 73833303160650762LLU;
	static int8_t x324 = INT8_MAX;
	static uint64_t t80 = 4667LLU;

	t80 = ((x321^(x322^x323))^x324);

	if (t80 != 73833303160650869LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = INT32_MIN;
	uint32_t x327 = 489U;
	int16_t x328 = -1;
	volatile uint32_t t81 = 189U;

	t81 = ((x325^(x326^x327))^x328);

	if (t81 != 2147483395U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = -215LL;
	static int16_t x330 = 1;
	static uint8_t x331 = 6U;
	static int64_t x332 = 386149230LL;

	t82 = ((x329^(x330^x331))^x332);

	if (t82 != -386149312LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x335 = UINT64_MAX;
	uint64_t x336 = UINT64_MAX;
	uint64_t t83 = 4854660963017038717LLU;

	t83 = ((x333^(x334^x335))^x336);

	if (t83 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 126449478;
	uint16_t x338 = 3U;
	int16_t x340 = -1925;
	uint64_t t84 = 84274470502048117LLU;

	t84 = ((x337^(x338^x339))^x340);

	if (t84 != 18446744073552525013LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 108483U;
	static int32_t x342 = -1;
	static uint32_t x343 = 1740U;
	int32_t x344 = -1;
	volatile uint32_t t85 = 741653047U;

	t85 = ((x341^(x342^x343))^x344);

	if (t85 != 106767U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MIN;
	uint64_t x347 = UINT64_MAX;
	static volatile uint64_t t86 = 135292327917355LLU;

	t86 = ((x345^(x346^x347))^x348);

	if (t86 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 828265U;
	static uint16_t x351 = 220U;
	uint8_t x352 = 18U;

	t87 = ((x349^(x350^x351))^x352);

	if (t87 != 18446744073708723288LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MIN;
	int32_t x356 = -1;
	static int64_t t88 = -65252986259LL;

	t88 = ((x353^(x354^x355))^x356);

	if (t88 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = -45;
	static int16_t x359 = -1;
	static int32_t t89 = 3746;

	t89 = ((x357^(x358^x359))^x360);

	if (t89 != 2147483591) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 1U;
	int16_t x363 = -1;

	t90 = ((x361^(x362^x363))^x364);

	if (t90 != 235829965907006LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x366 = INT64_MAX;
	int16_t x367 = INT16_MAX;
	static volatile int64_t t91 = -6550819LL;

	t91 = ((x365^(x366^x367))^x368);

	if (t91 != -9223372036854775562LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 179081U;
	volatile uint16_t x370 = 3408U;
	volatile int16_t x372 = 1;
	int64_t t92 = 87891811298182LL;

	t92 = ((x369^(x370^x371))^x372);

	if (t92 != -9223372036854597928LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = 117U;
	static int16_t x374 = INT16_MAX;
	int64_t x375 = INT64_MAX;
	int64_t t93 = -14953LL;

	t93 = ((x373^(x374^x375))^x376);

	if (t93 != 9223372036854743156LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MAX;
	int8_t x379 = INT8_MAX;
	volatile uint16_t x380 = UINT16_MAX;
	int32_t t94 = -50;

	t94 = ((x377^(x378^x379))^x380);

	if (t94 != 57984) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x383 = -6253;
	int16_t x384 = 199;
	static volatile int32_t t95 = 30351742;

	t95 = ((x381^(x382^x383))^x384);

	if (t95 != -26412) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x386 = 3LLU;
	static uint64_t x387 = UINT64_MAX;
	uint64_t x388 = 1888328650LLU;

	t96 = ((x385^(x386^x387))^x388);

	if (t96 != 18446744071821223294LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = 0;
	int16_t x391 = 151;
	int32_t x392 = -1;

	t97 = ((x389^(x390^x391))^x392);

	if (t97 != 2147483496) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = -82;
	int64_t x394 = 11552340553586LL;
	int8_t x395 = INT8_MAX;
	int64_t x396 = -1LL;
	int64_t t98 = 12399294235LL;

	t98 = ((x393^(x394^x395))^x396);

	if (t98 != 11552340553564LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = -1;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t99 = 4432468792352LLU;

	t99 = ((x397^(x398^x399))^x400);

	if (t99 != 6288333778376370935LLU) { NG(); } else { ; }
	
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

