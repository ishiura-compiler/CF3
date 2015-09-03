#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
static volatile int64_t x22 = INT64_MAX;
int16_t x23 = 162;
static uint8_t x24 = UINT8_MAX;
static int64_t x26 = INT64_MAX;
uint16_t x27 = 6U;
volatile int32_t t8 = 47242794;
int64_t x44 = -1LL;
volatile int8_t x46 = INT8_MAX;
int8_t x49 = INT8_MIN;
int32_t x57 = INT32_MIN;
volatile int32_t t13 = -276645006;
uint32_t x62 = 475U;
int32_t t15 = -1016721172;
int32_t x71 = 1;
static int16_t x80 = INT16_MIN;
int16_t x82 = -1;
int64_t x85 = INT64_MAX;
static volatile uint64_t x87 = 81347762908055025LLU;
volatile uint16_t x88 = 0U;
volatile int32_t t22 = 162;
static int32_t t25 = 997530562;
int16_t x117 = -483;
volatile int16_t x120 = -231;
int8_t x133 = -1;
int32_t t29 = -9;
uint8_t x142 = 39U;
uint32_t x151 = 1U;
int32_t t33 = -1889;
static int8_t x163 = INT8_MIN;
int16_t x165 = INT16_MAX;
int16_t x166 = -1;
int64_t x168 = INT64_MIN;
int64_t x171 = INT64_MIN;
int32_t t36 = -118098;
int16_t x174 = -1;
int32_t t38 = -3299;
uint64_t x181 = 2422814904234LLU;
int64_t x182 = INT64_MIN;
uint8_t x184 = UINT8_MAX;
static int32_t x189 = INT32_MAX;
uint16_t x193 = UINT16_MAX;
volatile int8_t x200 = INT8_MIN;
static volatile int32_t t43 = -1907;
int32_t x206 = INT32_MAX;
static volatile int8_t x213 = -1;
int64_t x236 = -121LL;
int8_t x243 = 1;
static volatile int8_t x252 = INT8_MIN;
volatile int64_t x253 = INT64_MIN;
static int32_t x265 = INT32_MAX;
int64_t x266 = INT64_MAX;
int32_t x272 = -309;
int64_t x278 = INT64_MAX;
static int8_t x279 = -1;
uint32_t x286 = UINT32_MAX;
int16_t x288 = INT16_MIN;
uint64_t x290 = UINT64_MAX;
int32_t x293 = INT32_MAX;
int32_t x306 = -848366;
uint16_t x310 = UINT16_MAX;
volatile int8_t x311 = INT8_MIN;
uint64_t x316 = UINT64_MAX;
volatile int32_t t67 = 125279;
volatile int32_t t68 = -12197353;
static volatile uint8_t x323 = 86U;
uint8_t x324 = 1U;
volatile int32_t x337 = -228005;
int8_t x344 = INT8_MIN;
uint32_t x351 = UINT32_MAX;
volatile int32_t t75 = -652457;
volatile uint32_t x364 = 130606394U;
static int32_t x366 = -1;
volatile int32_t x369 = -25168090;
int32_t x373 = INT32_MIN;
uint32_t x386 = 45U;
int64_t x389 = INT64_MAX;
volatile int32_t t81 = 30;
int16_t x394 = -1;
volatile int32_t t84 = -3067;
int16_t x407 = -1;
int64_t x409 = 1533719962811LL;
int16_t x413 = INT16_MIN;
uint16_t x415 = 1U;
static int32_t t87 = -30;
uint8_t x429 = 0U;
int32_t x431 = INT32_MAX;
uint32_t x432 = 705408985U;
static int32_t t91 = 161;
static int32_t t93 = 1495;
int32_t x458 = 108767464;
int32_t t96 = -178675112;
uint32_t x469 = 3U;
volatile int32_t t98 = 719866;
int32_t x478 = -1;


