#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 8373788LLU;
volatile uint32_t x4 = UINT32_MAX;
static uint8_t x5 = UINT8_MAX;
uint16_t x12 = UINT16_MAX;
int8_t x17 = INT8_MIN;
volatile int16_t x20 = INT16_MIN;
static int32_t x27 = 0;
volatile int32_t t8 = 0;
int16_t x45 = INT16_MAX;
uint64_t x56 = 4722435791449LLU;
static int64_t x88 = -1LL;
int64_t x93 = -1LL;
static int16_t x101 = INT16_MAX;
int8_t x103 = -1;
uint32_t x107 = 34087U;
static int32_t x109 = INT32_MIN;
volatile int8_t x112 = INT8_MAX;
volatile int32_t t27 = -199;
int8_t x122 = INT8_MIN;
int8_t x125 = -35;
int8_t x126 = INT8_MIN;
int64_t x127 = 2469LL;
static uint8_t x131 = 49U;
static int8_t x137 = -1;
static uint16_t x138 = 41U;
volatile uint16_t x142 = 8856U;
uint8_t x143 = 5U;
static uint32_t x146 = 5620U;
static int16_t x154 = -21;
volatile int32_t t39 = 3697428;
static int16_t x165 = INT16_MIN;
uint32_t x170 = 761667672U;
uint32_t x173 = 54717U;
uint32_t x177 = 69586U;
int32_t x183 = INT32_MIN;
int64_t x184 = -1LL;
int64_t x191 = INT64_MIN;
uint64_t x192 = 8214934LLU;
uint8_t x196 = UINT8_MAX;
int64_t x202 = INT64_MIN;
int64_t x204 = INT64_MIN;
int16_t x211 = INT16_MIN;
volatile uint16_t x215 = 3927U;
static int32_t x216 = INT32_MIN;
int64_t x223 = -1LL;
static uint32_t x229 = UINT32_MAX;
uint16_t x232 = 6U;
int32_t t57 = 48739;
volatile int8_t x235 = INT8_MIN;
uint8_t x236 = UINT8_MAX;
int64_t x239 = INT64_MIN;
int32_t t59 = 508243424;
int64_t x249 = -1LL;
int64_t x251 = -288265982240684LL;
volatile uint64_t x256 = 7991845339618703596LLU;
static int64_t x261 = 330299LL;
int64_t x263 = INT64_MAX;
volatile int64_t x265 = INT64_MIN;
int32_t x274 = -49775;
static int64_t x276 = -3LL;
static uint16_t x278 = 325U;
static int32_t x279 = -50792;
int8_t x283 = -1;
int8_t x285 = INT8_MIN;
static volatile uint32_t x288 = 2080252U;
static volatile int8_t x291 = INT8_MAX;
volatile int64_t x302 = INT64_MIN;
volatile uint64_t x304 = UINT64_MAX;
uint32_t x305 = 487U;
int16_t x306 = -8332;
int16_t x307 = 321;
static int16_t x308 = INT16_MAX;
int16_t x309 = 1050;
volatile int16_t x312 = 0;
volatile int32_t t78 = 7;
static uint64_t x323 = 3823197260588784LLU;
volatile int32_t t80 = -15;
int64_t x326 = -5661436563525199LL;
volatile int32_t t81 = -5660522;
uint64_t x330 = UINT64_MAX;
volatile int32_t t82 = 645381;
static int32_t x335 = INT32_MAX;
static int32_t x336 = -6972;
static int64_t x338 = -3829032610668236966LL;
int8_t x341 = INT8_MAX;
static uint16_t x345 = 5U;
uint8_t x348 = 8U;
uint8_t x350 = 25U;
int32_t x360 = INT32_MAX;
int32_t x363 = INT32_MAX;
int32_t t98 = -2967;
int8_t x397 = INT8_MIN;
volatile int32_t t99 = -228;


