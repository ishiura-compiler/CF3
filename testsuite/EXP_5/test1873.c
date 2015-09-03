#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = INT16_MIN;
int64_t x8 = 24227554414644943LL;
volatile int64_t t0 = 139447314370405LL;
static int8_t x10 = INT8_MIN;
uint32_t x14 = UINT32_MAX;
int64_t x15 = 20226LL;
int32_t x25 = -1767766;
int16_t x27 = INT16_MAX;
static volatile int64_t t5 = 20130205193LL;
int64_t t6 = 54863922LL;
static uint64_t x33 = 0LLU;
uint8_t x45 = UINT8_MAX;
int64_t x46 = INT64_MIN;
int8_t x47 = -11;
volatile int8_t x49 = -13;
int8_t x56 = -28;
volatile int32_t t13 = 71;
int32_t x61 = -1;
static uint64_t x62 = 2017577847227276LLU;
uint8_t x64 = 3U;
int64_t t15 = -864639LL;
volatile int32_t x70 = INT32_MIN;
volatile uint32_t x73 = 208210U;
int64_t x84 = -582955326LL;
uint8_t x89 = UINT8_MAX;
volatile uint32_t t21 = 20814507U;
uint64_t x97 = 268987968836341180LLU;
int8_t x100 = -1;
int16_t x107 = -1;
volatile uint32_t t24 = 392909854U;
uint8_t x109 = 16U;
int16_t x116 = -3960;
static volatile int8_t x121 = INT8_MIN;
int32_t x124 = INT32_MIN;
volatile int64_t t27 = -3873390437409425903LL;
static uint64_t x131 = 1135136914908367LLU;
int64_t x142 = -47LL;
volatile int16_t x149 = -1;
static volatile uint64_t x150 = 1LLU;
uint64_t x158 = 17747256923LLU;
int32_t x160 = -174;
uint8_t x163 = 79U;
uint32_t x166 = 1641172709U;
static volatile int64_t x171 = INT64_MIN;
volatile int64_t x178 = -1LL;
int8_t x181 = INT8_MIN;
int64_t x183 = -1LL;
static int16_t x184 = INT16_MIN;
volatile int64_t t38 = -12LL;
static volatile int64_t t39 = -94963LL;
int8_t x194 = INT8_MIN;
static volatile int64_t t41 = INT64_MIN;
int32_t t43 = 451649058;
int8_t x215 = 1;
volatile int64_t x226 = 13571913804618LL;
int64_t x233 = INT64_MAX;
static int8_t x234 = -1;
uint8_t x237 = 6U;
volatile int64_t t51 = 3566579032104LL;
volatile uint16_t x246 = UINT16_MAX;
static int16_t x257 = -54;
volatile uint64_t x273 = 35784484513LLU;
uint8_t x280 = 1U;
static volatile int16_t x287 = 793;
int32_t x288 = INT32_MAX;
static int32_t t61 = 4013;
int32_t x294 = -35974;
uint16_t x295 = UINT16_MAX;
int64_t t65 = -2990537696LL;
int16_t x320 = -2;
int32_t x325 = -1;
uint64_t t71 = 92171584408845LLU;
int32_t x341 = INT32_MIN;
int32_t t73 = -477015051;
volatile int16_t x347 = INT16_MIN;
volatile uint32_t x354 = 316634611U;
uint64_t x360 = 107778495024646LLU;
static volatile uint64_t t77 = 138384366572204LLU;
uint8_t x361 = 59U;
volatile int8_t x362 = 1;
volatile int8_t x363 = INT8_MAX;
int64_t x375 = INT64_MIN;
int16_t x376 = INT16_MIN;
static int64_t x378 = INT64_MIN;
int64_t x383 = INT64_MIN;
volatile int64_t t83 = 61971008482087203LL;
int16_t x387 = INT16_MIN;
static int64_t x391 = -1LL;
int16_t x396 = INT16_MIN;
volatile uint64_t t86 = 4093601028550629LLU;
uint8_t x397 = UINT8_MAX;
volatile uint64_t t87 = 161714481845696476LLU;
uint32_t t88 = 4405U;
int16_t x421 = INT16_MIN;
int8_t x422 = 0;
static uint16_t x424 = UINT16_MAX;
int32_t t92 = 102715596;
uint8_t x433 = 52U;
static volatile uint32_t x434 = UINT32_MAX;
int64_t t95 = 26767LL;
volatile int16_t x438 = INT16_MAX;
int64_t x441 = INT64_MIN;
static volatile int16_t x443 = -1;
int8_t x447 = INT8_MIN;