void f0(void) {
	volatile int32_t x1 = -444668;
	int32_t x2 = INT32_MIN;
	int32_t x3 = -1;
	int8_t x4 = 1;
	static volatile int32_t t0 = -7216;

	t0 = ((x1^x2)==(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 9U;
	static int64_t x7 = INT64_MIN;
	int64_t x8 = -101699306206LL;
	int32_t t1 = -118237109;

	t1 = ((x5^x6)==(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 7U;
	int64_t x10 = INT64_MIN;
	int64_t x11 = -1LL;
	static int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -104536498;

	t2 = ((x9^x10)==(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MIN;
	uint16_t x18 = UINT16_MAX;
	volatile uint32_t x19 = 273408U;
	volatile int32_t x20 = 2056425;
	volatile int32_t t3 = 1;

	t3 = ((x17^x18)==(x19-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 0U;
	volatile int32_t t4 = -1606166;

	t4 = ((x21^x22)==(x23-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t5 = -26;

	t5 = ((x25^x26)==(x27-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -9511448;
	int8_t x30 = 1;
	uint8_t x31 = 3U;
	static uint32_t x32 = 24861232U;
	volatile int32_t t6 = 7905;

	t6 = ((x29^x30)==(x31-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 1019U;
	int16_t x34 = INT16_MAX;
	volatile int64_t x35 = 1822873758530LL;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t7 = -31;

	t7 = ((x33^x34)==(x35-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	volatile int16_t x38 = INT16_MIN;
	int16_t x39 = -1;
	static uint64_t x40 = 17415693541036839LLU;

	t8 = ((x37^x38)==(x39-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 6;
	uint8_t x42 = 56U;
	volatile uint16_t x43 = 2182U;
	volatile int32_t t9 = -490773924;

	t9 = ((x41^x42)==(x43-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	static int64_t x47 = 455169570238LL;
	uint32_t x48 = UINT32_MAX;
	int32_t t10 = -166573301;

	t10 = ((x45^x46)==(x47-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x50 = UINT64_MAX;
	int16_t x51 = -1;
	int32_t x52 = INT32_MAX;
	volatile int32_t t11 = -479;

	t11 = ((x49^x50)==(x51-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MAX;
	int32_t x54 = INT32_MAX;
	int32_t x55 = -3412;
	int64_t x56 = INT64_MIN;
	int32_t t12 = 16618;

	t12 = ((x53^x54)==(x55-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x58 = -1LL;
	volatile int8_t x59 = 18;
	int16_t x60 = -1207;

	t13 = ((x57^x58)==(x59-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 43841360U;
	uint32_t x63 = 1908U;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t14 = 1;

	t14 = ((x61^x62)==(x63-x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	static int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MIN;
	int16_t x68 = -129;

	t15 = ((x65^x66)==(x67-x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 26160474;
	volatile uint16_t x70 = UINT16_MAX;
	int32_t x72 = -1;
	int32_t t16 = -111;

	t16 = ((x69^x70)==(x71-x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 1U;
	int8_t x78 = 7;
	volatile uint64_t x79 = 21371310558948LLU;
	volatile int32_t t17 = -1;

	t17 = ((x77^x78)==(x79-x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x81 = 9U;
	volatile uint64_t x83 = 7224984993094168LLU;
	volatile uint32_t x84 = 0U;
	int32_t t18 = -5;

	t18 = ((x81^x82)==(x83-x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x86 = INT16_MIN;
	volatile int32_t t19 = 23231902;

	t19 = ((x85^x86)==(x87-x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x93 = -1;
	int8_t x94 = -1;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MAX;
	volatile int32_t t20 = 12200;

	t20 = ((x93^x94)==(x95-x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x97 = INT64_MIN;
	static volatile int16_t x98 = -68;
	static uint8_t x99 = 13U;
	static int64_t x100 = -1LL;
	volatile int32_t t21 = -3677387;

	t21 = ((x97^x98)==(x99-x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x101 = 996379958266LLU;
	uint16_t x102 = 14737U;
	uint32_t x103 = 982782U;
	int32_t x104 = -254276;

	t22 = ((x101^x102)==(x103-x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x105 = INT64_MIN;
	uint64_t x106 = 12LLU;
	uint64_t x107 = 6054193128LLU;
	uint64_t x108 = UINT64_MAX;
	int32_t t23 = -1503;

	t23 = ((x105^x106)==(x107-x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MAX;
	static uint64_t x110 = 198733770LLU;
	int8_t x111 = INT8_MAX;
	static volatile uint16_t x112 = 479U;
	int32_t t24 = -1790;

	t24 = ((x109^x110)==(x111-x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MIN;
	static uint16_t x114 = 1446U;
	uint64_t x115 = 3823LLU;
	static int64_t x116 = INT64_MIN;

	t25 = ((x113^x114)==(x115-x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x118 = 21606U;
	int8_t x119 = 0;
	int32_t t26 = 4658545;

	t26 = ((x117^x118)==(x119-x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = 1222170191U;
	uint16_t x130 = 13U;
	static int32_t x131 = INT32_MIN;
	int32_t x132 = -1;
	int32_t t27 = 783;

	t27 = ((x129^x130)==(x131-x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x134 = 1539050333004084LLU;
	static int32_t x135 = -1;
	static uint64_t x136 = 469926896LLU;
	int32_t t28 = -143542;

	t28 = ((x133^x134)==(x135-x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x137 = 41244145U;
	volatile int64_t x138 = -1LL;
	volatile int64_t x139 = 38LL;
	static volatile int16_t x140 = INT16_MIN;

	t29 = ((x137^x138)==(x139-x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x141 = 5645U;
	uint8_t x143 = 50U;
	int8_t x144 = INT8_MIN;
	volatile int32_t t30 = -6;

	t30 = ((x141^x142)==(x143-x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x145 = 106U;
	int64_t x146 = INT64_MAX;
	static int32_t x147 = -10631464;
	int16_t x148 = -6;
	volatile int32_t t31 = 28320;

	t31 = ((x145^x146)==(x147-x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = 22787920LLU;
	int8_t x150 = INT8_MAX;
	uint16_t x152 = 421U;
	volatile int32_t t32 = 1;

	t32 = ((x149^x150)==(x151-x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x157 = INT64_MIN;
	uint32_t x158 = UINT32_MAX;
	int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MAX;

	t33 = ((x157^x158)==(x159-x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x161 = INT32_MAX;
	volatile uint8_t x162 = 25U;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t34 = 661179;

	t34 = ((x161^x162)==(x163-x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x167 = -1271;
	static int32_t t35 = 1;

	t35 = ((x165^x166)==(x167-x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x169 = 92U;
	int16_t x170 = 36;
	int16_t x172 = -1;

	t36 = ((x169^x170)==(x171-x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x173 = 2909568;
	int16_t x175 = INT16_MAX;
	int16_t x176 = INT16_MAX;
	static volatile int32_t t37 = -1726131;

	t37 = ((x173^x174)==(x175-x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MIN;
	static uint8_t x178 = UINT8_MAX;
	uint16_t x179 = 0U;
	static int8_t x180 = INT8_MIN;

	t38 = ((x177^x178)==(x179-x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x183 = 6721796U;
	volatile int32_t t39 = -3014835;

	t39 = ((x181^x182)==(x183-x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = -123801623179204LL;
	uint64_t x187 = 32334610799961291LLU;
	static uint16_t x188 = 27U;
	volatile int32_t t40 = -625;

	t40 = ((x185^x186)==(x187-x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x190 = 32945010;
	uint64_t x191 = 4056609386346LLU;
	uint64_t x192 = 12940334859955LLU;
	int32_t t41 = 803958;

	t41 = ((x189^x190)==(x191-x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MAX;
	int64_t x196 = 135962490LL;
	int32_t t42 = -14981450;

	t42 = ((x193^x194)==(x195-x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x197 = INT32_MIN;
	int8_t x198 = 55;
	uint64_t x199 = UINT64_MAX;

	t43 = ((x197^x198)==(x199-x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = INT32_MIN;
	uint64_t x202 = 14259879278LLU;
	int16_t x203 = 7;
	int8_t x204 = -1;
	volatile int32_t t44 = -4;

	t44 = ((x201^x202)==(x203-x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x205 = UINT8_MAX;
	static volatile uint8_t x207 = 2U;
	int8_t x208 = INT8_MIN;
	volatile int32_t t45 = 1;

	t45 = ((x205^x206)==(x207-x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = -3;
	uint8_t x211 = 48U;
	volatile int16_t x212 = 233;
	int32_t t46 = 1;

	t46 = ((x209^x210)==(x211-x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x214 = -1;
	volatile uint16_t x215 = 17565U;
	volatile uint16_t x216 = 3403U;
	volatile int32_t t47 = 133150822;

	t47 = ((x213^x214)==(x215-x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x221 = 15U;
	uint64_t x222 = 33223588LLU;
	static int8_t x223 = -1;
	int32_t x224 = -1;
	static int32_t t48 = 220;

	t48 = ((x221^x222)==(x223-x224));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = 192421728;
	static volatile int8_t x226 = INT8_MIN;
	int16_t x227 = -1;
	int64_t x228 = INT64_MAX;
	int32_t t49 = 4015;

	t49 = ((x225^x226)==(x227-x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = UINT32_MAX;
	int32_t x230 = -58145;
	int32_t x231 = 358698;
	int32_t x232 = -1;
	int32_t t50 = -8;

	t50 = ((x229^x230)==(x231-x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x233 = 937952764;
	uint64_t x234 = UINT64_MAX;
	uint16_t x235 = 10390U;
	int32_t t51 = 229241;

	t51 = ((x233^x234)==(x235-x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = 1121216389916202865LL;
	int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MIN;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t52 = 3;

	t52 = ((x237^x238)==(x239-x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = -1;
	static int16_t x242 = INT16_MIN;
	int16_t x244 = INT16_MAX;
	volatile int32_t t53 = 2;

	t53 = ((x241^x242)==(x243-x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = -1;
	volatile int8_t x246 = -1;
	static int16_t x247 = -1;
	volatile int32_t x248 = INT32_MIN;
	volatile int32_t t54 = -124052467;

	t54 = ((x245^x246)==(x247-x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -1;
	volatile int64_t x250 = INT64_MIN;
	uint64_t x251 = UINT64_MAX;
	int32_t t55 = 0;

	t55 = ((x249^x250)==(x251-x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x254 = 104185626755815LLU;
	int8_t x255 = 0;
	volatile int64_t x256 = -6592743873498LL;
	volatile int32_t t56 = 2396115;

	t56 = ((x253^x254)==(x255-x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MAX;
	int16_t x259 = INT16_MIN;
	uint8_t x260 = 9U;
	volatile int32_t t57 = -1;

	t57 = ((x257^x258)==(x259-x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = INT32_MAX;
	int32_t x262 = -53953;
	int16_t x263 = -1;
	int32_t x264 = -1;
	volatile int32_t t58 = 10;

	t58 = ((x261^x262)==(x263-x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x267 = -1;
	static uint16_t x268 = UINT16_MAX;
	volatile int32_t t59 = 3;

	t59 = ((x265^x266)==(x267-x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x269 = 445U;
	static int16_t x270 = 1;
	int16_t x271 = INT16_MAX;
	int32_t t60 = -24;

	t60 = ((x269^x270)==(x271-x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x277 = -1LL;
	uint64_t x280 = UINT64_MAX;
	int32_t t61 = 1207;

	t61 = ((x277^x278)==(x279-x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = INT32_MAX;
	volatile int32_t x287 = -1;
	volatile int32_t t62 = 29666;

	t62 = ((x285^x286)==(x287-x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = INT16_MIN;
	uint16_t x291 = 1U;
	volatile int16_t x292 = 1;
	int32_t t63 = 27531;

	t63 = ((x289^x290)==(x291-x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x294 = 2;
	uint64_t x295 = 13898228152986LLU;
	int16_t x296 = 110;
	volatile int32_t t64 = -51458;

	t64 = ((x293^x294)==(x295-x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = -21639LL;
	volatile int8_t x307 = 0;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t65 = -29448275;

	t65 = ((x305^x306)==(x307-x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x309 = 6330U;
	static int64_t x312 = -1723618750LL;
	volatile int32_t t66 = -330;

	t66 = ((x309^x310)==(x311-x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x314 = 271079955139403LLU;
	int32_t x315 = INT32_MIN;

	t67 = ((x313^x314)==(x315-x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x317 = 1U;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = 98123U;
	int16_t x320 = INT16_MAX;

	t68 = ((x317^x318)==(x319-x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x321 = UINT16_MAX;
	uint64_t x322 = 1117823551185780025LLU;
	int32_t t69 = 401;

	t69 = ((x321^x322)==(x323-x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x329 = 1604U;
	volatile int8_t x330 = INT8_MIN;
	static uint8_t x331 = UINT8_MAX;
	uint8_t x332 = UINT8_MAX;
	int32_t t70 = -385938;

	t70 = ((x329^x330)==(x331-x332));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x333 = INT32_MIN;
	uint64_t x334 = UINT64_MAX;
	uint32_t x335 = UINT32_MAX;
	int8_t x336 = 0;
	volatile int32_t t71 = -2497131;

	t71 = ((x333^x334)==(x335-x336));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x338 = -1;
	int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MAX;
	int32_t t72 = -1275206;

	t72 = ((x337^x338)==(x339-x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x341 = 18;
	int16_t x342 = 99;
	int8_t x343 = -1;
	int32_t t73 = -8076503;

	t73 = ((x341^x342)==(x343-x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MIN;
	uint32_t x352 = UINT32_MAX;
	int32_t t74 = 5793816;

	t74 = ((x349^x350)==(x351-x352));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x353 = 1;
	static volatile uint32_t x354 = 14U;
	volatile int64_t x355 = 5412643956115263LL;
	int16_t x356 = -1;

	t75 = ((x353^x354)==(x355-x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x361 = 135U;
	int16_t x362 = -876;
	volatile uint8_t x363 = 7U;
	static int32_t t76 = 6;

	t76 = ((x361^x362)==(x363-x364));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x365 = INT64_MIN;
	uint8_t x367 = 0U;
	static volatile uint8_t x368 = 7U;
	static volatile int32_t t77 = -27;

	t77 = ((x365^x366)==(x367-x368));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x370 = 830108LL;
	static volatile uint16_t x371 = UINT16_MAX;
	uint64_t x372 = UINT64_MAX;
	int32_t t78 = -10959101;

	t78 = ((x369^x370)==(x371-x372));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x374 = 5U;
	volatile int16_t x375 = -1;
	volatile uint64_t x376 = UINT64_MAX;
	int32_t t79 = 1;

	t79 = ((x373^x374)==(x375-x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x385 = UINT16_MAX;
	volatile int32_t x387 = 4273;
	int16_t x388 = INT16_MIN;
	int32_t t80 = 3;

	t80 = ((x385^x386)==(x387-x388));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x390 = INT8_MIN;
	uint16_t x391 = UINT16_MAX;
	static int8_t x392 = 1;

	t81 = ((x389^x390)==(x391-x392));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x393 = -3167;
	int8_t x395 = -1;
	volatile int64_t x396 = -1960603062953074LL;
	volatile int32_t t82 = -36271864;

	t82 = ((x393^x394)==(x395-x396));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x397 = UINT8_MAX;
	static int16_t x398 = INT16_MIN;
	int64_t x399 = -1LL;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t83 = 59;

	t83 = ((x397^x398)==(x399-x400));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x401 = INT16_MIN;
	volatile uint16_t x402 = UINT16_MAX;
	int64_t x403 = 639811763LL;
	static uint16_t x404 = 3624U;

	t84 = ((x401^x402)==(x403-x404));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x405 = -3;
	uint16_t x406 = UINT16_MAX;
	int16_t x408 = INT16_MIN;
	int32_t t85 = -38189;

	t85 = ((x405^x406)==(x407-x408));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x410 = UINT16_MAX;
	int8_t x411 = -1;
	static int32_t x412 = -1;
	volatile int32_t t86 = 63607;

	t86 = ((x409^x410)==(x411-x412));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x414 = 15;
	int32_t x416 = -37;

	t87 = ((x413^x414)==(x415-x416));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x417 = 42U;
	int16_t x418 = 11846;
	int16_t x419 = INT16_MIN;
	volatile int8_t x420 = -9;
	int32_t t88 = -105286208;

	t88 = ((x417^x418)==(x419-x420));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x425 = INT16_MIN;
	int64_t x426 = INT64_MAX;
	static uint32_t x427 = UINT32_MAX;
	uint8_t x428 = 85U;
	static int32_t t89 = 4391506;

	t89 = ((x425^x426)==(x427-x428));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x430 = 3U;
	volatile int32_t t90 = 55;

	t90 = ((x429^x430)==(x431-x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x433 = -15;
	static uint8_t x434 = UINT8_MAX;
	volatile int16_t x435 = 0;
	int32_t x436 = 18234;

	t91 = ((x433^x434)==(x435-x436));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = 0;
	static int32_t x438 = INT32_MIN;
	int8_t x439 = INT8_MIN;
	int32_t x440 = INT32_MIN;
	static int32_t t92 = -236382927;

	t92 = ((x437^x438)==(x439-x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x441 = -1;
	int16_t x442 = -1;
	int16_t x443 = INT16_MIN;
	static int16_t x444 = -11;

	t93 = ((x441^x442)==(x443-x444));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x445 = INT16_MAX;
	uint16_t x446 = 7U;
	static int8_t x447 = -1;
	volatile uint64_t x448 = UINT64_MAX;
	static volatile int32_t t94 = 502844254;

	t94 = ((x445^x446)==(x447-x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x449 = 10056;
	int16_t x450 = -174;
	uint64_t x451 = 445306152992387860LLU;
	int32_t x452 = INT32_MIN;
	static volatile int32_t t95 = 1695579;

	t95 = ((x449^x450)==(x451-x452));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x457 = 181643881LLU;
	int8_t x459 = 1;
	volatile uint16_t x460 = 151U;

	t96 = ((x457^x458)==(x459-x460));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x470 = 1943804LLU;
	int32_t x471 = -269992;
	uint64_t x472 = 63481817781690906LLU;
	int32_t t97 = 76666;

	t97 = ((x469^x470)==(x471-x472));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x473 = -1;
	int32_t x474 = 13155;
	int8_t x475 = -1;
	int8_t x476 = 0;

	t98 = ((x473^x474)==(x475-x476));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x477 = INT32_MIN;
	uint32_t x479 = UINT32_MAX;
	static int8_t x480 = 0;
	int32_t t99 = 2891225;

	t99 = ((x477^x478)==(x479-x480));

	if (t99 != 0) { NG(); } else { ; }
	
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