void f0(void) {
	volatile uint16_t x1 = 14U;
	int64_t x2 = INT64_MIN;
	static volatile int32_t t0 = 282785;

	t0 = (x1==((x2|x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -68729321742472LL;
	uint16_t x7 = UINT16_MAX;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 31741;

	t1 = (x5==((x6|x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint64_t x10 = 37936LLU;
	uint32_t x11 = UINT32_MAX;
	volatile int32_t t2 = 930889044;

	t2 = (x9==((x10|x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 20;
	int8_t x14 = -1;
	int8_t x15 = INT8_MIN;
	uint32_t x16 = 2U;
	volatile int32_t t3 = -365844;

	t3 = (x13==((x14|x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = 15;
	int8_t x19 = 2;
	volatile int32_t t4 = -5893800;

	t4 = (x17==((x18|x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	volatile int64_t x22 = -1LL;
	int32_t x23 = 3;
	uint16_t x24 = 830U;
	volatile int32_t t5 = -257;

	t5 = (x21==((x22|x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 35U;
	volatile int32_t x26 = INT32_MIN;
	int16_t x28 = -1;
	volatile int32_t t6 = -36802;

	t6 = (x25==((x26|x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 6936141575347360980LLU;
	uint16_t x30 = UINT16_MAX;
	volatile uint64_t x31 = 10494277LLU;
	volatile int8_t x32 = -25;
	volatile int32_t t7 = 10668305;

	t7 = (x29==((x30|x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint8_t x34 = 7U;
	int8_t x35 = -2;
	volatile uint64_t x36 = 325LLU;

	t8 = (x33==((x34|x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	volatile uint32_t x38 = UINT32_MAX;
	int64_t x39 = INT64_MAX;
	volatile int8_t x40 = -1;
	static volatile int32_t t9 = -57794441;

	t9 = (x37==((x38|x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	uint16_t x42 = UINT16_MAX;
	uint16_t x43 = 132U;
	int64_t x44 = INT64_MAX;
	volatile int32_t t10 = -3250;

	t10 = (x41==((x42|x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = 25405722LL;
	static volatile int8_t x47 = -1;
	uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = -814;

	t11 = (x45==((x46|x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MAX;
	static uint32_t x50 = 54U;
	static int32_t x51 = INT32_MAX;
	static volatile int16_t x52 = INT16_MAX;
	int32_t t12 = 7717;

	t12 = (x49==((x50|x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static volatile int16_t x54 = INT16_MIN;
	uint32_t x55 = 4147688U;
	int32_t t13 = -872420;

	t13 = (x53==((x54|x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 0U;
	uint16_t x58 = UINT16_MAX;
	int32_t x59 = INT32_MIN;
	int16_t x60 = -7219;
	int32_t t14 = 232;

	t14 = (x57==((x58|x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -1LL;
	int32_t x62 = -16265;
	int8_t x63 = 1;
	uint8_t x64 = 3U;
	static volatile int32_t t15 = -664;

	t15 = (x61==((x62|x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -1;
	volatile int8_t x66 = -1;
	static int16_t x67 = -1;
	int8_t x68 = 0;
	volatile int32_t t16 = -1579;

	t16 = (x65==((x66|x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	uint32_t x70 = 245576038U;
	static int64_t x71 = INT64_MIN;
	volatile int16_t x72 = -957;
	int32_t t17 = 190;

	t17 = (x69==((x70|x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int64_t x74 = -4151045765653313367LL;
	volatile int32_t x75 = INT32_MIN;
	uint8_t x76 = 112U;
	volatile int32_t t18 = -3860;

	t18 = (x73==((x74|x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	uint8_t x78 = UINT8_MAX;
	static volatile uint8_t x79 = UINT8_MAX;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 0;

	t19 = (x77==((x78|x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = -8;
	uint8_t x82 = 7U;
	uint16_t x83 = 3U;
	volatile int16_t x84 = 6766;
	volatile int32_t t20 = -1833730;

	t20 = (x81==((x82|x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int16_t x86 = INT16_MAX;
	uint32_t x87 = 2U;
	volatile int32_t t21 = 47787;

	t21 = (x85==((x86|x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	int16_t x90 = -13374;
	int32_t x91 = INT32_MIN;
	static int16_t x92 = -1;
	int32_t t22 = -12;

	t22 = (x89==((x90|x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = -296287;
	static int8_t x95 = -1;
	int16_t x96 = INT16_MAX;
	static volatile int32_t t23 = 65359855;

	t23 = (x93==((x94|x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 1389896039968462LLU;
	int8_t x98 = INT8_MAX;
	int32_t x99 = -15802;
	volatile int8_t x100 = -35;
	volatile int32_t t24 = 182019;

	t24 = (x97==((x98|x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x102 = 1U;
	static uint32_t x104 = 373U;
	int32_t t25 = 5069;

	t25 = (x101==((x102|x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 3U;
	volatile int32_t x106 = -25;
	static volatile int8_t x108 = -1;
	int32_t t26 = 6886;

	t26 = (x105==((x106|x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x110 = INT8_MAX;
	uint64_t x111 = 11763811092246LLU;

	t27 = (x109==((x110|x111)<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	static int8_t x114 = -1;
	static uint8_t x115 = UINT8_MAX;
	uint8_t x116 = 0U;
	static volatile int32_t t28 = -11870;

	t28 = (x113==((x114|x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 14191359472LLU;
	int32_t x118 = -1;
	int64_t x119 = INT64_MIN;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t29 = 0;

	t29 = (x117==((x118|x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	uint8_t x123 = 1U;
	int8_t x124 = -1;
	static int32_t t30 = -5;

	t30 = (x121==((x122|x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x128 = INT64_MAX;
	volatile int32_t t31 = -9276;

	t31 = (x125==((x126|x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = -7;
	int16_t x132 = INT16_MIN;
	int32_t t32 = -8;

	t32 = (x129==((x130|x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x133 = 1;
	int32_t x134 = -1;
	uint64_t x135 = UINT64_MAX;
	static volatile uint32_t x136 = 57U;
	volatile int32_t t33 = -8493801;

	t33 = (x133==((x134|x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 14682365;

	t34 = (x137==((x138|x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 4026LLU;
	static int64_t x144 = INT64_MIN;
	volatile int32_t t35 = 808474;

	t35 = (x141==((x142|x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	uint32_t x147 = 31772U;
	int64_t x148 = INT64_MIN;
	int32_t t36 = 941539358;

	t36 = (x145==((x146|x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	volatile int64_t x150 = INT64_MIN;
	static volatile int8_t x151 = 12;
	uint16_t x152 = 7784U;
	volatile int32_t t37 = 3844;

	t37 = (x149==((x150|x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = UINT8_MAX;
	volatile uint16_t x155 = 388U;
	static volatile int64_t x156 = 336588454596263LL;
	volatile int32_t t38 = 9808;

	t38 = (x153==((x154|x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 697;
	int8_t x158 = INT8_MIN;
	int8_t x159 = -1;
	uint32_t x160 = 104833633U;

	t39 = (x157==((x158|x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x161 = INT64_MAX;
	static int8_t x162 = INT8_MIN;
	int16_t x163 = -1;
	static volatile int16_t x164 = INT16_MIN;
	int32_t t40 = 113945;

	t40 = (x161==((x162|x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MAX;
	static uint8_t x167 = 118U;
	volatile int16_t x168 = 7;
	int32_t t41 = 317355;

	t41 = (x165==((x166|x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = 2;
	static int8_t x171 = 0;
	static int32_t x172 = 1147561;
	int32_t t42 = 233945367;

	t42 = (x169==((x170|x171)<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x174 = 250;
	static int16_t x175 = -1;
	volatile int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 3;

	t43 = (x173==((x174|x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x178 = 0U;
	uint8_t x179 = UINT8_MAX;
	static uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = 518154624;

	t44 = (x177==((x178|x179)<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = 118739;
	int64_t x182 = INT64_MAX;
	volatile int32_t t45 = 57;

	t45 = (x181==((x182|x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x185 = UINT32_MAX;
	int8_t x186 = 2;
	int16_t x187 = INT16_MIN;
	uint8_t x188 = 3U;
	int32_t t46 = 854;

	t46 = (x185==((x186|x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x189 = INT32_MIN;
	int64_t x190 = INT64_MIN;
	volatile int32_t t47 = 454092827;

	t47 = (x189==((x190|x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int16_t x194 = INT16_MIN;
	uint64_t x195 = UINT64_MAX;
	static volatile int32_t t48 = 538;

	t48 = (x193==((x194|x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 17;
	uint32_t x198 = 17U;
	uint32_t x199 = 21061U;
	static int16_t x200 = 1499;
	volatile int32_t t49 = 2768315;

	t49 = (x197==((x198|x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	uint64_t x203 = 63778886815292LLU;
	volatile int32_t t50 = 7837;

	t50 = (x201==((x202|x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MIN;
	uint8_t x206 = 16U;
	int32_t x207 = -6536479;
	static volatile int8_t x208 = -1;
	volatile int32_t t51 = -621040;

	t51 = (x205==((x206|x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	int64_t x210 = INT64_MAX;
	int32_t x212 = INT32_MAX;
	volatile int32_t t52 = -47;

	t52 = (x209==((x210|x211)<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 31941U;
	uint8_t x214 = 0U;
	static int32_t t53 = 490;

	t53 = (x213==((x214|x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	static int64_t x218 = INT64_MIN;
	int8_t x219 = INT8_MIN;
	static volatile int16_t x220 = -1;
	int32_t t54 = 125;

	t54 = (x217==((x218|x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	volatile int8_t x222 = 1;
	int8_t x224 = 2;
	int32_t t55 = -12;

	t55 = (x221==((x222|x223)<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 1693200471LLU;
	int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MIN;
	volatile int16_t x228 = -1;
	int32_t t56 = 6130470;

	t56 = (x225==((x226|x227)<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x230 = -1;
	int32_t x231 = INT32_MIN;

	t57 = (x229==((x230|x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = UINT8_MAX;
	uint64_t x234 = 5LLU;
	volatile int32_t t58 = -44937;

	t58 = (x233==((x234|x235)<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	int8_t x238 = -1;
	static int64_t x240 = INT64_MAX;

	t59 = (x237==((x238|x239)<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	uint16_t x242 = 28U;
	static volatile int32_t x243 = -12;
	static int8_t x244 = 0;
	volatile int32_t t60 = 36393046;

	t60 = (x241==((x242|x243)<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -1;
	int8_t x246 = INT8_MAX;
	int8_t x247 = INT8_MIN;
	uint8_t x248 = 26U;
	volatile int32_t t61 = 29356398;

	t61 = (x245==((x246|x247)<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;
	volatile uint32_t x252 = 183374U;
	int32_t t62 = 1926;

	t62 = (x249==((x250|x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MIN;
	int8_t x255 = -1;
	volatile int32_t t63 = -1;

	t63 = (x253==((x254|x255)<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MIN;
	static volatile int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MAX;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = -498139;

	t64 = (x257==((x258|x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = 207;
	static uint32_t x264 = 647U;
	int32_t t65 = 50029684;

	t65 = (x261==((x262|x263)<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x266 = 1U;
	static uint8_t x267 = 1U;
	uint16_t x268 = 1567U;
	int32_t t66 = 3;

	t66 = (x265==((x266|x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 87U;
	static uint8_t x270 = 83U;
	uint8_t x271 = 9U;
	int8_t x272 = -20;
	volatile int32_t t67 = 355;

	t67 = (x269==((x270|x271)<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = 2447;
	int64_t x275 = INT64_MIN;
	volatile int32_t t68 = -9054;

	t68 = (x273==((x274|x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MIN;
	int16_t x280 = -1;
	static int32_t t69 = 3468;

	t69 = (x277==((x278|x279)<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -43797864293972LL;
	int64_t x282 = 1470LL;
	uint16_t x284 = UINT16_MAX;
	int32_t t70 = -57966031;

	t70 = (x281==((x282|x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	static int16_t x287 = INT16_MAX;
	int32_t t71 = 379115675;

	t71 = (x285==((x286|x287)<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = -122457752LL;
	volatile int64_t x290 = -1LL;
	uint8_t x292 = UINT8_MAX;
	int32_t t72 = -3396;

	t72 = (x289==((x290|x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	int16_t x295 = -1;
	uint8_t x296 = UINT8_MAX;
	int32_t t73 = -105802885;

	t73 = (x293==((x294|x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	static int64_t x300 = -1LL;
	int32_t t74 = -17670928;

	t74 = (x297==((x298|x299)<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 122U;
	int32_t x303 = INT32_MAX;
	int32_t t75 = -351;

	t75 = (x301==((x302|x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t t76 = -235509803;

	t76 = (x305==((x306|x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = INT16_MIN;
	int64_t x311 = 336033439LL;
	volatile int32_t t77 = 2315923;

	t77 = (x309==((x310|x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = UINT64_MAX;
	static int16_t x314 = INT16_MAX;
	volatile int64_t x315 = INT64_MIN;
	int8_t x316 = INT8_MIN;

	t78 = (x313==((x314|x315)<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = INT8_MAX;
	int8_t x320 = 0;
	volatile int32_t t79 = 0;

	t79 = (x317==((x318|x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x321 = 291U;
	int32_t x322 = INT32_MIN;
	volatile int8_t x324 = 58;

	t80 = (x321==((x322|x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = UINT16_MAX;
	volatile int32_t x327 = INT32_MAX;
	int32_t x328 = INT32_MIN;

	t81 = (x325==((x326|x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MIN;
	volatile int64_t x331 = INT64_MAX;
	uint64_t x332 = 62271280277157LLU;

	t82 = (x329==((x330|x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MAX;
	int32_t x334 = -675614318;
	int32_t t83 = -7;

	t83 = (x333==((x334|x335)<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 0;
	uint8_t x339 = 92U;
	static int16_t x340 = INT16_MAX;
	static volatile int32_t t84 = -36;

	t84 = (x337==((x338|x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = -2;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = 279;
	static volatile int32_t t85 = -28;

	t85 = (x341==((x342|x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MAX;
	int32_t x347 = 919557911;
	int32_t t86 = 7;

	t86 = (x345==((x346|x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MIN;
	static int32_t x351 = -590;
	static uint64_t x352 = UINT64_MAX;
	volatile int32_t t87 = 245204;

	t87 = (x349==((x350|x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 1;
	int64_t x354 = INT64_MIN;
	static int16_t x355 = INT16_MIN;
	volatile uint16_t x356 = 0U;
	int32_t t88 = -805155417;

	t88 = (x353==((x354|x355)<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 15U;
	volatile int8_t x358 = 1;
	static int16_t x359 = -1;
	volatile int32_t t89 = -13101287;

	t89 = (x357==((x358|x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -78;
	volatile uint64_t x362 = 36862783495887LLU;
	static volatile int16_t x364 = INT16_MIN;
	int32_t t90 = 0;

	t90 = (x361==((x362|x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = -1;
	int64_t x366 = 392LL;
	volatile int8_t x367 = INT8_MIN;
	volatile uint64_t x368 = 0LLU;
	int32_t t91 = -4010;

	t91 = (x365==((x366|x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 10U;
	int8_t x370 = INT8_MIN;
	int32_t x371 = 14720;
	uint32_t x372 = 869386620U;
	volatile int32_t t92 = 247482;

	t92 = (x369==((x370|x371)<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	uint16_t x374 = 619U;
	static volatile uint64_t x375 = UINT64_MAX;
	uint16_t x376 = 443U;
	int32_t t93 = -11;

	t93 = (x373==((x374|x375)<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -1;
	uint32_t x378 = 688320U;
	static uint16_t x379 = UINT16_MAX;
	uint8_t x380 = 54U;
	volatile int32_t t94 = -2;

	t94 = (x377==((x378|x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MAX;
	int8_t x382 = -1;
	volatile int16_t x383 = INT16_MIN;
	int16_t x384 = -467;
	volatile int32_t t95 = 671;

	t95 = (x381==((x382|x383)<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	volatile int64_t x386 = 4983759LL;
	int8_t x387 = INT8_MIN;
	int32_t x388 = 1;
	static int32_t t96 = 25708014;

	t96 = (x385==((x386|x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -388660LL;
	volatile int16_t x390 = -3527;
	int64_t x391 = -1LL;
	volatile int8_t x392 = 1;
	int32_t t97 = 1693;

	t97 = (x389==((x390|x391)<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MIN;
	volatile int8_t x394 = 1;
	static volatile int64_t x395 = 1004545916LL;
	int8_t x396 = INT8_MIN;

	t98 = (x393==((x394|x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MIN;
	volatile uint8_t x400 = UINT8_MAX;

	t99 = (x397==((x398|x399)<x400));

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