void f0(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = -600;

	t0 = (x5+((x6|x7)-x8));

	if (t0 != -24227554414678311LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MAX;
	uint8_t x11 = UINT8_MAX;
	static volatile uint16_t x12 = 466U;
	static volatile int64_t t1 = -312423725649127LL;

	t1 = (x9+((x10|x11)-x12));

	if (t1 != 9223372036854775340LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	volatile int16_t x16 = 0;
	volatile int64_t t2 = -2021509508LL;

	t2 = (x13+((x14|x15)-x16));

	if (t2 != 4294967550LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 203;
	int64_t x18 = 525957773818512LL;
	uint32_t x19 = 9710914U;
	int32_t x20 = -1;
	int64_t t3 = -142568870834893701LL;

	t3 = (x17+((x18|x19)-x20));

	if (t3 != 525957783257246LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x21 = 4U;
	uint64_t x22 = 116767901577LLU;
	uint32_t x23 = UINT32_MAX;
	int8_t x24 = INT8_MIN;
	static uint64_t t4 = 3689192722434252572LLU;

	t4 = (x21+((x22|x23)-x24));

	if (t4 != 120259084419LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = -36;
	int64_t x28 = -1LL;

	t5 = (x25+((x26|x27)-x28));

	if (t5 != -1767766LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x29 = 456U;
	int64_t x30 = INT64_MIN;
	int32_t x31 = 4564;
	int16_t x32 = -1;

	t6 = (x29+((x30|x31)-x32));

	if (t6 != -9223372036854770787LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = INT16_MIN;
	volatile uint32_t x35 = 192404645U;
	volatile uint8_t x36 = 1U;
	uint64_t t7 = 1718LLU;

	t7 = (x33+((x34|x35)-x36));

	if (t7 != 4294958244LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = -1;
	uint16_t x38 = 14983U;
	volatile int32_t x39 = INT32_MIN;
	int16_t x40 = INT16_MIN;
	volatile int32_t t8 = -2451;

	t8 = (x37+((x38|x39)-x40));

	if (t8 != -2147435898) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MAX;
	volatile uint8_t x42 = UINT8_MAX;
	uint8_t x43 = 3U;
	static int16_t x44 = 430;
	int32_t t9 = 27776;

	t9 = (x41+((x42|x43)-x44));

	if (t9 != -48) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x48 = -736;
	int64_t t10 = -15413742301142LL;

	t10 = (x45+((x46|x47)-x48));

	if (t10 != 980LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x50 = INT16_MAX;
	volatile int32_t x51 = -1;
	volatile uint8_t x52 = 105U;
	int32_t t11 = 15;

	t11 = (x49+((x50|x51)-x52));

	if (t11 != -119) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 0U;
	volatile int32_t x54 = -1;
	int16_t x55 = -6;
	int32_t t12 = -133;

	t12 = (x53+((x54|x55)-x56));

	if (t12 != 27) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;
	int32_t x58 = INT32_MIN;
	static uint16_t x59 = 161U;
	volatile int32_t x60 = -1;

	t13 = (x57+((x58|x59)-x60));

	if (t13 != -2147417951) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x63 = 286540851874324795LLU;
	uint64_t t14 = 398455631LLU;

	t14 = (x61+((x62|x63)-x64));

	if (t14 != 288230358904693691LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 8;
	volatile int32_t x66 = -1;
	static volatile int8_t x67 = -2;
	static int64_t x68 = -122904672LL;

	t15 = (x65+((x66|x67)-x68));

	if (t15 != 122904679LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x69 = 13855165122521036LLU;
	int64_t x71 = -1LL;
	int32_t x72 = -28568559;
	volatile uint64_t t16 = 565486313780664LLU;

	t16 = (x69+((x70|x71)-x72));

	if (t16 != 13855165151089594LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x74 = 1971439LLU;
	volatile uint16_t x75 = 200U;
	int64_t x76 = -46774950804LL;
	uint64_t t17 = 226LLU;

	t17 = (x73+((x74|x75)-x76));

	if (t17 != 46777130453LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 0U;
	uint32_t x78 = 14024767U;
	uint32_t x79 = 669071497U;
	uint64_t x80 = UINT64_MAX;
	uint64_t t18 = 1492812322981545LLU;

	t18 = (x77+((x78|x79)-x80));

	if (t18 != 670513344LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 8LLU;
	uint8_t x82 = 15U;
	int32_t x83 = INT32_MIN;
	uint64_t t19 = 2181053839183LLU;

	t19 = (x81+((x82|x83)-x84));

	if (t19 != 18446744072145023317LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	uint32_t x86 = 1U;
	uint64_t x87 = UINT64_MAX;
	volatile uint32_t x88 = 13477195U;
	uint64_t t20 = 5795LLU;

	t20 = (x85+((x86|x87)-x88));

	if (t20 != 18446744071548590772LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x90 = UINT8_MAX;
	volatile int32_t x91 = -1;
	uint32_t x92 = 945192U;

	t21 = (x89+((x90|x91)-x92));

	if (t21 != 4294022358U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x98 = UINT64_MAX;
	int32_t x99 = INT32_MIN;
	uint64_t t22 = 3015000192998LLU;

	t22 = (x97+((x98|x99)-x100));

	if (t22 != 268987968836341180LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x101 = 7669773380083LLU;
	static int8_t x102 = INT8_MIN;
	static int8_t x103 = INT8_MIN;
	static volatile int16_t x104 = INT16_MIN;
	volatile uint64_t t23 = 541LLU;

	t23 = (x101+((x102|x103)-x104));

	if (t23 != 7669773412723LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = UINT32_MAX;
	volatile int16_t x106 = INT16_MIN;
	static volatile uint16_t x108 = 2005U;

	t24 = (x105+((x106|x107)-x108));

	if (t24 != 4294965289U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x110 = -1;
	volatile int64_t x111 = INT64_MIN;
	static int32_t x112 = INT32_MIN;
	volatile int64_t t25 = 0LL;

	t25 = (x109+((x110|x111)-x112));

	if (t25 != 2147483663LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	int32_t x114 = INT32_MIN;
	uint32_t x115 = UINT32_MAX;
	volatile int64_t t26 = 669897382818LL;

	t26 = (x113+((x114|x115)-x116));

	if (t26 != -9223372036854771849LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x122 = 0;
	int64_t x123 = INT64_MIN;

	t27 = (x121+((x122|x123)-x124));

	if (t27 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x125 = -1;
	static int64_t x126 = INT64_MAX;
	uint64_t x127 = UINT64_MAX;
	static int16_t x128 = INT16_MIN;
	uint64_t t28 = 4207323586129LLU;

	t28 = (x125+((x126|x127)-x128));

	if (t28 != 32766LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	static int64_t x130 = 10395LL;
	int8_t x132 = -3;
	volatile uint64_t t29 = 4LLU;

	t29 = (x129+((x130|x131)-x132));

	if (t29 != 1135136914877666LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = INT8_MIN;
	static uint16_t x143 = 2449U;
	static int8_t x144 = 1;
	static volatile int64_t t30 = -417315LL;

	t30 = (x141+((x142|x143)-x144));

	if (t30 != -176LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x151 = -30;
	static int8_t x152 = INT8_MIN;
	uint64_t t31 = 8603891421308540LLU;

	t31 = (x149+((x150|x151)-x152));

	if (t31 != 98LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x157 = 3;
	uint32_t x159 = UINT32_MAX;
	static volatile uint64_t t32 = 104955881200477952LLU;

	t32 = (x157+((x158|x159)-x160));

	if (t32 != 21474836656LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x161 = 1611862318LLU;
	uint16_t x162 = UINT16_MAX;
	uint8_t x164 = 36U;
	uint64_t t33 = 921694492709851LLU;

	t33 = (x161+((x162|x163)-x164));

	if (t33 != 1611927817LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x165 = 0U;
	int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MIN;
	static uint32_t t34 = 5046U;

	t34 = (x165+((x166|x167)-x168));

	if (t34 != 3788656485U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x169 = INT32_MAX;
	int16_t x170 = INT16_MIN;
	int16_t x172 = -1;
	int64_t t35 = -11049412814239854LL;

	t35 = (x169+((x170|x171)-x172));

	if (t35 != 2147450880LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x173 = 6U;
	int16_t x174 = INT16_MAX;
	static volatile uint8_t x175 = 56U;
	volatile uint32_t x176 = UINT32_MAX;
	volatile uint32_t t36 = 49397U;

	t36 = (x173+((x174|x175)-x176));

	if (t36 != 32774U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = -1LL;
	int16_t x179 = -1;
	volatile int32_t x180 = -1;
	static volatile int64_t t37 = 0LL;

	t37 = (x177+((x178|x179)-x180));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x182 = 0;

	t38 = (x181+((x182|x183)-x184));

	if (t38 != 32639LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = 2190516010431231866LL;
	uint16_t x187 = 3869U;
	uint32_t x188 = 1U;

	t39 = (x185+((x186|x187)-x188));

	if (t39 != 2190516010431201150LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x189 = 193U;
	uint8_t x190 = 5U;
	int16_t x191 = -7;
	int32_t x192 = 174611;
	int32_t t40 = 3;

	t40 = (x189+((x190|x191)-x192));

	if (t40 != -174421) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x193 = 0U;
	int8_t x195 = -1;
	int64_t x196 = INT64_MAX;

	t41 = (x193+((x194|x195)-x196));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x197 = UINT64_MAX;
	static uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	static int32_t x200 = INT32_MIN;
	static volatile uint64_t t42 = 4LLU;

	t42 = (x197+((x198|x199)-x200));

	if (t42 != 2147483646LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = INT8_MAX;
	static int16_t x202 = -1;
	static int16_t x203 = -1;
	static uint16_t x204 = 1164U;

	t43 = (x201+((x202|x203)-x204));

	if (t43 != -1038) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = INT8_MIN;
	volatile int16_t x210 = INT16_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	int16_t x212 = -1;
	uint64_t t44 = 47684831542LLU;

	t44 = (x209+((x210|x211)-x212));

	if (t44 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x213 = UINT64_MAX;
	static uint8_t x214 = UINT8_MAX;
	uint16_t x216 = 157U;
	uint64_t t45 = 110LLU;

	t45 = (x213+((x214|x215)-x216));

	if (t45 != 97LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x217 = UINT16_MAX;
	volatile uint16_t x218 = 15U;
	int16_t x219 = INT16_MIN;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t46 = 1504LLU;

	t46 = (x217+((x218|x219)-x220));

	if (t46 != 32783LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = -39;
	static uint32_t x222 = 2872308U;
	static int32_t x223 = INT32_MIN;
	static volatile int32_t x224 = INT32_MIN;
	uint32_t t47 = 164964U;

	t47 = (x221+((x222|x223)-x224));

	if (t47 != 2872269U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x225 = INT64_MIN;
	uint64_t x227 = 434LLU;
	int16_t x228 = -3027;
	volatile uint64_t t48 = 443922813135416898LLU;

	t48 = (x225+((x226|x227)-x228));

	if (t48 != 9223385608768583629LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = -739403942;
	static int32_t x230 = INT32_MIN;
	volatile int64_t x231 = -105465LL;
	uint64_t x232 = 1881549LLU;
	uint64_t t49 = 993LLU;

	t49 = (x229+((x230|x231)-x232));

	if (t49 != 18446744072968160660LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x235 = 37;
	int16_t x236 = 4;
	int64_t t50 = -3930958338419LL;

	t50 = (x233+((x234|x235)-x236));

	if (t50 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x238 = -1;
	int16_t x239 = -1;
	static volatile int64_t x240 = -2346268767179535LL;

	t51 = (x237+((x238|x239)-x240));

	if (t51 != 2346268767179540LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x245 = 38U;
	static uint8_t x247 = 119U;
	volatile int64_t x248 = 14659286032121015LL;
	volatile int64_t t52 = 10445LL;

	t52 = (x245+((x246|x247)-x248));

	if (t52 != -14659286032055442LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x249 = UINT8_MAX;
	uint32_t x250 = 1538U;
	volatile int64_t x251 = -1868LL;
	int64_t x252 = INT64_MIN;
	volatile int64_t t53 = -1948536394246225441LL;

	t53 = (x249+((x250|x251)-x252));

	if (t53 != 9223372036854775733LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x253 = INT16_MIN;
	volatile int64_t x254 = -1LL;
	uint8_t x255 = 0U;
	int32_t x256 = 2130;
	int64_t t54 = 1LL;

	t54 = (x253+((x254|x255)-x256));

	if (t54 != -34899LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x258 = 282221670717613756LLU;
	uint32_t x259 = UINT32_MAX;
	int32_t x260 = 137;
	static volatile uint64_t t55 = 9106645366358548LLU;

	t55 = (x257+((x258|x259)-x260));

	if (t55 != 282221673954934592LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = INT32_MAX;
	static volatile uint32_t x262 = 1U;
	uint8_t x263 = UINT8_MAX;
	int16_t x264 = INT16_MIN;
	uint32_t t56 = 1322738U;

	t56 = (x261+((x262|x263)-x264));

	if (t56 != 2147516670U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x269 = INT16_MIN;
	static int16_t x270 = INT16_MIN;
	int64_t x271 = -113599LL;
	volatile int64_t x272 = 959LL;
	int64_t t57 = -14712072363773834LL;

	t57 = (x269+((x270|x271)-x272));

	if (t57 != -49022LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x274 = -1;
	static uint8_t x275 = 57U;
	int8_t x276 = -7;
	uint64_t t58 = 9LLU;

	t58 = (x273+((x274|x275)-x276));

	if (t58 != 35784484519LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x277 = UINT8_MAX;
	int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	volatile int32_t t59 = -429284;

	t59 = (x277+((x278|x279)-x280));

	if (t59 != -32514) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x281 = 8135U;
	uint16_t x282 = 39U;
	int8_t x283 = INT8_MIN;
	uint8_t x284 = UINT8_MAX;
	uint32_t t60 = 2766803U;

	t60 = (x281+((x282|x283)-x284));

	if (t60 != 7791U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x285 = 9U;
	uint16_t x286 = UINT16_MAX;

	t61 = (x285+((x286|x287)-x288));

	if (t61 != -2147418103) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x289 = -1;
	int32_t x290 = INT32_MIN;
	volatile int16_t x291 = -1;
	int64_t x292 = -1LL;
	int64_t t62 = 125169924910433200LL;

	t62 = (x289+((x290|x291)-x292));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = INT8_MAX;
	int32_t x296 = INT32_MAX;
	int32_t t63 = -530386;

	t63 = (x293+((x294|x295)-x296));

	if (t63 != -2147483521) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x297 = 9701LLU;
	static int64_t x298 = -178442118LL;
	volatile int32_t x299 = -1;
	uint16_t x300 = UINT16_MAX;
	volatile uint64_t t64 = 7078207630LLU;

	t64 = (x297+((x298|x299)-x300));

	if (t64 != 18446744073709495781LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x301 = -6;
	uint32_t x302 = 9U;
	volatile int64_t x303 = -1LL;
	static int32_t x304 = -1;

	t65 = (x301+((x302|x303)-x304));

	if (t65 != -6LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x305 = INT16_MIN;
	uint16_t x306 = 0U;
	int8_t x307 = INT8_MAX;
	static int16_t x308 = INT16_MAX;
	volatile int32_t t66 = 5747;

	t66 = (x305+((x306|x307)-x308));

	if (t66 != -65408) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = INT8_MIN;
	int8_t x310 = -2;
	volatile int8_t x311 = INT8_MIN;
	static int64_t x312 = -4764510958880157LL;
	static int64_t t67 = -6LL;

	t67 = (x309+((x310|x311)-x312));

	if (t67 != 4764510958880027LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x313 = 590122LLU;
	static int8_t x314 = INT8_MIN;
	static int16_t x315 = INT16_MAX;
	uint32_t x316 = UINT32_MAX;
	static volatile uint64_t t68 = 14710LLU;

	t68 = (x313+((x314|x315)-x316));

	if (t68 != 590122LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x317 = -1;
	static volatile uint8_t x318 = 13U;
	int64_t x319 = -1LL;
	int64_t t69 = 175LL;

	t69 = (x317+((x318|x319)-x320));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x326 = 25783550916204LL;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t70 = 33798233LL;

	t70 = (x325+((x326|x327)-x328));

	if (t70 != 9223372036854756971LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x333 = 460106762LL;
	int16_t x334 = -1;
	static uint64_t x335 = UINT64_MAX;
	static volatile int32_t x336 = -38642;

	t71 = (x333+((x334|x335)-x336));

	if (t71 != 460145403LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x337 = 38U;
	int32_t x338 = -1172;
	int32_t x339 = INT32_MAX;
	int64_t x340 = 29325811927348LL;
	volatile int64_t t72 = -27734434743LL;

	t72 = (x337+((x338|x339)-x340));

	if (t72 != -29325811927311LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x342 = -1;
	int16_t x343 = INT16_MIN;
	int16_t x344 = -11223;

	t73 = (x341+((x342|x343)-x344));

	if (t73 != -2147472426) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x345 = -1LL;
	static uint16_t x346 = 1U;
	int32_t x348 = INT32_MIN;
	volatile int64_t t74 = 14458LL;

	t74 = (x345+((x346|x347)-x348));

	if (t74 != 2147450880LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x349 = 1;
	int64_t x350 = -236339957238483530LL;
	int64_t x351 = 24707201901755725LL;
	int32_t x352 = INT32_MIN;
	int64_t t75 = 336LL;

	t75 = (x349+((x350|x351)-x352));

	if (t75 != -216208927572886016LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x353 = 1187786686LLU;
	int32_t x355 = -850105;
	volatile uint32_t x356 = UINT32_MAX;
	uint64_t t76 = 228954448494356LLU;

	t76 = (x353+((x354|x355)-x356));

	if (t76 != 5482719158LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x357 = 35U;
	uint8_t x358 = 41U;
	int32_t x359 = 464942;

	t77 = (x357+((x358|x359)-x360));

	if (t77 != 18446636295214991948LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x364 = 43U;
	volatile int32_t t78 = 129;

	t78 = (x361+((x362|x363)-x364));

	if (t78 != 143) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x365 = 973U;
	int8_t x366 = 0;
	static int8_t x367 = -6;
	int16_t x368 = INT16_MIN;
	volatile int32_t t79 = -472579;

	t79 = (x365+((x366|x367)-x368));

	if (t79 != 33735) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x369 = 840214U;
	uint8_t x370 = 46U;
	static volatile int32_t x371 = -1;
	volatile int64_t x372 = 11187928LL;
	int64_t t80 = -1301968702777LL;

	t80 = (x369+((x370|x371)-x372));

	if (t80 != -10347715LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x373 = UINT16_MAX;
	int64_t x374 = -7LL;
	static int64_t t81 = -658159LL;

	t81 = (x373+((x374|x375)-x376));

	if (t81 != 98296LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = -1;
	static int32_t x379 = 746;
	int8_t x380 = -1;
	volatile int64_t t82 = -50469LL;

	t82 = (x377+((x378|x379)-x380));

	if (t82 != -9223372036854775062LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = INT16_MAX;
	static uint16_t x382 = UINT16_MAX;
	int64_t x384 = -4339453044720771033LL;

	t83 = (x381+((x382|x383)-x384));

	if (t83 != -4883918992133906473LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = -1;
	uint64_t x386 = UINT64_MAX;
	volatile uint16_t x388 = 1030U;
	static uint64_t t84 = 187LLU;

	t84 = (x385+((x386|x387)-x388));

	if (t84 != 18446744073709550584LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = INT64_MIN;
	volatile uint64_t x390 = 479796089496608284LLU;
	uint8_t x392 = 0U;
	volatile uint64_t t85 = 614132639859670232LLU;

	t85 = (x389+((x390|x391)-x392));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = 89898LLU;
	int32_t x394 = INT32_MIN;
	static uint32_t x395 = 2770U;

	t86 = (x393+((x394|x395)-x396));

	if (t86 != 2147609084LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x398 = -661;
	uint64_t x399 = UINT64_MAX;
	int64_t x400 = 830869475383399LL;

	t87 = (x397+((x398|x399)-x400));

	if (t87 != 18445913204234168471LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = UINT32_MAX;
	int32_t x402 = -58477336;
	uint32_t x403 = UINT32_MAX;
	int8_t x404 = INT8_MAX;

	t88 = (x401+((x402|x403)-x404));

	if (t88 != 4294967167U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = -503556781;
	int8_t x406 = INT8_MIN;
	int32_t x407 = -1;
	volatile uint8_t x408 = 110U;
	volatile int32_t t89 = -180895;

	t89 = (x405+((x406|x407)-x408));

	if (t89 != -503556892) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x409 = INT16_MAX;
	int64_t x410 = -17569967LL;
	volatile int32_t x411 = -6853;
	volatile int32_t x412 = INT32_MAX;
	int64_t t90 = 3556086578128726243LL;

	t90 = (x409+((x410|x411)-x412));

	if (t90 != -2147457157LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x413 = UINT16_MAX;
	volatile uint8_t x414 = 6U;
	int16_t x415 = INT16_MAX;
	static volatile int16_t x416 = INT16_MIN;
	static int32_t t91 = -23087;

	t91 = (x413+((x414|x415)-x416));

	if (t91 != 131070) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x423 = -1;

	t92 = (x421+((x422|x423)-x424));

	if (t92 != -98304) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x425 = 149599856582245LLU;
	static int8_t x426 = INT8_MIN;
	static volatile int64_t x427 = INT64_MAX;
	uint8_t x428 = 3U;
	uint64_t t93 = 3162944197912LLU;

	t93 = (x425+((x426|x427)-x428));

	if (t93 != 149599856582241LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x429 = UINT64_MAX;
	volatile int64_t x430 = INT64_MIN;
	static int64_t x431 = INT64_MAX;
	static volatile uint64_t x432 = 3456LLU;
	volatile uint64_t t94 = 415LLU;

	t94 = (x429+((x430|x431)-x432));

	if (t94 != 18446744073709548158LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x435 = UINT8_MAX;
	int64_t x436 = -3487277180548887LL;

	t95 = (x433+((x434|x435)-x436));

	if (t95 != 3487281475516234LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x437 = INT32_MIN;
	uint16_t x439 = 0U;
	volatile int8_t x440 = INT8_MIN;
	static volatile int32_t t96 = 7762212;

	t96 = (x437+((x438|x439)-x440));

	if (t96 != -2147450753) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x442 = 0U;
	int8_t x444 = -1;
	static int64_t t97 = INT64_MIN;

	t97 = (x441+((x442|x443)-x444));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x445 = -260;
	uint64_t x446 = 17LLU;
	int32_t x448 = INT32_MIN;
	volatile uint64_t t98 = 343120669LLU;

	t98 = (x445+((x446|x447)-x448));

	if (t98 != 2147483277LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x449 = INT64_MIN;
	int64_t x450 = INT64_MIN;
	uint64_t x451 = UINT64_MAX;
	volatile int32_t x452 = -14068872;
	volatile uint64_t t99 = 1804141027982465567LLU;

	t99 = (x449+((x450|x451)-x452));

	if (t99 != 9223372036868844679LLU) { NG(); } else { ; }
	
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

